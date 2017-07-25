//Lista 2 - 4
#include<iostream.h>
#include<conio.h>
void main()
{
        int i,a1=1,a2=1,s=0,b=1;
        clrscr();
        cout<<a1<<" "<<a2<<" ";
        for(i=1;i<=8;i++)
        {
                s=a1+a2;
                if(b==1)
                {
                        a1=s;
                        b=0;
                }
                else
                {
                        a2=s;
                        b=1;
                }
                cout<<s<<" ";
        }
        getch();
}