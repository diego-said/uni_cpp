#include<iostream.h>
#include<conio.h>
void main()
{
        int n=0,ma=0,me=1;
        clrscr();
        do
        {
        cout<<"Digite um numero:";
        cin>>n;
        if(n>0)
        {
                if(n>ma)
                {
                        ma=n;
                }
                if (n<me || n==me)
                {
                        me=n;
                }
        }
        }while(n>0);
        cout<<"Maior: "<<ma<<" menor: "<<me;
        getch();
}