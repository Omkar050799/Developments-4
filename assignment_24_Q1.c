/*
1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”

e
Output : TRUE

Input : “Marvellous Multi OS”
W
Output : FALSE

*/

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
     while(*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        } 
        str++;
    }
}

int main()
{
char arr[20];
char cValue ='\0';
BOOL bRet = FALSE;
 
printf("Enter string \n");
scanf("%[^'\n']s",arr);

printf("Enter the character\n");
scanf(" %c", &cValue);
//printf("%c",cValue);
bRet = ChkChar(arr, cValue);

if(bRet == TRUE)
{
printf("Character found");
}
else
{
printf("Character not found");
}

return 0;
}