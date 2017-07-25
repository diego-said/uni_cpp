//Lista 3 - 3
#include<iostream.h>
#include<conio.h>
void main()
{
        float n=1,c=0;
        clrscr();
        while(n!=0)
        {
                cout<<"Digite um numero:";
                cin>>n;
                if(n>=100 && n<=200)
                {
                        c=c+1;
                }
        }
        cout<<"Numeros entre 100 e 200 que foram digitados: "<<c;
        getch();
}