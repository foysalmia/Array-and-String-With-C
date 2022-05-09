/*Write a C program to find the distinct values and their frequency in an array. Each value should be printed only once. The values in the array are between 0 and 100.
Example Input
Input elements: 10, 20, 50, 40, 50, 10, 40
Output
	There are five distinct values.
	10 occurs 2 times.
20 occurs 1 times.
40 occurs 2 times.
50 occurs 2 times.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter How many numbers: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int length = sizeof(arr)/sizeof(arr[0]);

    int freq[length];
    int visited = -1,total = 0;

    for(int i=0; i<length; i++)
    {
        int count = 1;
        for(int j=i+1; j<length; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = visited;
            }
        }
        if(freq[i] != visited)
        {
            freq[i] = count;
        }
    }


    for(int i = 0 ; i<length; i++)
    {
        if(freq[i] != visited)
        {
            total++;
        }
    }

    printf("There are %d distinct values.\n",total);

    for(int i = 0 ; i<length; i++)
    {

        if(freq[i] != visited)
        {
            printf("%d occurs %d times.\n",arr[i],freq[i]);
        }
    }

    printf("\n\n\n");

    int len = sizeof(freq)/sizeof(freq[0]);

    for (int i=0;i<len;i++){
        printf(" %d  ",freq[i]);
    }

    return 0;
}
