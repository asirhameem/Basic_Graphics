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
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#define PI 3.1416

 void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer (background)


	GLfloat x = 0.4f;
	GLfloat y = 0.4f;
	GLfloat radius = 0.2f;


	GLfloat twicepi = 2.0f * PI;
	int vertexAmount = 100;

	/* glBegin(GL_LINE_LOOP);

	for(int i = 0; i <= vertexAmount; i++)
    {
        glVertex2f
        (       x + (radius * cos(i *  twicepi / vertexAmount)),
			    y + (radius* sin(i * twicepi / vertexAmount))

        );
    }
    glEnd();

    */



    int triangleAmount = 20; //# of triangles used to draw circle
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicepi / triangleAmount)),
			    y + (radius * sin(i * twicepi / triangleAmount))
			);
		}
    glEnd();

    x = -0.4f;
    y = -0.4f;
    radius = 0.5f;
    glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicepi / triangleAmount)),
			    y + (radius * sin(i * twicepi / triangleAmount))
			);
		}
    glEnd();


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
