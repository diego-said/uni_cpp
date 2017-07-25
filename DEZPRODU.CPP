//Programa Dez Pro1dutos
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	float v,vn,p,p2;
	clrscr();
	for(i=1;i<=10;i++)
	{
		cout<<"Entre com o valor do produto:"<<endl;
		cin>>v;
		cout<<"Entre com a porcetagem de desconto:"<<endl;
		cin>>p;
		p2=p/100;
		vn=v-(p2*v);
		cout<<"Valor com desconto: "<<vn<<endl;
	}
	getch();
}
