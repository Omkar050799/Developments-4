/*
2.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input :
“Marvellous Multi OS”
10
Output :
“Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/

#include<stdio.h>

int StrCpyX(char *src, char *dest, int iCnt)
 { 
   int i = 0;
   
       while((*src != '\0') && (iCnt != 0))
    {       
       
       if(src[i] < iCnt)
         {
          return src;
         }
        else	
         { 
           *dest = *src;
            src++;
            dest++;
            iCnt--;
         }
                      
    }
    return dest; 
 }
 
int main()
{
  char arr[30]={'\0'};
  char brr[30]={'\0'};
  int  iNo = 0;
  
  printf("Enter string\n");
  scanf("%[^'\n']s",arr);
   
  printf("Enter Number\n");
  scanf("%d",&iNo);
  
  StrCpyX(arr,brr,iNo);
  
  printf("%s",brr);
  
   return 0;
}

