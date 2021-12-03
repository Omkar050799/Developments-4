/*
3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”

Output : mARVELLOUS mULTI os
*/

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str !='\0')
    {       
        if(*str == ' ')
        {
            printf("%c",*str);
        }

         if((*str >= 'A')&&(*str <= 'Z'))
           {
              printf("%c",*str+32);
           }
            else if((*str >= 'a')&&(*str <= 'z'))
           {
               printf("%c",*str-32);
           }
           str++;
    }
}

int main()
{
char arr[20];

printf("Enter string : ");
scanf("%[^'\n']s",arr);

strtogglex(arr);
return 0;
}