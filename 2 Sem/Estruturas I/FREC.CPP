#include<iostream.h>
#include<conio.h>

int f(int, int);

void main()
{
        int x,y;
        clrscr();
        cout<<"Digite x e n: ";
        cin>>x>>y;
        cout<<"\n"<<f(x,y);
        getch();
}

int f(int x,int n)
{
        if(n==0)
        {
                return 1;
        }
        else
        {
                return x*f(x,n-1);
        }
}