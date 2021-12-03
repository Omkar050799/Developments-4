/*
3. Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/

#include<stdio.h>

int StrCpyCap(char *src, char *dest)
 { 
   int i = 0;
   
   if((*src >= 'a' && *src >= 'z'))
         {
          return 0;
         }
   
       while((*src != '\0'))
         {       
           if((*src >= 'A') && (*src <= 'Z'))
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
  
  StrCpyCap(arr,brr);
  
  printf("%s",brr);
  
   return 0;
}

