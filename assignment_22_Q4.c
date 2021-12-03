/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
#define FALSE 0
#define TRUE 1

 typedef int BOOL;

BOOL ChkVowel(char *str)
{

    while(*str != '\0')
    {
         if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
         {
             return TRUE;
         }
          *str++;
    }
}
int main()
{
char arr[20];
BOOL bRet = FALSE;

printf("Enter string :\n");
scanf("%[^'\n']s",arr);

bRet = ChkVowel(arr);
if(bRet == TRUE)
{
printf("Contains Vowel");
}
else
{
printf("There is no Vowel");
}

return 0;
}