//challenge of palindrome;
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char string[])
{
    int length = strlen(string);
    int len = strlen(string)/2;
    for(int i=0;i<len;i++){
        if(string[i] == string[length-i-1]){
        return true;
        }
      
    }
    return false;
}



int main()
{
   
    char name[] = "kayak";
    char name2[] = "loyol";
    char name3[] = "happiness";
    //char name[] = "kayak";
    if(ispalindrome(name))
    {
        printf("%s is a palindrome\n",name);
    }
    else {
        printf("%s is a not palindrome\n",name);
    }
     if(ispalindrome(name2))
    {
        printf("%s is a palindrome\n",name2);
    }
    else {
        printf("%s is a not palindrome\n",name2);
    }
    if(ispalindrome(name3))
    {
        printf("%s is a palindrome\n",name3);
    }
    else {
        printf("%s is a not palindrome\n",name3);
    }
    return 0;
}