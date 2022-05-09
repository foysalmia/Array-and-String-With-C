/*Write a C program to find total number of vowels and consonants in a string using loop and if else. How to find total number of vowels and consonants in a string using switch case in C programming. Logic to count number of vowels and consonants in a string.
Example
Input
Input string: I love Philtron.
Output
Total Vowels = 5
Total Consonants = 8
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{


    char ch[50];
    int v = 0;
    int c = 0;

    printf("Type a string : ");

    gets(ch);

    for(int i = 0 ; i<strlen(ch); i++)
    {


        if(isalpha(ch[i]))
        {
            switch(ch[i])
            {

            case 'a' :
            case 'A' :
                v++;
                break;
            case 'e' :
            case 'E' :
                v++;
                break;
            case 'i' :
            case 'I' :
                v++;
                break;
            case 'o' :
            case 'O' :
                v++;
                break;
            case 'u' :
            case 'U' :
                v++;
                break;
            default :
                c++;
            }
        }



    }


    printf("Vowel %d\n",v);

    printf("Consonants %d",c);


    return 0;

}
