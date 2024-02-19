//1. Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main() {
    char a,b;
    
     a='a';
     b='A';

    while(a<='z'){
       
        printf("%c",a);
        a++;

    }printf("\n");
    while(b<='Z'){
        printf("%c",b);
        b++;
    }

}
 