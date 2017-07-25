//Lista 2 - 2
#include<iostream.h>
#include<conio.h>
void main()
{
        int i,s=0;
        clrscr();
        for(i=25;i<=200;i++)
        {
                if((i%2)==0)
                {
                        s=s+i;
                }
        }
        cout<<"Soma dos pares entre 25 e 200: "<<s;
        getch();
}