#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main()
{
    printf("enter two  numbers");
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d+%d=%d",a,b,sum(a,b));
    
    return 0;
}