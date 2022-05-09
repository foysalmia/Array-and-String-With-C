/*Write a C program to insert element in array at specified position.
Example
Input
Input array elements: 10, 20, 30, 40, 50
Input element to insert: 25
Input position where to insert: 3

Output
Elements of array are: 10, 20, 25, 30, 40, 50
*/


#include <stdio.h>
int main(){
    int n;
    printf("How numbers : ");
    scanf("%d",&n);
    int numbers[n],newNumbers[n+1],speNum,index;
    printf("Add numbers : ");
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }

    printf("Input element to insert: ");
    scanf("%d",&speNum);
    printf("Input position where to insert: ");
    scanf("%d",&index);

    for(int i=0,j=0;i<n;i++,j++){
        if(i == index - 1){
            newNumbers[i] = speNum;
            printf("%d ",newNumbers[i]);
        }
        newNumbers[i] = numbers[j];
        printf("%d ",newNumbers[i]);
    }


return 0;
}
