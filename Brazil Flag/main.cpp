#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>

void circle()
{
    glPushMatrix();
    glColor3f(0.0000,0.0000,1.0000);

    glScalef(0.5,1,0);
    glutSolidSphere(10.5,100,10);

    glPopMatrix();
    glEnd();
}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
       glColor3f(0.0f, 0.7f, 0.0f);
      glVertex2f(-20.0f, -20.1f);
      glVertex2f(20.0f, -20.01f);
      glVertex2f(20.0f, 20.0f);
      glVertex2f(-20.0f, 20.0f);
glEnd();

glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(-15.0f, 0.0f);
      glVertex2f(0.0f, -15.01f);
      glVertex2f(15.0f, 0.0f);
      glVertex2f(0.0f, 15.0f);
glEnd();

glPushMatrix();
circle();
glPopMatrix();
glutSwapBuffers();
glFlush();
}

void base(void)
{
   glClearColor (1.0, 1.0, 1.0, 0.0);
  glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (800, 400);
  glutInitWindowPosition (0, 0);
  glutCreateWindow ("Sample");
  base();
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
