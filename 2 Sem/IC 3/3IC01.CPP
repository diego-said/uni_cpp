#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void gerav(int[],int);
void medimp(int[],int);
void main()
{
	int *ptrvetrand,tam;
	clrscr();
	cout<<"Digite o tamanho do vetor: ";
	cin>>tam;
	if(tam>0)
	{
		ptrvetrand=new int[tam];
		if(ptrvetrand==NULL)
		{
			cout<<"Falta de mem¢ria!";
		}
		else
		{
			gerav(ptrvetrand,tam);
			medimp(ptrvetrand,tam);
		}
	}
	else
	{
		cout<<"Digite um valor maior que 0.";
		getch();
	}

}

void gerav(int vet[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		vet[i]=random(21);
	}
}

void medimp(int vet[],int tam)
{
	int med=0;
	for(int i=0;i<tam;i++)
	{
		med=med+vet[i];
	}
	cout<<"M‚dia: "<<med/tam<<endl;
	for(i=0;i<tam;i++)
	{
		cout<<vet[i]<<" ";
	}
	getch();
}