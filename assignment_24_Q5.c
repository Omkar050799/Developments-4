/*
5. Write a program which accept string from user reverse that string
in place.

Input : “abcd”

Output : “dcba”

Input : “abba”

Output : “abba”
*/

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
    { 
        strrev(str);
        printf("%s",str);
}
int main()
{

char arr[30];

printf("Enter string : \n");
scanf("%[^'\n']s",arr);

Reverse(arr);

return 0;
}