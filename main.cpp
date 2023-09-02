#include<windows.h>// for windows OS only

#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<conio.h>
#include<MMsystem.h>

int flag=0;

float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0,q=0,s=0.7,x=0,y=0;


void fish1()
{
    glColor3f(0.0,1.0,0.0);//green fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7+a,0.05);

    glVertex2f(0.75+a,0.1);

    glVertex2f(0.85+a,0.05);
    glVertex2f(0.75+a,0.0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.83+a,0.05);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.9+a,0.09);
    glVertex2f(0.9+a,0.01);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.75+a,0.095);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.79+a,0.125);
    glVertex2f(0.77+a,0.07);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.75+a,0.007);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.795+a,-0.035);
    glVertex2f(0.77+a,0.02);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73+a,0.065);
    glEnd();

}



void fish2()
{
    glColor3f(1.0,1.0,0.0);//yellow fish
    glBegin(GL_POLYGON);
    glVertex2f(-0.7-b,-0.05);
    glVertex2f(-0.75-b,-0.1);
    glVertex2f(-0.85-b,-0.05);
    glVertex2f(-0.75-b,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.83-b,-0.05);
    glVertex2f(-0.9-b,-0.09);
    glVertex2f(-0.9-b,-0.01);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75-b,-0.095);
    glVertex2f(-0.79-b,-0.125);
    glVertex2f(-0.77-b,-0.07);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75-b,-0.007);
    glVertex2f(-0.795-b,0.035);
    glVertex2f(-0.77-b,-0.02);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.73-b,-0.035);
    glEnd();
}


void fish5()
{
    glColor3f(0.0,0.4,1.0);//blue fish
    glBegin(GL_POLYGON);
    glVertex2f(-0.7-e,-0.25);
    glVertex2f(-0.75-e,-0.3);
    glVertex2f(-0.775-e,-0.3);
    glVertex2f(-0.85-e,-0.25);
    glVertex2f(-0.775-e,-0.2);
    glVertex2f(-0.75-e,-0.2);
    glEnd();

    glColor3f(0.9,0.4,0.7);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.83-e,-0.25);
    glVertex2f(-0.9-e,-0.29);
    glVertex2f(-0.9-e,-0.21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.775-e,-0.2);
    glVertex2f(-0.79-e,-0.125);
    glVertex2f(-0.75-e,-0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
    glVertex2f(-0.795-e,-0.35);
    glVertex2f(-0.775-e,-0.3);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(-0.73-e,-0.235);
    glEnd();
}


void fish6()
{
    glColor3f(1.0,0.0,0.0);//red fish
    glBegin(GL_POLYGON);
    glVertex2f(0.7+f,0.25);
    glVertex2f(0.75+f,0.3);
    glVertex2f(0.775+f,0.3);
    glVertex2f(0.85+f,0.25);
    glVertex2f(0.775+f,0.2);
    glVertex2f(0.75+f,0.2);
    glEnd();

    glColor3f(0.9,0.9,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.83+f,0.25);
    glVertex2f(0.9+f,0.29);
    glVertex2f(0.9+f,0.21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.3);
    glVertex2f(0.79+f,0.4);
    glVertex2f(0.75+f,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.775+f,0.2);
    glVertex2f(0.79+f,0.1);
    glVertex2f(0.75+f,0.2);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.73+f,0.265);
    glEnd();

}

void fish()
{

}


///PLANTS
void plant()
{
    glColor3f(0.7,1.0,0.0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.9,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.8,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.7,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.75,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.85,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.725,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.775,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.825,-0.8);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.875,-0.8);
    glVertex2f(0.8,-0.9);
    glEnd();


    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.6,-0.85);
    glVertex2f(0.5,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.4,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.45,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.55,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.425,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.475,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.525,-0.85);
    glVertex2f(0.5,-0.95);
    glVertex2f(0.575,-0.85);
    glVertex2f(0.5,-0.95);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.275,-0.8);
    glVertex2f(0.175,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.075,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.125,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.225,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.1,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.15,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.175,-0.9);
    glVertex2f(0.25,-0.8);
    glVertex2f(0.175,-0.9);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.275,-0.85);
    glVertex2f(-0.175,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.075,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.125,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.225,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.1,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.15,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.2,-0.85);
    glVertex2f(-0.175,-0.95);
    glVertex2f(-0.25,-0.85);
    glVertex2f(-0.175,-0.95);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.575,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.475,-0.8);
    glVertex2f(-0.375,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.425,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.525,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.45,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.475,-0.9);
    glVertex2f(-0.55,-0.8);
    glVertex2f(-0.475,-0.9);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.9,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.8,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.7,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.75,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.85,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.725,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.775,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.825,-0.85);
    glVertex2f(-0.8,-0.95);
    glVertex2f(-0.875,-0.85);
    glVertex2f(-0.8,-0.95);
    glEnd();

}

//PEBBLES
void pebbles()
{
    glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(0.9,-0.9);
    glVertex2f(0.9125,-0.9);
    glVertex2f(0.925,-0.8875);
    glVertex2f(0.925,-0.875);
    glVertex2f(0.9125,-0.8625);
    glVertex2f(0.9,-0.8625);
    glVertex2f(0.8875,-0.8875);
    glVertex2f(0.8875,-0.875);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0,-0.95);
    glVertex2f(0.0125,-0.95);
    glVertex2f(0.025,-0.9375);
    glVertex2f(0.025,-0.925);
    glVertex2f(0.0125,-0.9125);
    glVertex2f(0,-0.9125);
    glVertex2f(-0.0125,-0.9375);
    glVertex2f(-0.0125,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0125,-0.975);
    glVertex2f(0.025,-0.975);
    glVertex2f(0.0375,-0.9625);
    glVertex2f(0.0375,-0.95);
    glVertex2f(0.025,-0.9375);
    glVertex2f(0.0125,-0.9375);
    glVertex2f(0,-0.9625);
    glVertex2f(0,-0.95);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.025,-0.95);
    glVertex2f(0.0375,-0.95);
    glVertex2f(0.05,-0.9375);
    glVertex2f(0.05,-0.925);
    glVertex2f(0.0375,-0.9125);
    glVertex2f(0.025,-0.9125);
    glVertex2f(0.0125,-0.9375);
    glVertex2f(0.0125,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.65,-0.95);
    glVertex2f(0.6625,-0.95);
    glVertex2f(0.675,-0.9375);
    glVertex2f(0.675,-0.925);
    glVertex2f(0.6625,-0.9125);
    glVertex2f(0.65,-0.9125);
    glVertex2f(0.6375,-0.9375);
    glVertex2f(0.6375,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.675,-0.95);
    glVertex2f(0.6875,-0.95);
    glVertex2f(0.7,-0.9375);
    glVertex2f(0.7,-0.925);
    glVertex2f(0.6875,-0.9125);
    glVertex2f(0.675,-0.9125);
    glVertex2f(0.6625,-0.9375);
    glVertex2f(0.6625,-0.925);
    glEnd();

    glColor3f(0.0,0.5,0.1);
    glBegin(GL_POLYGON);
    glVertex2f(0.6625,-0.985);
    glVertex2f(0.675,-0.985);
    glVertex2f(0.6875,-0.9725);
    glVertex2f(0.6875,-0.96);
    glVertex2f(0.675,-0.9475);
    glVertex2f(0.6625,-0.9475);
    glVertex2f(0.65,-0.9525);
    glVertex2f(0.65,-0.96);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(0.6875,-0.985);
    glVertex2f(0.7,-0.985);
    glVertex2f(0.7125,-0.9725);
    glVertex2f(0.7125,-0.96);
    glVertex2f(0.7,-0.9475);
    glVertex2f(0.6875,-0.9475);
    glVertex2f(0.675,-0.9475);
    glVertex2f(0.675,-0.96);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.6375,-0.985);
    glVertex2f(0.65,-0.985);
    glVertex2f(0.6625,-0.9725);
    glVertex2f(0.6625,-0.96);
    glVertex2f(0.65,-0.9475);
    glVertex2f(0.6375,-0.9475);
    glVertex2f(0.625,-0.9475);
    glVertex2f(0.625,-0.96);
    glEnd();


    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.25,-0.95);
    glVertex2f(0.2625,-0.95);
    glVertex2f(0.275,-0.9375);
    glVertex2f(0.275,-0.925);
    glVertex2f(0.2625,-0.9125);
    glVertex2f(0.25,-0.9125);
    glVertex2f(0.2375,-0.9375);
    glVertex2f(0.2375,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.275,-0.95);
    glVertex2f(0.2875,-0.95);
    glVertex2f(0.3,-0.9375);
    glVertex2f(0.3,-0.925);
    glVertex2f(0.2875,-0.9125);
    glVertex2f(0.275,-0.9125);
    glVertex2f(0.2625,-0.9375);
    glVertex2f(0.2625,-0.925);
    glEnd();

glColor3f(0.5,0.35,0.05);
    glBegin(GL_POLYGON);
    glVertex2f(0.2625,-0.985);
    glVertex2f(0.275,-0.985);
    glVertex2f(0.2875,-0.9725);
    glVertex2f(0.2875,-0.96);
    glVertex2f(0.275,-0.9475);
    glVertex2f(0.2625,-0.9475);
    glVertex2f(0.25,-0.9525);
    glVertex2f(0.25,-0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.2875,-0.985);
    glVertex2f(0.3,-0.985);
    glVertex2f(0.3125,-0.9725);
    glVertex2f(0.3125,-0.96);
    glVertex2f(0.3,-0.9475);
    glVertex2f(0.2825,-0.9475);
    glVertex2f(0.275,-0.9525);
    glVertex2f(0.275,-0.96);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(-0.35,-0.95);
    glVertex2f(-0.3625,-0.95);
    glVertex2f(-0.375,-0.9375);
    glVertex2f(-0.375,-0.925);
    glVertex2f(-0.3625,-0.9125);
    glVertex2f(-0.35,-0.9125);
    glVertex2f(-0.3375,-0.9375);
    glVertex2f(-0.3375,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.375,-0.95);
    glVertex2f(-0.3875,-0.95);
    glVertex2f(-0.4,-0.9375);
    glVertex2f(-0.4,-0.925);
    glVertex2f(-0.3875,-0.9125);
    glVertex2f(-0.375,-0.9125);
    glVertex2f(-0.3625,-0.9375);
    glVertex2f(-0.3625,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.3625,-0.985);
    glVertex2f(-0.375,-0.985);
    glVertex2f(-0.3875,-0.9725);
    glVertex2f(-0.3875,-0.96);
    glVertex2f(-0.375,-0.9475);
    glVertex2f(-0.3625,-0.9475);
    glVertex2f(-0.35,-0.9525);
    glVertex2f(-0.35,-0.96);
    glEnd();

    glColor3f(0.1,0.2,0.05);
    glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3875,-0.985);
    glVertex2f(-0.4,-0.985);
    glVertex2f(-0.4125,-0.9725);
    glVertex2f(-0.4125,-0.96);
    glVertex2f(-0.4,-0.9475);
    glVertex2f(-0.3825,-0.9475);
    glVertex2f(-0.375,-0.9525);
    glVertex2f(-0.375,-0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3375,-0.985);
    glVertex2f(-0.35,-0.985);
    glVertex2f(-0.3625,-0.9725);
    glVertex2f(-0.3625,-0.96);
    glVertex2f(-0.35,-0.9475);
    glVertex2f(-0.3375,-0.9475);
    glVertex2f(-0.325,-0.9525);
    glVertex2f(-0.325,-0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.65,-0.95);
    glVertex2f(-0.6625,-0.95);
    glVertex2f(-0.675,-0.9375);
    glVertex2f(-0.675,-0.925);
    glVertex2f(-0.6625,-0.9125);
    glVertex2f(-0.65,-0.9125);
    glVertex2f(-0.6375,-0.9375);
    glVertex2f(-0.6375,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.675,-0.95);
    glVertex2f(-0.6875,-0.95);
    glVertex2f(-0.7,-0.9375);
    glVertex2f(-0.7,-0.925);
    glVertex2f(-0.6875,-0.9125);
    glVertex2f(-0.675,-0.9125);
    glVertex2f(-0.6625,-0.9375);
    glVertex2f(-0.6625,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.6625,-0.985);
    glVertex2f(-0.675,-0.985);
    glVertex2f(-0.6875,-0.9725);
    glVertex2f(-0.6875,-0.96);
    glVertex2f(-0.675,-0.9475);
    glVertex2f(-0.6625,-0.9475);
    glVertex2f(-0.65,-0.9525);
    glVertex2f(-0.65,-0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.9,-0.9);
    glVertex2f(-0.9125,-0.9);
    glVertex2f(-0.925,-0.8875);
    glVertex2f(-0.925,-0.875);
    glVertex2f(-0.9125,-0.8625);
    glVertex2f(-0.9,-0.8625);
    glVertex2f(-0.8875,-0.8875);
    glVertex2f(-0.8875,-0.875);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.9,-0.95);
    glVertex2f(0.9125,-0.95);
    glVertex2f(0.925,-0.9375);
    glVertex2f(0.925,-0.925);
    glVertex2f(0.9125,-0.9125);
    glVertex2f(0.9,-0.9125);
    glVertex2f(0.8875,-0.9375);
    glVertex2f(0.8875,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.925,-0.95);
    glVertex2f(0.9375,-0.95);
    glVertex2f(0.95,-0.9375);
    glVertex2f(0.95,-0.925);
    glVertex2f(0.9375,-0.9125);
    glVertex2f(0.925,-0.9125);
    glVertex2f(0.9125,-0.9375);
    glVertex2f(0.9125,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.9,-0.95);
    glVertex2f(-0.9125,-0.95);
    glVertex2f(-0.925,-0.9375);
    glVertex2f(-0.925,-0.925);
    glVertex2f(-0.9125,-0.9125);
    glVertex2f(-0.9,-0.9125);
    glVertex2f(-0.8875,-0.9375);
    glVertex2f(-0.8875,-0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.925,-0.95);
    glVertex2f(-0.9375,-0.95);
    glVertex2f(-0.95,-0.9375);
    glVertex2f(-0.95,-0.925);
    glVertex2f(-0.9375,-0.9125);
    glVertex2f(-0.925,-0.9125);
    glVertex2f(-0.9125,-0.9375);
    glVertex2f(-0.9125,-0.925);
    glEnd();

}

void draw_pixel(GLint cx,GLint cy)
{
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POINTS);

    glVertex2i(cx,cy);
    glEnd();
}

void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);
    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);

    draw_pixel(x+h-0.5,y+k-1);
    draw_pixel(-x+h,y+k-0.5);
    draw_pixel(x+h-2,-y+k+1.6);
    draw_pixel(x+h-2,-y+k+2.6);
    draw_pixel(x+h-2,-y+k+3.6);
    draw_pixel(x+h-2,-y+k+4.6);

    draw_pixel(-x+h,-y+k+2);
    draw_pixel(-x+h,-y+k+3);
    draw_pixel(-x+h,-y+k+4);
    draw_pixel(y+h-1.0,x+k);
    draw_pixel(y+h-2.0,x+k);
    draw_pixel(-y+h+1.6,x+k);
    draw_pixel(y+h-1.0,-x+k);
    draw_pixel(y+h-2.0,-x+k);
    draw_pixel(y+h-3.0,-x+k);

    draw_pixel(x+h,y+k-1);
    draw_pixel(x+h,y+k-2);
    draw_pixel(x+h,y+k-3);

}

void circle_draw(GLint h,GLint k,GLint r)
{
    GLint d=1-r,x=0,y=r;
    while(y>x)
    {
        plotpixels(h,k,x,y);
        if(d<0)
            d+=2*x+3;
        else
        {
            d+=2*(x-y)+5;
            --y;
        }
        ++x;
    }
    plotpixels(h,k,x,y);
}


void bubble(GLfloat m,GLfloat n)
{
    glPushMatrix();
    glTranslatef(m,y-n,0);
    gluOrtho2D(0.0,640,0.0,480);
    circle_draw(20,20,7);
    glPopMatrix();
}

void bubbles()
{
    bubble(0.5,0.5);
    bubble(0.4,0.3);
    bubble(0.3,0.3);
    bubble(0.2,0.1);
    bubble(0.9,0.9);
    bubble(0.78,0.45);
    bubble(0.66,0.2);
    bubble(0.1,0.5);
    bubble(0.3,0.9);
    bubble(0.8,0.3);
    bubble(0.2,0.1);
    bubble(0.72,0.9);
    bubble(0.78,0.95);
    bubble(0.66,0.4);
}



void idle()
{
    y+=0.0001;

    glutPostRedisplay();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glPointSize(2.0);

    if(a>=-1.99)
        a=a-0.0001;
    else
        a=0;


    if(b>=-1.99)
        b=b-0.0002;
    else
        b=0;

    if(c>=-1.99)
        c=c-0.0003;
    else
        c=0;

    if(d>=-1.99)
        d=d+0.0007;
    else
        d=0;

    if(e>=-1.99)
        e=e-0.0001;
    else
        e=0;


    if(f>=-1.99)
        f=f-0.00014;
    else
        f=0;

    if(flag==1)
{
    bubbles();
}


///fishes called
    fish1();
    fish2();
    fish5();
    fish6();

///plant
    plant();

//pebbles
    pebbles();

    glutPostRedisplay();

    glutSwapBuffers();
}

void Menu(int option)
{
 if(option==1)
    y=0;

    switch(option)
    {
     case 1:flag=1;
            break;
    case 2:exit(0);
    default:break;
    }
    glutPostRedisplay();
}


void myinit()
{
    glClearColor(0.2,0.7,1.0,0.0);
    glutCreateMenu(Menu);
    glutAddMenuEntry("Bubbles",1);
    glutAddMenuEntry("Exit",2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}


int main(int cc,char **v)
{
    glutInit(&cc,v);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(500.0,200.0);
    glutInitWindowSize(900,600);
    glutCreateWindow("AQUARIUM DESIGN");
    myinit();
    glutIdleFunc(idle);
    glutDisplayFunc(display);
    PlaySound (TEXT ("C:\\Users\\sathw\\OneDrive\\Documents\\CG\\aquarium\\test.wav"),NULL, SND_ASYNC) ;
    glutMainLoop();

}

