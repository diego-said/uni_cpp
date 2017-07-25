#include<iostream.h>
#include<conio.h>
void main()
{
        int n=0;
        float v;
        clrscr();
        do
        {
                cout<<"Digite um numero:";
                cin>>v;
                if (v>=0)
                {
                        n=n+1;
                }
        }while(v>=0);
        cout<<"Valores digitados:"<<n;
        getch();
}