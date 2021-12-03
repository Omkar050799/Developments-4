/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Exam of division A at 7 AM");
    }
       else if(chDiv == 'B' )
    {
        printf("Exam of division B at 8.30 AM");
    }
      else  if(chDiv =='C' )
    {
        printf("Exam of division C at 9.20 AM");
    }
       else if(chDiv ==  'D')
    {
        printf("Exam of division D at 10.30 AM");
    }
    else
    {
        printf("You Entered Wrong Standard : ");
    }  
}

int main()
{
char cValue = '\0';

printf("Enter the character : \n ");
scanf("%c",&cValue);
DisplaySchedule(cValue);
return 0;
}

/*
// Using Switch Case

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
   switch (chDiv)
    {
    case 1: 
     printf("Exam of division A at 7 AM");
    break;

    case 2:
       printf("Exam of division B at 8.30 AM");
     break;

    case 3:
        printf("Exam of division C at 9.20 AM");
    break;
       
    case 4:
         printf("Exam of division D at 10.30 AM");
    break;

    default:
     printf("You Entered Wrong Standard : ");
    }
}
int main()
{
char cValue = '\0';

printf("Enter the character : \n ");
scanf("%c",&cValue);
DisplaySchedule(cValue);
return 0;
}
*/