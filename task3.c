#include <stdio.h>
int main(){
    int num,first,last,sum;
    printf("enter a number");
    scanf("%d",&num);
    last=num%10;
    first=num;
    while (first>10){
        first=first/10;
        
    }
    sum=first+last;
    printf("sum is %d",sum);

    
    
    return 0;
}
