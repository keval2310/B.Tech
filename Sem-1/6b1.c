// electricity bill problem which has to be solved according
// to the given condition '
//for first fifty units rs 0.50/unit
//for next 100 units rs 0.75/unit
// for next 100 units rs 1.20/unit
// for unit above 250 rs 1.50/unit
 

#include<stdio.h>
int main() {
    
    int unit;
    float total;
    printf("Enter your total used units here : ");
    scanf("%d", &unit);
    
    if(unit<=50) 

    {
        total = unit*0.5;
    }


    else if(unit<=150)
    
    { 
        total = (50*0.5) + ((unit-50)*0.75);
    }
    
    
    else if(unit<=250)
    
    { 
        total = (50*0.5) + (100*0.75) + ((unit-150)*1.20);
    }   
    
    
    else if(unit>250)
    { 
        total = (50*0.5) + (100*0.75) +(100*1.20) + ((unit-250)*1.50);
    }   
    
    total = total+total*0.2;

    printf("Your total bill is : %0.2f",total);

}