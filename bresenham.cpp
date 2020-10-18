// GL code for drawing a line using Bresenham line algorithm
#include <GL/glut.h>
// #include<bits/stdc++.h>
// #include<windows.h>
// using namespace std;

void displayRotatingCones()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    GLint viewport[4];
    glGetIntegerv(GL_VIEWPORT, viewport);
    double aspect = (double)viewport[2] / (double)viewport[3];
    gluPerspective(60, aspect, 1, 100);

    glBegin(GL_LINES);
    	glColor3ub(255,110,199);
    	glVertex3f(-6,22,0);
    	glVertex3f(6,-22,0);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef( 0, 0, -35);

    static float theta = 0;
    theta += 0.8f;

    glRotatef(theta, -3, 11, 0);

    glPushMatrix();
        glTranslatef(0,-12,0);
        glRotatef(-90, 1, 0, 0);
        glColor3ub(255,153,51);
        glutWireCone(5,12,20,10);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,11,0);
        glRotatef(90, 1, 0, 0);
        glColor3ub(255,153,51);
        glutWireCone(6,11,20,10);
    glPopMatrix();

    glutSwapBuffers();
}


void lab2(int extra)
{
    glutPostRedisplay();
    glutTimerFunc(16,lab2, 0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow("ROTATING CONES AROUND THE LINE PASSING THROUGH THEIR TIP");

    glutDisplayFunc(displayRotatingCones);
    glutTimerFunc(0, lab2, 0);
    glClearColor(0.3,0.1,0.05,0.0);

    glutMainLoop();
    return 0;
}
