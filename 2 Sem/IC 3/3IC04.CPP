#include<iostream.h>
#include<conio.h>
void cadvets(float[],float[],int,int);
void intercala(float[],float[],int,int);
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
		intercala(ptrvet1,ptrvet2,tam1,tam2);
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

void intercala(float vet1[],float vet2[],int tam1,int tam2)
{
	float *ptrinter;
	int tamc=0,bnd=0,i1=0,i2=0,i;
	tamc=tam1+tam2;
	if(tamc>0)
	{
		ptrinter=new float[tamc];
	}
        if(tam1>tam2)
        {
                for(i=0;i<tamc;i++)
                {
                        if(bnd==0 && i2<tam2)
                        {
                                ptrinter[i]=vet2[i2];
                                i2=i2+1;
                                bnd=1;
                        }
                        else
                        {
                                ptrinter[i]=vet1[i1];
                                i1=i1+1;
                                bnd=0;
                        }
                }
        }
        else if(tam2>tam1)
        {
                for(i=0;i<tamc;i++)
                {
                        if(bnd==0 && i1<tam1)
                        {
                                ptrinter[i]=vet1[i1];
                                i1=i1+1;
                                bnd=1;
                        }
                        else
                        {
                                ptrinter[i]=vet2[i2];
                                i2=i2+1;
                                bnd=0;
                        }
                }
        }
        else
        {
                for(i=0;i<tamc;i++)
                {
                        if(bnd==0)
                        {
                                ptrinter[i]=vet1[i1];
                                i1=i1+1;
                                bnd=1;
                        }
                        else
                        {
                                ptrinter[i]=vet2[i2];
                                i2=i2+1;
                                bnd=0;
                        }
                }
        }

/*	for(int i=0;i<tamc;i++)
	{
		if(i>=tam1)
		{
		       ptrconcat[i]=vet2[i-tam1];
		}
		else
		{
		       ptrconcat[i]=vet1[i];
		}
	}*/
	cout<<"Vetor intercalado: ";
	for(i=0;i<tamc;i++)
	{
		cout<<ptrinter[i]<<" ";
		getch();
	}
}