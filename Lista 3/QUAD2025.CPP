//Lista 3 - 7
#include<iostream.h>
#include<conio.h>
void main()
{
        int t=20;
        float n=0,s=0;
        clrscr();
        while(t!=0)
        {
                cout<<"Digite um numero: ";
                cin>>n;
                if ((n*n)<225)
                {
                        s=s+n;
                }
                t=t-1;
        }
        cout<<"Soma: "<<s;
        getch();
}