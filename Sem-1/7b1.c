//1. Read 3 numbers, multiply largest number from first two numbers to third one using conditional opreator.
#include<stdio.h>
void main (){
int a,b,c,i;
printf("Enter a,b,c : \n");
scanf("%d %d %d",&a,&b,&c);

i=(a>b)?a*c:b*c;
printf("%d",i);
}