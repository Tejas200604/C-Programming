// Find minimum and maximum number in array...

#include<stdio.h>
int main(){
	int arr[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("\nMaximum %d",max);
	printf("\nMinimum %d",min);
	return 0;
}

//Search the given number in array...

#include<stdio.h>
int main(){
	int arr[5];
	int i,num,flag=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search in the array");
	scanf("%d",&num);
	
	for(i=0;i<5;i++){
		if(num==arr[i]){
			flag=1;
			break;
		}
	}
	if(flag=1){
		printf("Number is present.");
	}	
	else{
		printf("Number is absent.");
	}
    return 0;
}

// Find sum of all numbers...

#include<stdio.h>
int main(){
	int arr[5];
	int i,sum=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}

// Find odd and even among the numbers.  

#include<stdio.h>
int main(){
	int arr[5];
	int i;
	
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d",arr[i]);
		}
	}
	for(i=0;i<5;i++){
		if(arr[i]%2!=0){
			printf("%d",arr[i]);
		}
	}
	return 0;
}


// Print alternate elements in array.

#include<stdio.h>

int main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of arr\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nNumbers Are:\n");
	for (int i=0;i<10;i=i+2)
	{   
       	printf("%d ",arr[i]);
    }
}

// Accept array and print only prime numbers of array.

#include<stdio.h>

int main() {
    int arr[10];

    printf("Enter elements of arr:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of arr:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPrime Numbers Are:\n");

    for (int i = 0; i < 10; i++) {   
        int status = 1;
        int num=arr[i];

        if(num <= 1) {
            status = 0; 
        } else {
            for(int j=2; j<=num/2;j++) {
                if(num%j==0) {
                    status=0;
                    break;
                }
            }
        }

        if(status) {
            printf("%d ", num);
        }
    }
}
/* Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}*/

#include<stdio.h>

int main(){
	
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter elements of brr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
    printf("\nElements of brr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",brr[i]);
	}
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("\nSum of Arrays\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ", crr[i]);
	}
		
}
// Merge two arrays
#include<stdio.h>

int main(){
	
	int arr[5];
	int brr[5];
	int crr[10];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter elements of brr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
    printf("\nElements of brr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",brr[i]);
	}
	// for merging two array into single array with third arrray
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i];
		crr[i+5]= brr[i];
	}
	printf("\n Merged Array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ", crr[i]);
	}
}

// Reverse the given array.

#include <stdio.h>

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements of arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nReverse of arr\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}

//Sort the array.

#include <stdio.h>

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements of arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	int temp;
	for(int i=1;i<5;i++) {
        temp=arr[i];
        int j = i - 1;
        while(j>=0 &&arr[j]>temp) 
		{
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
	printf("\nSorted arr\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
