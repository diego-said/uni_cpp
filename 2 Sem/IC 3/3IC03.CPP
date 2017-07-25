#include<iostream.h>
#include<conio.h>
void cadvets(float[],float[],int,int);
void concat(float[],float[],int,int);
void main()
{
	clrscr();
	float *ptrvet1,*ptrvet2;
	int tam1,tam2;
	cout<<"Digite o tamanho do 1§ Vetor: ";
	cin>>tam1;
	if(tam1>0)
	{
		ptrvet1=new float[tam1];
	}
	cout<<"Digite o tamanho do 2§ Vetor: ";
	cin>>tam2;
	if(tam2>0)
	{
		ptrvet2=new float[tam2];
	}
	if(ptrvet1!=NULL && ptrvet2!=NULL)
	{
		cadvets(ptrvet1,ptrvet2,tam1,tam2);
		concat(ptrvet1,ptrvet2,tam1,tam2);
	}
	else
	{
		cout<<"Falta de mem¢ria!";
	}
}

void cadvets(float vet1[],float vet2[],int tam1,int tam2)
{
	for(int i=0;i<tam1;i++)
	{
		cout<<"Digite o valor do vetor 1: ";
		cin>>vet1[i];
	}
	for(i=0;i<tam2;i++)
	{
		cout<<"Digite o valor do vetor 2: ";
		cin>>vet2[i];
	}
}

void concat(float vet1[],float vet2[],int tam1,int tam2)
{
	float *ptrconcat;
	int tamc=0;
	tamc=tam1+tam2;
	if(tamc>0)
	{
		ptrconcat=new float[tamc];
	}
	for(int i=0;i<tamc;i++)
	{
		if(i>=tam1)
		{
		       ptrconcat[i]=vet2[i-tam1];
		}
		else
		{
		       ptrconcat[i]=vet1[i];
		}
	}
	cout<<"Vetor concatenado: ";
	for(i=0;i<tamc;i++)
	{
		cout<<ptrconcat[i]<<" ";
		getch();
	}
}