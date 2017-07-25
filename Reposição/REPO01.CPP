#include<iostream.h>
#include<conio.h>
void main()
{
        float pres=0,valor=0,taxa=0,tempo=0;
        clrscr();
        cout<<"Digite o valor: ";
        cin>>valor;
        cout<<"Digite a taxa: ";
        cin>>taxa;
        cout<<"Digite o tempo: ";
        cin>>tempo;
        pres=valor+((valor*(taxa/100))*tempo);
        cout<<"Valor da prestacao: "<<pres;
}