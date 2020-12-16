#include<stdio.h>
int string_length(char*);
void reverse(char*);
void main()
{
   char s[100];
 
   printf("Enter a string\n");
   gets(s);
   reverse(s);
   printf("Reverse of the string is \"%s\".\n", s);
}
 
void reverse(char *s)
{
   int length, i;
   char *begin, *end;
   length = string_length(s);
   begin  =3 s;
   end    = s+ length - 1;
    for (i = 0; i < length/2; i++)
   { *begin ^= *end;
   *end   ^= *begin;
  *begin ^= *end;    
   begin++;
    end--;
   }}
 
int string_length(char *ptr)
{
   int i = 0;
 
   while( *(ptr + i) != '\0' )
     i++;
   return i;
}