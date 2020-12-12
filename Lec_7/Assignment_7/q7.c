#include<stdio.h>
int string_length(char* given_string) 
{ 
    // variable to store the 
    // length of the string 
    int length = 0; 
    while (*given_string != '\0') { 
        length++; 
        given_string++; 
    } 
  
    return length; 
} 
char last_char(char *given_string ,int length,int n)
{   int i=length;
    char *ptr;
    ptr=given_string;
    while(i>length-2){
        printf("%c",*(ptr+i-1));
        i--;} 
    
}
int main() 
{ 
    // array to store the string 
    char given_string[] = "Mohamed Aboelnasr"; 
    int output= string_length(given_string); 
    last_char(given_string,output,2);
       
    return 0; 
} 