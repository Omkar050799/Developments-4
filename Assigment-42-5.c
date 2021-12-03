#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>

int DisplayN(int AtPos , char BuffferData[])
  {
    int fd = 0;
    int iRet = 0,iCnt = 0;
    char Arr[50];

    fd = open(BuffferData,O_RDWR);
    
    if(fd == -1)
      {
         printf("Unable to open file\n");  
      } 

   while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
     {
        printf("\t\nData :\n");

        write(1,Arr,AtPos);
         printf("\n");
        break;
     }     
  
  }

int main()
 {
    int fd = 0,iRet = 0,iSize = 0,AtPos = 0;
    char BuffferData[30];
    
    printf("Enter the file name:\n");
    scanf("%s",BuffferData);

    printf("Enter the pos:\n");
    scanf("%d",&AtPos);

    
    DisplayN(AtPos,BuffferData); 

   close(fd);
   return 0;
 }