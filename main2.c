#include<stdio.h>

int main()
{
     char name[50];
    printf("please enter a name,recommended to be palindrome \n ");
    scanf("%s",name);
    printf("the name you give is : %s\n",name);
    printf("%c\n",name[0]);
    for(int i=0;i<50;i++)
    {
        for(int j=50;j>i;j--)
        {
            name[i]==name[j];
        }
    } 
    return 0;
}