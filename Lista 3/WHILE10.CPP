// Lista 3 - 1
#include<iostream.h>
#include<conio.h>
void main()
{
        int c=0;
        float n=0;
        clrscr();
        while(n>=0)
        {
                cout<<"Digite um numero:";
                cin>>n;
                if (n>=0 && n<10)
                {
                        c=c+1;
                }
        }
        cout<<"Positivos menores que 10: "<<c;
        getch();
}