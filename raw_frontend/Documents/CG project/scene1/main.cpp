#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

// function to initialize
void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.0, 0.8, 0.7, 1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(0, 1000, 0, 1000);
}

void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0,0.9,0.6);
    float theta=0;
{  //SKY CLOUDS

    for (int i =0; i < 180;i++)
    {
        theta=i*3.142/180;
        glColor3f(0.1,0.6,0.5);
        glVertex2f(100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(145+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(290+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(425+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(545+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(715+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(845+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glVertex2f(945+100*cos(theta),850+100*sin(theta));
    }
    glEnd();
}
{//MOUNTAINS

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(0,450);
    glVertex2f(100,450);
    glVertex2f(50,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(100,450);
    glVertex2f(150,450);
    glVertex2f(125,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(150,450);
    glVertex2f(200,450);
    glVertex2f(175,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(200,450);
    glVertex2f(300,450);
    glVertex2f(250,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(300,450);
    glVertex2f(400,450);
    glVertex2f(350,700);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(400,450);
    glVertex2f(500,450);
    glVertex2f(450,550);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(500,450);
    glVertex2f(600,450);
    glVertex2f(550,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(600,450);
    glVertex2f(700,450);
    glVertex2f(650,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(700,450);
    glVertex2f(850,450);
    glVertex2f(775,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
    glVertex2f(850,450);
    glVertex2f(900,450);
    glVertex2f(875,650);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1,0.5,0.5);
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
        glColor3f(0.4,0.6,0.5);
        glVertex2f(20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(35+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(70+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(105+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(220+100*cos(theta),300+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(350+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(445+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(510+20*cos(theta),300+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(540+20*cos(theta),300+20*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(570+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(710+100*cos(theta),300+100*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(850+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,0.6,0.5);
        glVertex2f(950+50*cos(theta),300+50*sin(theta));
    }
    glEnd();
}
{//GRAVES
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(300,30);
    glVertex2i(300,250);
    glVertex2i(385,250);
    glVertex2i(385,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(650,210);
    glVertex2i(650,350);
    glVertex2i(725,350);
    glVertex2i(725,210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(50,30);
    glVertex2i(50,200);
    glVertex2i(125,200);
    glVertex2i(125,30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex2i(850,40);
    glVertex2i(850,210);
    glVertex2i(915,210);
    glVertex2i(915,40);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(342.5+42.5*cos(theta),248+42.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(687.5+37.5*cos(theta),350+37.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(87.5+37.5*cos(theta),198+37.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        theta=0;
        theta=i*3.142/180;
        glColor3f(0.2,0.2,0.2);
        glVertex2f(882.5+32.5*cos(theta),210+32.5*sin(theta));
    }
    glEnd();
}

 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(410,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(430,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'H');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(450,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(470,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
 glColor3f(0.2,0.2,0.2);
 glRasterPos2i(490,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');
 glRasterPos2i(510,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
 glRasterPos2i(530,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'B');
 glRasterPos2i(550,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');
 glRasterPos2i(570,700);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'L');
 glLineWidth(15);
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(55,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'V');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(65,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(75,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(85,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(95,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(105,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(115,150);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glRasterPos2i(68,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
 glRasterPos2i(78,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(88,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(98,120);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glLineWidth(15);
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(655,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'W');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(668,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(675,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(685,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(695,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(705,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(715,300);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glRasterPos2i(668,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
 glRasterPos2i(678,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glRasterPos2i(688,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(698,270);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glLineWidth(15);
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(320,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(330,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(340,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(350,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(360,190);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glRasterPos2i(305,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
 glRasterPos2i(318,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(325,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
 glRasterPos2i(335,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Q');
 glRasterPos2i(345,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
 glRasterPos2i(355,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
 glRasterPos2i(365,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
 glRasterPos2i(375,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glLineWidth(15);
 glColor3f(1.0,0.0,0.0);

 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(860,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(870,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(880,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Z');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(890,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
 glColor3f(1.0,1.0,1.0);
 glRasterPos2i(900,160);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
 glRasterPos2i(865,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'J');
 glRasterPos2i(875,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
 glRasterPos2i(885,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
 glRasterPos2i(895,130);
 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
 glLineWidth(15);
 glColor3f(1.0,0.0,0.0);
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
    glutCreateWindow("Scene 1");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}
