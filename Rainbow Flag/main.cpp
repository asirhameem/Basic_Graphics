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



/* GLUT callback Handlers */



void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(3);

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-0.5,0.7);
	glVertex2f(-0.5,0.6);
	glVertex2f(0.5,0.6);
	glVertex2f(0.5,0.7);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 127, 0);
	glVertex2f(-0.5,0.6);
	glVertex2f(-0.5,0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(0.5,0.6);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255, 255, 0);
	glVertex2f(-0.5,0.5);
	glVertex2f(-0.5,0.4);
	glVertex2f(0.5,0.4);
	glVertex2f(0.5,0.5);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 255 , 0);
	glVertex2f(-0.5,0.4);
	glVertex2f(-0.5,0.3);
	glVertex2f(0.5,0.3);
	glVertex2f(0.5,0.4);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(0, 0,255);
	glVertex2f(-0.5,0.3);
	glVertex2f(-0.5,0.2);
	glVertex2f(0.5,0.2);
	glVertex2f(0.5,0.3);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(46, 43, 95);
	glVertex2f(-0.5,0.2);
	glVertex2f(-0.5,0.1);
	glVertex2f(0.5,0.1);
	glVertex2f(0.5,0.2);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(139, 0, 255);
	glVertex2f(-0.5,0.1);
	glVertex2f(-0.5,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.5,0.1);
    glEnd();

	glFlush();
}




int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);

    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);

    glutMainLoop();

    return EXIT_SUCCESS;
}
