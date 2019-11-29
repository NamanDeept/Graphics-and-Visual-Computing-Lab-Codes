#include <GL/glut.h>
#include <iostream>
#include<math.h>
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
}
void triangle()
{
    //glColor3f(1.0,0.0,0.0);

    glBegin(GL_LINES);
        glVertex2f(-50,0);
        glVertex2f(50,0);
    glEnd();

    glBegin(GL_LINES);
        glVertex2f(0,-50);
        glVertex2f(0,50);
    glEnd();

    /*glTranslated(-20,-20,0);
    glScalef(1.0,2.0,1.0);
    //glRotated(45,0,0,1);
    */
    /*glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f( 15, 15);
        glVertex2f(-15, 15);
        glVertex2f(-15,-15);
        glVertex2f(15,-15);
	glEnd();
    glFlush();*/

    float a1,a2,b1,b2,c1,c2,d1,d2,m,n,o;

    m=3/sqrt(2);
    n=1/sqrt(2);
    o=40/sqrt(2);

    a1=m*15-n*15-o;
    a2=n*15-n*15;

    b1=m*(-15)-n*15-o;
    b2=n*(-15)-n*15;

    c1=m*(-15)-n*(-15)-o;
    c2=n*(-15)-n*(-15);

    d1=m*15-n*(-15)-o;
    d2=n*15-n*(-15);


    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(a1,a2);
        glVertex2f(b1,b2);
        glVertex2f(c1,c2);
        glVertex2f(d1,d2);
	glEnd();
    glFlush();
	/*glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glvertex2f(1,1);
        glvertex2f(-1,1);
        glvertex2f(-1,-1);
        glvertex2f(1,-1);
	glEnd();
*/


}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(50,100);
    glutInitWindowSize(400,400);
    glutCreateWindow("Line");
    init();
    glutDisplayFunc(triangle);
    glutMainLoop();
}
