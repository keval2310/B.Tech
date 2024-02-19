#include<stdio.h>
void main()
{
    int arr[5],cp=0,cn=0,i;
    for(i=0;i<5;i++){
        printf("enter a value into arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]>=0){
            cp++;
        }
        else{
            cn++;
        }
    }
    printf("positive : %d and negative %d",cp,cn);
}