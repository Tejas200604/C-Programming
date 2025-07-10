
#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Maxmin(int*, int);

void main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Elements of array: ");
    PrintArray(arr, size);

    Maxmin(arr, size);
    free(arr);
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Maxmin(int *ptr, int size) {
    int max = ptr[0];
    int min = ptr[0];

    for (int i = 1; i < size; i++) {
        if (ptr[i] > max)
            max = ptr[i];
        if (ptr[i] < min)
            min = ptr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}




#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Found(int*, int, int);

int main() 
{
    int *arr;
    int size, num;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    if (arr == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Enter number to search: ");
    scanf("%d", &num);

    Found(arr, size, num);
    free(arr);

    return 0;
}

void StoreArray(int* ptr, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) 

{
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Found(int* ptr, int size, int num) 
{
    int found = 0;
    for (int i = 0; i < size; i++) 
	{
        if (ptr[i] == num) 
		{
            printf("Number %d found at index %d\n", num, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number %d not found in array.\n", num);
}




//3. Find sum of all numbers.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void Sum(int*, int);

void main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter the numbers:\n");
    StoreArray(arr, size);

    Sum(arr, size);

    free(arr);
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void Sum(int* ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    printf("\nSum = %d\n", sum);
}




#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Evenodd(int*, int);

int main() {
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Elements of array:\n");
    PrintArray(arr, size);

    Evenodd(arr, size);

    free(arr);

    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Evenodd(int* ptr, int size) {
    printf("\nEven Numbers Are:\n");
    for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 == 0) {
            printf("%d ", ptr[i]);
        }
    }

    printf("\nOdd Numbers Are:\n");
    for (int i = 0; i < size; i++) {
        if (ptr[i] % 2 != 0) {
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");
}



//5. Print alternate elements in array.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Alter(int*, int);

int main() {
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("All Elements:\n");
    PrintArray(arr, size);

    printf("\nAlternate Elements:\n");
    Alter(arr, size);

    free(arr);

    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Alter(int* ptr, int size) {
    for (int i = 0; i < size; i += 2) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}




//6. Accept array and print only prime numbers of array.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Prime(int*, int);

int main() 
{
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

   
    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    StoreArray(arr, size);

    printf("Elements of array:\n");
    PrintArray(arr, size);

    printf("\nPrime Numbers Are:\n");
    Prime(arr, size);

    free(arr);  
    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Prime(int *ptr, int size) 
{
    for (int i = 0; i < size; i++) {
        int num = ptr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}




/*7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}*/

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void Sum(int*, int*, int*, int);

int main() {
    int *arr, *brr, *crr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    brr = (int*) malloc(size * sizeof(int));
    crr = (int*) malloc(size * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of arr:\n");
    StoreArray(arr, size);

    printf("Enter elements of brr:\n");
    StoreArray(brr, size);

    printf("Elements of arr:\n");
    PrintArray(arr, size);

    printf("Elements of brr:\n");
    PrintArray(brr, size);

    Sum(arr, brr, crr, size);

    printf("Sum of Arrays (crr):\n");
    PrintArray(crr, size);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void Sum(int *ptr1, int *ptr2, int *ptr3, int size) {
    for (int i = 0; i < size; i++) {
        ptr3[i] = ptr1[i] + ptr2[i];
    }
}



//8. Merge two arrays

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void MergeArrays(int*, int, int*, int, int*);

int main() {
    int *arr, *brr, *crr;
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    arr = (int*) malloc(size1 * sizeof(int));
    brr = (int*) malloc(size2 * sizeof(int));
    crr = (int*) malloc((size1 + size2) * sizeof(int));

    if (arr == NULL || brr == NULL || crr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of first array:\n");
    StoreArray(arr, size1);

    printf("Enter elements of second array:\n");
    StoreArray(brr, size2);

    printf("First array:\n");
    PrintArray(arr, size1);

    printf("Second array:\n");
    PrintArray(brr, size2);

    MergeArrays(arr, size1, brr, size2, crr);

    printf("Merged array:\n");
    PrintArray(crr, size1 + size2);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void MergeArrays(int* ptr1, int size1, int* ptr2, int size2, int* merged) {
    for (int i = 0; i < size1; i++) {
        merged[i] = ptr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = ptr2[i];
    }
}




//9. Reverse the given array.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void ReversePrint(int*, int);

int main() {
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of array:\n");
    StoreArray(arr, size);

    printf("Original array:\n");
    PrintArray(arr, size);

    printf("Reversed array (printing):\n");
    ReversePrint(arr, size);

    free(arr); 
    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void ReversePrint(int* ptr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}



#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void ReverseArray(int*, int);

int main() {
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of array:\n");
    StoreArray(arr, size);

    printf("Original array:\n");
    PrintArray(arr, size);

    ReverseArray(arr, size);

    printf("Array after in-place reverse:\n");
    PrintArray(arr, size);

    free(arr);

    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void ReverseArray(int* ptr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = ptr[i];
        ptr[i] = ptr[size - 1 - i];
        ptr[size - 1 - i] = temp;
    }
}

