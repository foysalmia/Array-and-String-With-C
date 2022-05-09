/*Write a C program to find the second largest element in an array.
Example
Input
Input array elements: -7 2 3 8 6 6 75 38 3 2
Output
Second largest = 38
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max = 0,secondLage = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max = a[i];
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(max == a[i])
        {
            continue;
        }
        else if(secondLage<a[i])
        {
            secondLage = a[i];
        }
    }

    printf("Second largest = %d",secondLage);
    return 0;
}
