#include<iostream>
#include<cstdlib>
#include<stdlib.h>

using namespace std;
int main(int argc, char *argv[])
{
    int fact=1;
    int n = atoi(argv[1]);
    cout<<""
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial :"<<fact;
    
    return 0;
}