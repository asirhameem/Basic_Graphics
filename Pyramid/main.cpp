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
#define PI 3.1416

void display()
{
    glClearColor(194, 178, 128, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.5f);

    glBegin(GL_QUADS);
    glColor3ub(194,178,128);

    glVertex2f(-1,-1);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    glVertex2f(1,-1);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(170,108,57);

    glVertex2f(1,-0.5);
    glVertex2f(0.7,0.2);
    glVertex2f(0.4,-0.5);

    glEnd();

    glTranslatef(-0.65,-0.4,0); //Second Triangle


    glBegin(GL_TRIANGLES);
    glColor3ub(170,108,57);

    glVertex2f(1,-0.5);
    glVertex2f(0.7,0.2);
    glVertex2f(0.4,-0.5);

    glEnd();
    glLoadIdentity();

    glTranslatef(-0.5,-0.3,0);
    glScalef(-0.5,0.5,0);
    glBegin(GL_TRIANGLES); // Third Triangle
    glColor3ub(170,108,57);

    glVertex2f(1,-0.5);
    glVertex2f(0.7,0.2);
    glVertex2f(0.4,-0.5);

    glEnd();

    glLoadIdentity();


    glScalef(2,2,1);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253, 184, 19);

    GLfloat x = -0.4;
    GLfloat y = 0.3;
    GLfloat radius = 0.2;

    GLfloat twicePi = 2.0 * PI;
    int circleAmount = 50;
    for(int i = 0; i <= circleAmount; i++ )
    {
        glVertex2f( x + (radius * cos(i * twicePi/circleAmount)) , y + (radius * sin(i * twicePi/circleAmount)) );
    }

    glEnd();

    glLoadIdentity();

	glFlush();

}

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);


    glutCreateWindow("GLUT Shapes");


    glutDisplayFunc(display);


    glutMainLoop();

    return 0;
}
