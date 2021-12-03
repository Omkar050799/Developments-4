// 1.Write a program which checks whether 15th bit is On or OFF.
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
 {
    UINT iDigit = 0;
    UINT iMask = 0x00004000;
    UINT iResult = 0;

// 0000 0000  0000 0000  0100 0000  0000 0000   
//   0   0      0    0     4    0     0    0

    iResult = iNo & iMask;
    
    if(iResult == iMask)
      {
         return 1;      
      }
    else
      {
         return 0;
      }     
 }
 
int main()
 {
   UINT iValue = 0;
   BOOL bRet = FALSE;
   
   printf("Enter the Number\n");
   scanf("%d",&iValue);
   
   bRet = ChkBit(iValue); 
   
   if(bRet == TRUE)
    {
       printf("15 th Bit is ON");
    }
   else
    {
        printf("15 th Bit is OFF");
    } 
 
  return 0;
 } 
