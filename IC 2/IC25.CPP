// IC 2 - 5
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int vet[20],i,j,aux,bin=0,in=1,fi=20,a=0,para=0;
	randomize();
	for(i=0;i<=19;i++)
	{
		vet[i]=rand()%50;
	}
	for(i=0;i<=18;i++)
	{
		for(j=i+1;j<=19;j++)
		{
			if(vet[i]>vet[j])
			{
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	for(i=0;i<=19;i++)
	{
			cout<<vet[i]<<" ";
	}
	cout<<"\n\nDigite o valor: ";
	cin>>a;
	while(para!=1&&in!=fi)
	{
				 bin=(fi+in)/2;
				 if(vet[bin]==a)
				 {
						cout<<"O valor foi encontrado na posi‡Æo "<<bin<<" do vetor.";
                                                para=1;
				 }
				 else
				 {
						if(vet[bin]>a)
						{
								fi=bin;
						}
						else
						{
								in=bin;
						}
				 }

	}
        if(para==0)
        {
                if(vet[0]==a)
                {
                        cout<<"O valor foi encontrado na posi‡Æo 0 do vetor.";
                }
                else
                {
                        cout<<"O valor nao foi encontrado no vetor.";
                }
        }
	getch();
}
