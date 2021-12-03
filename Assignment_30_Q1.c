/*
1.Write a program which accept one number from user and count 
number of ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(int iNo)
{
	int iResult = 0,i=0;
	
	int iCnt = 0;
	int  iMask = 0x00000001;

	for (i = 1; i < 32; i++)
	{
		iResult = iNo & iMask;

		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1 ;
	}
	return iCnt;
}

int main()
{
	int iValue = 0,iRet =0;

	printf("Enter The Number : \n");
	scanf("%d",&iValue);

	iRet = CountOne(iValue);

	printf("The Number of On Bits Count Is ... : %d",iRet);

	return 0;
}
/*
iNo        0000 0000 0000 0000 0000 0000 0000 1011
			       									    ( | ) Operation
iMask      0000 0000 0000 0000 0000 0000 0000 0000
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
iResult       
*/