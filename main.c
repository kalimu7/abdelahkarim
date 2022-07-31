#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    //Challenge_Paire_Impaire();
    //Challenge3_PermutationSousConditions();
    Challenge4_some_and_triple();

}

void Challenge1_Paire_Impaire(){
	int number;
	bool isPaire = false;
	printf("enter your number : ");
	scanf("%d" , &number);

	for(int i =2 ; i <=sqrt(number) ; i++){
		if(number%i == 0){
			isPaire = true;
			break;
		}
	}

	if(isPaire)
        printf("this number is paire");
    else
        printf("this number is not paire");
}

void Challenge3_PermutationSousConditions(){
    int n1 , n2 ;
    printf("inter your first number :");
    scanf("%d" , &n1);
    printf("inter your second number :");
    scanf("%d" , &n2);

    if(n1 > n2) printf("%d > %d " , n1 , n2);
    else  if(n1 < n2) printf("%d < %d " , n1 , n2);
    else printf("%d = %d " , n1 , n2);
}

void Challenge4_some_and_triple(){
     int n1 , n2 ;
    printf("inter your first number :");
    scanf("%d" , &n1);
    printf("inter your second number :");
    scanf("%d" , &n2);

    if(n1 != n2)
        printf("%d + %d = %d" , n1 , n2 , n1+n2);
    else
        printf("the triple of  %d = %d" , n1, 3*n1);
}



=======
//challenge1: partie function
//challenge2:
#include <stdio.h>
//first challenge;
int sum(int a,int b){
    return a+b;
}
//second challenge;
int echanger(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("x=%d,y=%d",x,y);
}

int main()
{
    //first challenge;
    printf("enter two  numbers");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d",a,b,sum(a,b));
    //seconf challenge
    int x,y;
    printf("enter first value x:\n");
    scanf("%d",&x);
    printf("enter second value y:\n");
    scanf("%d",&y);
    printf("x= %d and y= %d\n",x,y);
     echanger(x,y);//still have to do it with pointers;
    
    return 0;
}

>>>>>>> 8680a419e9db1bbc2524b074879fd1217b4afa04
