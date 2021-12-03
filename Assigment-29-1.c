//1.Write a program which accept one number and position from user and
//check whether bit at that position is on or off. If bit is one return TURE
//otherwise return FALSE.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;


BOOL ChkBit(UINT iNo, int iPos)
  {
    UINT iResult = 0;
    UINT iMask = 0x00000001;
    
    if((iPos < 1) || (iPos > 32))
      {
        return -1;
      } 
    
    iMask = iMask << (iPos - 1);
    
    iResult = iNo & iMask;
    
    if(iNo == iMask)
     {
       return FALSE;
     }
    else
     {
       return TRUE;
     }      
      
  }

int main()
 {
   UINT iValue = 0, iPos = 0;
   BOOL bRet = FALSE;
   
   printf("Enter the Number : \n");
   scanf("%d",&iValue);
   
   printf("Enter the Position of Bit  : \n");
   scanf("%d",&iPos);
   
   bRet = ChkBit(iValue,iPos);
   
   if(bRet == TRUE)
    {
      printf("The %d Bit is ON",iPos);    
    }
   else
    {
      printf("The %d Bit is OFF",iPos);
    } 

   return 0;
 }
