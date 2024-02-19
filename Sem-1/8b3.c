//3. Print first 50 numbers in series 1, 4, 7, 10…
#include<stdio.h>
void main()  {
    int i=1,count=0;
    
    while(count<=50) {
        
        printf("%d\n",i);
        i=i+3;
        count++;
    }

}