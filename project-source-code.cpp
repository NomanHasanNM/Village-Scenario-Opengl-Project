#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float moveC = 0.0f;
float speed = 0.02f;

void DrawAllComponents()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(100,149,237);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode(GL_MODELVIEW);

    ///sky///
    glBegin(GL_POLYGON);

    glVertex2f(38.0f,3.0f);
    glColor3ub(100,149,237);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);
    glEnd();

    ///sun///
    glPushMatrix();

    glColor3d(255,0,0);
    glTranslatef(30.0, 7.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

///cloud 1///

    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix();

    ///cloud 2///
    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();

     ///see portion
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,191,255);

    glVertex2f(38.0f,-19.0f);  /// right-down
    glVertex2f(38.0f,-10.0f); /// right-top
    glVertex2f(-12.0f,-7.0f); /// left-top
    glVertex2f(-12.0f,-19.0f);  /// left-down
    glEnd();

    ///Ground portion
    glBegin(GL_POLYGON);
    glColor3ub(50,205,50);

    glVertex2f(1.0f, -8.0f); /// angle
    glVertex2f(38.0f,-12.0f);  /// right-down
    glVertex2f(38.0f,3.0f); /// right-top
    glVertex2f(-12.0f,3.0f); /// left-top
    glVertex2f(-12.0f,-11.0f);  /// left-down
    glEnd();

//road
    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);

    glVertex2f(6.0f,-8.6f);
    glVertex2f(6.0f,3.0f);
    glVertex2f(5.2f,3.0f);
    glVertex2f(2.0f,-8.2f);
    glEnd();

    // road divider

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(4.2f,-8.5f);
    glVertex2f(5.6f,3.0f);
    glVertex2f(5.5f,3.0f);
    glVertex2f(4.0f,-8.4f);
    glEnd();

/// left side house

    glBegin(GL_POLYGON);    // upper part
    glColor3ub(72,61,139);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);// 2nd upper part
    glColor3ub(72,61,139);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);// left side
    glColor3ub(184,134,11);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);      //  left window
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();

///door left
//polygon a
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon b
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon c
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-3.2f,-1.4f);
    glVertex2f(-3.2f,-3.0f);

    glEnd();

///house on right side

    glBegin(GL_POLYGON);
    //glColor3ub(47,170,79);
    glColor3ub(139,101,8);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(139,101,8);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door right
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

    //right part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.7,-3);
    glVertex2f(24.7, -.8);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

// 2nd part
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24.8,-1.4);
    glVertex2f(24.8,-3);

    glEnd();

///hill-1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(-12,3);
    glVertex2f(-7.5,7);
    glVertex2f(-2,3);

    glEnd();

///Hill 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(-1,3);
    glVertex2f(-0.5,6);
    glVertex2f(4.5,6);
    glVertex2f(5,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(-0.5,6);
    glVertex2f(0,7);
    glVertex2f(4,7);
    glVertex2f(4.5,6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(0,7);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(4,7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(1,8);
    glVertex2f(3,8);
    glVertex2f(2,8.3);
    glEnd();

///hill 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();

///hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(14,3);
    glVertex2f(20,7);
    glVertex2f(29,3);
    glEnd();

///hill 5
    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();

///hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(31,3);
    glVertex2f(32.5,4.5);
    glVertex2f(35,3);
    glEnd();

///hill 7

    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(33,3);
    glVertex2f(33.5,4.5);
    glVertex2f(37.5,4.5);
    glVertex2f(38,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,9);
    glVertex2f(33.5,4.5);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(37.5,4.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,9);
    glVertex2f(34,5);
    glVertex2f(37,5);
    glVertex2f(35.5,5.5);
    glEnd();

/// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(33.5,-1);
    glVertex2f(33.5,-6.5);
    glVertex2f(33,-7);
    glVertex2f(34.5,-6.5);
    glVertex2f(34.5,-1);
    glEnd();

    ///right side head

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(32.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(33.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(34.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(35.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

/// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(15.5,-1);
    glVertex2f(15.5,-6.5);
    glVertex2f(15,-7);
    glVertex2f(15.5,-6.5);
    glVertex2f(16.5,-1);
    glEnd();

    ///right side head

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(14.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(15.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(16.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(17.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
// Treee three
    /// right side tree body
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(10,-1);
    glVertex2f(10.5,-6.5);
    glVertex2f(10,-7);
    glVertex2f(10.5,-6.5);
    glVertex2f(11.5,-1);
    glEnd();

    ///right side head

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(9.5, -1.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(10.4, -0.3, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(11.5, -.4, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,100,0);
    glTranslatef(12.5, -1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

///boat-1 stop

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);

    glVertex2f(-3,-10);
    glVertex2f(-3,-7.5);   //stick
    glVertex2f(-3.1,-7.5);
    glVertex2f(-3.1,-10);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(1.0f, -10.0f);
    glVertex2f(1.50f, -9.0f);
    glVertex2f(-2.0f, -9.0f);
    glVertex2f(-3.0f, -10.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(2.0f, -10.0f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-3.0f, -10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -10.5f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-4.5f, -9.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(3.5f, -9.7f);
    glVertex2f(2.0f, -10.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.0f);
    glVertex2f(1.5f, -9.0f);
    glVertex2f(1.0f, -10.0f);

    glEnd();
    glPopMatrix();

    //end
    glPopMatrix();
    glutSwapBuffers();
}

void updateC(int value)
{

    if(moveC > +36)
    {
        moveC = -38;
    }
    moveC += 0.15;

    glutTimerFunc(20, updateC, 0);
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's'://stops
        speed = 0.0f;
        break;
    case 'r'://runs
        speed = 0.02f;
        break;
        glutPostRedisplay();
    }
}

void handleMouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.05f;
    }

    else if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.05f;
    }
    glutPostRedisplay();
}

void display(void)
{
    DrawAllComponents();
    glFlush ();
}

void init()
{

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1300, 700);
    glutCreateWindow(" Village Scenery ");
    init();

    glutTimerFunc(20, updateC, 1);    // cloud speed

    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
