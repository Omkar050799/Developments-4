/*
2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input
Marvel lous Pyth

Output :
“MarvellousPython”
*/

#include<stdio.h>

int StrCpySmall(char *src, char *dest)
 { 
   int i = 0;
   
   if((*src >= 'A' && *src >= 'Z'))
         {
          return 0;
         }
   
       while((*src != '\0'))
         {       
           if((*src >= 'A') && (*src <= 'z' ))
             {
               *dest = *src;
               dest++;  
             }  
        src++;  
    }
    return dest; 
 }
 
int main()
{
  char arr[30]={'\0'};
  char brr[30]={'\0'};
  
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
  
  StrCpySmall(arr,brr);
  
  printf("%s",brr);
  
   return 0;
}

