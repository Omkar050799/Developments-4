#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>

int CountSmall(char BuffferData[])
  {
    int fd = 0;
    int iSize = 0,iRet = 0,iCnt = 0;
    char Arr[50];

    fd = open(BuffferData,O_RDWR);
    
    if(fd == -1)
      {
         printf("Unable to open file\n");  
      } 
    
        iSize = sizeof(Arr);

   while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
     {
       int i = 0;
         for(i = 0; i <= iSize; i++)
           {
          if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
              iCnt++;
            }
           }
     }     
      return iCnt;     
  }

int main()
 {
    int fd = 0,iRet = 0,iSize = 0;
    char BuffferData[30];
    
    printf("Enter the file name:\n");
    scanf("%s",BuffferData);

    
    iRet = CountSmall(BuffferData); 
    
     printf("The small data is : %d \n",iRet);

   close(fd);
   return 0;
 }