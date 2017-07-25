//Lista 3 - 5
#include<iostream.h>
#include<conio.h>
void main()
{
        int i=0,n=1,f=1;
        clrscr();
        while(n>=1)
        {
                cout<<"\nDigite um numero:";
                cin>>n;
                if (n>=1)
                {
                        for(i=1;i<=n;i++)
                        {
                                f=f*i;
                        }
                        cout<<"Fatorial de "<<n<<": "<<f;
                }
        }
        getch();
}