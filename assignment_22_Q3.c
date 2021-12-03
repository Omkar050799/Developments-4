/*
3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)

*/
#include<stdio.h>

int Difference(char *str)
{
int iCnt = 0,cCnt=0,Diff=0;

    if ( str == NULL)
    return 0;

while(*str != '\0')
{
     if((*str >='a')&&(*str <='z'))
     {
       iCnt++;
     }
    else if((*str >='A')&&(*str<='Z'))
    {
        cCnt++;
    }
   *str++;
}
 Diff = iCnt-cCnt;
return Diff;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string : \n");
scanf("%[^'\n']s",arr);

iRet = Difference(arr);

printf("The Difference Between Small And Capital string are : %d",iRet);

return 0; 
}