#include<stdio.h>

int main(void){
////Q_1 print a pyramid//
printf("print pyramid\n");
printf("\t   *\n");
printf("\t  ***\n");
printf("\t *****\n");       
printf("\t*******\n");
//////////////////////
//Q_2scan 3 and reverse//
int N_1,N_2,N_3;
printf("please enter the value of N_1=");
scanf("%d",&N_1);
printf("\n");
printf("please enter the value of N_2=");
scanf("%d",&N_2);
printf("\n");
printf("please enter the value of N_3=");
scanf("%d",&N_3);
printf("The Numbers are:%d\n\t\t%d\n\t\t%d\n",N_3,N_2,N_1);//each nunmber printed in a new line in a reviersed order
////////////////////////////////
////Q3 Arthmatic operations////
int x,y,n,m;
printf("Arthamtic operation\n");
printf("please enter the value of N_1=");
scanf("%d",&x);
printf("\n");
printf("please enter the value of N_2=");
scanf("%d",&y);
printf("\n");
printf("the value of sum %d \n",(x+y));
printf("the value of subtration %d \n",(x-y));
printf("the value of product %d \n",(x*y));
printf("the value ofdvision %d \n",(x/y));
printf("the value of reminder %d \n",(x%y));
printf("the value of AND %d \n",(x&y));
printf("the value of OR %d \n",(x|y));
printf("please enter the value of the right bit shift="); // get the value of the right bit-shift
scanf("%d",&n);
printf("\nplease enter the value of the left bit shift=");// get the value of the lift bit-shift
scanf("%d",&m);
printf("the value of right bit shift of N_1 %d \n",(x>>n));
printf("the value of right bit shift of N_2 %d \n",(y<<m));
/////////////////////////////////////////////////////
/////Q_4 clear, Toggle & set bit valu/////
printf("bit manipulation\n");
int l;
printf("please enter the value of N_1=");
scanf("%d",&x);
printf("\n");
printf("please enter the bit you wanna set=");
scanf("%d",&n);
printf("\n");
printf("the nth bit set=%d",(1<<(n-1))|x);
printf("\nplease enter the bit you wanna clear=");
scanf("%d",&n);
printf("\n");
printf("the nth bit clear=%d",(~(1<<(n-1))&x));
printf("\nplease enter the bit you wanna toggle=");
scanf("%d",&n);
printf("\n");
printf("the nth bit set=%d",(1<<(n-1))^x);//togle the bit
return(0);
}