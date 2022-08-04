  #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
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
    //Challenge9_DateFormate();
    //Challenge10_RandomeDay();
    //Challenge11_TimeCompare();
    Challenge12_Point_onThe_Line();


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


void Challenge10_RandomeDay(){

    char str[1];
    time_t t;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   printf("s : show random day       other : exit\n");
   gets(str);

   if (strcmp(str , "s") == 0){
        puts("");
        if((rand() % 7) == 0) puts("Monday");
        else if((rand() % 7) == 1) puts("Tuesday");
        else if((rand() % 7) == 2) puts("Wednesday");
        else if((rand() % 7) == 3) puts("Thursday");
        else if((rand() % 7) == 4) puts("Friday");
        else if((rand() % 7) == 5) puts("Saturday");
        else if((rand() % 7) == 6) puts("Sunday");
        else puts("ERROR !!! "); // had l error ma3raftch min kayji hhhhhhhh
        puts("");
        Challenge10_RandomeDay(); // bach yb9a dima 5edem
   }

}


void Challenge11_TimeCompare(){
    int hh_1 , mm_1 , ss_1;
    int hh_2 , mm_2 , ss_2;

    puts("____________ Input first moment _____________");

    printf("enter the hour (hh) :");
    scanf("%d" , &hh_1);

    printf("enter the minute (mm) :");
    scanf("%d" , &mm_1);

    printf("enter the second (ss) :");
    scanf("%d" , &ss_1);

    puts("____________ Input second moment _____________");

    printf("enter the hour (hh) :");
    scanf("%d" , &hh_2);

    printf("enter the minute (mm) :");
    scanf("%d" , &mm_2);

    printf("enter the second (ss) :");
    scanf("%d" , &ss_2);



    if(hh_1 > hh_2) puts("the first moment is GREATER than the   second.");
    else if(mm_1 < mm_2) puts("the first moment is SMALER than the   second.");
    else {
        if(mm_1 > mm_2) puts("the first moment is GREATER than the   second.");
        else if(mm_1 < mm_2) puts("the first moment is SMALER than the   second.");
        else {
            if(ss_1 > ss_2) puts("the first moment is GREATER than the   second.");
            else if(ss_1 < ss_2) puts("the first moment is SMALER than the   second.");
            else puts("the first moment EQUALS   the  second moment.");
        }
    }
}


void Challenge12_Point_onThe_Line(){
    puts("enter the coordinates of the Piece (X1 , Y1) ; (X2 , Y2)");

    double x1 , x2 , y1 , y2;
    puts("enter x1 :");
    scanf("%lf" , &x1);

    puts("enter y1 :");
    scanf("%lf" , &y1);


    puts("enter x2 :");
    scanf("%lf" , &x2);

    puts("enter y2 :");
    scanf("%lf" , &y2);

    puts("enter the coordinates of the Point (X ,Y) ");
    double x , y;

    puts("enter x :");
    scanf("%lf" , &x);

    puts("enter y :");
    scanf("%lf" , &y);

    printf("Coordinates of the piece ______________\n\n");
    printf("X1=%lf  Y1=%lf                      X2=%lf   Y2=%lf \n\n" , x1,y1,x2,y2);
     printf("Coordinates of the Point ______________\n\n\n");
    printf("X=%lf       Y=%lf\n\n\n" , x,y);


    /*------------------------------------------------------------
    Y = ax + b donc en va calculer a et b
    on sait que
                        y2 - y1       deltaY
                   a = ---------  = --------
                        x2 - x1       deltaX

    est en sait que poure b
                                   deltaY
                    b = y1 - x1* ---------
                                   deltaX

                                */

    double a = (y2 - y1)/(x2 - x1)   ,  b =  y1 - x1*a;

    printf("%lf\t%lf\n\n" , a,b) ; // ila b4iti t chof mo3adat al mosta9im


    // tha909 ida kanat no9ta tantami ila al 9it3ato ::::


    if(x>=x1 && x<=x2 || x<=x1 && x>=x2 ){
        if(y>=y1 && y<=y2 || y<=y1 && y>=y2 ){
            if((a*x + b - y) == 0 )
                printf("this point belongs to the piece :) :) :)");
            else printf("this point does not belongs to the piece :( :( :(");
        }else printf("this point does not belongs to the piece :( :( :(");
    }else printf("this point does not belongs to the piece :( :( :(");

    puts("\n\n\n\n");
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
// First Challenge: (Fahrenheit --> Celesius)

void farthtoCls (){
	int degree;
	printf("Enter a Fahrenheit degree to convert: ");
	scanf("%d", &degree);
	int result = (degree-32)/1.8;
	printf("%d Celsius \n" , result);

	if(result <= 0){
		printf("tr�s froid");
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

// Third Challenge: (Permutation sous condition)

void Permutation(){

	int n1, n2;
	printf("Enter your first number: ");
	scanf("%d", &n1);
	printf("Enter your second number: ");
	scanf("%d", &n2);

	if(n1 < n2){
		printf("%d est inferieur que %d", n2, n1);
	} else if (n1 > n2){
		printf("%d est inferieur que %d", n1, n2);
	} else {
		printf("les deux valeurs sont identiques");
	}

}

// 4th Challenge: (somme ou triple de somme de deux entieres)

void sommeoutriple(){
	int n1, n2;
	printf("Enter your first number: ");
	scanf("%d", &n1);
	printf("Enter your second number: ");
	scanf("%d", &n2);

	if (n1 == n2){
		printf("Le triple de leur somme = %d", (n1 + n2)*3);
	} else {
		printf("la somme = %d", n1+n2);
	}
}

// 5th Challenge: (Calculer une equation de deuxieme degree)

void Equation_2em_degree(){

	printf("Equation de deuxieme degree: aX +/- bX +/- C \n");
	int a, b, c;
	double delta, x1, x2;

	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("Enter c : ");
	scanf("%d", &c);

	delta = (pow(b, 2)) - ((4*a)*c);
	printf("delta = %.0f \n", delta);

	if (delta > 0) {
		printf("delta > 0, the equation have two solutions \n");

		x1 = (-b + sqrt(delta))/(2*a);
		printf("the first solution: %.2f \n", x1);

		x2 = (-b - sqrt(delta))/(2*a);
		printf("the second solution: %.2f \n", x2);
	} else if (delta == 0){
		printf("delta = 0, the equation have one solution \n");

		x1 = (-b)/(2*a);
		printf("the solution: %.2f", x1);
	}else{
		printf("delta < 0, il n'y a pas de solution");
	}
}












