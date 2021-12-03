#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//#include<io.h>

int main()
 {
   int fd  = 0, iRet = 0,iSum = 0;
   char Fname[30];
   char Buffer [10]; // Mug
   
   printf("Enter file name\n");
   scanf("%s",Fname);
   
   fd = open(Fname,O_RDONLY);
   //(O_RDONLY) = O_ReadOnly;
   
   if (fd == -1)
     {
       printf("Unable to Open the file\n");
       return -1; // Return to OS
     }
   else
     {
        printf("File Succesfully Open with FD : %d\n",fd);
     }  
   
   while( (iRet = read(fd,Buffer,sizeof(Buffer)) ) != 0 )
     { 
        iSum = iSum + iRet;
     }

     printf("File size is %d Bytes\n",iSum);

   close(fd);
     
   return 0;
 }
