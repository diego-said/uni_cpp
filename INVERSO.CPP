// Programa Inverso (Lista 1 - 4)
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
        float s,b,a;
        clrscr();
        cout<<"Digite dois numeros:";
        cin>>a>>b;
        s=a;
        a=b;
        b=s;
        cout<<"Valores trocados:";
        cout<<a;
        cout<<b;
        getch();
        sleep(1);
}

