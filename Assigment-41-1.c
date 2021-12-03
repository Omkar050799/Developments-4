#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
 {
   int fd = 0;

   fd = open("Marvellous.txt",O_RDWR);

   if(fd != 0)
     {
       printf("Your file gets Succesfully open....\n");
     }
   else
     {
       printf("Session Terminated : File not open...\n");
     }  
   return 0;  
 }