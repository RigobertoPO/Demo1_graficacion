#include <gl/glut.h>
#include <iostream>
void myInit() {
	glClearColor(0.44, 0.7, 0.4, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Demo 1");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
