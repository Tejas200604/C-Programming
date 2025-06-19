//Write a C program toa add two integers and display result.....

void main(){
	int a=10;
	int b=20;
	int c=a+b;
	printf("%d",c);
} 


//Write a program to find area of circle...

void main(){
	float r=5;
	float area;
	area=3.14*r*r;
	printf("%f",area);
}


//Write a program to convert temperature into celsius to farhenheit using the formula:F=(C*9/5)+32

void main(){
	double C=50;
	double F=(C*9/5)+32;
	printf("%f",F);
}


//Write a program to swap two numbers using a temporary third variable....

void main(){
	int a=30;
	int b=40;
	int c;
	c=a;
	a=b;
	b=c;
	
	printf("%d,%d",a,b);
}


//Write a program to input 5 numbers and find their average
#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5;
	float average;
	printf("enter the numbers:");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	
	average=(num1+num2+num3+num4+num5)/5.0;
	printf("%f",average);
	
}


//Write a program to find the square and cube of a given number....

void main(){
	int a=10;
	int square,cube;
	square=a*a;
	cube=a*a*a;
	printf("%d,%d",square,cube);
}


//Write a program to convert given minutes into hours and seconds....

void main(){
	int min=2547;
	int hr;
	int sec;
	
	hr=min/60;
	sec=min*60;
	printf("%d,%d,%d",hr,min,sec);
}

//Write a program to convert to input lenght and width of the rectangle and find its perimeter....

#include<stdio.h>
void main(){
	int length;
	int breadth;
	int per;
	printf("The length and breadth of the rectangle is");
	scanf("%d %d",&length,&breadth);
	
	per= 2*(length+breadth);
	printf("%d",per);
}

//Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>
void main(){
	int base;
	int height;
	int area;
	printf("The base and height of triangle is");
	scanf("%d %d",&base,&height);
	
	area=base*height;
	printf("%d",area);
}

//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.

#include <stdio.h>
int main() {
    int maths, science, english, hindi, marathi;
    int totalmarks;                // Should be int, not double
    float percentage;

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &maths, &science, &english, &hindi, &marathi);

    totalmarks = maths + science + english + hindi + marathi;
    printf("Total Marks = %d\n", totalmarks);

    percentage = (totalmarks / 5.0);  // Use 5.0 to ensure float division
    printf("Percentage = %.2f\n", percentage);

    return 0;
}



