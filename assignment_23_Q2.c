/*
2.Write a program which accept string from user and convert it into
upper case.

Input : “Marvellous Multi OS”

Output : MARVELLOUS MULTI OS
*/
#include <stdio.h>

#include<string.h>
void struprx(char *str)
{ 
   
    while(*str !='\0' )
    { 
         if(*str == ' ')
        {
            printf("%c",*str);
        }

        if((*str >='A') && (*str <= 'Z') )
        {
            printf("%c",*str);
        }
            else if((*str >='a') && (*str<= 'z'))
        {
            printf("%c",*str-32);
        }
      str++;
    }

}

int main()
{
char arr[30];

printf("Enter string : \n");
 scanf("%[^'\n']s",arr);

struprx(arr);

return 0;
}