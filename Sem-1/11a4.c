#include<stdio.h>
void main() {
    int x,y,z=1,i=1;
    printf("enter X : ");
    scanf("%d",&x);

    printf("enter X's power : ");
    scanf("%d",&y);


    for(i=1;i<=y;i++){
        if(y==0){
            printf("1");
        }else{
        z=z*x;
        }
    }
printf("%d",z);
}
