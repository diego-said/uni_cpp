#include<iostream.h>
#include<conio.h>
void main()
{
        int i,s;
        clrscr();
        for(i=1;i<=100;i++)
        {
                if((i%5)==0)
                {
                        s=s+i;
                }
        }
        cout<<"Soma dos divisores de 5: "<<s;
        getch();
}