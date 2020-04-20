#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.90, 0.95, 0.97, 1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(0, 1000, 0, 1000);
}

void display()
{
 float theta;
 {
    //CLOUD(RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(900+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(900+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{
    //CLOUD(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(100+60*cos(theta),900+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,1.0);
        glVertex2f(100+40*cos(theta),900+80*sin(theta));
    }
    glEnd();
}
{//MOUNTAINS

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(0,450);
    glVertex2f(100,450);
    glVertex2f(50,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(100,450);
    glVertex2f(150,450);
    glVertex2f(125,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(150,450);
    glVertex2f(200,450);
    glVertex2f(175,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(200,450);
    glVertex2f(300,450);
    glVertex2f(250,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(300,450);
    glVertex2f(400,450);
    glVertex2f(350,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(400,450);
    glVertex2f(500,450);
    glVertex2f(450,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(500,450);
    glVertex2f(600,450);
    glVertex2f(550,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(600,450);
    glVertex2f(700,450);
    glVertex2f(650,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(700,450);
    glVertex2f(850,450);
    glVertex2f(775,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(850,450);
    glVertex2f(900,450);
    glVertex2f(875,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.87,0.54,0.24);
    glVertex2f(900,450);
    glVertex2f(1000,450);
    glVertex2f(950,650);
    glEnd();
}

{//BUSHES


    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(35+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(70+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(105+20*cos(theta),440+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(220+100*cos(theta),440+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(350+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(445+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(510+20*cos(theta),440+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(540+20*cos(theta),440+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(570+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(710+100*cos(theta),440+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(850+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(950+50*cos(theta),440+50*sin(theta));
    }
    glEnd();
}

{
//RIVER
glBegin(GL_POLYGON);
glColor3f(0.32,0.62,0.89);
glVertex2f(0,0);
glVertex2f(0,450);
glVertex2f(1000,450);
glVertex2f(1000,0);
glEnd();
}

{
//FISHES
glBegin(GL_POLYGON);  //FISH 1
glColor3f(0.0,1.0,0.0);
glVertex2f(300,300);
glVertex2f(330,330);
glVertex2f(360,300);
glVertex2f(330,260);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,1.0,0.0);
glVertex2f(360,300);
glVertex2f(380,320);
glVertex2f(380,270);
glEnd();

glBegin(GL_POLYGON);  //FISH 2
glColor3f(0.0,1.0,0.0);
glVertex2f(700,300);
glVertex2f(730,330);
glVertex2f(760,300);
glVertex2f(730,260);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,1.0,0.0);
glVertex2f(760,300);
glVertex2f(780,320);
glVertex2f(780,270);
glEnd();
}

glBegin(GL_POLYGON);  //FISH 3
glColor3f(0.0,1.0,0.0);
glVertex2f(300,100);
glVertex2f(330,130);
glVertex2f(360,100);
glVertex2f(330,60);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0,1.0,0.0);
glVertex2f(360,100);
glVertex2f(380,120);
glVertex2f(380,70);
glEnd();

{
//BUSHES ON THE OTHER SIDE OF THE RIVER
glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(710+100*cos(theta),100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(850+50*cos(theta),50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(950+50*cos(theta),50*sin(theta));
    }
    glEnd();
}

 glFlush();
}
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366,648);
    glutInitWindowPosition(0,0);

    // Giving name to window
    glutCreateWindow("Scene 6");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}
