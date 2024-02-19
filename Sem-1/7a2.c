#include<stdio.h>
void main () {
    int i;
    printf("enter your number : ");
    scanf("%d",&i);

       i=i%12;
    
    switch(i)
    {
        case 0:
        printf("januarary : 31");
        break;
        
        case 1:
        printf("feb : 28");
        break;

        case 2:
        printf("march : 31");
        break;

        case 3:
        printf("april : 30");
        break;

        case 4:
        printf("may : 31");
        break;

        case 5:
        printf("june : 30");
        break;

        case 6:
        printf("july : 31");
        break;

        case 7:
        printf("august : 31");
        break;

        case 8:
        printf("september : 30");
        break;

        case 9:
        printf("octumber : 31");
        break;

        case 10:
        printf("november: 30");
        break;

        case 11:
        printf("december: 31");
        break;

                
    }
}