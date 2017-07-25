// Programa Verificar (Lista 1 - 8)
#include<iostream.h>
#include<conio.h>
void main()
{
        int n;
        clrscr();
        cout<<"Digite um numero:";
        cin>>n;
        if (n==0)
        {
                cout<<"Nulo";
        }
        else
        {
                if (n>0)
                {
                        cout<<"Positivo";
                }
                else
                {
                        cout<<"Negativo";
                }
        }
        getch();
}