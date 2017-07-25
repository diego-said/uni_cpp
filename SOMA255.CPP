#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
        int i;
        float n=0,s=0;
        for(i=1;i<=20;i++)
        {
                cout<<"Digite um numero:";
                cin>>n;
                if ((pow(n,2))<255)
                {
                        s=s+n;
                }
        }
        cout<<"\nA soma e: "<<s;
        getch();
}