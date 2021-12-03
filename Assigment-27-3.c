// 3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
 {
   UINT iMask = 0x08104040;
   UINT iResult = 0;
   
// 0000 1000  0001 0000  0100 0000  0100 0000
//   0    8     1    0     4   0      4    0
      
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
       printf("7th,15th,21th and 28th Bit are ON");
    }
   else
    {
        printf("Bits are OFF");
    } 
 
  return 0;
 } 
