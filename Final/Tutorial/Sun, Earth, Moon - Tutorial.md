# Sun, Earth, Moon : Tutorial

Emre Sardogan
<b> </b>

Parsons School of Design
<b> </b>

Code 2 - openFrameworks
<b> </b>

This is a creative coding sketch which shows circle of life by using texture in a 3D space. The sketch is also designed to satisfy visual requirements of a audio narrative project based on an emotional journey. 



## References

Thanks to **Rick Companje** for his [textured sphere example](https://sites.google.com/site/ofauckland/examples/12-textured-sphere-example). The code is based on the example.

##Textures










##Code



**ofApp.h**

Let's declare the values that we will be calling in our cpp file.

```
    ofImage sun;
    ofImage galaxy;
    ofImage earth;
    ofImage moon;
    ofEasyCam cam;
 
 	GLUquadricObj *quadric;
```
The ofImage values are going to be called in order to add texture to an image. ofEasyCam stands for 3D camera that can be used easily, also going to be called in cpp file. GLUquadricObj is the header of the space and the pbject which is going to be called in cpp file as well as others.


**ofApp.cpp**

We start our sketch with the setup function. Where we declare the things that are going to create the environment for our drawings.

```
void ofApp::setup(){
  
    ofBackground(0);
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    
    
    glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
    ofDisableArbTex(); //needed for textures to work with gluSphere``
   
    sun.loadImage("sun.jpg");
    earth.loadImage("earth.jpg");
    moon.loadImage("moon.png");

```

So far we loaded our images which are our texture for the spheres. And we also called some core initializers. Such as ofBackground and ofSetFrameRate.

ofDisableArbTex(); 

this disables the use of non power of 2 textures (on graphics cards that can do them)




```
  //prepare quadric for sphere
    quadric = gluNewQuadric();
    gluQuadricTexture(quadric, GL_TRUE);
    gluQuadricNormals(quadric, GLU_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
```
With the code above, we are prepering the quadric for sphere, we add lighting with glEnable code.

```
  void ofApp::draw(){
    
    ofPushMatrix();

    cam.begin();
    
    ofScale(1,-1);

```
The second and last part of our code is the draw(){ draw function, where we are going to call the spheres, texture, their cooridnates and movements. However, we start with activating the camera and scaling.

ofScale : produces a nonuniform scaling along the x, y, and z axes.) 	

ofPushMatrix : saves the current coordinate system allowing users to develop specific movements in some graphic objects.

```
    //Sun change origin to center
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 55);
    
    //Sun rotate sphere over time
    ofRotateY(ofGetFrameNum()-20);
    ofRotateX(-110);
    
    //Sun bind and draw texture
    sun.getTextureReference().bind();
    gluSphere(quadric, 500, 100, 100);
```
First of all, with ofTranslate funtion we are declaring origin of the sphere, and in second part we are declaring the rotation of the sphere over time. 3rd and last part is to reference the texture and drawing the shape with all the declared setup. We declare the size and the 

```
    //Earth change origin to center
    ofTranslate(ofGetWidth()/2, ofGetHeight()/ 2, 55);
    
    //Earth rotate sphere over time
    ofRotateY(ofGetFrameNum());
    ofRotateX(-30); //north pole facing up
    
    earth.getTextureReference().bind();
    gluSphere(quadric, 150, 100, 100);
    
    //Moon change origin to cente
    ofTranslate(ofGetWidth()/8, ofGetHeight()/8, 55);
    
    //Moon rotate sphere over time
    ofRotateY(ofGetFrameNum());
    ofRotateX(-90);
    
    moon.getTextureReference().bind();
    gluSphere(quadric, 20, 200, 200);
    
    ofPopMatrix();

```
In the last part of our code we are adding two more spheres and adding two more textures which are the textures of The Earth and The Moon. Values are worth changing and playing around with you can create differently located solar systems, a unique one. 


 