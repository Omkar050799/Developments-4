// 5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
 {
   UINT iMask = 0x80000001;
   UINT iResult = 0;
     
// 1000 0000  0000 0000  0000 0000  0000 0001
//   8    0     0    0     0   0      0    1
      
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
       printf("1st and 32 Bits are ON");
    }
   else
    {
        printf("Bits are OFF");
    } 
 
  return 0;
 } 
