#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
 {
   int fd = 0;
   char BuffferData[30];

   printf("Enter the file Name you wants to create : \n");
   scanf("%s",BuffferData);

   fd = creat(BuffferData,0777);

   if(fd != 0)
     {
       printf("Your file Gets Successfully created...\n");
     }
   else 
     {
       printf("Your file NOT Successfully created...\n");
     }  

   return 0;
 }