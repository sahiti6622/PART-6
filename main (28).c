/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],city[15];
    int length;
    printf("Enter the name of your college\n");
    gets(str);
    puts(str);
    length=strlen(str);
    printf("The length of the string is:%d\n",length);
    printf("enter the name of city\n");
    gets(city);
    printf("The full name of the college is:%s",strcat(str,city));
    printf("\n");
    

    
    
    

    return 0;
}

