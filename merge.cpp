#include<GL/glut.h>
#include<iostream>
	#include<string.h>
#define max 20
int sorting=0;
int z[]={5,10,7,14,9,18,20,2,7,13,32,6,16,18,35,25,27,1,9,3};
char str1[] = "SHRI DHARMASTHALA MANJUNATHESHWARA INSTITUTE OF TECHNOLOGY";
	char str2[] = "    DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	char str3[] = "COMPUTER GRAPHICS AND VISUALIZATION LABORATORY";
	char str4[] = "A MINI PROJECT";
	char str5[] = "ON";
	char str6[] = "MERGE SORT SIMULATION";
	char str7[] = "Submitted By:";
	char str8[] = "POWDAN JAIN-4SU16CS076";
	char str9[] = "PRANAV SHARMA P C-4SU16CS080";
	char str30[] = "PRASANNA P HEGDE-4SU16CS081";
	char str10[] = "Submitted To:";
	char str11[] = "PROF.ARJUN K";
	char str12[] = "PROF.GURUPRASAD M S";
	char str13[] = "********************************************* MENU *********************************************";
	char str14[] = "The following implementation is a merge sort simulation using";
	char str15[] = "Basically Merge sort is a divide and conquer technique ";
	char str16[] = "it divides  the array of elements and then merges it in ascending order";
	char str17[] = "computer graphics and data structure algorithms";
	char str18[] = "Press 'q' to Exit.";
	char str19[] = "press 'b'to main menu";
	char str20[] = "Thank You!";

	char str28[] = "( Press ENTER to continue )";
	char str29[] = "(Press A to guide)";
	void myKey(unsigned char key, int x, int y);
struct color {
	int r,g,b;
};
color x[] = {{0,0,1},
			 {1,0,0},
		     {0,1,0},
			 {0,0,1},
			 {1,1,0},
			 {0,1,1},
			 {1,0,1}};

struct line {
	int len;
	color c;
};
line ln[max],sortln[max],temp[max];

int min=0,count=0,finished=0;
int sorttype=0,inptype=0;
void drawlines();
void input(int);
void display();

int i;
void display2()
{

	glClearColor(1, 1, 1, 0); //background color
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glColor3f(0,0,0); // foreground color

	glRasterPos2f(-6.5, 7);
		for (i = 0;i < strlen(str14);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str14[i]); //MITE
		glRasterPos2f(-6.5, 6);
			for (i = 0;i < strlen(str17);i++)
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str17[i]); //MITE

	glRasterPos2f(-6.5, 5);
		for (i = 0;i < strlen(str15);i++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str15[i]); //MITE

		glRasterPos2f(-6.5, 4);
			for (i = 0;i < strlen(str16);i++)
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str16[i]); //MITE
			glRasterPos2f(-6.5, 3);
						for (i = 0;i < strlen(str18);i++)
							glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str18[i]); //MITE
		glRasterPos2f(-6.5, 2);
			for (i = 0;i < strlen(str19);i++)
						glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str19[i]);
				glutKeyboardFunc(myKey);
					glFlush();
					glutSwapBuffers();

}
void choice();
void display1() { //Font Screen

	glClearColor(1, 1, 1, 0); //background color
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glColor3f(0,0,0); // foreground color

	glRasterPos2f(-6.5, 7);
	for (i = 0;i < strlen(str1);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[i]); //MITE

	glRasterPos2f(-5.5, 4.2);
	for (i = 0;i<strlen(str2);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[i]); //DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING

	glRasterPos2f(-5, 3);
	for (i = 0;i<strlen(str3);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[i]); //COMPUTER GRAPHICS AND VISUALIZATION LABORATORY

	glRasterPos2f(-1.5, 1);
	for (i = 0;i<strlen(str4);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str4[i]); //A MINI PROJECT

	glRasterPos2f(-0.5, 0);
	for (i = 0;i<strlen(str5);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str5[i]); //ON

	glRasterPos2f(-2.5, -1);
	for (i = 0;i<strlen(str6);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str6[i]); //WORKING OF BLOCKCHAIN
	glRasterPos2f(-9, -5);
	for (i = 0;i<strlen(str7);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str7[i]); //DESIGNED BY:
	glRasterPos2f(-8.5, -6);
	for (i = 0;i<strlen(str8);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str8[i]);
	glRasterPos2f(-8.5, -7);
	for (i = 0;i<strlen(str9);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str9[i]);
	glRasterPos2f(-8.5, -8);
	for (i = 0;i<strlen(str30);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str30[i]);
	glRasterPos2f(5, -5);
	for (i = 0;i<strlen(str10);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str10[i]);
	glRasterPos2f(5.5, -6);
	for (i = 0;i<strlen(str11);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str11[i]);
	glRasterPos2f(5.5, -7);
	for (i = 0;i<strlen(str12);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str12[i]);
	  glColor3f(1.0,0.0,0.0);
	    glRasterPos2f(-1.75,-9);
	    for (i = 0;i<strlen(str28);i++)
	        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str28[i]);
	    glColor3f(1.0,0.0,0.0);
	    glRasterPos2f(-1.50,-10);
	    for (i = 0;i<strlen(str29);i++)
	        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str29[i]);

	    glutKeyboardFunc(myKey);
	glFlush();
	glutSwapBuffers();
}


void myKey(unsigned char key, int x, int y) {
	if (key == (char)13 && sorting==0) //Goes to Menu Page
		{

			glutDisplayFunc(display);
			display();
			sorting=1;


			glEnd();
			glFlush();
		}
	if (key == (char)97) //Goes to Menu Page
			{
				glutDisplayFunc(display2);

				glFlush();
			}
	if (key == (char)113) //Goes to Menu Page
			{
				exit(0);
			}

if (key == (char)98) //Goes to Menu Page
	{
	glutDisplayFunc(display1);
	}
//if (key == (char)98) //Goes to Menu Page
//	{
//	glutDisplayFunc(display1);
//	}


}

void delay(){
	int i =999999,j=999999;
	while(i--);
	while(j--);


}

void merge(int l,int m,int r){
int	i=l,j=m+1,k=l;
	while(i<=m && j<=r){
		if(sortln[i].len<=sortln[j].len)
		{

			temp[k].c.r=sortln[i].c.r;
			temp[k].c.g=sortln[i].c.g;
			temp[k].c.b=sortln[i].c.b;
			temp[k].len=sortln[i].len;
			printf("%d  ",temp[i]);
			printf("\n");
		i++;k++;
		}else
		{
			temp[k].c.r=sortln[j].c.r;
			temp[k].c.g=sortln[j].c.g;
			temp[k].c.b=sortln[j].c.b;
			temp[k].len=sortln[j].len;
			printf("%d  ", temp[i]);
			printf("\n");
			j++;k++;
		}
	}
	while(i<=m){
		    temp[k].c.r=sortln[i].c.r;
			temp[k].c.g=sortln[i].c.g;
			temp[k].c.b=sortln[i].c.b;
		    temp[k].len=sortln[i].len;
		    printf("%d  ",temp[i]);
		   	printf("\n");
		i++;k++;
	}
	while(j<=r){
		    temp[k].c.r=sortln[j].c.r;
			temp[k].c.g=sortln[j].c.g;
			temp[k].c.b=sortln[j].c.b;
		    temp[k].len=sortln[j].len;
		    printf("%d  ",temp[i]);
		  		   	printf("\n");
		  		   	j++;k++;
	}

	for(i=l;i<=r;i++){
		sortln[i].c.r=temp[i].c.r;
		sortln[i].c.g=temp[i].c.g;
		sortln[i].c.b=temp[i].c.b;
		sortln[i].len=temp[i].len;
		glClear(GL_COLOR_BUFFER_BIT);

//		 printf("%d  ",z[i]);
//		printf("\n");
		drawlines();
		int i=100;
			while(i--)
				delay();
		glutSwapBuffers();
		//for(i=0;i<100;i--)
		delay();
	//	printf("%d ",temp[k]);


	}
	sorting=0;

}

void mergesort(int l , int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(l,m);
	    mergesort(m+1,r);
	    merge(l,m,r);
	    sorting=0;
	}

}

void sort(){
	line temp;
	int a=0;

	mergesort(0,max-1);

/*
	case 3:quicksort(0,max-1);
		   break;
	case 4:insertion();
		   break;*/
	}


void drawlines(){
	int start=50;
	for(int i=0;i<max;i++){
		glColor3f(sortln[i].c.r,sortln[i].c.g,sortln[i].c.b);
		glBegin(GL_LINES);
		glVertex2f(start,10);
		glVertex2f(start,10+sortln[i].len);
		glEnd();
		start+=10;

	}
}


void display(){
	if(sorting==0)
	{
    char text[10];
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,0);
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,max*10+100,-90,550);
	glLineWidth(10);

	drawlines();
	glutSwapBuffers();
	sort();
	}
	else if(sorting==1)
	{

	}

}

void randomize(){
int a;

	for(int i=0;i<max;i++){
		ln[i].len=(z[i]*10);
		a=rand()%7;
		ln[i].c=x[a];
		printf("%d ",ln[i]);

	}

}
// Function to integer to string
////void int_str(int rad,char ln[])
//{
	//itoa(rad,r,10);


void choice(int ch){
	if(ch==0)
	{
		randomize();
			for(int i=0;i<max;i++)
			sortln[i]=ln[i];

			glutDisplayFunc(display);
						display();
						sorting=1;


						glEnd();
						glFlush();
	}
//	if(ch==0 && sorting==1)
//	{
//		sorting=0;
//	}

}

int main(int argc,char** argv){
	randomize();
	for(int i=0;i<max;i++)
	sortln[i]=ln[i];
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowPosition(250,50);
	glutInitWindowSize(900,600);
	glutCreateWindow("sort");
	 glutCreateMenu(choice);
	 //glutAddMenuEntry("pause",0);
	 glutAddMenuEntry("sort again",0);
	 glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(display1);
	//sort();
	glutMainLoop();
}/*
 * c++.cpp
 *
 *  Created on: 09-May-2019
 *      Author: Prannav Sharma P C
 */




