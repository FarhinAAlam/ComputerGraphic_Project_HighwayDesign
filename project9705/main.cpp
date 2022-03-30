/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;
static float	tz	=  0.0;
float p=100.0;

float q=-100.0;



void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++){

        float angle = 2.0f * 3.1416f * i/100;

        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));


    }
    glEnd();


}

void Halfcircle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=50;i++){

        float angle = 2.0f * 3.1416f * i/100;

        float x = rx*cosf(angle);
        float y = ry*sinf(angle);
        glVertex2f((x+cx),(y+cy));


    }
    glEnd();


}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

         if(p>=-100)
       p = p - 0.005;

      else
        p = 100;
    glutPostRedisplay();


  glBegin(GL_QUADS);

  glColor3f(0.0, 0.5, 1.0);
    glVertex2f(p-5,-22);       //  position from the left limit,p
   glVertex2f(p-15,-22);
   glVertex2f(p-18,-25);
   glVertex2f(p-3,-25);

  glColor3f(0.0, 1.0, 0.0);
   glVertex2f(p,-25);       // position from the left limit,p
   glVertex2f(p-20,-25);
   glVertex2f(p-20,-30);
   glVertex2f(p,-30);



   glColor3f(0.5, 0.9, 1.0);
    glVertex2f(p-55,-47);       // position from the left limit,p
   glVertex2f(p-65,-47);
   glVertex2f(p-68,-50);
   glVertex2f(p-52,-50);

glColor3f(1.0, 0.0, 0.0);

   glVertex2f(p-50,-50);       //  position from the left limit,p
   glVertex2f(p-70,-50);
   glVertex2f(p-70,-55);
   glVertex2f(p-50,-55);


   glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-91,10);
     glVertex2f(-90,10);
     glVertex2f(-95,-5);
     glVertex2f(-96,-5);
     glEnd();

       glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-81,10);
     glVertex2f(-80,10);
     glVertex2f(-85,-5);
     glVertex2f(-86,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-71,10);
     glVertex2f(-70,10);
     glVertex2f(-75,-5);
     glVertex2f(-76,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-61,10);
     glVertex2f(-60,10);
     glVertex2f(-65,-5);
     glVertex2f(-66,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-51,10);
     glVertex2f(-50,10);
     glVertex2f(-55,-5);
     glVertex2f(-56,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-41,10);
     glVertex2f(-40,10);
     glVertex2f(-45,-5);
     glVertex2f(-46,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-31,10);
     glVertex2f(-30,10);
     glVertex2f(-35,-5);
     glVertex2f(-36,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-21,10);
     glVertex2f(-20,10);
     glVertex2f(-25,-5);
     glVertex2f(-26,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(-11,10);
     glVertex2f(-10,10);
     glVertex2f(-15,-5);
     glVertex2f(-16,-5);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(0,10);
     glVertex2f(1,10);
     glVertex2f(-5,-5);
     glVertex2f(-4,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(10,10);
     glVertex2f(11,10);
     glVertex2f(5,-5);
     glVertex2f(4,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(20,10);
     glVertex2f(21,10);
     glVertex2f(15,-5);
     glVertex2f(14,-5);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(30,10);
     glVertex2f(31,10);
     glVertex2f(25,-5);
     glVertex2f(24,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(40,10);
     glVertex2f(41,10);
     glVertex2f(35,-5);
     glVertex2f(34,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(50,10);
     glVertex2f(51,10);
     glVertex2f(45,-5);
     glVertex2f(44,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(60,10);
     glVertex2f(61,10);
     glVertex2f(55,-5);
     glVertex2f(54,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(70,10);
     glVertex2f(71,10);
     glVertex2f(65,-5);
     glVertex2f(64,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(80,10);
     glVertex2f(81,10);
     glVertex2f(75,-5);
     glVertex2f(74,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(90,10);
     glVertex2f(91,10);
     glVertex2f(85,-5);
     glVertex2f(84,-5);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(99,10);
     glVertex2f(100,10);
     glVertex2f(95,-5);
     glVertex2f(94,-5);
     glEnd();


      //sky



    glColor3f(0.8,0.6,1.0);  glRectf( -100.0,100.0,100.0,25.0);


   glBegin(GL_POLYGON);
     glColor3f(0.0,0.8,0.0);
     glVertex2f(-100,25);
     glVertex2f(-70,40);
     glVertex2f(-40,25);
     //glVertex2f(94,-5);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.0,0.5,0.0);
     glVertex2f(-40,25);
     glVertex2f(-10,40);
     glVertex2f(20,25);
     //glVertex2f(94,-5);
     glEnd();

        glBegin(GL_POLYGON);
     glColor3f(0.0,0.8,0.0);
     glVertex2f(20,25);
     glVertex2f(50,40);
     glVertex2f(80,25);
     //glVertex2f(94,-5);
     glEnd();

      glBegin(GL_POLYGON);
     glColor3f(0.0,0.6,0.0);
     glVertex2f(80,25);
     glVertex2f(100,40);
     glVertex2f(100,25);
       glEnd();

         glColor3f(0.5,0.2,0.1); glRectf( -40.0,50.0,-39.0,25.0); //tree body

       glBegin(GL_POLYGON);
     glColor3f(0.0,0.4,0.0);
     glVertex2f(-46,40);         //tree part1
     glVertex2f(-40,55);
     glVertex2f(-33,40);
       glEnd();

       glBegin(GL_POLYGON);
     glColor3f(0.0,0.4,0.0);
     glVertex2f(-46,45);         //tree part2
     glVertex2f(-40,60);
     glVertex2f(-33,45);
       glEnd();


       glBegin(GL_POLYGON);
     glColor3f(0.0,0.4,0.0);
     glVertex2f(-46,50);         //tree part3
     glVertex2f(-40,65);
     glVertex2f(-33,50);
       glEnd();

////another tree
  glColor3f(0.5,0.2,0.1); glRectf( 80.0,50.0,79.0,25.0); //tree body1

       glBegin(GL_POLYGON);
     glColor3f(0.0,0.4,0.0);
     glVertex2f(86,40);         //tree1 part1
     glVertex2f(80,55);
     glVertex2f(73,40);
       glEnd();

       glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
     glVertex2f(86,45);         //tree1 part2
     glVertex2f(80,60);
     glVertex2f(73,45);
       glEnd();


       glBegin(GL_POLYGON);
     glColor3f(0.0,0.4,0.0);
     glVertex2f(86,50);         //tree1 part3
     glVertex2f(80,65);
     glVertex2f(73,50);
       glEnd();




       glColor3f(0.5,0.5,0.5); glRectf( -100.0,10.0,100.0,9.0);
       glColor3f(0.5,0.5,0.5); glRectf( -100.0,-5.0,100.0,-6.0);

       //sun

    glColor3f(1.9,0.3,0.0); circle(-3,8,-74,75);

    //cloud

     glColor3f(0.8,0.0,1.0); circle(-5,3,74+p,88);
       glColor3f(0.8,0.0,1.0); circle(-6,3,85+p,88);
         glColor3f(0.8,0.0,1.0); circle(-4,4,80+p,85);
         glColor3f(0.8,0.0,1.0); circle(-5,3,81+p,91);
   //cloud2
         glColor3f(0.9,0.9,0.9);
         circle(-5,3,52+p,82);
         circle(-6,3,41+p,82);
          circle(-4,4,46+p,79);
          circle(-5,3,47+p,85);




       //train
   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.7);
   glVertex2f(p,15);
   glVertex2f(p-80,15);
   glVertex2f(p-80,-5);
   glVertex2f(p,-5);


    glColor3f(1.0, 0.0, 0.7);
   glVertex2f(p-78,15);
   glVertex2f(p-90,10);
   glVertex2f(p-90,-5);
   glVertex2f(p-78,-5);


   glColor3f(0.8, 0.8, 1.0);
   glVertex2f(p-1,13);
   glVertex2f(p-6,13);   //tdoor
   glVertex2f(p-6,-2);
   glVertex2f(p-1,-2);

   glColor3f(1.0, 1.0, 0.0);
   glVertex2f(p-10,10);
   glVertex2f(p-16,10);       //train window
   glVertex2f(p-16,0);
   glVertex2f(p-10,0);

    glColor3f(1.0, 1.0, 0.0);
   glVertex2f(p-21,10);        //train window
   glVertex2f(p-27,10);
   glVertex2f(p-27,0);
   glVertex2f(p-21,0);

    glColor3f(0.0, 0.9, 0.0);
   glVertex2f(p-31,15);
   glVertex2f(p-31.5,15);      //tline
   glVertex2f(p-31.5,-5);
   glVertex2f(p-31,-5);

    glColor3f(0.8, 0.8, 1.0);
   glVertex2f(p-34.5,13);
   glVertex2f(p-40,13);   //tdoor
   glVertex2f(p-40,-2);
   glVertex2f(p-34.5,-2);


    glColor3f(1.0, 1.0, 0.0);
   glVertex2f(p-45,10);        //train window
   glVertex2f(p-50,10);
   glVertex2f(p-50,0);
   glVertex2f(p-45,0);


    glColor3f(1.0, 1.0, 0.0);
   glVertex2f(p-55,10);        //train window
   glVertex2f(p-60,10);
   glVertex2f(p-60,0);
   glVertex2f(p-55,0);

   glColor3f(0.0, 0.9, 0.0);
   glVertex2f(p-64,15);
   glVertex2f(p-64.5,15);      //tline
   glVertex2f(p-64.5,-5);
   glVertex2f(p-64,-5);

   glColor3f(0.8, 0.8, 1.0);
   glVertex2f(p-67.5,13);
   glVertex2f(p-73,13);   //tdoor
   glVertex2f(p-73,-2);
   glVertex2f(p-67.5,-2);

   glColor3f(1.0, 1.0, 0.0);
   glVertex2f(p-82,7);        //train window
   glVertex2f(p-87,7);
   glVertex2f(p-87,0);
   glVertex2f(p-82,0);



         glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-5,78);        //bird
   glVertex2f(p-4,78);
   glVertex2f(p-7,75);
   glVertex2f(p-8,75);


    glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-10,77);        //bird
   glVertex2f(p-9,77);
   glVertex2f(p-7,75);
   glVertex2f(p-8,75);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-5,75);        //bird
   glVertex2f(p-9,75);
   glVertex2f(p-9,74.5);
   glVertex2f(p-5,74.5);



        glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-5,77);        //bird
   glVertex2f(p-4,77);
   glVertex2f(p-7,75);
   glVertex2f(p-8,75);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p,70);        //bird1
   glVertex2f(p-1,70);
   glVertex2f(p-3,67);
   glVertex2f(p-4,67);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-5,69);        //bird1
   glVertex2f(p-4.5,69);
   glVertex2f(p-3,67);
   glVertex2f(p-3.5,67);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-1.5,67);        //bird1
   glVertex2f(p-4.5,67);
   glVertex2f(p-4.5,66.5);
   glVertex2f(p-1.5,66.5);

    glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p,69);        //bird1
   glVertex2f(p-1,69);
   glVertex2f(p-3,67);
   glVertex2f(p-4,67);


   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-9,70);        //bird2
   glVertex2f(p-10,70);
   glVertex2f(p-12,67);
   glVertex2f(p-13,67);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-13.5,69);        //bird2
   glVertex2f(p-14.5,69);
   glVertex2f(p-12,67);
   glVertex2f(p-13.5,67);

   glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-11,67);        //bird2
   glVertex2f(p-13.5,67);
   glVertex2f(p-13.5,66.5);
   glVertex2f(p-11,66.5);

    glColor3f(0.5, 0.3, 0.4);
   glVertex2f(p-9,72);        //bird2
   glVertex2f(p-10,72);
   glVertex2f(p-12,67);
   glVertex2f(p-13,67);




   glEnd();




     glColor3f(0.5,0.2,0.1); glRectf( -100.0,25.0,100.0,22.0);

    glColor3f(0.5,0.2,0.1); glRectf( -100.0,-15.0,100.0,-18.0);


     glColor3f(1.0,1.0,0.0); glRectf( -100.0,-40.0,-90.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( -80.0,-40.0,-70.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( -60.0,-40.0,-50.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( -40.0,-40.0,-30.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( -20.0,-40.0,-10.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( 0.0,-40.0,10.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( 20.0,-40.0,30.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( 40.0,-40.0,50.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( 60.0,-40.0,70.0,-41.0);
     glColor3f(1.0,1.0,0.0); glRectf( 80.0,-40.0,90.0,-41.0);


    glColor3f(0.5,0.2,0.1); glRectf( -100.0,-62.0,100.0,-65.0);
    glColor3f(0.0, 0.5, 1.0); glRectf( -100.0,-65.0,100.0,-85.0);
    glColor3f(0.0, 0.5, 0.0); glRectf( -100.0,-90.0,100.0,-100.0);
    glColor3f(0.5, 0.8, 0.1); glRectf( -100.0,-85.0,100.0,-90.0);


	glPushMatrix();

	glRotatef(spin, 0.0, 0.0, 1.0);


	//glTranslatef(tx,ty,0); glColor3f(0.0,1.0, 1.0);glRectf( -60.0,-49.0,-55.0,-55.0);
    //glTranslatef(tx,ty,tz); glColor3f(0.0,1.0, 1.0);  circle( -3,3,-50,-48);

	glPopMatrix();

      glFlush();

}


void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}


void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			break;

		case 'r':
			spinDisplay_right();
			break;


		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=1;
				glutPostRedisplay();
				break;

			//spinDisplay_left();
			//break;

		case GLUT_KEY_RIGHT:
				tx +=1;
				glutPostRedisplay();
				break;

			//spinDisplay_right();
			//break;

		case GLUT_KEY_DOWN:
				ty -=1;
				glutPostRedisplay();
				break;

			//spinDisplay_left();
			//break;

		case GLUT_KEY_UP:
				ty +=1;
				glutPostRedisplay();
				break;

	  default:
			break;
	}
}


void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)

        PlaySound("ting_ting",NULL,SND_ASYNC| SND_FILENAME);        //train sound

            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)

        //glutIdleFunc(NULL); // make idle function inactive
         break;
      default:
         break;
   }
}





int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (" Farhina 172-15-9705");
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);

	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}

