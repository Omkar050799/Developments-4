// 2. Write a program which accept one number from user and off 7th and 10th
//bit of that number. Return modified number.

#include<stdio.h>


typedef unsigned int UINT;


UINT ChkBit(UINT iNo)
 {
    UINT iDigit = 0;
    UINT iMask = 0x00000240;
    UINT iResult = 0;

// 0000 0000  0000 0000  0000 0010  0100 0000   
//   0   0      0    0     0    2     4    0

    iResult = iNo ^ iMask;
    
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
