#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
 {
   int fd = 0;
   char Fname[20];
   char Arr[] = "Hello world";

  printf("Enter file name\n");
   scanf("%s",Fname);
   
   fd = open(Fname,O_RDWR | O_APPEND);

   if (fd == -1)
     {
       printf("Unable to Open the file\n");
       return -1; // Return to OS
     }
   else
     {
        printf("File Succesfully Open with FD : %d\n",fd);
     }  

    write(fd,Arr,sizeof(Arr));

    return 0; 
 }