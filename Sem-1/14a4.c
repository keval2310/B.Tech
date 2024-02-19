#include<stdio.h>
void main() {
    int arr[5],i,max,min,n,sum=0;
    float avg=1;
    printf("enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter your num in arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        
        if(max<arr[i]) {
            max= arr[i];
        }
    }
    
    for(i=0;i<n;i++){
        
        if(min>arr[i]) {
            min=arr[i];
        }
    }
    
    
      for(i=0;i<n;i++){  
       sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("min no is = %d, max no is = %d, average is = %f and sum is = %d",min,max,avg,sum);
}