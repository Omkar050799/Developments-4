/*
5. Write a program which accept string from user and count number of
white spaces

Input : “MarvellouS”

Output : 0

Input : “MarvellouS Infosystems”

Output : 1

Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”

Output : 5

*/
#include <stdio.h>
int CountWhite(char *str)
{
    int Counter=0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            Counter++;
        }
        *str++;
    }return Counter;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string");
scanf("%[^’\n’]s",arr);

iRet = CountWhite(arr);

printf("%d",iRet);

return 0;
}