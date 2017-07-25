#include<iostream.h>
#include<conio.h>
void main()
{
        int i,n=0;
        clrscr();
        cout<<"Digite um numero:";
        cin>>n;
        cout<<"\nDivisores:";
        for(i=1;i<=n;i++)
        {
                if ((n%i)==0)
                {
                        cout<<" "<<i;
                }
        }
        getch();
}