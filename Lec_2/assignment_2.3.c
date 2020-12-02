#include <stdio.h>

int main(){
//Q_4_Convert Lowercase to Uppercase Character
   char lowerChar, upperChar;
   printf("\nEnter a lowercase Character: ");
    scanf("%c", &lowerChar);
    int ascii = lowerChar;
    upperChar = ascii-32;
    printf("\nIts Uppercase = %c\n", upperChar);

//Q_6activation Time Calculator
    int Temp;
printf("water Temprature");
scanf("%d",&Temp);
if (Temp>100)
{    printf("\ntemperature is invalid\n"); }
else if(Temp>=90&&Temp<100)
{   printf("\nthe required heating time = 1 mins\n");}
else if(Temp>=60&&Temp<90)
{    printf("\nthe required heating time = 3 mins\n");}
else if(Temp>=30&&Temp<60)
{    printf("\nthe required heating time = 5 mins\n");}
else if(Temp>=0&&Temp<30)
{    printf("\nthe required heating time = 7 mins\n");}
//Q_8 shift and rotate aka cirular shift
    unsigned int x,y;
    int k; //the shift value
    printf( "\n Input the integer : " );
    scanf("%ud", &x);
    printf( "Input the value of the shift: " );
    scanf("%d", &k); 
    y=(x << k) | (x >> (sizeof(int) - k));
    printf("shift to the lift%d\n",y);
    y=(x >> k) | (x << (sizeof(int) - k));
    printf("shift to the right%d",y);
    
    }