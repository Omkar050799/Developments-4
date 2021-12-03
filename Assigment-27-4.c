// 4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
 {
   UINT iMask = 0x000001c0;
   UINT iResult = 0;
   
// 0000 0000  0000 0000  0000 0001  1100 0000
//   0    0     0    0     0   1      c    0
      
   iResult = iNo & iMask;
   
   if(iResult ==iMask)
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
       printf("7th,8th and 9th Bit are ON");
    }
   else
    {
        printf("Bits are OFF");
    } 
 
  return 0;
 } 
