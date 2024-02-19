#include<stdio.h>
void main() {
    int i=1,n;
printf("Enter N:\n");
scanf("%d",&n);
while(i<=n){
    if(i%2!=0){
    printf("%d\t",i);
    }
    i=i+1;

}
}