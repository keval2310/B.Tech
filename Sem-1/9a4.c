//4. Find factorial of the given number.
#include<stdio.h>
void main() {
    int i=1,n,fac=1;
    printf("ENter n");
    scanf("%d",&n);
    while(i<=n) {
        fac=fac*i;
        i++;
    }
    printf("%d",fac);
}