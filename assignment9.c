
#include <stdio.h>
#include <string.h>
void main() {
    char str[] = "Hello";
    printf("Length: %lu", strlen(str));
}

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[] = "World";
	char str2[10];
    strcpy(str2, str);
    printf("Copied: %s",str2);
}

#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Tejas"; 
	char str2[10];
    strncpy(str2, str, 4);
    str2[4] = '\0';
    printf("Copied:%s", str2);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    printf("%d", strcmp("abc","abc"));
}

#include <stdio.h>
#include <string.h>

int main() {
    char *pos = strrchr("hello", 'l');
    printf("%s", pos);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    char str1[10] = "Hello "; 
	char str2[] = "World";
    strcat(str1, str2);
    printf("Concatenated: %s", str1);
}

#include <stdio.h>
#include <string.h>

void main() {
    
	char str1[10] = "Hello ";
	char str2[] = "World";
    strncat(str1, str2, 3);
    printf("Concatenated: %s", str1);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    printf("%d", strncmp("abcde", "abcfg", 3));
}

#include <stdio.h>
#include <string.h>

int main() {
    char *pos = strrchr("hello", 'l');
    printf("%s", pos);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    char *p = strstr("abcdef", "cd");
    printf("%s\n", p);
}

#include <stdio.h>
#include <string.h>

void main() {
    char *p = strpbrk("banana", "aeiou");
    printf("%c\n", *p);
}

#include <stdio.h>
#include <string.h>

void main() {
    printf("%lu\n", strspn("abcde123", "abcde"));
}

#include <stdio.h>
#include <string.h>

void main() {
    printf("%lu\n", strcspn("abc123", "123"));
}

#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Copy";
	char str2[10];
    memcpy(str2, str, strlen(str)+1);
    printf("%s", str2);
}

#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abcdef";
    memmove(str+2, str, 4);
    printf("%s", str);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    printf("%d\n", memcmp("abc", "abc", 3));
    
}

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[10];
    memset(str, '*', 5);
    str[5] = '\0';
    printf("%s", str);
}

#include <stdio.h>
#include <string.h>

void main() 
{
    char *copy = strdup("Clone");
    printf("%s\n", copy);
    free(copy);
    
}
