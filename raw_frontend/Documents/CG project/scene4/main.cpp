#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

// function to initialize
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
    {                   //LEFT HAND SMOKE CLOUDS
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(400+100*cos(theta),700+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(350+100*cos(theta),790+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(360+100*cos(theta),790+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(300+100*cos(theta),880+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(310+100*cos(theta),880+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(250+100*cos(theta),970+100*sin(theta));
    }
    glEnd();

    {                   //RIGHT HAND SMOKE CLOUDS
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(640+100*cos(theta),700+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(590+100*cos(theta),790+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(610+100*cos(theta),790+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(550+100*cos(theta),880+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(550+100*cos(theta),880+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.6,0.6,0.6);
        glVertex2f(490+100*cos(theta),970+100*sin(theta));
    }
    glEnd();
    }



    glBegin(GL_POLYGON); //FIELD LAYER 1
    glColor3f(0.21,0.98,0.11);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,0);
    glEnd();

    glBegin(GL_POLYGON); //FIELD LAYER 2
    glColor3f(0.54,1.0,0.29);
    glVertex2f(0,100);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,100);
    glEnd();



    glBegin(GL_POLYGON); //TOWER 2
    glColor3f(0.8,0.8,0.8);
    glVertex2f(550,515);
    glVertex2f(550,775);
    glVertex2f(580,775);
    glVertex2f(580,515);
    glEnd();


    glBegin(GL_POLYGON); // TOWER ABOVE THE SEMICIRCLE
    glColor3f(0.8,0.8,0.8);
    glVertex2f(650,750);
    glVertex2f(750,750);
    glVertex2f(800,515);
    glVertex2f(600,515);
    glEnd();

}

{
    //orange FIRE
    glBegin(GL_POLYGON);   // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(325+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(375+100*cos(theta),615+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(450+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);   // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(550+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(600+100*cos(theta),615+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(660+100*cos(theta),515+100*sin(theta));
    }
    glEnd();

    //yellow fire
    glBegin(GL_POLYGON);  // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(290+60*cos(theta),520+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(375+96*cos(theta),605+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(465+65*cos(theta),535+65*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(600+96*cos(theta),565+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(600+96*cos(theta),611+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(690+65*cos(theta),530+65*sin(theta));
    }
    glEnd();

}
    glBegin(GL_LINES); // LINE OF THE ABOVE TOWER
    glColor3f(0.0,0.0,0.0);
    glVertex2f(644,720);
    glVertex2f(757,720);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //BUILDING
    glVertex2f(250,150);
    glVertex2f(250,500);
    glVertex2f(800,500);
    glVertex2f(800,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF
    glVertex2f(220,500);
    glVertex2f(220,515);
    glVertex2f(830,515);
    glVertex2f(830,500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0); // LINE DRAWN TO SEPARATE THE WINDOWS
    glVertex2f(610,500);
    glVertex2f(610,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 1
    glVertex2f(630,480);
    glVertex2f(780,480);
    glVertex2f(780,360);
    glVertex2f(630,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.78,0.94); //BLUE WINDOW 2
    glVertex2f(630,330);
    glVertex2f(780,330);
    glVertex2f(780,200);
    glVertex2f(630,200);
    glEnd();
{
    //WINDOWS LINES
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,480);
    glVertex2f(705,360);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(705,330);
    glVertex2f(705,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,275);
    glVertex2f(780,275);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(630,420);
    glVertex2f(780,420);
    glEnd();
}
    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW 1
    glVertex2f(470,480);
    glVertex2f(590,480);
    glVertex2f(590,420);
    glVertex2f(470,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.34,0.34,0.34); //BLACK WINDOW  2
    glVertex2f(260,480);
    glVertex2f(385,480);
    glVertex2f(385,420);
    glVertex2f(260,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87); //ROOF TOP PLACE
    glVertex2f(265,515);
    glVertex2f(265,575);
    glVertex2f(370,575);
    glVertex2f(370,515);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.68,0.68,0.68); //ROOF OF THE ROOF TOP PLACE
    glVertex2f(250,575);
    glVertex2f(250,590);
    glVertex2f(385,590);
    glVertex2f(385,575);
    glEnd();



    glBegin(GL_POLYGON); //TOWER 3
    glColor3f(0.8,0.8,0.8);
    glVertex2f(470,515);
    glVertex2f(470,675);
    glVertex2f(500,675);
    glVertex2f(500,515);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 2
    glColor3f(0.0,0.0,0.0);
    glVertex2f(550,750);
    glVertex2f(580,750);
    glEnd();

    glBegin(GL_LINES); //LINE ON TOWER 1
    glColor3f(0.0,0.0,0.0);
    glVertex2f(470,650);
    glVertex2f(500,650);
    glEnd();

    glBegin(GL_POLYGON); // SEMICIRCLE OF THE BUILDING
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.87,0.87,0.87);
        glVertex2f(730+100*cos(theta),514+100*sin(theta));
    }
    glEnd();
{//Red tower extreme left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(10,150);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(35+25*cos(theta),350+25*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(10,350);
    glVertex2f(60,350);
    glVertex2f(60,330);
    glVertex2f(10,330);
    glEnd();
}
{//Red tower right to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(850,150);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,150);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.0,0.0);
        glVertex2f(915+65*cos(theta),349+65*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(850,350);
    glVertex2f(980,350);
    glVertex2f(980,330);
    glVertex2f(850,330);
    glEnd();
}
{
    //Red tower left to the building
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(80,150);
    glVertex2f(80,470);
    glVertex2f(170,470);
    glVertex2f(230,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.87,0.87,0.87);
    glVertex2f(80,450);
    glVertex2f(80,430);
    glVertex2f(178,430);
    glVertex2f(174,450);
    glEnd();
}
{
    //DANGER SIGN 1(LEFT)
    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(134+35*cos(theta),350+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(134+31*cos(theta),350+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(108,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(118,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(128,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(138,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(148,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(158,348);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}
{
    //DANGER SIGN 2 (RIGHT)
 glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,1.0,0.0);
        glVertex2f(917+35*cos(theta),275+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 360;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(917+31*cos(theta),275+30*sin(theta));
    }
    glEnd();

 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(889,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'D');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(899,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'A');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(909,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'N');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(919,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'G');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(929,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
 glColor3f(1.0,0.0,0.0);
 glRasterPos2i(939,273);
 glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
}
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
{//BUSHES
    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(875+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.4,1.0,0.36);
        glVertex2f(975+100*cos(theta),115+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(65+100*cos(theta),145+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++)
    {
        float theta=0;
        theta=i*3.142/180;
        glVertex2f(125+100*cos(theta),125+100*sin(theta));
    }
    glEnd();
}

glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8); //TOWER 1
    glVertex2f(315,590);
    glVertex2f(315,890);
    glVertex2f(350,890);
    glVertex2f(350,590);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i =0; i < 180;i++) // A Semicircle of the Tower 1
    {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.8,0.8,0.8);
        glVertex2f(332.6+17.5*cos(theta),890+17.5*sin(theta));
    }
    glEnd();
{//RED STRIPS
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,850);
    glVertex2f(315,878);
    glVertex2f(350,878);
    glVertex2f(350,850);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,800);
    glVertex2f(315,830);
    glVertex2f(350,830);
    glVertex2f(350,800);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,748);
    glVertex2f(315,778);
    glVertex2f(350,778);
    glVertex2f(350,748);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,698);
    glVertex2f(315,726);
    glVertex2f(350,726);
    glVertex2f(350,698);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(315,648);
    glVertex2f(315,676);
    glVertex2f(350,676);
    glVertex2f(350,648);
    glEnd();
}
{
    //orange FIRE
    glBegin(GL_POLYGON);   // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(325+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(375+100*cos(theta),250+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(450+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);   // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(550+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(600+100*cos(theta),250+100*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(1.0,0.56,0.0);
        glVertex2f(660+100*cos(theta),150+100*sin(theta));
    }
    glEnd();

    //yellow fire
    glBegin(GL_POLYGON);  // 1
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(290+60*cos(theta),155+60*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 2
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(375+96*cos(theta),240+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 3
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(465+65*cos(theta),175+65*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON); // 4
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(600+96*cos(theta),200+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // 5
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(600+96*cos(theta),246+96*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // 6
    for (int i =0; i < 360;i++)
    {

        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.99,0.85,0.08);
        glVertex2f(690+65*cos(theta),165+65*sin(theta));
    }
    glEnd();

}

    glBegin(GL_POLYGON); //FIELD LAYER 1
    glColor3f(0.21,0.98,0.11);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(1000,100);
    glVertex2f(1000,0);
    glEnd();

    glBegin(GL_POLYGON); //FIELD LAYER 2
    glColor3f(0.54,1.0,0.29);
    glVertex2f(0,100);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,100);
    glEnd();

    {
        //FIRE TRUCK
        glBegin(GL_POLYGON); //BODY
        glColor3f(0.86,0.07,0.23);
        glVertex2f(750,60);
        glVertex2f(750,140);
        glVertex2f(850,140);
        glVertex2f(850,60);
        glEnd();

        glBegin(GL_POLYGON); //FRONT
        glColor3f(0.86,0.07,0.23);
        glVertex2f(750,60);
        glVertex2f(750,200);
        glVertex2f(700,200);
        glVertex2f(680,120);
        glVertex2f(680,60);
        glEnd();

        glBegin(GL_POLYGON); //WINDOW
        glColor3f(0.9,1.0,1.0);
        glVertex2f(745,130);
        glVertex2f(745,190);
        glVertex2f(702,190);
        glVertex2f(687,130);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(750,60);
        glVertex2f(750,140);
        glEnd();

        glBegin(GL_POLYGON);  // TIRE 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(718+15*cos(theta),60+20*sin(theta));
        }
        glEnd();

        glBegin(GL_POLYGON);  // TIRE 2
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(810+15*cos(theta),60+20*sin(theta));
        }
        glEnd();

        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(782,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'F');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(792,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'I');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(802,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(812,115);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'E');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(777,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'T');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(787,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'R');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(797,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'U');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(807,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'C');
        glColor3f(0.0,0.0,0.0);
        glRasterPos2i(817,90);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,'K');

        glBegin(GL_POLYGON); //HOSEPIPE 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(850,70);
        glVertex2f(850,80);
        glVertex2f(900,80);
        glVertex2f(900,70);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(900,70);
        glVertex2f(895,70);
        glVertex2f(895,20);
        glVertex2f(900,20);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 3
        glColor3f(0.0,0.0,0.0);
        glVertex2f(895,20);
        glVertex2f(895,30);
        glVertex2f(300,30);
        glVertex2f(300,20);
        glEnd();

        glBegin(GL_POLYGON); //HOSEPIPE 4
        glColor3f(0.0,0.0,0.0);
        glVertex2f(600,30);
        glVertex2f(595,30);
        glVertex2f(585,80);
        glVertex2f(589,80);
        glEnd();

        glBegin(GL_POLYGON);//HOSEPIPE 5
        glColor3f(0.0,0.0,0.0);
        glVertex2f(300,30);
        glVertex2f(305,30);
        glVertex2f(310,80);
        glVertex2f(305,80);
        glEnd();

        glBegin(GL_POLYGON); //WATER(LEFT)
        glColor3f(0.61,0.82,0.85);
        glVertex2f(305,80);
        glVertex2f(310,80);
        glVertex2f(420,200);
        glVertex2f(260,200);
        glEnd();

        glBegin(GL_POLYGON); //WATER(RIGHT)
        glColor3f(0.61,0.82,0.85);
        glVertex2f(585,80);
        glVertex2f(589,80);
        glVertex2f(650,200);
        glVertex2f(480,200);
        glEnd();
}
{
    //Stick men
        glBegin(GL_POLYGON);  // HEAD 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285+11*cos(theta),90+16*sin(theta));
        }
        glEnd();

        glBegin(GL_LINES); //BODY 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,90);
        glVertex2f(285,20);
        glEnd();

        glBegin(GL_LINES); //HAND 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,70);
        glVertex2f(268,50);
        glEnd();

        glBegin(GL_LINES); //HAND 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,70);
        glVertex2f(305,50);
        glEnd();

        glBegin(GL_LINES); //LEG 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,30);
        glVertex2f(268,10);
        glEnd();

        glBegin(GL_LINES); //LEG 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(285,30);
        glVertex2f(300,10);
        glEnd();

        glBegin(GL_POLYGON);  // HEAD 1
        for (int i =0; i < 360;i++)
        {
        float theta=0;
        theta=i*3.142/180;
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610+11*cos(theta),90+16*sin(theta));
        }
        glEnd();

        glBegin(GL_LINES); //BODY 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,90);
        glVertex2f(610,20);
        glEnd();

        glBegin(GL_LINES); //HAND 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,70);
        glVertex2f(595,40);
        glEnd();

        glBegin(GL_LINES); //HAND 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,70);
        glVertex2f(625,50);
        glEnd();

        glBegin(GL_LINES); //LEG 1
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,30);
        glVertex2f(600,10);
        glEnd();

        glBegin(GL_LINES); //LEG 2
        glColor3f(0.0,0.0,0.0);
        glVertex2f(610,30);
        glVertex2f(620,10);
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
    glutCreateWindow("Scene 4");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}
