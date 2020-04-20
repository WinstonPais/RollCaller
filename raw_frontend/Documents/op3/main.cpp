#include<GL/glut.h>
#include<stdio.h>

void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

//	#road function
	glBegin(GL_POLYGON);
		glColor3i(0,0,0);
		glVertex2i(0,100);
		glVertex2i(1200,100);
		glVertex2i(1200,400);
		glVertex2i(0,400);
	glEnd();

//	#side Curb function
	glBegin(GL_POLYGON);
		glColor3f(0.0,1.0,0.0);
		glVertex2i(0,400);
		glVertex2i(1200,400);
		glVertex2i(1200,450);
		glVertex2i(0,450);
	glEnd();

	//#truck trunk bed
	glBegin(GL_POLYGON);
		glColor4f(1.0,1.0,0.0,0.0);//#yellow
		glVertex2i(300,350);
		glVertex2i(750,350);
		glVertex2i(750,700);
		glVertex2i(550,700);
	glEnd();

	//#truck chassis
	glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);
		glVertex2i(300,300);
		glVertex2i(1000,300);
		glVertex2i(1000,350);
		glVertex2i(300,350);
	glEnd();

	//#truck cabin
	glBegin(GL_POLYGON);
		glColor4f(1.0,1.0,0.0,0.0);//#yellow
		glVertex2i(765,350);
		glVertex2i(1050,350);
		glVertex2i(1050,580);
		glVertex2i(950,580);
		glVertex2i(950,650);
		glVertex2i(765,650);
	glEnd();

	//#truck window
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,1.0);
		glVertex2i(775,580);
		glColor3f(0.0,0.0,0.8);
		glVertex2i(940,580);
		glColor3f(0.0,0.0,0.5);
		glVertex2i(940,640);
		glColor3f(0.0,0.0,0.3);
		glVertex2i(775,640);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1300,1300);
	glutCreateWindow("Scrap Yard");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
