//Programa 20 par/impar
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int n,i;
	for(i=1;i<=20;i++)
	{
		cout<<"Digite um numero: ";
		cin>>n;
		if((n%2)==0)
		{
		cout<<"Par";
		}
		else
		{
		cout<<"Impar";
		}
	}
}