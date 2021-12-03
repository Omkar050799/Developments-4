#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>

int main()
 {
   int fd  = 0, iRet = 0;
   char Fname[30];
   char Data [7];
   
   printf("Enter file name\n");
   scanf("%s",Fname);
   
   fd = open(Fname,O_RDWR);
   
   if (fd == -1)
     {
       printf("Unable to Open the file\n");
       return -1; // Return to OS
     }
   else
     {
        printf("File Succesfully Open with FD : %d\n",fd);
     }  
   
   
   iRet = read(fd,Data,7); 
    
   printf("%d Bytes gets Succefully Read from the file\n",iRet);
     
   printf("Data from the file is : %s\n",Data);
     
   return 0;
 }
