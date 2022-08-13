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
#define pi 3.1415926535897


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
    //challenge5_Algorithme_MergeSort();
    //challenge6_Algorithme_BubbleSort();
    //Challenge7_Algorithme_de_tri_rapide();
    //Challenge8_Recherche_Binaire();
    //Challenge9_Recherche_Lineaire();
    //Challenge10_CarreTable_element();
    //Challenge11_Permutation();
    //Challenge12_fonction_Tabe_Inserer();
    //Challenge13_MemoirDinamique();
    //Challenge14_DynamyqueMemoryAllocation();
    //Challenge15_Trier();
    //Challenge16_Some_Recursive();


     //____________________________________________                  chapter 3 :

    //Challenge1_Affichage_Informations();
    //Challenge2_Fahrenheit_To_degre_Celsius();
    //Challenge7_Calcule_Sous_Form_Decial();
    //Challenge9_Distance_entre_deux_points();
    //Challenge10_Cercle_Circonference();
    //Challenge12_chiffresInvers();
    Challenge13_ConverstTo_octal_hexadecimal();




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


// challenge 6
void challenge6_Algorithme_BubbleSort(){
    int A[] = {6,2,3,1,9,10,15,13,12,4};
    int a_size = sizeof(A)/sizeof(A[0]);

    puts("list before MergeSort");
    for(int i = 0 ; i < a_size ; i++)
        printf("%d\t" ,A[i] );


    puts("\nlist after MergeSort");
    BubbleSort(A , a_size);
    for(int i = 0 ; i < a_size ; i++)
        printf("%d\t" ,A[i] );
}

void BubbleSort(int *Lst , int lst_size ){
     for (int i = 0 ; i < lst_size; i++){
        for(int j = 0 ; j < lst_size-i-1 ; j++){
            if(Lst[j] > Lst[j+1])
                Swap(Lst , j);
        }



     }
}

void Swap(int *Lst , int i){
    int temp = Lst[i];
    Lst[i] = Lst[i+1];
    Lst[i+1] = temp;
}

// challenge 7
void Challenge7_Algorithme_de_tri_rapide(){
    // create a test array
  int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
  int length = sizeof(a)/sizeof(a[0]);

  puts("avant quicksort ");
  Display(a , length);

  // use quicksort to sort the array
  quicksort(a, length);

  // print out the array to ensure it has been sorted
  puts("apree quicksort ");
  Display(a , length);

}
// swaps the value of what x is pointing to with the value of what y is
// pointing to, used to perform swaps of array elements in quicksort partition
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

// applies quicksort algorthim to the array with the given length... strictly
// speaking this function isn't necessary because we could call
// quicksort_recursive directly, but this function makes the 'interface'
// prettier in that only the array and length need to be provided!
void quicksort(int array[], int length)
{
  // our quicksort algorithm randomly selects the pivot, so we seed the random
  // number generator to ensure the randomization of our random numbers
  srand(time(NULL));

  // calls the quicksort recursive algorithm with our array, and a starting
  // lower index bound of 0 and high index bound of the final element in the
  // array... i.e. apply quicksort to the entire length of the array
  quicksort_recursion(array, 0, length - 1);

}

// applies the recursive divide and conquer portion of the quicksort algorithm
// to the array... applying quicksort to the array between the low-high indexes
void quicksort_recursion(int array[], int low, int high)
{
  // stop recursion when low >= high
  if (low < high)
  {
    // partition the array by a pivot, and return the pivot element's index
    int pivot_index = partition(array, low, high);


    // apply quicksort to the left side subarray
    quicksort_recursion(array, low, pivot_index - 1);

    // apply quicksort to the right side subarray
    quicksort_recursion(array, pivot_index + 1, high);
  }
}

// partitions the array between low - high indexes by a pivot value and returns
// the index of the pivot
int partition(int array[], int low, int high)
{
  // randomly select a pivot value between low-high by randomly selecting an
  // index in the range low - high... we do this as opposed to just selecting
  // the last element each time because it's technically possible that always
  // selecting the same pivot will have poor performance if the array happens
  // to contain values in a way that is suboptimal
  int pivot_index = low + (rand() % (high - low));
  //printf("%d\t" , array[pivot_index]);

  // swap the element at the pivot_index with the element at index high (i.e.
  // the last element in this portion of the array), doing so allows us to
  // apply the below partitioning algorithm
  if (pivot_index != high)
    swap(&array[pivot_index], &array[high]);

  // the pivot value is now whatever is in the high index
  int pivot_value = array[high];

  // the partioning algorithm will shift elements that are less than the pivot
  // value to the front portion of the low - high array indexes, with i keeping
  // track of where the elements that are greater than the pivot value begin
  int i = low;

  // increment j from low up until but not including the pivot value at high
  for (int j = low; j < high; j++)
  {
    // if the array value at j is less than the pivot value, perform a swap with
    // the value at the array at index i... this effectively moves this "less
    // than the pivot values" to the front portion, and we increment i to
    // reflect where the values that are greater than the pivot now begin
    if (array[j] <= pivot_value)
    {
      swap(&array[i], &array[j]);
      i++;
    }
  }

  // we now know that the value at index i is greater than or equal to the pivot
  // so we swap it with the pivot value to complete the partition
  swap(&array[i], &array[high]);

  // index i now contains the pivot value, so return this so that the
  // quicksort_recursion function knows where to split the array when applying
  // the algorithm to the resulting subarrays
  return i;
}

void Display(int array[] , int length){
    puts("__________________\n");
    for(int i=0 ; i<length ; i++)
        printf("%d\t" , array[i]);
    puts("\n");
}

//___________________________________Challenge8.

void Challenge8_Recherche_Binaire(){
    int length = 1000;
    int Tab[length];
    Initializer_Tab(Tab , length);
    Display_8(Tab , length);
    int val = 667;
    int pos = Recherche_Binaire(Tab , 0 , length , val);

    printf("la position de (%d)  est : %d\n" , val , pos);

}

void Initializer_Tab(int Tab[] ,int length){
    for(int i = 0 ; i < length ; i++ )
        Tab[i] = i;
}
void Display_8(int array[] , int length){
    for(int i=0 ; i<length ; i++)
        printf("%d\t" , array[i]);
    puts("\n_________________________\n\n");
}
int Recherche_Binaire(int Tab[] ,int start , int end , int val){

    while(start<=end){
        int mid = (start+end)/2;

        if(Tab[mid] == val)
            return mid;
        if(Tab[mid] > val)
            end = mid - 1;
        else start = mid + 1;

    }
    return -1;
}


// challenge_9
void Challenge9_Recherche_Lineaire(){
    int array[] = {2,34,54,1,25,90,643,1,4,687,8975,2,12};
    int length = sizeof(array)/sizeof(array[0]);

    Display(array , length);

    int val = 34;
    int pos;
    pos =  Recherche_Lineaire(  array ,   length ,   val);

    printf("la position de (%d)  est : %d\n" , val , pos);


}

int Recherche_Lineaire(int array[] , int length , int val){
    for(int i=0 ; i<length ; i++)
        if(array[i] == val)  return i;
    return -1;

}

// challenge 10
void Challenge10_CarreTable_element(){
    int array[] = {2,34,54,1,25,90,643,1,4,687,8975,2,12};
    int length = sizeof(array)/sizeof(array[0]);

    Display(array , length);

    Affiche_Carre_1(array , length);

    for(int i = 0 ; i < length ; i++){
        Affiche_Carre_2(array[i]);
    }
    puts("");



}

void Affiche_Carre_1(int array[] , int length){
    for(int i = 0 ; i < length ; i++){
        printf("%d\t" , array[i]*array[i]);
    }
    puts("");
}

void Affiche_Carre_2(int var){
     printf("%d\t" , var*var);
}

//challenge 11

void Challenge11_Permutation(){
    float a , b;
    printf("enter a :");
    scanf("%f" , &a);
    printf("enter b :");
    scanf("%f" , &b);

    float temp = a;
    a = b;
    b = temp;

    printf("a =  %f\nb =  %f\n" , a , b);

}

//challenge12

void Challenge12_fonction_Tabe_Inserer(){
    int array[] = {2,34,54,1,25,90,643,1,4,687,8975,2,12};
    int length = sizeof(array)/sizeof(array[0]);

    Display(array , length);

    Insere_Number(array , length , 88 , 6);
    Display(array , length);


}

void Insere_Number(int array[] , int length , int number , int position){

    if(position>=0 && position <length){
        array[position] = number;
    }
}

//challenge 13

void Challenge13_MemoirDinamique(){
    //_______________________________________________ my memoir dynmiqye
    int default_size = 15;

    int* total_size = &default_size; ////default size is 15
    char *ptr_list = calloc(*total_size , sizeof(char));



    ProgrammRunning(ptr_list , total_size);


}

void ProgrammRunning(char *Ptr_list , int *total_size){
    char input[2];
    Bool Stop = false;



    while(!Stop){
        puts("sh : show list    ad : add char       mm : modifier tille de  memoir     sm : show memory     ex : close program");
        scanf("%s" , &input);

        if(strcmp(input , "sh") == 0){
           ShowList(Ptr_list);
        }
        else if(strcmp(input , "ad")== 0){
            Add_character(Ptr_list , total_size);
        }
        else if(strcmp(input , "sm")== 0){
            ShowMemry(Ptr_list , total_size);
        }
        else if(strcmp(input , "mm")== 0){
            Change_Memory(Ptr_list , total_size);
        }
        else if(strcmp(input , "ex")== 0){
            free(Ptr_list);
            Stop = true;
            puts("closed ...");
        }
        else{
            puts("selection error !!!!");
        }
    }
}

void Add_character(char* ptr_list , int* total_size ){
    char str[50] ;



    int start = strlen(ptr_list);
    int actuly_size = start;

    if(actuly_size < *total_size ){
        printf("Enter a string : ");
        scanf("%s" , str);
        int  end = strlen(str);

        for(int i = start ; i < start + end ; i++){
            if(i==*total_size){
                puts("STACK OVER FLOW !!!!");
                break;
            }
            *(ptr_list + i) = str[i - start];
        }
        actuly_size = strlen(ptr_list);
    }
   else puts("can't add memory full !!!");
}


void ShowList(char* ptr_list){
    if(strlen(ptr_list) == 0) puts("this list is empty");
    else
        for(int i=0 ; i<strlen(ptr_list) ; i++)
            printf("%c" , ptr_list[i]);
    printf("\n\n");
}

void ShowMemry(char* ptr_list , int* total_size){
    printf("Used Memory  :  %d (char)\n"  , strlen(ptr_list));
    printf("Total Memory  :  %d (char)\n"  , *total_size);
}

void Change_Memory(char* ptr_list , int* total_size){
    printf("enter the new size of this list :  ");
    int new_size;
    scanf("%d" , &new_size);
    if(new_size  > strlen(ptr_list)){
         *total_size = new_size;
        ptr_list = realloc( ptr_list , new_size*sizeof(char));
    }
    else puts("Not Possible : new size < actually size");

}




//Challenge 14 :

void Challenge14_DynamyqueMemoryAllocation(){

    int sizeX = 5;
    int sizeY = 3;
    int **Tab;

    Table_2d_Reservation(&Tab , sizeX , sizeY);
    Table_2d_Lecteur(&Tab , sizeX , sizeY);
    Table_2d_Afichage(&Tab , sizeX , sizeY);
    Table_2d_Liberation(&Tab , sizeX);

}


void Table_2d_Reservation(int ***Tab , int sizeX , int sizeY){
    *Tab = (int**) malloc(sizeX*sizeof(int*));
    for(int i=0 ; i<sizeX ; i++){
         *(*Tab + i)  =  (int*) malloc(sizeY*sizeof(int));
    }
}

void Table_2d_Lecteur(int ***Tab , int sizeX , int sizeY){
    for(int i=0 ; i<sizeX ; i++){
         for(int j=0 ; j<sizeY ; j++){
             *(*(*Tab + j) +i)  = 404;
        }
    }

}


void Table_2d_Afichage(int ***Tab , int sizeX , int sizeY){
    for(int i=0 ; i<sizeX ; i++){
         for(int j=0 ; j<sizeY ; j++){
            printf("%d\t" ,  *(*(*Tab + j) + i));
        }
        printf("\n");
    }

}


void Table_2d_Liberation(int ***Tab , int sizeX){
    for(int i=0 ; i<sizeX ; i++){
        free(*(*Tab + i));
    }

    free(*Tab);

}

//Challenge 15 :

void Challenge15_Trier(){
    int Table[] = {12,1,3,9,0,1,2,5,7,8,5,432,11,3,9};
    int length = sizeof(Table) / sizeof(Table[0]);

    Trier(Table , length);

    for(int i=0 ; i<length ; i++)
        printf("%d\t" , Table[i]);
    printf("\n");
}

void Trier(int Table[] , int length){
      for(int i=0 ; i<length ; i++){
        for(int j=i ; j<length ; j++){
            if(Table[i] > Table[j]){
                int Temp = Table[i];
                Table[i] = Table[j];
                Table[j] = Temp;
            }
        }
      }
}


//Challenge 16 :
void Challenge16_Some_Recursive(){
    int input;
    printf("enter your number STP :");
    scanf("%d" , &input);

    int som = SomeRecursive(input);

    printf("1 + 2 + ... + %d =  %d" , input , som);

}


int SomeRecursive(int input){
    if(input == 0) return;
    return input + SomeRecursive(input - 1);
}

//*********************************************************************************************************chapter 3
//challenge 1
void Challenge1_Affichage_Informations(){
        //Nom, prénom , Age , Sexe et numéro de téléphone.
        char Name[25] , Prenom[25] , Sex[25] , Tell[25];
        int Age;

        printf("enter your first name : ");
        scanf("%s" , &Name);

        printf("enter your last name : ");
        scanf("%s" , &Prenom);

        printf("enter your Sex : ");
        scanf("%s" , &Sex);

        printf("enter your phone number : ");
        scanf("%s" , &Tell);

        printf("enter your first Age : ");
        scanf("%d" , &Age);


        printf("Prenom : %s\tNom : %s\n" , Name , Prenom);
        printf("Age : %d\tSex: %s\n" , Age , Sex);
        printf("Numero de telephone : %s\n", Tell);

}

//challenge 2
void Challenge2_Fahrenheit_To_degre_Celsius(){
    printf("Entree la temperature en Fahrenheit : ");
    int C;
    scanf("%d" , &C);

    float F = (float) (C*1.8)+32;

    printf("la temperature en  Fahrenheit est : %f\n " , F);

}


//Challenge 7 : Calcule et affichage résultat en format décimal

void Challenge7_Calcule_Sous_Form_Decial(){
    int  a , b;
    printf("enter the first number : ");
    scanf("%d" , &a);

    printf("enter the first number : ");
    scanf("%d" , &b);

    printf("\n%d + %d = %d\n" , a,b,a+b);
    printf("%d - %d = %d\n" , a,b,a-b);
    printf("%d * %d = %d\n" , a,b,a*b);
    if(b!=0){
        float c = (float) a/b;
        printf("%d / %d = %f\n" , a,b,c);
        char mod = '%';
        printf("%d  %c %d = %d\n" , a,mod,b,a%b);
    }
}

//Challenge 9 : Distance entre deux points
void Challenge9_Distance_entre_deux_points(){
    int x1 , x2 , y1 , y2;
    float dist;
    printf("FIRST POINT :");
    printf("enter x1 :");
    scanf("%d" , &x1);
    printf("enter y1 :");
    scanf("%d" , &y1);

    printf("SECONDE POINT :");
    printf("enter x2 :");
    scanf("%d" , &x2);
    printf("enter y2 :");
    scanf("%d" , &y2);

    int X = x2-x1 , Y = y2-y1;


    dist = sqrt(X*X + Y*Y);

    printf("\n\nla deistance entr les deux pont est : %f\n\n" , dist);

}

//Challenge 10 : Circonférence d'un cercle
void Challenge10_Cercle_Circonference(){
    int r  ; float c;
    printf("entre le rayonr R STP : ");
    scanf("%d" , &r);

    c = 2*pi*r;

    printf("le Circonférence de cette  cercle  est : %f\n" , c);
}

//Challenge 12 : Nombre entier à trois chiffres en ordre inverse
void Challenge12_chiffresInvers(){
    int x;
    printf("enter a 3 digit number  : ");
    scanf("%d" , &x);

    int n1 ,n2 ,n3;
    n1 = x/100;
    n2 = (x/10) - n1*10;
    n3 = x -n1*100 - n2*10;

    int inverst_x = n3*100 + n2*10 + n1;

    printf("l'invers de (%d) est (%d)\n" , x , inverst_x);

}
 //challenge 13 int to  octale et hexadécimale

 void Challenge13_ConverstTo_octal_hexadecimal(){
     int number;
    //_____________________________________ 10 to 8
     printf("enter a integer number :");
     scanf("%d" , &number);
     int rest = number;
     int n_octal = 0 , mod;
     int multipl = 1;

     while(rest!=0){
        mod = rest%8;
        rest=rest/8;
        n_octal = n_octal + mod*multipl;
        multipl*=10;
     }


     printf("%d (10) = %d (8)\n\n\n" ,number , n_octal);


    //_____________________________________ 10 to 16
     int n_ex_dic = 0;
     rest = number;

     char listChifr[100] = "    " , temp_char[] = "    ";

     while(rest!=0){
        mod = rest%16;
        rest=rest/16;

        printf("%d\n" , mod);

        if(mod == 10)  strcpy(temp_char , "A");
        else if(mod == 11)  strcpy(temp_char , "B");
        else if(mod == 12)  strcpy(temp_char , "C");
        else if(mod == 13)  strcpy(temp_char , "D");
        else if(mod == 14)  strcpy(temp_char , "E");
        else if(mod == 15)  strcpy(temp_char , "F");
        else itoa(mod , temp_char , 10);
        strcat(listChifr , temp_char);



     }



     printf("%d (10) = %s (16)" , number , strrev(listChifr));

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




















/*Ayoub Challenges:
******************************************************************************************************** */

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

void Equation_2eme_degree(){

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

// 7th Challenge: (Donner la mention d'un eleve)

void mention(){
    float num;
    printf("entrer votre note: ");
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

// 11th Challenge: (comparing time)

void ComprTime(){
    printf("Format: HH:MM:SS \n");

    // first input
    int H, M, S;
    printf("Enter first HH: ");
    scanf("%d", &H);
    printf("Enter first MM: ");
    scanf("%d", &M);
    printf("Enter first SS: ");
    scanf("%d", &S);

    printf("\n");
    // second input
    int H1, M1, S1;
    printf("Enter second HH: ");
    scanf("%d", &H1);
    printf("Enter second MM: ");
    scanf("%d", &M1);
    printf("Enter second SS: ");
    scanf("%d", &S1);

    if(H>=0 && H<=23 && M>=0 && S>=0 && M<=59 && S<=59 && H1>=0 && H1<=23 && M1>=0 && S1>=0 && M1<=59 && S1<=59){
        if(H != H1){
            if(H < H1){
                printf("Le premier instant vient avant le deuxieme");
            } else {
                printf("Le deuxieme instant vient avant le premier");
            }
        } else { // H == H1
            if (M != M1){
                if(M < M1){
                    printf("le premier instant vient avant le deuxieme");
                } else {
                    printf("Le deuxieme instant vient avant le premier");
                }
            } else { // M == M1
                if (S < S1){
                    printf("Le premier instant vient avant le deuxieme");
                } else if (S > S1) {
                    printf("Le deuxieme instant vient avant le premier");
                } else { // S == S1
                    printf("Il s'agit du meme instant");
                }
            }
        }
    } else {
        printf("Unavailable!");
    }
}

// 12th challenge (Savoir si une point appartient a un segment ou non)

void Segment(){
    printf("Ce programme calcule si une point est appartient a un segment ou non en utilisant la formule au dessous: \n");
    printf("https://lucidar.me/fr/mathematics/check-if-a-point-belongs-on-a-line-segment/ \n");

    double Ax, Ay, Bx, By;
    // Take the A cordinates

    printf("----------------------Premier cordonnes------------------------\n");

    printf("entrer X de premier extremite du segment: ");
    scanf("%lf", &Ax);
    printf("entrer Y de premier extremite du segment: ");
    scanf("%lf", &Ay);

    printf("----------------------deuxieme cordonnes------------------------\n");

    // Take the B cordinates
    printf("entrer X de deuxieme extremite du segment: ");
    scanf("%lf", &Bx);
    printf("entrer Y de deuxieme extremite du segment: ");
    scanf("%lf", &By);

    printf("----------------------cordonnes de votre point------------------\n");

    // Take the C cordinates
    double Cx, Cy;
    printf("entrer X de votre point: ");
    scanf("%lf", &Cx);
    printf("entrer Y de votre point: ");
    scanf("%lf", &Cy);

    // Calculate "les cordonnees des vecteurs"
    //AB
    double Xab = Bx - Ax;
    double Yab = By - Ay;
    //AC
    double Xac = Cx - Ax;
    double Yac = Cy - Ay;

    //Calculer le produit vectoriel pour savoir si les trois points est alignees (AB*AC = Xab*Yac + Xac*Yab)
    double produitvectoriel = (Xab * Yac) - (Xac * Yab);

    if(produitvectoriel == 0){

        /* Calculer le produit scalaire KAC et le carrée scalaire KAB et les comparer pour savoir si C est entre A et B
        il faut que KAB soit positive est inferieur de KAC */
        double ACprodscalre = (Xab * Xac) + (Yab * Yac);
        double ABcarreescalre = pow(Xab, 2) + pow(Yab, 2);

        if (ACprodscalre > 0 && ACprodscalre < ABcarreescalre){
            printf("Votre point appartient au segment");
        }

    } else {
        printf("le point n'appartient pas au segment");
    }
}

// Chapter II : Functions
// First Challenge: (add function to add two numbers)

int add(int a, int b)
{
    return a + b;
}
