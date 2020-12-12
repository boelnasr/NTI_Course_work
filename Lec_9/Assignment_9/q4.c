#include <stdio.h>

int stringlength(char *given_string)
{
    int length = 0; 
    while (*given_string != '\0') { 
        length++; 
        given_string++; 
    } 
    return length; 	 
}
void printmax(char *s)
{	int  a[100],i,j,k=0,count=0,n;
    n=stringlength(s); 
    for(i=0;i<n;i++)  
    {  	a[i]=0;
    	count=1;
    	if(s[i])
    	{ for(j=i+1;j<n;j++)  
	      {  	
	        if(s[i]==s[j])
    	    {   count++;
                s[j]='\0';}}}
	   a[i]=count;
	   if(count>=k)
	     k=count;}
 	printf("maximum occuring characters ");
 	for(j=0;j<n;j++)  
	    {if(a[j]==k)
    	    { printf(" '%c',",s[j]);} }  
     
	printf("\b=%d times \n ",k);}
 
 
int main()
{
 
    char s[1000];
  
    printf("Enter  the string : ");
    scanf("%s",s);
    printmax(s);
 
	return 0;
 
     
     
}