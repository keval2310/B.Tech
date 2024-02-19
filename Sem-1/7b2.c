//Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
void main() {
        char i,c;
        printf("enter anything : \n");
        scanf("%c",&i);
        c=((i>='a'&&i<='z')||(i>='A'&&i<='Z'))? printf("it is a alphabet"):printf("it not an alphabet");
        
}