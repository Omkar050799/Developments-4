/*

3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.

Input : “Marvellous Multi OS”

M

Output : 0

*/
#include<stdio.h>
#include<string.h>

char FirstChar(char *str, char ch) 
{
    int i = 0 ,index =-1; 
     while(str[i] != '\0')
     {
        if(str[i] == ch)
        
            index= i;
            i++;
     }
     return index;
}

int main() 
{
  char arr[20];
  char cValue ='\0';
  int iRet = 0;

printf("Enter string \n");
scanf("%[^'\n']s",arr);

printf("Enter the character\n");
scanf(" %c", &cValue);
 
iRet =FirstChar(arr, cValue);

 printf("Character index number is : %d",iRet);

return 0;
}