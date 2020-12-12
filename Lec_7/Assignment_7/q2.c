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
int main() 
{ 
    // array to store the string 
    char given_string[] = "Mohamed Aboelnasr"; 
    int output= string_length(given_string); 
    printf("the length of the string is %d",output);
    return 0; 
} 