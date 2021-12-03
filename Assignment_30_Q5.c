/*
5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iResult = 0 ;
	UINT iMask1 = 0xFFFFFFFF , iMask4 =0 ;
	
// Range is   5   10

// iNo      0000 0000 0000 0000 0000 0000 0010 1011
// iMaskex  0000 0000 0000 0000 0000 0011 1111 0000
// iMask    1111 1111 1111 1111 1111 1111 1111 1111
//ex 1      1111 1111 1111 1111 1111 1111 1111 0000
//ex 2      0000 0000 0000 0000 0000 0011 1111 0000

	UINT iMask2 = iMask1 << (iStart -1) ;
	UINT iMask3 = iMask2 >> (32 -iEnd) ;

	iMask4 = iMask2 & iMask3 ;

	iResult = iNo ^ iMask4 ;

	return iResult ;
}

int main()
{
		
	UINT  iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
UINT bRet = 0;
	printf("Enter Number : \n");
	scanf("%d",&iValue1);

	printf("Enter Start Position : \n");
	scanf("%d",&iValue2);

	printf("Enter End Position : \n");
	scanf("%d",&iValue3);

	bRet = ToggleBitRange(iValue1,iValue2,iValue3);

	printf("Output is %d \n",bRet);

	return 0;
}