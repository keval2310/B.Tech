#include<stdio.h>
void main()
{ 
   int a,b,c;
   printf("enter an int val a : ");
   scanf("%d", &a);
   printf("enter an int val b : ");
   scanf("%d", &b);
   printf("enter an int val c : ");
   scanf("%d", &c);
   if(a>b&&a>c){  
           printf("a is largest");
   }
   if(b>c&&b>a){  
           printf("b is largest");
   }
   else{
   	printf("c is largest");
   }
}
