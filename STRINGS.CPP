#include<iostream.h>
#include<string.h>
#include<conio.h>
// strlen, strcat, strcpy, strcmp
void main()
{
	clrscr();
	char nome[15], snome[15], cnome[30];
	int i,j,n;
	cout<<"Digite seu nome:";
	cin>>nome;
	cout<<"Digite seu sobrenome:";
	cin>>snome;
	cout<<"Seu nome possui "<<strlen(nome)<<" letras"<<endl;
	strcpy(cnome,nome);
	strcat(cnome," ");
	strcat(cnome,snome);
	cout<<cnome<<endl;
	for(i=strlen(cnome)-1;i>=0;i--)
	{
		cout<<cnome[i];
	}
	cout<<endl;
        n=strlen(cnome);
	for(i=0;i<=strlen(cnome)-1;i++)
	{
	        for(j=0;j<=strlen(cnome)-n;j++)
                {
                        cout<<cnome[j];
                }
                cout<<endl;
                n=n-1;
	}
	getch();
}