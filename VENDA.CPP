//Programa Venda (Lista 1 - 10)
#include<iostream.h>
#include<conio.h>
void main()
{
        float vc,vv;
        clrscr();
        cout<<"Valor de compra:/b ";
        cin>>vc;
        if (vc>=20)
        {
                vv=vc*1.30;
        }
        else
        {
                vv=vc*1.45;
        }
        cout<<"Valor de venda: "<<vv;
        getch();
}