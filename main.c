#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>


/*(constatez que le type de la fonction est bool, donc vous devez créez votre type Bool). */
typedef int Bool;
#define true 1
#define false 0


float  divededby(int n,int a);  //declaration  dala men naw3 float ou double rarrori men declaration hna


int main()
{
    //________________________________________________________________________________________________     abdellah
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
    //Challenge12_Point_onThe_Line();

    //____________________________________________                  chapter 2 :

    //challenge1_AddFunction(1,2);
    //challenge2_Fonction_Echanger();
    //Challenge3_Prime_numbers();
    //Challenge4_divededby();
    challenge5_Algorithme_MergeSort();




    //________________________________________________________________________________________________     karim

    //challenge_10_DaysOfTheWeek();




    //________________________________________________________________________________________________     ayoub
    //farthtoCls();






    //________________________________________________________________________________________________    yssine









    //________________________________________________________________________________________________    zakariya






}




//******************************************************************************************************************** abdellah Challenges:

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




//____________________________CHAPITRE 2 ___________________________________________________

void challenge1_AddFunction(int a , int b ){
    printf("%d + %d = %d\n" , a , b , a+b);
}


void challenge2_Fonction_Echanger(){ //had challenge 5asna n5edmo b les pointers darouri
    int a , b ;
    printf("enter the first number (a) : ");
    scanf("%d" , &a);
    printf("enter the second number (b) : ");
    scanf("%d" , &b);


    puts("the numbers a and b before the change : ");
    printf("a = %d\t\t\tb = %d\n" , a,b);

    Fonction_Echanger(&a , &b); // had function 3tinaha ladress dyal a and b

    puts("the numbers a and b after the change : ");
    printf("a = %d\t\t\tb = %d\n" , a,b);




}
void Fonction_Echanger(int* a , int* b){ //had challenge 5asna n5edmo b les pointers darouri
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}



void Challenge3_Prime_numbers(){
	int number;
	printf("enter your number : ");
	scanf("%d" , &number);


	if(isPrime(number))
        printf("this number is Prime");
    else
        printf("this number is not Prime");
}

Bool  isPrime(int n){
    int  isPrime = true;
    for(int i =2 ; i <=sqrt(n) ; i++){
		if(n%i == 0){
			isPrime = false;
			break;
		}
	}
    return isPrime;
}


// challenge 4
Bool Challenge4_divededby(){
    int number;
    printf("enterer un nomber stp : ");
    scanf("%d" , &number);

    Bool check = true;

    for(int n = 2 ; n <= sqrt(number) ; n++){
        if(divededby(n , number) == 0){
            puts("ce nombre n'est pas premier");
            check = false;
            break;
        }
    }
    if(check)  puts("ce nombre est premier");

    return check;

}
float  divededby(int n,int a){
    return a%n;
}
// challenge 5
void challenge5_Algorithme_MergeSort(){
    int A[] = {6,2,3,1,9,10,15,13,12,17};
    int a_size = sizeof(A)/sizeof(A[0]);

    puts("list before MergeSort");
    for(int i = 0 ; i < a_size ; i++)
        printf("%d\t" ,A[i] );


    puts("\nlist after MergeSort");
    MergeSort(A , a_size);
    for(int i = 0 ; i < a_size ; i++)
        printf("%d\t" ,A[i] );
}
void Merge(int* A , int* B , int* M , int a_size , int b_size ){
    int i=0 , j=0 , k=0;

    while(i<a_size && j < b_size){
        if(A[i] < B[j]) M[k++] = A[i++];
        else M[k++] = B[j++];
    }

    while(i<a_size) M[k++] = A[i++];
    while(j<b_size) M[k++] = B[j++];
}

void MergeSort(int *Lst , int lst_size ){
    int mid ,i , *A , *B;
    if(lst_size < 2) return;
    mid = lst_size/2;

    A = (int*)malloc(mid*sizeof(int));
	B = (int*)malloc((lst_size- mid)*sizeof(int));

	for(i = 0 ; i < mid ; i ++) A[i] = Lst[i];
	for(i = mid ; i < lst_size ; i++) B[i - mid] = Lst[i];

	MergeSort(A,mid);
	MergeSort(B,lst_size-mid);
	Merge(A , B , Lst , mid , lst_size-mid );
    free(A);
    free(B);
}


























////******************************************************************************************************************** karime challenges
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


void  challenge_10_DaysOfTheWeek() {
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

// Ayoub Challenges:********************************************************************************************************************

//Chapter I : conditions
// First Challenge: (Fahrenheit --> Celesius)

void farthtoCls (){
	int degree;
	printf("Enter a Fahrenheit degree to convert: ");
	scanf("%d", &degree);
	int result = (degree-32)/1.8;
	printf("%d Celsius \n" , result);

	if(result <= 0){
		printf("tres froid");
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

// 6th challenge (Palindrome ou non ?)

void palindrome()
{
    char str[50];
    printf("Enter your word: ");
    scanf("%s", &str);

    int j;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == strrev(str)[i])
        {
            j++;
        }
    }

    if (j == strlen(str))
    {
        printf("le mot est un palindrome");
    }
    else
    {
        printf("le mot n'est pas un palindrome");
    }
}

// 7th Challenge: (donner mention d'un eleve)

void mention(){
    float num;
    printf("Quell est votre moyenne: ");
    scanf("%f", &num);

    if (num < 10)
    {
        printf("tu es recale");
    }
    else if (num >= 10 && num < 12)
    {
        printf("Passable");
    }
    else if (num >= 12 && num < 14)
    {
        printf("Assez bien");
    }
    else if (num >= 14 && num < 16)
    {
        printf("Bien!");
    }
    else if (num >= 16 && num <= 20)
    {
        printf("tres bien!!!");
    }
    else
    {
        printf("Mention n'existe pas");
    }
}


// 8th Challenge: (alphabet)

void checkalphabet(){
    char caractere;
    printf("Enter your character: ");
    scanf("%c", &caractere);

    char uppstring[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char downstring[] = "abcdefghijklmnopqrstuvwxyz";

    int i;
    for (i = 0; i < strlen(uppstring); i++)
    {
        if (uppstring[i] == caractere)
        {
            printf("Votre caractere fait partie d'alphabet \n");
            printf("Votre caractere est majuscule!");
            break;
        }
        else if (downstring[i] == caractere)
        {
            printf("Votre caractere fait partie d'alphabet \n");
            printf("Votre caractere est minuscule!");
            break;
        }
    }

    if (i == 26)
    {
        printf("Votre caractere ne fait partie d'alphabet!!!!");
    }
}

// 9th Challenge: (Change Date format)

void changeDateFormat(){
    printf("Format: DD/MM/YYYY \n");
    int D, M, Y;
    printf("Enter the day: ");
    scanf("%d", &D);
    printf("Enter the month: ");
    scanf("%d", &M);
    printf("Enter the Year: ");
    scanf("%d", &Y);
    printf("Your input date is: %d-%d-%d\n", D, M, Y);
    printf("Other format: ");

    if (D >= 1 && Y >= 0 && M >= 1 && M <= 12){
        if (D <= 31){
            if(M == 1){
                printf("%d-January-%d", D, Y);
            } else if (M == 3){
                printf("%d-March-%d", D, Y);
            } else if (M == 5){
                printf("%d-May-%d", D, Y);
            } else if (M == 7){
                printf("%d-July-%d", D, Y);
            } else if (M == 8){
                printf("%d-August-%d", D, Y);
            } else if (M == 10){
                printf("%d-October-%d", D, Y);
            } else if (M == 12){
                printf("%d-December-%d", D, Y);
            }    
        }
        
        
        if (D <= 30){
            if (M == 4){
                printf("%d-April-%d", D, Y);
            } else if (M == 6){
                printf("%d-June-%d", D, Y);
            } else if (M == 9){
                printf("%d-September-%d", D, Y);
            } else if (M == 11){
                printf("%d-November-%d", D, Y);
            }
        } else if (D > 30){
            printf("Unavailable date!");
        }


        if (D <= 29){
            if(M == 2){
                printf("%d-February-%d", D, Y);
            }
        } else if (M==2 && D > 29){
            printf("Unavailable date!");
        }
    }
    else
    {
        printf("Unavailable date!!!");
    }

}

// 10th Challenge: (Generate random day)

void RandomDay(){
    srand(time(0));
    int num = rand() % 7 + 1;

    printf("Your random day: ");
    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
}