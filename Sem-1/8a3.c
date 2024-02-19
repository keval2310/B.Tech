//3. Print numbers between two given numbers which is divisible by 2
#include<stdio.h>
void main() {
    int i=0,n,o,temp;
printf("Enter N:\n");
scanf("%d",&n);
printf("Enter O:\n");
scanf("%d",&o);
if(n>o){
    temp=n;
    n=o;
    o=temp;
}
i=n;

while(i>=n&&i<=o){
     if(i%2==0){
    printf("%d\t",i);
    }
    i=i+1;
}
}