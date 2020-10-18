// C++ program to draw a line by implementing DDA algorithm
#include<bits/stdc++.h>
#include<windows.h>
#include<GL/glut.h>
using namespace std;

float A1,A2,B1,B2;

void drawPoint(int A,int B){
    glBegin(GL_POINTS);
        glVertex2i(A,B);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    float stepIncrement,x,y,incrementX,incrementY;
    float da=A2-A1;
    float db=B2-B1;

    if(abs(da)>abs(db)){
        stepIncrement = abs(da);
    }
    else{
        stepIncrement = abs(db);
    }


    incrementX = da/stepIncrement;
    incrementY = db/stepIncrement;

    x=A1;
    y=B1;
    drawPoint(x,y);

    for (float j=1 ;j<=stepIncrement;j++)
    {
        x= x + incrementX;
        y= y + incrementY;
        drawPoint(x,y);
    }

    glFlush();
}

void init(void)
{
    glClearColor(0.1,0.1,0.1,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400,400,-400,400);
}

int main(int argc, char** argv) {

    cout << "\"\"The line is drawn in the 4 Quadrants Plane\"\"\n";
    cout << "Enter the value of Initial Point:\n";
    cout << "Enter the value of A1: ";
    cin >> A1;
    cout << "Enter the value of B1: ";
    cin >> B1;

    cout << "Enter the value of End Point:\n";
    cout << "Enter the value of A2: ";
    cin >> A2;
    cout << "Enter the value of B2: ";
    cin >> B2;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100,100);
    glutCreateWindow ("IIT2018031  DDA Algorithm for Line Drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
