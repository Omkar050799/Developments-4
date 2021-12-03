/*
3. Write a program which accept one number from user and check
 whether 9th or 12th bit is on or off.
Input : 257
Output : TRUE

*/

#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00000100 , iMask2 = 0x00000800;
	UINT iResult = 0,i=0 ;

		iResult = iNo & iMask  ;
		int iResult2 = iNo & iMask2;

	if (iResult == iMask)
		{
			return true;
		}	
		if (iResult2 == iMask2)
		{
			return true;
		}
		else
		{
			return false;
		}
}

// iMask  = 0000 0000 0000 0000 0000 0001 0000 0000
// iNo    = 0000 0000 0000 0000 0000 0000 0010 1011
//iResult = 0    0    0    0    0    8    0    0




int main()
{
	int iValue1= 0 ;

	BOOL iRet = false;

	printf("Enter Second Number ......: \n");
	scanf("%d",&iValue1);

	 iRet = ChkBit(iValue1);

if(iRet == true)
{
	printf("TRUE \n");
}
else
{
	printf("FALSE \n");
}
	return 0;
}