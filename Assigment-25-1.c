/*
1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement 
strcpy()function)

Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS”
in another string
*/
#include<stdio.h>

int StrCpyX(char *src, char *dest)
 { 
   int i = 0;
   
       while(*src != '\0')
    {
            *dest = *src;
             src++;
             dest++;
    }
    return dest; 
 }
 
int main()
{
  char arr[20];
  char brr[20];
  char cValue = '\0'; 
  char bRet;
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
  
  StrCpyX(arr,brr);
  
  printf("%s\n",brr);
  
   return 0;
}

