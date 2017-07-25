// Lista 4 - 1
#include<iostream.h>
#include<conio.h>
void main()
{
        int i, A[10], B[10];
        clrscr();
        for(i=0;i<=9;i++)
        {
                A[i]=0;
                B[i]=0;
                cout<<"Digite o valor do vetor A: ";
                cin>>A[i];
                if((i%2)==0)
                {
                        B[i]=A[i]*5;
                }
                else
                {
                        B[i]=A[i]+5;
                }
        }
        for(i=0;i<=9;i++)
        {
                cout<<A[i]<<" "<<B[i]<<endl;
        }
        getch();
}