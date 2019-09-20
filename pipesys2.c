#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define size 19
int p[2];
void funwrite(char* s, int fd);
int funread(char* s1, int fd);

void funwrite(char* s, int fd){
    
    int a[2];
    //print("%d",int(p));
	if (pipe(a) < 0) 
		exit(1); 
    
  //  printf("write function\n");
	write(p[0], s, size); 
    // printf("write function\n");
   // return s;
   close(p[1]);
}
int funread(char* s1, int fd){
   // int p[2]; 
    char buff[size];
    strcpy(buff,s1);
	read(p[1], buff, size); 
    printf("%d",p[1]);
	//printf("%s\n", buff);  
}

int main()
{
    char* str="Hello  hgfhg World";
    char* f;
   funwrite(str,1);
   //funread(f,0);
    return 0;
}