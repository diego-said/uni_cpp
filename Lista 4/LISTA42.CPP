// Lista 4 - 2
#include<iostream.h>
#include<conio.h>
void main()
{
        int i, a[10], s=0;
        clrscr();
        for(i=0;i<=9;i++)
        {
                a[i]=0;
                cout<<"Digite o valor do vetor A: ";
                cin>>a[i];
                if(a[i]>5)
                {
                        s=s+a[i];
                }
        }
        cout<<"Soma dos valores maiores que 5: "<<s;
        getch();
}