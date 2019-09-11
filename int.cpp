#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
int factorial(int);
int main(int argc, char *argv[])
{
    int p,n;
    char *ptr;
    ptr = argv[1];
    n = strlen(argv[1]);
    for(int i=0;i<n;i++)
    {
     int toi =int(ptr[i]);   
     if(toi!=1)
     {
     cout<<"Integer";
     factorial(toi);
     }
     else{
        cout<<"Not an int";
        }
    }
    
    //ptr= atoi(argv[1]);
    /*for(int i=0;i<n;i++)
    {
        if(ptr[i]>1)
        {
            cout<<"integer"<<endl;
            factorial(ptr[i]);
            
        }
        else {
            cout<<"Not an integer";
        }
    } */
    return 0;
}
int factorial(int a)
{
   // cout<<"entering fact function"<<endl;
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f*=i;
    }
    cout<<"Factorial :"<<f<<endl;
    return f;
}