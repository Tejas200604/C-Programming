//Print numbers from 1 to 10

#include<stdio.h>
int main(){
	int i=1;
	while(i<=10){
		printf("%d",i);
		i++;
	}
}

//Print table for given number.
//Input: n = 5

#include<stdio.h>
int main(){
	int i=1;
	while(i<=10){
		printf("%d\n",i*5);
		i++;
	}
}

//Sum of numbers in given range.
//Find sum of numbers from start to end.

#include<stdio.h>
int main(){
	int i=1;
	int sum=0;
	while(i<=5){
		sum += i;
		i++;
	}
	printf("sum %d",sum);
	return 0;
}

//check the given number is prime or not....

#include<stdio.h>
int main(){
	int i=2;
	int n=2;
	
		if (i<=2){
		printf("prime number");
	    }
	    else if(i%n!=0){
	    	printf("prime number");
		}
		else{
			printf("not a prime number");
		}
	}
	
	//check the given number is armstrong or not....
	
#include<stdio.h>
int main(){
	int n=150;
	int rem;
    int sum=0;
    int temp=n;
    while(n>0){
    	rem=n%10;
    	sum=rem*rem*rem+sum;
    	n=n/10;
	}
    
	if(sum==temp){
		printf("armstrong number");
	}
	else{
		printf("not an armstrong number");
	}

}

//check the given number is perfect number or not....

#include<stdio.h>
int main(){
	int n=28;
	int sum=0;
	int rem;
	int temp=n;
	int i=1
	while(i<n){
		if(n%i==0){
			sum += 1;
		}
		i++;
	}
	if(sum==temp){
		printf("perfect number");
	}
	else{
		prinntf("not a perfect number");
	}
}


//find factorial of given number....

#include<stdio.h>
int main(){
	int n=5;
	int fac=1;
	int i=1;
	while(i<=n){
       fac=fac*i;
       i++;
	}
	
	printf("%d",fac);
}

//Check the given number is Strong number or not.

#include<stdio.h>
int main(){
   int n=150;
   int sum=0;
   int rem;
   int temp=n;
   
   while(n>0){
     rem=n%10;
     int fact=1;
     while(rem>=1){
     	fact=fact*rem;
     	rem--;
	 }
     sum=sum+fact;
     n=n/10;
   }
   if(sum==temp){
   	printf("strong number");
   }
   else{
   	printf("not a strong number ");
   }
}

//check the given number is palindrome or not...

#include<stdio.h>
int main(){
	int n=1551;
	int rem;
	int sum=0;
	int temp=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp){
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}

//find sum of first digit and last digit in a number....

#include<stdio.h>
int main(){
	int n=15986;
	int fdig,ldig;
	int temp=n;
	int sum;
	ldig=n%10;
	while(n>0){
		fdig=n%10;
		n=n/10;
	}
	sum=ldig+fdig;
	printf("%d",sum);
}

//Assignment 3 using For loops....


//print prime numbers from 1 to 10 

#include<stdio.h>
int main(){
	int n=7;
	int flag=0;
	int i;
    for(i=2;i=n/2;i++){
    	if(n%i==0){
    		flag=1;
    		break;
		}
		if(flag==0){
			printf("prime number");
		}
		else{
			printf("not a prime number");
	    }
		return 0;	
	}
	
}

//print table for a given number....

#include<stdio.h>
int main(){
	int n=5;
	int i;
	int table;
	
	for(i=1;i<=10;i++){
		table=n*i;
		printf("%d * %d = %d\n",n,i,table);
	}
	return 0;
}

//find sum of numbers from start to end....

#include<stdio.h>
int main(){
	int n=1564;
	for(;i>=n;)
}
