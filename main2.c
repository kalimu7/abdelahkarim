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
//challenge changing the date 15/10/2022 to 15/october/2022
#include <stdio.h>

int main()
{
    int d,m,y;
 
   printf("enter a date under this type:day/mounth/year\n");
   scanf("%d %d %d",&d,&m,&y);
   if(m==1){
        char mounth[] = "january";
        printf("%d/%s/%d",d,mounth,y);
   }else if(m==2){
        char mounth[] = "feb";
        printf("%d/%s/%d",d,mounth,y);
   }else if(m==3){
        char mounth[] = "march";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==4){
        char mounth[] = "april";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==5){
        char mounth[] = "may";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==6){
        char mounth[] = "june";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==7){
        char mounth[] = "july";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==8){
        char mounth[] = "augest";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==9){
        char mounth[] = "september";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==10){
        char mounth[] = "october";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==11){
        char mounth[] = "november";
        printf("%d/%s/%d",d,mounth,y);
       
   }else if(m==12){
        char mounth[] = "december";
        printf("%d/%s/%d",d,mounth,y);
       
   }
   
   //challenge 10 //random day of the week
   #include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i =0;i<20;i++){
    //printf("Hello, World!\n");
    int random;
    random = rand() % 7;
    //printf("%d\n",random);
    switch (random) {
        case 0:
            printf("monday\n");
            break;
        case 1:
            printf("tuesday\n");
            break;
        case 2:
            printf("wensday\n");
            break;
        case 3:
            printf("thursday\n");
            break;
        case 4:
            printf("friday\n");
            break;
        case 5:
            printf("saturday\n");
            break;
        case 6:
            printf("sunday\n");
            break;
    }
    }
    return 0;
}

//challenge 11;there is some better way to do it with less code :)
#include <stdio.h>


int main() {
    //just to rerun the program many times.
    for(;;){
    int H1,M1,S1;
    int H2,M2,S2;
    printf("entrer un instant de ka forme HH:MM:SS\n");
    scanf("%d %d %d",&H1,&M1,&S1);
    printf("entrer un deuxieme instant de ka forme HH:MM:SS\n");
    scanf("%d %d %d",&H2,&M2,&S2);
    if(H1>H2){
        printf("Le deuxieme instant vient avant le premiere");
    }else if(H1<H2){
        printf("Le premier instant vient avant le deuxième");
    }else if(H1=H2){
    if(M1>M2){
        printf("Le deuxieme instant vient avant le premiere");
    }else if(M1<M2){
        printf("Le premier instant vient avant le deuxième");
    }else if(M1==M2){
        if(S1>S2){
            printf("Le deuxieme instant vient avant le premiere");
        }else if(S1<S2){
            printf("Le premier instant vient avant le deuxième");
        }else if(S1=S2){
            printf("is sagit du meme moment\n");
        }
    }
    }
    printf("\n-------------------------------------------------------------------\n");
    }
    return 0;
}
// ill do it the 2nd way
//karim ch12
#include <stdio.h>
#include <math.h>

int main()
{
    //need to include math library
    float xa,ya;
    float xb,yb;
    float xm,ym;
    printf("entrer les extremme cordonnee du segmrnt [AB]\n");
    printf("point A \n");
    scanf("%f %f",&xa,&ya);
    printf("point B \n");
    scanf("%f %f",&xb,&yb);
    printf("enter point M\n");
    scanf("%f %f",&xm,&ym);
    float F =pow((xb-xa),2);
    float S =pow((yb-ya),2);
    float AB = sqrt(F+S);
    printf("la distance AB est :%.2f\n",AB);
    //AM
    float AM = sqrt(pow((xm-xa),2)+pow((ym-ya),2));
    //MB
    float MB = sqrt(pow((xb-xm),2)+pow((yb-ym),2));
    printf("%.2f + %.2f = %.2f  \n",AM,MB,AM+MB);
    if(AM+MB == AB){
        printf("M appartient a [AB]\n");
    }else{
        printf("M appartient pas [AB]\n");
    }
    return 0;
}