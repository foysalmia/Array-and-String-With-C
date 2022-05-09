/*Write a C program to find reverse of a given string.
Example
Input
	Hello
Output
Reverse string: olleH

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);

    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }



    return 0 ;
}
