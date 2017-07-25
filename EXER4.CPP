#include<iostream.h>
#include<conio.h>
void main()
{
        float i=0,n=0,f=1,s=1,r=0;
        clrscr();
        cout<<"Digite um numero:";
        cin>>n;
        for(i=1;i<=n;i++)
        {
                f=(f*(i+1))*s;
                s=s*(-1);
                r=r+(i/f);
        }
        cout<<"Soma:"<<r;
        getch();
}