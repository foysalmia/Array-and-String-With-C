/*Write a C program to input elements in array and search whether an element exists in array or not
Example
Input
Input size of array: 10
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Output
Element to search is: 25
Element found at index 3
*/
#include<stdio.h>
int main(){
    int n;
    printf("Input size of array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int element;
    printf("\nInput the element : ");
    scanf("%d",&element);

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            printf("Element found at index %d",i);
            break;
        }else{
            count++;
        }
    }
    if(count==n){
        printf("Element Not found and index %d",-1);
    }

return 0;
}
