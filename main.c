 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>mm
#include<string.h>

int main()
{
    //Challenge1_Paire_Impaire();
    //Challenge3_PermutationSousConditions();
    //Challenge4_some_and_triple();
    //Challenge5_Equation_deuxieme_degre();
    Challenge6_Palindrome();

}


void Challenge1_Paire_Impaire(){
	int number;
	printf("enter your number : ");
	scanf("%d" , &number);



	if(number%2 == 0)
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

void Challenge5_Equation_deuxieme_degre(){
     printf("a*X*X + b*X + C = 0 \n");
     int a , b , c ;
     double delta , x1 , x2;

     printf("enter a : "); scanf("%d" , &a);
     printf("enter b : "); scanf("%d" , &b);
     printf("enter c : "); scanf("%d" , &c);




     delta =(double) (b*b) - (4*a*c);

     if(delta == 0){
        x1 = (double) (-b)/(2*a);
        printf("X = %lf" ,x1 );
     }
     else if(delta > 0){
         x1 = (double) (-b - sqrt(delta))/(2*a);
         x2 = (double) (-b + sqrt(delta))/(2*a);
         printf("X1 = %lf\t" , x1);
         printf("X2 = %lf\n" ,  x2);

     }
}


void Challenge6_Palindrome(){
    char Mot[100] = "abdellah el hilaly";
    int tille = strlen(Mot);

    printf("enter une mot SVP : ");
    gets(Mot);
    tille = strlen(Mot);
    char MotInv[tille];

    for(int i = 0 ; i < tille ; i++){
        MotInv[tille - i -1] = Mot[i];
    }



    if(strcmp(Mot , MotInv))
        puts("this mot est non Palindrome\n");

    else
        puts("this mot est Palindrome\n");

    puts(Mot);
    puts(MotInv);


}





















void ChallengeX_Prime_numbers(){
	int number;
	bool isPrime = false;
	printf("enter your number : ");
	scanf("%d" , &number);

	for(int i =2 ; i <=sqrt(number) ; i++){
		if(number%i == 0){
			isPrime = true;
			break;
		}
	}

	if(isPrime)
        printf("this number is Prime");
    else
        printf("this number is not Prime");
}





//___________________________________________________________________________________________________________ karime challenges
//second challenge;
int echanger(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("x=%d,y=%d",x,y);
}

//first  challenge;
int sum(int a,int b){
    return a+b;
}
//challenge :10;
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