 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
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



















//Ayoub Challenges:

//Chapter I : conditions
//First Challenge: (Fahrenheit --> Celesius)

void farthtoCls (){
	int degree;
	printf("Enter a Fahrenheit degree to convert: ");
	scanf("%d", &degree);
	int result = (degree-32)/1.8;
	printf("%d Celsius \n" , result);
		
	if(result <= 0){
		printf("très froid");
	}else if (result <= 25){
		printf("froid");
	}else if (result <= 35){
		printf("Chaud");
	}else if(result > 35){
		printf("tres chaud");
	}
}

// Second Challenge: (Paire ou Impaire)

void Paire_Impaire(){
	
	int num;
	printf("enter your number: ");
	scanf("%d", &num);
	int numtest = num % 2;
	
	if(numtest == 1){
		printf("impaire");
	} else if(numtest == 0){
		printf("paire");
	}

}
















