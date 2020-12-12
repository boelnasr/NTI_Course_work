#include <stdio.h>
void concatenate_string(char*, char*);

int main()
{
    char original[100], add[100];
   
    printf("Enter source string\n");
   scanf("%s",original);
   
    printf("Enter string to concatenate\n");
   scanf("%s",add);
   
    concatenate_string(original, add);
   
    printf("String after concatenation: \"%s\"\n", original);
       
    return 0;
}

void concatenate_string(char *original, char *add)
{
   while(*original)
      original++;
     
   while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}