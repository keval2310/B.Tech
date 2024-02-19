#include<stdio.h>
void main()
{
    int arr[5],oddcount=0,evencount=0,i;
    for(i=0;i<5;i++){
        printf("enter a value into arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("oddcount = %d and evencount = %d",oddcount,evencount);
}