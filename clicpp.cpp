#include<iostream>
#include <string.h>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cout<<"You have entered "<<argc<<" arguments"<<endl;
    int p;
    cout<<"1. Arguments"<<endl;
    cout<<"2. Odd Argumemnts"<<endl;
    cout<<"3. Even Argumemnts"<<endl;
    cout<<"4. Rev. Arguments"<<endl;
    cout<<"5. Reverse"<<endl;
    cout<<"Input :";
    cin>>p;
    switch(p)
    {
    case 1 :
        for(int i=0; i<argc; i++)
        {
         cout<<argv[i]<<endl;
        }
        break;
    case 2 :      
        for(int i=0; i<=argc; i++)
        {
            if(i%2!=0)
            cout<<argv[i]<<endl;
        }
        break;
    case 3 :
        for(int i=0; i<=argc; i++)
        {
            if(i%2==0)
            {
            cout<<argv[i]<<endl;
            }
        }
        break;
    case 4 : 
        for(int i= argc-1;i>0;i--)
        {
            cout<<argv[i]<<endl;
        }
    case 5 :
        n=strlen(argv[1]);
        char *ptr;
        ptr = argv[2];
        
       
        for(int i=n;i>=0;i--)
        {
            cout<<ptr[i];
        }
        break;
    default :
        cout<<"Invalid Input";
    }
 return 0;
}
