//mystrcpy
#include <stdio.h>

void mystrcpy(char *str1,char *str2);

void main() 
{
    char str1[10]="firstbit";
    char str2[10]; 
    mystrcpy(str1,str2);
    printf("str2= %s",str2);
}

void mystrcpy(char *str1,char *str2)
{
    int i=0;
    while(str1[i] != '\0') {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}

//mystrlen

#include <stdio.h>

int mystrlen(char *str);
 
void main() {
    char str[20] ="firstbit";
    printf("Length= %d",mystrlen(str));
}

int mystrlen(char *str) 
{
    int count=0;
    while(str[count] != '\0') 
	{
    count++;
    }
    return count;
}

//mystrcmp

#include <stdio.h>

int mystrcmp(char *str1,char *str2);

void main() 
{
    char str1[10]="firstbit";
    char str2[10]="firstbit";
    
    printf("%d",mystrcmp(str1,str2));
}
int mystrcmp(char *str1,char *str2)
{
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0') {
        if(str1[i]!=str2[i])
        return str1[i]-str2[i]; 
        i++;
    }
    return str1[i]-str2[i]; 
}

//mystrcat

#include <stdio.h>

void mystrcat(char *,char *);

void main() {
    char str1[20]="first";
    char str2[]="bit";

    mystrcat(str1,str2);

    printf("Str = %s",str1);
}
void mystrcat(char *x, char *y) {
    int i=0;  
    while(x[i] != '\0') {
        i++;
    }
    int j=0;
    while(y[j] != '\0') {
        x[i]=y[j];
        i++;
        j++;
    }
    x[i] = '\0';
}

//mystrncpy


#include <stdio.h>

void mystrncpy(char *,char *,int); 

void main() 
{
    char str1[10];
    char str2[]="firstbit";

    mystrncpy(str1,str2,6);
    str1[6] = '\0';
    printf("str1= %s",str1);
}
void mystrncpy(char *x,char *y,int n) 
{
    int i = 0;
    while(i<n && y[i]!='\0') 
	{
        x[i]=y[i];
        i++;
    }
    while(i<n) 
	{
        x[i] = '\0';
        i++;
    }
}

//mystrupper
#include <stdio.h>

void mystrupper(char *);

void main() 
{
    char str[20]="firstbit";
    mystrupper(str);
    printf("uppercase str = %s",str);
}
void mystrupper(char *str) {
    int i = 0;
    while(str[i] != '\0') 
	{
     if(str[i]>='a' && str[i]<='z') 
	 {
       str[i]=str[i] - 32;
     }
     i++;
    }
}

//mystrlower

#include <stdio.h>

void mystrlower(char *);

void main() 
{
    char str[20]="FIRSTBIT";
    mystrlower(str);
    printf("lowercase str = %s",str);
}
void mystrlower(char *str) {
    int i = 0;
    while(str[i] != '\0') 
	{
     if(str[i]>='A' && str[i]<='Z') 
	 {
       str[i]=str[i] + 32;
     }
     i++;
    }
}

//mystrrev
#include <stdio.h>

void mystrrev(char *); 
void main() 
{
    char str[20] = "firstbit";
    mystrrev(str);
    printf("Reverse Str= %s",str);
}

void mystrrev(char *str) 
{
    int s=0;
    int e=0;
    while(str[e]!='\0') 
	{
        e++;
    }
    e--; 
    
    char temp;
	while(s<e) {
        temp= str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}

//mystrstr
#include <stdio.h>

char* mystrstr(char *,char *); 

void main() 
{
    char str[20] = "firstbit";
    char sub[10] = "fi";

    char *res = mystrstr(str, sub);

    if (res!=NULL) 
	{
        printf("Substring found at position:%ld",res-str);
    } 
	else 
	{
        printf("Substring not found");
    }
}

char* mystrstr(char *mainstr,char *substr) 
{
    if (substr[0]=='\0') 
	{
        return mainstr;
    }
    for (int i = 0;mainstr[i] != '\0';i++) 
	{
        int j = 0;
        while(substr[j]!='\0' && mainstr[i+j]==substr[j]) 
		{
            j++;
        }
        if (substr[j]=='\0') {
            return &mainstr[i];
        }
    }
    return NULL;
}


//mystrcasecmp
#include <stdio.h>

char upper(char); 
int mystrcasecmp(char str1[], char str2[]);

void main() 
{
    char str1[20] = "FirstBit";
    char str2[20] = "firstbit";

    int result = mystrcasecmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal");
    } else if (result < 0) {
        printf("str1 is smaller");
    } else {
        printf("str1 is greater");
    }
}

char upper(char c) 
{
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

int mystrcasecmp(char str1[], char str2[]) 
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = upper(str1[i]);
        char c2 = upper(str2[i]);

        if (c1 != c2) {
            return c1 - c2;
        }
        i++;
    }

    return upper(str1[i]) - upper(str2[i]);
}

//mystrchr
#include<stdio.h>

char* mystrchr(char* ptr,char x);

void main()
{	
	char str[10]="firstbit";
	char ch='b';
	
	char* res = mystrchr(str,ch);
	
	if(res!=NULL)
        printf("Char %c found ", ch);
    else
        printf("Char not found", ch);
}
char* mystrchr(char* ptr, char x)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i] == x)
		{
		    return &ptr[i]; 
        }
    i++;    
    }
   return NULL;
}

//mystrrchr
#include<stdio.h>

char* mystrrchr(char* ptr, char x);

void main()
{	
	char str[10]="firstbit";
	char ch='b';
	
	char* res = mystrrchr(str,ch);
	
	if(res!=NULL)
        printf("Char '%c' found at position: %ld\n", ch, res - str);
    else
        printf("Char not found", ch);
}
char* mystrrchr(char* ptr, char x)
{
	char* last = NULL;
    int i = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] == x)
        {
            last = &ptr[i]; 
        }
        i++;
    }

    return last;
}


//mystrncmp
#include <stdio.h>

int mystrncmp(char *str1, char *str2, int n);

void main() 
{
    char str1[10] = "firstbit";
    char str2[10] = "firstbox";
    int n = 5;

    printf("%d", mystrncmp(str1, str2, n));
}

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;
    while(i < n && str1[i] != '\0' && str2[i] != '\0')
	{
        if(str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    if (i < n)
        return str1[i] - str2[i];

    return 0;
}


//mystrncat
#include <stdio.h>

char* mystrncat(char *dest, char *src, int n);

void main()
{
    char dest[20] = "first";
    char src[10] = "bit";

    mystrncat(dest, src, 2);  

    printf("Result: %s\n", dest);  \
}

char* mystrncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;
    while (dest[i] != '\0') 
	{
        i++;
    }
    while (src[j] != '\0' && j < n) 
	{
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';  

    return dest;
}


//mystrncasecmp
#include <stdio.h>

int mystrncasecmp(char *str1, char *str2, int n);
char toLower(char ch);  

void main()
{
    char str1[10] = "First";
    char str2[10] = "fIRst";

    int result = mystrncasecmp(str1, str2, 5);

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        char c1 = toLower(str1[i]);
        char c2 = toLower(str2[i]);

        if (c1 != c2)
            return c1 - c2;

        i++;
    }

    if (i < n)
        return toLower(str1[i]) - toLower(str2[i]);

    return 0;
}

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else
        return ch;
}




