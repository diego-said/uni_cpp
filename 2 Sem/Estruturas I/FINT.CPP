#include<iostream.h>
#include<conio.h>
void main()
{
        int x,n,i,r;
        clrscr();
        cout<<"Digite x e n: ";
        cin>>x>>n;
        r=x;
        if(n==1)
        {
                cout<<x;
        }
        else
        {
                for(i=1;i<n;i++)
                {
                        r=r*x;
                }
                cout<<r;
        }
        getch();
}
