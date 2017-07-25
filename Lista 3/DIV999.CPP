//Lista 3 - 4
#include<iostream.h>
#include<conio.h>
void main()
{
        int i, n=0;
        clrscr();
        while(n!=-999)
        {
                cout<<"\nDigite um numero:";
                cin>>n;
                if(n!=-999)
                {
                cout<<"Divisores de "<<n<<": ";
                }
                for(i=1;i<=n;i++)
                {
                        if((n%i)==0)
                        {
                                cout<<i<<" ";
                        }
                }
        }
        getch();
}