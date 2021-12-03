/*
2. Write a program which accept two numbers from user and display
 position of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/


#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	int iMask = 0, iResult1 = 0 , iResult2=0,iCnt = 0 ,iCnt2 = 0;

	iMask = 0x00000001;

	for (int i = 1 ; i < 32; i++)
	{
		iResult1 = iNo1 & iMask ;
		iResult2 = iNo2 & iMask ;

		if (iResult1 == iMask)
		{
			iCnt++;
		}
		if (iResult2 == iMask)
		{
			iCnt2++;
		}
		iMask = iMask << 1 ;
	}
	printf("Output is ..... : %d %d \n",iCnt,iCnt2);
}

int main()
{
	int iValue1 = 0,iValue2 = 0;

	printf("Enter Second Number ......: \n");
	scanf("%d",&iValue1);

	printf("Enter Second Number ......: \n");
	scanf("%d",&iValue2);

	CommonBits(iValue1, iValue2);

	return 0;
}