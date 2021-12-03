/*
5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input :
“Marvellous Infosystems”
“Logic Building”
Output :
“Marvellous Infosystems Logic Building”
*/

#include<stdio.h>

char  StrCatX(char *src, char *dest)
 { 
     
     if(*src == NULL)
       {
         return 0;
       }
    
     while(*src != '\0')
         {
           *src = *src;
            src++;     
         }
         
       while((*dest != '\0'))
         {          
           src = *src + *dest;
            dest++;         
         }
      *dest = '\0';
    return src; 
 }
 
int main()
{
  char arr[50]={'\0'};
  char brr[30]={'\0'};
  
  printf("Enter First string\n");
  scanf("%[^'\n']s",arr);
  
  printf("Enter Second string\n");
  scanf(" %[^'\n']s", brr);
  
  StrCatX(arr,brr);
  
  
  printf("%s",arr);
  
   return 0;
}

