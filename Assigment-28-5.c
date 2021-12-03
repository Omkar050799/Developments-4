// 1.Write a program which accept one number from user and off 7th bit of that
//number if it is on. Return modified number.

#include<stdio.h>


typedef unsigned int UINT;


UINT ChkBit(UINT iNo)
 {
    UINT iDigit = 0;
    UINT iMask = 0x00000000F;
    UINT iResult = 0;

// 0000 0000  0000 0000  0000 0000  0000 1111   
//   0   0      0    0     0    0     0    F

    iResult = iNo | iMask;
    
    if(iResult == iMask)
      {
         return iNo;      
      }
    else
      {
         return iResult;
      }     
 }
 
int main()
 {
   UINT iValue = 0;
   UINT iRet = 0;
   
   printf("Enter the Number\n");
   scanf("%d",&iValue);
   
   iRet = ChkBit(iValue); 
   
   printf("The Modified NO is : %d ",iRet);
  
  return 0;
 } 
