//print a solid square pattern...

#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("* ");
		}
		printf("\n");
	}
}*/

// Print a right-angled triangle pattern...

#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//Print an inverted right-angled triangle pattern...

#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;i+j<=6;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//pyramid pattern

#include <stdio.h>

void main() {
    int n = 5,i,j,s;
    for( i=1;i<=n;i++) {
        for(s=1;s<=n-i;s++){
        	printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

//Print an inverted pyramid pattern...

#include<stdio.h>
void main(){
	int n=5,i,j,s;
	for(i=n;i>=1;i--){
          for(s=1;s<=n-i;s++){
        	printf(" ");  
	    }
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
}}

//Print a half pyramid using numbers...

#include<stdio.h>
void main(){
	int n=5,i,j,s;
	for(i=1;i<=n;i++){
		for(s = 1;s <= n-i; s++){
        	printf(" ");
        }
		for(j = 1;j <= i; j++){
			printf("%d", j );
		}
		printf("\n");
	}
}

//Print a Floyd’s triangle pattern

#include<stdio.h>
void main(){

	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;i+j<=6;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

//Print a pattern of stars in diamond shape

#include<stdio.h>
void main() {
    int n = 4,i,j,s;
    for(i=1;i <= n;i++) {
        for(s=1;s<= n-i;s++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--) {
        for(s=1;s<=n-i;s++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}

//Print a hollow square pattern

#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				printf("* ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}

// Print a hollow square with diagonal pattern...

#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||i==j){
				printf("* ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}

