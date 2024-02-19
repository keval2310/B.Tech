#include<stdio.h>
#include<math.h>
void main() {
    
    float a,b,c,x1,x2,d;

    printf("Your equation is ax^2+bx+c and enter your a,b and c : ");
    scanf("%f %f %f",&a,&b,&c);
   

  if(a==0) {
    printf("you have only one root x = %f",-c/b);
  } 
  else if (d<0) 
  {
    printf("X have no real roots");
  }

else if (d>=0)
{   d=(b*b) - 4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Your roots are %f %f",x1,x2);
    
}

}