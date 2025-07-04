//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

#include<stdio.h>
int main(){
	int num1,num2,result;
	char oper;
    printf("enter the numbers");
	scanf("%d %d",&num1,&num2);
	
	printf("enter the operator(+,-,/,*,%)");
	scanf(" %c",&oper);
	
	if(oper=='+')
	{
		result=num1+num2;
	}
	else if(oper=='-'){
		result=num1-num2;
	}
	else if(oper=='*'){
		result=num1*num2;
	}
	else if(oper=='/'){
		result=num1/num2;
	}
	else if(oper=='%'){
		result=num1%num2;
	}
	else{
		printf("enter valid operator");
	}
	printf("result:%d",result);
	return 0;
}*/

//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){
	int side1,side2,side3;
	
	printf("enter the sides");
	scanf("%d %d %d",&side1,&side2,&side3);
	
	if(side1==side2&&side2==side3){
		printf("triangle is equilateral");
	}
	else if(side1==side2||side2==side3||side3==side1){
		printf("triangle is isosceles");
	}
	else{
		printf("triangle is scalene");
	}
	return 0;
}

//Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int main(){
	int num1=10;
	int num2=20;
	int num3=5;
	
	if(num1>num2&&num1>num3){
		printf("num1 is greatest");
	}
	else if(num2>num1&&num2>num3){
		printf("num2 is greatest");
	}
	else{
		printf("num3 is greaatest");
	}
}

/*
Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"
*/

#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	
	if(marks>=75){
		printf("Distinction");
	}
	else if(marks>=65&&marks<75){
		printf("First Class");
	}
	else if(marks>=55&&marks<65){
		printf("Second Class");
	}
	else if(marks>=40&&marks<55){
		printf("Pass Class");
	}
	else{
		printf("Fail");
	}
	
	
}
/*
Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

#include<stdio.h>
int main(){
	int price;
	int disprice;
	int totalprice;
	char ans;
	
	printf("are you a student?");
	scanf("%c",&ans);
	
	printf("enter the price");
	scanf("%d",&price);
	

	 if (ans == 'y' || ans == 'Y') {
        if (price > 500) {
            disprice = price * 0.20f;
			totalprice = price - disprice; 
        } else {
            disprice = price * 0.10f;
			totalprice = price - disprice; 
        }
    } 
	else if (ans == 'n' || ans == 'N') {
        if (price > 600) {
            disprice = price * 0.15;
			totalprice = price - disprice;
        } 
    else {
    	totalprice=price;
	}    
    }
    if(totalprice!=price){
    printf("Your actual price is : %d\n",price);
    printf("Discounted price is: %.2f\n",disprice);
    printf("Total price is: %d\n",totalprice);
    }
    else{
    	 printf("Total price is: %d with no discount",price);
	}
	return 0;
}


//Accept a number and check if it is divisible by 3, 5, or both.

#include<stdio.h>
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	if(num%3==0&&num%5==0){
		printf("number is divisible by both 3&5");
	}
	else if(num%3==0&&num%5!=0){
		printf("number is divisible by 3 not 5 ");
	}
	else if(num%3!=0&&num%5==0){
		printf("number is divisible by 5 not 3");
	}
	else{
		printf("number is not divisible by both");
	}
	return 0;
}

//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)


#include<stdio.h>
int main(){
	int age;
	printf("enter the age");
	scanf("%d",&age);
	
	if(age<12){
		printf("child");
	}
	else if(age>=12&&age<=19){
		printf("teenager");
	}
	else if(age>=20&&age<=59){
		printf("adult");
	}
	else if(age>=60){
		printf("senior");
	}
	else{
		printf("enter valid age");
	}
}















