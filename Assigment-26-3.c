/*
3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
*/

#include<stdio.h>
#include<string.h>
char StrCpySmall(char *src, char *dest)
 { 
         
      while(*src != '\0')
        { 
          if(*src == ' ' || (*src >= 'A') && (*src <= 'Z'))
            {
              *dest = *src;
            } 
             
        /* else if((*src >= 'A') && (*src <= 'Z') )
             {
                  *dest = *src;           
             }  
          */
         else if((*src >= 'a') && (*src <= 'z'))        
            {     
               *dest = *src; 
               *src = *src - 32;
               *dest = *src;          
                dest++; 
            }                  
           src++;   
        }    
 }
 
int main()
{
  char arr[30] = {'\0'};
  char brr[30] = {'\0'};
  
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
  
  StrCpySmall(arr,brr);
  
  printf("%s",brr);
  
   return 0;
}
 
