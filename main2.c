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
//second  part:
//ch2 echanger();
#include <stdio.h>

int echanger(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int *p1,*p2;
    int n,m;
    p1 = &n;
    p2= &m;
    printf("hello world\n");
    printf("enter two fucking values\n");
    scanf("%d %d",p1,p2);
    printf("before echanger()||m= %d ;n= %d \n",n,m);
    echanger(p1,p2);
    printf("after echanger()||m= %d ;n= %d \n",n,m);
    return 0;
}
                

//ch3 isPrime();bool function;
#include <stdio.h>
#include <stdbool.h>
bool isPremier(int a){
    int i;
    for(i=2;i<a;i++){
        if(a % i == 0){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    for(;;) {
        int b;
        printf("enter A numbers\n");
        scanf("%d", &b);
        if (isPremier(b)) {
            printf("%d is a not prime number", b);
        } else if (!isPremier(b)) {
            printf("%d is a prime number", b);
        }
        printf("\n-------------------------------------------\n");
    }
}

//mrge sort
#include <stdio.h>
#include <stdlib.h>
void print(int arr[],int h){
    for(int k=0;k<=h;k++) {
        printf("%d\n",arr[k]);
    }
}
void merge(int arr[],int l,int m,int h){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = h - m;

    //create array to devide arr into them;
    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void sortmerge(int arr[],int l,int h){
    if(l<h){
        int m=(l+h)/2;
        sortmerge(arr,l,m);
        sortmerge(arr,m+1,h);
        merge(arr,l,m,h);
    }
}


//if we print in the merge section it will evrytime print two values;

int main()
{
    int List[]={5,0,10,4,1,9,15,20,30};
    sortmerge(List,0,5);
    print(List,5);
    return  0;
}

//********************************done merge sort******************************
//quick sort
#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int h){
    int i = l;
    int j = h;
    int pivot = arr[l];
    while(i<j) {

        do {
            i++;
        } while (arr[i] <= pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }

    }
    swap(&arr[l],&arr[j]);
    return j;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int a = partition(arr,l,h);
        quicksort(arr,l,a);
        quicksort(arr,a+1,h);
    }
}
void print(int a[],int h){
    for(int r=0;r<h;r++){
        printf("%d\n",a[r]);
    }
}
int main(){
    //the way to find out the greatest value;
    int a[]={16,15,20,150,8,15,20,-10};
    int size = sizeof(a)/sizeof(a[0]);
    //printf("%d,size",size);
    quicksort(a,0,size);
    print(a,size);

}
//done quick sort
//bubble sort
#include <stdio.h>
#include <stdlib.h>
//h: is number of elements in array;

void swap(int *a,int *b){
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}
void bubbleSort(int arr[],int h){
    int count=0;
    for(int i=0;i<h-1;i++){
        for(int j=0;j<h-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                count=1;
            }

        }
        if(count==0){//this is just for not consumming more ram;
            break;
        }
    }
}
void print(int arr[],int x){
    for(int i=0;i<x;i++)
    printf("%d\n",arr[i]);
}
int main(){
    int List[]={4,5,1,7,8,10,3,5,2,6};
    int size  = sizeof(List)/sizeof(List[0]);
    //printf("size is %d\n",size);
    bubbleSort(List,size);
    print(List,size);
}
//end of bubble sort
//linear sort
#include <stdio.h>

void linearSearch(int arr[],int n,int key){
    int r=0;
    for(int x=0;x<n;x++){
        if(arr[x]==key){
            printf("%d exist at place %d\n",key,x);
            r++;
            break;

        }
    }
    if(r==0){
        printf("%d doest exist \n",key);
    }
}

int main(){

    int a[]={10,20,15,19,30,40,12,120};
    int size = sizeof(a)/sizeof(a[0]);

    linearSearch(a,size,120);
}
//end of linear sort

//binary sort
#include <stdio.h>

void binarySearch(int arr[],int l,int h,int key){
    int m=(l+h)/2;
    if(h<l) {
        printf("not found");
    }
    else if(arr[m]==key){
        printf("fuond\na[%d]=%d",m,arr[m]);
    }else if(arr[m]<key){
        binarySearch(arr,m+1,h,key);
    }else{
        binarySearch(arr,l,m-1,key);
    }
}

int main(){
    int List[]={8,10,14,30,32,36,40,70,80,81,90,95,105,160,190,191,199,200};
    binarySearch(List,0,17,90);
}
//end of binary sort
