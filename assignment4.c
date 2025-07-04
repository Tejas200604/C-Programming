//print armstrong numbers from given 1 to n range...

#include<stdio.h>
void main(){
	int s,e,i;
     printf("enter the range to start from..");
     scanf("%d",&s);
     printf("enter the range to end...");
     scanf("%d",&e);
	
	printf("armstrong nummbers from %d to %d are:",s,e);
	
	for( i =s;i <= e;i++){
		int temp=i,rem,sum=0,n=i;
	    while(temp>0){
	    	rem=temp%10;
	    	sum=rem*rem*rem+sum;
	    	temp=temp/10;
		}
		if(sum==n){
			printf("%d\n",i);
		}
	}
}

//print prime number from given 1 to n range...

#include<stdio.h>
int main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the prime numbers from range %d to %d are:",s,e);

	int i;
	for(n=s;n<=e;n++){
	     int flag=1;
	     
		 if(n<2){
	     	 flag=0;
		 }
		 else{
		 	
		 	for(i=2;i<=n/2;i++){
		 		if(n%i==0){
		 			flag=0;
		 			break;
				 }
				
				 }
				 
			 }
		  if(flag==1){
			printf("%d\n",n);	
		 }
		 
	     
		}
	}
	
// Print perfect numbers in the given range 1 to n. 

#include<stdio.h>
int main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the perfect numbers from range %d to %d are:",s,e);
	
	for(n=s;n<=e;n++){
		int sum=0,i;
	    for(i=1;i<n;i++){
	    	if(n%i==0){
	    		sum=sum+i;
			}
		}
		if(sum==n){
				printf("%d\n",n);
			}
	
		}
		return 0;
	}
	
	// Print strong numbers in the given range 1 to n.
	
#include<stdio.h>
void main(){
	int s,e,n;
	printf("enter the starting point of range:");
	scanf("%d",&s);
    printf("enter the ending point of range:");
	scanf("%d",&e);
	
	printf("the strong numbers from range %d to %d are:",s,e);
    for(n=s;n<=e;n++){
    	 int temp=n,fact=1,sum=0,i;
    	 while(temp>=1){
    	     int digit=temp%10;
    	     int fact=1;
    	     for(i=1;i<=digit;i++) {
			       		
		           fact=fact*i;
	            }
    	 	
			 sum=sum+fact;
		 	temp=temp/10;
		 }
		 	
		 if(sum==n){
		 	printf("%d\n",n);
		 }
	}
}

/* Write a menu driven program to take a number for user and perform operations as follows. 
Press 1.To check number is even or odd. 
2.To check number is prime or not. 
3.To check number is pallindrome or not. 
4.To check number is positive, negative or zero. 
5.To reverse a number. 
6.To find sum of digits.*/


#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int ch;
	printf("enter your choice to  perform operation:\n Press 1 To check number is even or odd.\n2 To check number is prime or not.\n 3 To check number is pallindrome or not.\n4 To check number is positive, negative or zero.\n5 To reverse a number.\n6 To find sum of digits.\nchoice:");
	 scanf("%d",&ch);
	 
	 if(ch==1){
	 	if(n%2==0){
	 		printf("number is even.");
		 }
		 else{
		 	printf("number is odd.");
		 }
	 }
	 else if(ch==2){
	 	if(n<=2){
	 		printf("number is prime");
		 }
		 while(n>2){
		 	if(n%2==0){
		 		printf("number is prime");
			 }
			 else{
			 	printf("number is not prime");
			 }
		 }
	 }
	 else if(ch==3){
	 	int temp=n,rem,sum=0;
	 	while(temp>0){
	 		rem=temp%10;
	 		sum=sum*10+rem;
	 		temp=temp/10;
		 }
		 if(sum==n){
		 	printf("number is palindrome");
		 }
		 else{
		 	printf("number is not palindrome");
		 }
	 }
	 else if(ch==4){
	 	if(n>0){
	 		printf("number is positive");
		 }
		 else if(n<0){
		 	printf("number is negative");
		 }
		 else{
		 	printf("number is zero");
		 }
	 }
	 else if(ch==5){
	 	int temp=n,sum=0,digit;
	 	while(temp>0){
	 		digit=temp%10;
	 		sum=sum*10+digit;
	 		temp=temp/10;
	 	    }
	 	    printf("%d",sum);
	 }
	 else if(ch==6){
	 	int temp=n,sum=0,digit;
	 	while(temp>0){
	 		digit=temp%10;
	 		sum=sum+digit;
	 		temp=temp/10;
		 }
		 printf("%d",sum);
	 }
	 else{
	 	printf("wrong choice...");
	 }
}
	
	


