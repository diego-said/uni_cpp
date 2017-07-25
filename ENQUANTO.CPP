#include<iostream.h>
#include<conio.h>
void main()
{
       int s=0,n=0;
       clrscr();
       cout<<"Digite um numero:";
       cin>>n;
       while(n>=0)
       {
                if((n%2)==0)
                {
                        s=s+n;
                }
                cout<<"Digite um numero:";
                cin>>n;
       }
       cout<<"Soma: "<<s;
       getch();
}