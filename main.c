#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>mm
#include<string.h>
#include <time.h>

int main()
{
    //Challenge1_Paire_Impaire();
    //Challenge3_PermutationSousConditions();
    //Challenge4_some_and_triple();
    //Challenge5_Equation_deuxieme_degre();
    //Challenge6_Palindrome();
    //Challenge7_EleveMention();
    //Challenge8_Alphabet();
    Challenge9_DateFormate();

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
void Challenge7_EleveMention(){
    float moy;
    puts("enter votr  Moyenne STP :");
    scanf("%f" , &moy);

    if(moy < 10) puts("vous aver recalé.");
    else if(moy>=10 && moy < 12) puts("vous avez obtienue la mention passable.");
    else if(moy>=12 && moy < 14) puts("vous avez obtienue la mention assez bien.");
    else if(moy>=14 && moy < 16) puts("vous avez obtienue la mention bien.");
    else if(moy>=16 && moy <=20) puts("vous avez obtienue la mention très  bien.");
    else puts("moyenne error ");
}

void Challenge8_Alphabet(){
    printf("enter your chracter please : ");
    char ctr;
    char AlphabetMaj[] = "ABCDEFGHIJKLMONPQRSTUVWXYZ";
    char AlphabetMin[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%c" , &ctr);


    if(strchr(AlphabetMaj , ctr)) puts("this character is a MAJ Alphabet");
    else if(strchr(AlphabetMin , ctr)) puts("this character is a MIN Alphabet");
    else puts("this character is not a  Alphabet");
}


void Challenge9_DateFormate(){
    char dat[10];
    puts("enter the date as format dd/MM/yyyy");
    scanf("%s" , &dat);






    int dd = GetDay(dat);
    int MM = GetMonth(dat);
    int yyyy = GetYear(dat);

    if(dd>0 && dd<=31){
        if(MM>0 && MM <= 12){
            if(yyyy>0){
                puts("--------------------------------------------------- dat with integer ");

                printf("day is : %d\tmonth is :%d\tyear is : %d\n" , dd , MM , yyyy);

                puts("--------------------------------------------------- dat with string month");

                char cnvMM[20]; //new arry char for copy coverst month int to month string

                printf("day is : %d\tmonth is :%s\tyear is : %d\n" , dd , ConverstMont(MM , cnvMM) , yyyy);

                puts("---------------------------------------------------final result\n\n");


                printf("%d-%s-%d\n\n" , dd , ConverstMont(MM , cnvMM) , yyyy);


            } else puts("your date (DAY) is not true !!!");
        }else puts("your date (MONTH) is not true !!!");
    }else puts("your date (YEAR) is not true !!!");



}






int  GetDay(char dat[]){
    int i = 0; int dd = 0;

    while(true){
       // printf("%c" , dat[i]);
        if(strchr("0123456789" , dat[i] )) // trust to dd is a nuber
            dd =  dd*10 +  (int) dat[i] - 48; // bach na5do 4ir day
        else dd = -1;

        i++;

        if(dat[i] == '/'  )  break;


    }

    return dd;

}





int  GetMonth(char dat[]){
    int i = 0; int MM = 0;
    bool is_mont = false; // move from dd to MM hit hna b4ina njebdo MM  for converst it from string to int
    while(true){
       // printf("%c" , dat[i]);

        if(is_mont){
            if(strchr("0123456789" , dat[i] )) // trust to MM is a nuber
                MM =  MM*10 +  (int) dat[i] - 48; // bach na5do 4ir Month
            else MM = -1;
        }

        i++;

        if(dat[i] == '/' && !is_mont){
            is_mont = true;
            i++;
        }
        if(dat[i] == '/' && is_mont)  break;
    }

    return MM;
}

int  GetYear(char dat[]){
    int i = 0; int yyyy = 0;
    bool is_mont = false; // move from dd to MM hit hna b4ina njebdo MM  for converst it from string to int
    bool is_year = false; // move from MM to yyyy hit hna b4ina njebdo yyyy  for converst it from string to int
    bool stop = false; // hit makaynach '/' in end bach nw9fo lbookl so 5asna another  tari9a
    while(true){
       // printf("%c" , dat[i]);

        if(is_year){ // bach na5do 4ir year
            for(int j = i ; j < strlen(dat) ; j++){
                if(strchr("0123456789" , dat[i] )) // trust to yyyy is a nuber
                    yyyy =  yyyy*10 +  (int) dat[j] - 48;
                else yyyy = -1;
            }
            stop = true;
        }

        i++; // mov 3ala string

        if(dat[i] == '/' && !is_mont){
            is_mont = true;
            i++;
        }
        
        if(dat[i] == '/' && is_mont && !is_year){
            is_year = true;
            i++;
        }
        if(stop)  break;
    }
    return yyyy;
}


void ConverstMont(int MM , char cnvMM[]){
     if(MM == 1) strcpy(cnvMM , "January");
     else if(MM == 2) strcpy(cnvMM , "February");
     else if(MM == 3) strcpy(cnvMM , "March");
     else if(MM == 4) strcpy(cnvMM , "April");
     else if(MM == 5) strcpy(cnvMM , "May");
     else if(MM == 6) strcpy(cnvMM , "June");
     else if(MM == 7) strcpy(cnvMM , "July");
     else if(MM == 8) strcpy(cnvMM , "August");
     else if(MM == 9) strcpy(cnvMM , "September");
     else if(MM == 10) strcpy(cnvMM , "October");
     else if(MM == 11) strcpy(cnvMM , "November");
     else if(MM == 12) strcpy(cnvMM , "December");
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
