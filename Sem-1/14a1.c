#include<stdio.h>
void main()
{
    int arr[5],i,cp=0,cn=0;
    for(i=0;i<5;i++){
        printf("enter element into arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--){
        printf("arr[%d]:%d\n",i,arr[i]);
    }
}