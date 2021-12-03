/*
4. Write a program which accept one number , two positions from 
user and check whether bit at first or bit at second position is
ON or OFF.
Input : 10 3 7
Output : TRUE

*/

#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
 	int i=0,iResult1 =0 ,iResult2 = 0;

	UINT iMask1 = 0x00000001 << (iPos1 -1) ;
	UINT iMask2 = 0x00000001  << (iPos2 -1) ; 

	for (int i = 1; i < 32 ; i++)
	{
		iResult1 = iNo & iMask1 ;
		iResult2 = iNo & iMask2 ;

		 if ((iResult1 == iMask1) || (iResult2 == iMask2))
		 {
		 	return true;
		 }
		 else
		 {
		 	return false;
		 }
	}
}

int main()
{
		
	int  iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
	BOOL bRet = false ;

	printf("Enter Number : \n");
	scanf("%d",&iValue1);

	printf("Enter First Position : \n");
	scanf("%d",&iValue2);

	printf("Enter Second Position : \n");
	scanf("%d",&iValue3);

	bRet = ChkBit(iValue1,iValue2,iValue3);

	if (bRet == true)
	{
		printf("TRUE \n");
	}
	else
	{
		printf("FALSE \n");
	}

	return 0;
}