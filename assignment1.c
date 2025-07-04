
//Write a program to check whether a number is even or odd....

#include<stdio.h>
void main(){
	int num=25;
	if(num%2==0){
		printf("number is even");
		}
	else{
		printf("number is odd");
	}	
}

//Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
void main(){
	int num=504;
	int firstnum=num/100;
	int lastnum=num%10;
	
	if(firstnum==lastnum){
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}

//Write a program to check whether a given year is a leap year....

#include<stdio.h>
void main(){
	int year=2030;
	if(year%4==0){
		printf("year is leap year");
	}
	else {
		printf("year is not leap year");
	}
}

//Write a program to check whether a given character is a vowel or consonant.

#include <stdio.h>
int main(){
	char ch='b';
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("character is vowel",ch);
	}
	else{
		printf("character is consonant");
	}
}

//Write a program to check whether a person is eligible to vote (age = 18)....

#include<stdio.h>
int main(){
	int age=20;
	if(age>=18){
		printf("person is eligible for voting");
		}
	else{
		printf("person is not eligible for voting");
	}	
}

//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
int main(){
	char ch='A';
	if(ch>='A' &&ch<='Z'){
		printf("uppercase character");
	}
	else{
		printf("lowercase character");
	}
}

//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include<stdio.h>
int main(){
	int basicsalary=5000;
	int totalsalary,da,ta,hra;
	
	if(basicsalary<=5000){
		da=0.1*basicsalary;
		ta=0.2*basicsalary;
		hra=0.25*basicsalary;
		
		totalsalary=basicsalary+da+ta+hra;
		printf("%d",totalsalary);
		}
	
	else{
		da=0.15*basicsalary;
		ta=0.25*basicsalary;
		hra=0.3*basicsalary;
		
		totalsalary=basicsalary+ta+da+hra;
		printf("%d",totalsalary);
	}
}


