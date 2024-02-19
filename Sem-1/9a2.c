//2. Print multiplication table of a given number.
#include<stdio.h>
void main () {
    int i=1,n,count=0;
    printf("KEno table lakhvo tamare");
    scanf("%d",&n);
    while (count<=9)
    {
        printf("%dx%d=%d\n",n,i,i*n);
        i++;
        count++;
    }
    


}