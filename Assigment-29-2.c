//2. Write a program which accept one number and position from user and off
//that bit. Return modified number.

#include<stdio.h>

typedef unsigned int UINT;


UINT ChkBit(UINT iNo, int iPos)
  {
    UINT iResult = 0;
    UINT iMask = 0x00000001;
    
    if((iPos < 1) || (iPos > 32))
      {
        return -1;
      } 
    
    iMask = iMask << (iPos - 1);
    
    iResult = iNo ^ iMask;
    
    if(iNo == iMask)
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
   UINT iValue = 0, iPos = 0;
   UINT iRet = 0;
   
   printf("Enter the Number : \n");
   scanf("%d",&iValue);
   
   printf("Enter the Position of Bit  : \n");
   scanf("%d",&iPos);
   
   iRet = ChkBit(iValue,iPos);
   
   printf("The Modified Number is : %d",iRet);    
   
 

   return 0;
 }
