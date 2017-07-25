#include<iostream.h>
#include<conio.h>

int mdc(int, int);

void main()
{
        int x,y;
        clrscr();
        cout<<"Digite x e y: ";
        cin>>x>>y;
        cout<<"\n"<<mdc(x,y);
        getch();
}

int mdc(int x,int y)
{
        if((x%y)==0)
        {
                return y;
        }
        else
        {
                return mdc(y,x%y);
        }
}