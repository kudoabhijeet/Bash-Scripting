#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include<unistd.h>
#include<time.h>
#include<stdlib.h>

#define MAX_COUNT 200
void ChildProcess();
void ParentProcess();

void main()
{
 pid_t pid;
 pid = fork();
     if (pid == 0) 
    {
          ChildProcess();
    }
     else {
         ParentProcess();
          //printf("**");
        }
}

void  ChildProcess(void)
{
     int   i;
     printf("Child Process :");
     for (i = 1; i <= MAX_COUNT; i++)      {
         
          for(int j=1;j<=i;++j)
          {
           printf("* ");
         //  sleep(1000);
          }
          printf("\n");
}
       // wait(NULL);
         // ParentProcess();
     
   }

void  ParentProcess(void)
{
     int   i;
    for (i = 1; i <= MAX_COUNT; i++) {
          for(int j=1;j<=i;++j)
          {
           printf("%d ",j);
         //  sleep(1000);
          }
          printf("\n");
}
 //wait(NULL);
 //printf("Parent Process\n");
     
}