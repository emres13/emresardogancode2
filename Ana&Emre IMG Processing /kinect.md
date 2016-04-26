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

![Image of Yaktocat](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/basic%20yellow.png)

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

![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/Screen%20Shot%202016-04-25%20at%2010.31.21%20AM.png)

![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/Screen%20Shot%202016-04-25%20at%2010.26.52%20AM.png)

**Pixel Size**

By altering the argument value glPointSize(); in void::DrawPointCloud() you can change the render size of the pixels. Playing with the pixel size was fun. 
Check out this [youtube vid](https://youtu.be/3EhKfEG2Mj0) vid of us joking around with big pixelated noses. 

![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/blob.png)

Here's a sphinx imitation:

![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/Screen%20Shot%202016-04-25%20at%2010.38.18%20AM.png)

& a close up

![](https://github.com/emres13/emresardogancode2/blob/master/Ana%26Emre%20IMG%20Processing%20/Tutorial/blop.png)


