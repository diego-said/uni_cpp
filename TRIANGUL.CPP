#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	float l1,l2,l3;
	clrscr();
	cout<<"Digite o valor dos lados (3 lados): "<<endl;
	cin>>l1>>l2>>l3;
	if ((l1<l2+l3)&&(l2<l1+l3)&&(l3<l1+l2))
	{
		if (l1==l2&&l1==l3)
		{
		cout<<"Trianulo Equilatero";
		}
		else
		{
			if (l1!=l2&&l1!=l3&&l2!=l3)
			{
			cout<<"Triangulo Escaleno";
			}
			else
			{
			cout<<"Triangulo Isoceles";
			}
		}
	}
	else
	{
	cout<<"Os lados nao formam um triangulo";
	}
	sleep(3);
}