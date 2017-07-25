// Lista 3 - 2
#include<iostream.h>
#include<conio.h>
void main()
{
        int n=1,c=0,s=0,m=0;
        clrscr();
        while(n>0)
        {
                cout<<"Digite um numero:";
                cin>>n;
                if(n>0 && (n%2)==0)
                {
                        s=s+n;
                        c=c+1;
                }
        }
        m=s/c;
        cout<<"A media dos numeros: "<<m;
        getch();
}