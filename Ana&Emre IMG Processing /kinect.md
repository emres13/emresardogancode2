# Tutorial

Emre & Ana
<b> </b>

Together we have created an app on OpenFrameworks that plays with the image rendering capabilities of the kinect. 



## First Things

**Kinect** To move away from the exercise we decided to try out the Kinects we got for class. Setup was really simple - we picked up a USB to xboxUSB converter at school and just plugged it in with [this](https://github.com/gerardobort/openframeworks-kinect-demos/blob/master/src/ofApp.cpp) OpenFrameworks Sketch running. Thanks to **gerardobort** for his code.

##color
: The original oF sketch comes in green. By changing the values of colorA and colorB different results occur. 


**Realistic colors**

To make the sketch runs in color, go to void::drawPointCloud() and find this line:

```
mesh.addColor(colorA);
```
Make sure colorA is within the parenthesis.  
colorA should be set to colorA = kinect.getColorAt(x,y);


![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/shadooow.png)


**Changed Colors**

To change the colors of the sketch to be uniform, use colorB. Set the RGB values to whatever color you like and feel free to get rid of the colorB.getBrightness argument as it desaturates the colors. 

```
colorB = ofColor(100, colorB.getBrightness(), 200, 0);

```
Set colorB in the mesh command. 
```
mesh.addColor(colorB);
```

![Image of Yaktocat](https://lh3.googleusercontent.com/Yj8jw11Zes30g54BuIE11THI_M4mfvv2hRuuUFuo06afC7glRK2hKeM6aEe_1qH4Z-FEcg=s0)

**Rainbow Colors**

This [youtube vid](https://youtu.be/BIymgp0Tr4o) shows colors changing in a rainbow range.

To achieve this, alter colorB to = 

```
colorB = ofColor(abs(sin(ofGetElapsedTimef()/3))*255, abs(cos(ofGetElapsedTimef()/2))*255, abs(cos(ofGetElapsedTimef()/2))*255, 255);

```

**Scale**

[Here](https://youtu.be/eD89rwm-XM8) we altered the scale. By changing the original 1 value to less than one (try .02 or .08) the image created shrinks within a smaller window. 

Find the ofScale command at the bottom of the void::ofDrawPointCloud

```
ofScale(1, 1, -1);

```


**Background/Depth**

To alter how much of the background is visible vs invisible alter these lines in the setup:

```
 //near original value 1200, 450
    nearThreshold = 8000;
    //the further the far threshold the more shadowing occurs (try 900, 100)
    farThreshold = 400;

```
you can have varied depth detection, detecting a whole room or just a figure nearby.

![](https://lh3.googleusercontent.com/7eTHIPz4mO-z-ym0owVq1i7caBDr25Cnw9JiFInrrnTUlLGqUhW7KBtI0_vboWtQNIFKjw=s0)

![](https://lh4.googleusercontent.com/j25ID3ppusZC8wBj7qVURZMT7xz3d4NLJtT1jZc6wHv9CeCGXO_f39rYMWnOSj41Cygeqg=s0)

**Pixel Size**

By altering the argument value glPointSize(); in void::DrawPointCloud() you can change the render size of the pixels. Playing with the pixel size was fun. 
Check out this [youtube vid](https://youtu.be/3EhKfEG2Mj0) vid of us joking around with big pixelated noses. 

![](https://lh4.googleusercontent.com/UMyFzb9oxBrpEdkJWEP3QOkwO56REcjtP1cor4E3wUXcaZHwdI9lMiLw_z9WBSBJhN-MIA=s0)

Here's a sphinx imitation:

![](https://lh5.googleusercontent.com/1QVfWpA-1RfMCssrLbpYJufLGrJ0OJuG1wCKMYRiqQsqWRu0BZS1eFNbQONzjDRkVBPkcw=w1179-h498)

& a close up

![](https://lh3.googleusercontent.com/Xx7ho3e9iR1kgnNf_6rF84SFmsdsUFyxAt-0ixLsntxNNJ4DzNbQmHaRxZ4jq-NlaZio7g=s0)


