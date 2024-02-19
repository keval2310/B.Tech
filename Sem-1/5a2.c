#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter an int val a : ");
    scanf("%d", &a);
    printf("enter an int val b : ");
    scanf("%d", &b);
    c=b;
    b=a;
    a=c;
    printf("a=%d b=%d",a,b);
}