// 2. Write a program which checks whether 5th & 18th bit is On or OF
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
 {
   UINT iMask = 0x00020010;
   UINT iResult = 0;
   
// 0000 0000  0000 0010  0000 0000  0001 0000
//   0    0     0    2     0   0      1    0

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
       printf("5th and 18th Bit are ON");
    }
   else
    {
        printf("Bits are OFF");
    } 
 
  return 0;
 } 
