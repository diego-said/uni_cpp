//Lista 3 - 6
#include<iostream.h>
#include<conio.h>
void main()
{
        int numConta=1,tConta=0,nConta=0;
        float saldo=0;
        clrscr();
        while(numConta>=0)
        {
                cout<<"\nDigite a conta: ";
                cin>>numConta;
                cout<<"\nDigite o saldo da conta: ";
                cin>>saldo;
                if (saldo>=0 && numConta>=0)
                {
                   tConta=tConta + 1;
                }
                else
                {
                   tConta=tConta + 1;
                   nConta=nConta + 1;
                }
        }
        cout<<"Percentual das contas com saldo devedor: "<<((nConta*100)/tConta)<<"%";
        getch();
}