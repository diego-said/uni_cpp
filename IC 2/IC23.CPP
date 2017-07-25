// IC 2 - 3
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,b=0;
	char string[50],l;
	strcpy(string,"Eu amo programacao");
	cout<<"Digite uma letra: ";
	cin>>l;
	for(i=0;i<=(strlen(string)-1);i++)
	{
		if(string[i]==l)
		{
			cout<<i<<" ";
			b=1;
		}
	}
	if(b==0)
	{
		cout<<"\nNenhuma letra encontrada.";
	}
	else
	{
		cout<<"\nA letra foi encontrada nas posicoes acima.";
	}
	getch();
}
