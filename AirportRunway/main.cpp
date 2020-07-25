/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
# define PI           3.14159265358979323846



/* GLUT callback Handlers */


 void display()
{

   glClearColor(0.0f, 1.0f, 1.0f, 0.8f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);

    //Road
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(-1.00f, -0.5f);
    glVertex2f(1.00f, -0.5f);// x, y
    glVertex2f(1.00f, -1.00f);
    glVertex2f(-1.00f, -1.00f);// x, y

    glEnd();

    //Lane Divider
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-1,-0.7);
    glVertex2f(-0.8,-0.7);
    glVertex2f(-0.8,-0.8);
    glVertex2f(-1,-0.8);

    glEnd();

    //Lane Divider
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-0.6,-0.7);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.6,-0.8);

    glEnd();

    // Lane Divider

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(-0.2,-0.7);
    glVertex2f(-0.0,-0.7);
    glVertex2f(-0.0,-0.8);
    glVertex2f(-0.2,-0.8);

    glEnd();

     // Lane Divider

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.2,-0.7);
    glVertex2f(0.4,-0.7);
    glVertex2f(0.4,-0.8);
    glVertex2f(0.2,-0.8);

    glEnd();


      // Lane Divider

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.6,-0.7);
    glVertex2f(0.8,-0.7);
    glVertex2f(0.8,-0.8);
    glVertex2f(0.6,-0.8);

    glEnd();


    //Aeroplane

    glBegin(GL_QUADS);

    glVertex2f(0.2,0.3);
    glVertex2f(0.4,0.5);
    glVertex2f(0.38,0.6);
    glVertex2f(0.18,0.4);

    glEnd();

    //Aeroplane Window



    //Aeroplane Window Two
    GLfloat n = 0.36f;
    GLfloat m =  0.55f;
    GLfloat radius = 0.005f;
    int amountTriangle = 20;

    GLfloat twicePi = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int j = 0; j <= amountTriangle; j++ )
    {
        glVertex2f( n + (radius * cos(j * twicePi/amountTriangle)), m + (radius * sin(j * twicePi/amountTriangle)));
    }

    glEnd();


    n = 0.33f;
    m =  0.52f;
    radius = 0.005f;
    amountTriangle = 20;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int k = 0; k <= amountTriangle; k++ )
    {
        glVertex2f( n + (radius * cos(k * twicePi/amountTriangle)), m + (radius * sin(k * twicePi/amountTriangle)));
    }

    glEnd();


    n = 0.30f;
    m =  0.49f;
    radius = 0.005f;
    amountTriangle = 20;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int l = 0; l <= amountTriangle; l++ )
    {
        glVertex2f( n + (radius * cos(l * twicePi/amountTriangle)), m + (radius * sin(l * twicePi/amountTriangle)));
    }

    glEnd();


    n = 0.27f;
    m =  0.46f;
    radius = 0.005f;
    amountTriangle = 20;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int a = 0; a <= amountTriangle; a++ )
    {
        glVertex2f( n + (radius * cos(a * twicePi/amountTriangle)), m + (radius * sin(a * twicePi/amountTriangle)));
    }

    glEnd();


    n = 0.25f;
    m =  0.435f;
    radius = 0.005f;
    amountTriangle = 20;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int b = 0; b <= amountTriangle; b++ )
    {
        glVertex2f( n + (radius * cos(b * twicePi/amountTriangle)), m + (radius * sin(b * twicePi/amountTriangle)));
    }

    glEnd();

    n = 0.21f;
    m =  0.40f;
    radius = 0.005f;
    amountTriangle = 20;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);


    for(int c = 0; c <= amountTriangle; c++ )
    {
        glVertex2f( n + (radius * cos(c * twicePi/amountTriangle)), m + (radius * sin(c * twicePi/amountTriangle)));
    }

    glEnd();



    //Cockpit
    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);

    glVertex2f(0.38,0.6);
    glVertex2f(0.45,0.6);
    glVertex2f(0.4,0.5);

    glEnd();

    //wing
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);

    glVertex2f(0.35,0.51);
    glVertex2f(0.32,0.28);
    glVertex2f(0.29,0.28);
    glVertex2f(0.29,0.45);


    glEnd();

    //Upper wing

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,255);

    glVertex2f(0.18,0.4);
    glVertex2f(0.22,0.44);
    glVertex2f(0.17,0.45);


    glEnd();

    //Tower

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2f(-0.6,0.0);
    glVertex2f(-0.6,0.2);

    glVertex2f(-0.6,0.0);
    glVertex2f(-0.61,-0.2);

    glVertex2f(-0.61,-0.2);
    glVertex2f(-0.63,-0.4);

    glVertex2f(-0.63,-0.4);
    glVertex2f(-0.64,-0.5);

    glVertex2f(-0.6,0.2);
    glVertex2f(-0.55,0.2);

    glVertex2f(-0.55,0.2);
    glVertex2f(-0.55,0.0);

    glVertex2f(-0.55,0.0);
    glVertex2f(-0.54,-0.2);

    glVertex2f(-0.54,-0.2);
    glVertex2f(-0.53,-0.4);

    glVertex2f(-0.53,-0.4);
    glVertex2f(-0.52,-0.5);

    glVertex2f(-0.58,0.2);
    glVertex2f(-0.58,-0.5);

    glEnd();

    //Building

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.8,0.1);
    glVertex2f(1,0.1);
    glVertex2f(1,-0.5);
    glVertex2f(0.8,-0.5);


    glEnd();

    //window Left

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.84,0.08);
    glVertex2f(0.88,0.08);
    glVertex2f(0.88,0.03);
    glVertex2f(0.84,0.03);

    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.84,-0.02);
    glVertex2f(0.88,-0.02);
    glVertex2f(0.88,-0.07);
    glVertex2f(0.84,-0.07);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.84,-0.12);
    glVertex2f(0.88,-0.12);
    glVertex2f(0.88,-0.17);
    glVertex2f(0.84,-0.17);

    glEnd();

    //Window Right

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.92,0.08);
    glVertex2f(0.96,0.08);
    glVertex2f(0.96,0.03);
    glVertex2f(0.92,0.03);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.92,-0.02);
    glVertex2f(0.96,-0.02);
    glVertex2f(0.96,-0.07);
    glVertex2f(0.92,-0.07);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.92,-0.12);
    glVertex2f(0.96,-0.12);
    glVertex2f(0.96,-0.17);
    glVertex2f(0.92,-0.17);

    glEnd();

    //Building Two

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);

    glVertex2f(0.5,-0.20);
    glVertex2f(0.65,-0.20);
    glVertex2f(0.65,-0.5);
    glVertex2f(0.5,-0.5);

    glEnd();

    //Window Left

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.52,-0.25);
    glVertex2f(0.55,-0.25);
    glVertex2f(0.55,-0.28);
    glVertex2f(0.52,-0.28);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.52,-0.32);
    glVertex2f(0.55,-0.32);
    glVertex2f(0.55,-0.35);
    glVertex2f(0.52,-0.35);

    glEnd();


    //Window Right

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.59,-0.25);
    glVertex2f(0.62,-0.25);
    glVertex2f(0.62,-0.28);
    glVertex2f(0.59,-0.28);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.59,-0.32);
    glVertex2f(0.62,-0.32);
    glVertex2f(0.62,-0.35);
    glVertex2f(0.59,-0.35);

    glEnd();


    //Building Three

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);

    glVertex2f(0.3,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.5);
    glVertex2f(0.3,-0.5);

    glEnd();

    //Window Left

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.33,-0.25);
    glVertex2f(0.36,-0.25);
    glVertex2f(0.36,-0.28);
    glVertex2f(0.33,-0.28);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.33,-0.32);
    glVertex2f(0.36,-0.32);
    glVertex2f(0.36,-0.35);
    glVertex2f(0.33,-0.35);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.33,-0.39);
    glVertex2f(0.36,-0.39);
    glVertex2f(0.36,-0.42);
    glVertex2f(0.33,-0.42);

    glEnd();


    //Window Right

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.39,-0.25);
    glVertex2f(0.42,-0.25);
    glVertex2f(0.42,-0.28);
    glVertex2f(0.39,-0.28);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.39,-0.32);
    glVertex2f(0.42,-0.32);
    glVertex2f(0.42,-0.35);
    glVertex2f(0.39,-0.35);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);

    glVertex2f(0.39,-0.39);
    glVertex2f(0.42,-0.39);
    glVertex2f(0.42,-0.42);
    glVertex2f(0.39,-0.42);

    glEnd();


    //Sun

    GLfloat x = -0.6f;
    GLfloat y =  0.7f;
    radius = 0.2f;
    int amount = 50;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,0);


    for(int i = 0; i <= amount; i++ )
    {
        glVertex2f( x + (radius * cos(i * twicePi/amount)), y + (radius * sin(i * twicePi/amount)));
    }

    glEnd();







	glFlush();  // Render now

}


/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(600,300);


    glutCreateWindow("Airport View");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
