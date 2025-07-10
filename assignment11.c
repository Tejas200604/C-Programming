// Write a program to scan string from user then scan a single character and search it in a accepted string.

#include <stdio.h>

void main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);  
    
    printf("Enter a character to search: ");
    scanf(" %c", &ch); 
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at position %d\n", ch, i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }
}


// WAP Replace all Occurrences of ‘a’ with $ in a String

#include <stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    printf("Modified string: %s\n", str);
}


// WAP to Remove the nth Index Character from a Non-Empty String

#include <stdio.h>

void main()
{
    char str[100];
    int i, n;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the index to remove: ");
    scanf("%d", &n);

    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    if (n < 0 || n >= length) 
	{
        printf("Invalid index!\n");
    } else 
	{
        for (i = n; i < length; i++) 
		{
            str[i] = str[i + 1];
        }

        printf("Modified string: %s\n", str);
    }
}

//WAP to Form a New String where the First Character and the Last Character have 
//been Exchanged 
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int len;
    char temp;

    printf("Enter a string: ");
    gets(str); 

    len = strlen(str);

    if (len < 2) 
	{
        printf("String is too short to swap characters.\n");
    } 
	else 
	{
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;

        printf("Modified string: %s\n", str);
    }
}

//WAP to Count the Number of Vowels in a String 
#include <stdio.h>

void main()
{
    char str[20];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i=0;str[i]!='\0';i++) 
	{
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
			{
            count++;
            }
    }

    printf("Number of vowels: %d\n", count);
}



// WAP to Take in a String and Replace Every Blank Space with special symbol.

#include <stdio.h>

void main()
{
    char str[100];
    char symbol;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the symbol to replace spaces with: ");
    scanf(" %c", &symbol); 

    for (i=0;str[i]!='\0';i++) 
	{
        if (str[i] == ' ')
		{
            str[i] = symbol;
        }
    }

    printf("Modified string: %s\n", str);
}


// WAP to Remove the Characters of Odd Index Values in a String

#include <stdio.h>

void main()
{
    char str[100],newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (i % 2 == 0) 
		{
            newStr[j]=str[i];
            j++;
        }
    }

    newStr[j] = '\0'; 

    printf("Modified string (odd index chars removed): %s\n", newStr);
}


// WAP to Calculate the Number of Words Present in a String

#include <stdio.h>

void main()
{
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        
        if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
            count++;
        }
    }
    
    if (str[0] != '\0' && str[0] != ' ')
        count++;

    printf("Number of words: %d\n", count);
}



// WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include <stdio.h>

void main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++) 
	{
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++) 
	{
        len2++;
    }

    if (len1 > len2)
        printf("Larger string: %s\n", str1);
    else if (len2 > len1)
        printf("Larger string: %s\n", str2);
    else
        printf("Both strings are of equal length.\n");
}

// Write a program to check the string is palindrome or not.

#include <stdio.h>

void main()
{
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);  
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

