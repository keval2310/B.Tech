#include<stdio.h>
void main()
{
	int Day,y,w,d;
	printf("enter your day : ");
	scanf("%d",&Day);

	y=Day/365;
	w=(Day-y*365)/7;
	d=(Day-y*365-w*7);

	printf("y=%d w=%d d=%d",y,w,d);
}