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
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(3);


	glBegin(GL_QUADS); // Each set of 4 vertices form a quad

	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.2,0.4);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.8,0.4);	 // x, y

	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.6,0.2);
    glVertex2f(0.4,0.2);
    glVertex2f(0.4,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.7,0.1);
    glVertex2f(0.7,0.2);
    glVertex2f(0.65,0.2);
    glVertex2f(0.65,0.1);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2f(0.2,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.5,0.8);

    glEnd();




	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
