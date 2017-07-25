#include<iostream.h>
#include<conio.h>
void main()
{
        int n;
        float v;
        clrscr();
        cout<<"Digite um numero:";
        cin>>v;
        while(v>=0)
        {
                n=n+1;
                cout<<"Digite um numero:";
                cin>>v;
        }
        cout<<"Total de valores:"<<n;
        getch();
}