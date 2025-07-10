// Find minimum and maximum number in array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Maxmin(int* ,int );

void main(){
	
	int arr[5];
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	Maxmin(arr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d",ptr[i]);
	}
}
int Maxmin(int *ptr,int size)
{
	int max=ptr[0];
	int min=ptr[0];
	for (int i=0;i<size;i++)
	{
       if(max<ptr[i])
       max=ptr[i];
       
       if(min>ptr[i])
       min=ptr[i];
	}
		printf("\nMaximum  %d",max);
		printf("\nMinimum  %d",min);
}


#include <stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Found(int* ,int );

int main(){
	
	int arr[5];
	int num,found=0;
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	
	printf("Enter number to search\n");
	scanf("%d",&num);
	Found(arr,num);
	
	
}
void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d",ptr[i]);
	}
}
int Found(int* ptr,int num)
{
	int found=0;
	for(int i=0;i<5;i++)
	{
		if(ptr[i]==num){
			printf("Number %d found",num);
			found=1;
			break;
		}
		
	}
	if(found==0)
	printf("Number %d Not Found \n",num);
}

// Find sum of all numbers.

#include <stdio.h>

void StoreArray(int* ,int );
void Sum(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter the numbers : \n");
	StoreArray(arr,5);
	Sum(arr,5);
	
}

void StoreArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void Sum(int* ptr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+ptr[i];
	}
	printf("\nSum = %d",sum);
}

// Find odd and even among the numbers.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Evenodd(int* ,int );

int main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	
	printf("Elements of arr :\n");
	PrintArray(arr,10);
	
	Evenodd(arr,10);
	
	
}
void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
int Evenodd(int* ptr,int size)
{
	printf("\nEven Numbers Are:\n");
	for (int i=0;i<size;i++)
	{
       if(ptr[i]%2==0){
       	printf("%d ",ptr[i]);
	   }
    }
    printf("\nOdd Numbers Are:\n");
    for (int i=0;i<size;i++){
	   if(ptr[i]%2!=0){
       	printf("%d ",ptr[i]);
	   }
	}
}

// Print alternate elements in array.
#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Alter(int* ,int );

void main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	
	printf("Elements in array \n");
	PrintArray(arr,10);
	
	printf("\nNumbers Are:\n");
	Alter(arr,10 );
	
	
	
}
void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Alter(int* ptr,int size)
{
	for (int i=0;i<10;i=i+2)
	{   
       	printf("%d ",ptr[i]);
    }
}

// Accept array and print only prime numbers of array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
int Prime(int* ,int );

void main(){
	
	int arr[10];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,10);
	printf("Elements of arr\n");
	PrintArray(arr,10);
	printf("\nPrime Numbers Are:\n");
	Prime(arr,10);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
int Prime(int *ptr,int size)
{
	for (int i = 0; i < 10; i++) {   
        int status = 1;
        int num=ptr[i];

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

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Sum(int* ,int* ,int* ,int );

void main(){
	
	int arr[5];
	int brr[5];
	int crr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Enter elements of brr :\n");
	StoreArray(brr,5);
	
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("Elements of brr\n");
	PrintArray(brr,5);
	
	Sum(arr,brr,crr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d ",&ptr[i]);
    }
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Sum(int *ptr1,int *ptr2,int *ptr3,int size)
{
	for(int i=0;i<5;i++)
	{
		ptr3[i]=ptr1[i]+ptr2[i];
	}
	printf("\nSum of Arrays\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ", ptr3[i]);
	}
}

// Merge two arrays

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Merge(int*,int*,int );

void main(){
	
	int arr[5];
	int brr[5];
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Enter elements of brr :\n");
	StoreArray(brr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("\nElements of brr\n");
	PrintArray(brr,5);
	printf("\n Merged Array\n");
	Merge(arr,brr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Merge (int *ptr1,int *ptr2,int size)
{
    for(int i=0;i<size;i++)
	{
		printf("%d ",ptr1[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",ptr2[i]);
	}
		
}

// Reverse the given array.

#include <stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void Reverse(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	printf("\nReverse of arr\n");
	Reverse(arr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void Reverse(int *ptr,int size)
{
	for(int i=4;i>=0;i--)
	{
		printf("%d ",ptr[i]);
	}
		
}

// Sort the array.

#include<stdio.h>

void StoreArray(int* ,int );
void PrintArray(int* ,int );
void SortArray(int* ,int );

void main(){
	
	int arr[5];
	
	printf("Enter elements of arr :\n");
	StoreArray(arr,5);
	printf("Elements of arr\n");
	PrintArray(arr,5);
	SortArray(arr,5);
	
}

void StoreArray(int* ptr,int size)
{
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}
void PrintArray(int* ptr,int size)
{	
	for(int i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
}
void SortArray(int *ptr,int size)
{
	int temp;
	for(int i=1;i<size;i++) {
        temp=ptr[i];
        int j = i - 1;
        while(j>=0 &&ptr[j]>temp) 
		{
            ptr[j+1]=ptr[j];
            j--;
        }
        ptr[j+1]=temp;
    }
    printf("\nSorted arr\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}
	
}
