// Programa N-Inverso (Lista 1 - 7)
#include<iostream.h>
#include<conio.h>
void main()
{
        int in,n;
        clrscr();
        cout<<"Digite um numero:";
        cin>>n;
        if (n>10)
        {
                in=1/n;
                cout<<"Inverso: "<<in;
                getch();
        }
}