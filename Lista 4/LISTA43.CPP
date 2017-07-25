// Lista 4 - 3
#include<iostream.h>
#include<conio.h>
void main()
{
        int i,a[10],aux=0;
        clrscr();
        for(i=0;i<=9;i++)
        {
                a[i]=0;
                cout<<"Digite o valor do vetor A:";
                cin>>aux;
                if((aux%2)==0)
                {
                        aux=aux*2;
                        a[i]=aux;
                }
                else
                {
                        aux=aux*3;
                        a[i]=aux;
                }
        }
        for(i=0;i<=9;i++)
        {
                cout<<a[i]<<" ";
        }
        getch();
}