//Lista 3 - 9
#include<iostream.h>
#include<conio.h>
void main()
{
        int n=100,s=0;
        clrscr();
        while(n!=0)
        {
                if((n%5)==0)
                {
                        s=s+n;
                }
                n=n-1;
        }
        cout<<"Soma: "<<s;
        getch();
}