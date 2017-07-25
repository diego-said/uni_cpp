//Lista 2 - 3
#include<iostream.h>
#include<conio.h>
void main()
{
        int i,n;
        clrscr();
        cout<<"Digite um numero:";
        cin>>n;
        for(i=1;i<=n;i++)
        {
                if((i%3)==0&&(i%5)==0)
                {
                        cout<<i<<" ";
                }
        }
        getch();
}