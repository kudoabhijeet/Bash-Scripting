#include<stdio.h>


int main(int argc, char* argv[])
{
    printf("You have entered : %d", argc);
    for(int i=argc-1;i>=0;i--)
    {
        if(i%2==0)
        printf("%s\n",argv[i]);

    }
}