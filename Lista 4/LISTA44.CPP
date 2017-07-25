#include<iostream.h>
#include<conio.h>
void main()
{
        int Vet[10],i,b=0,s;
        clrscr();
        for(i=0;i<=9;i++)
        {
                Vet[i]=0;
                cout<<"Digite o valor do vetor Vet: ";
                cin>>Vet[i];
        }
        cout<<"Digite o valor para pesquisa: ";
        cin>>s;
        for(i=0;i<=9;i++)
        {
                if(s==Vet[i])
                {
                        cout<<i<<" ";
                        b=1;
                }
        }
        if (b==1)
        {
                cout<<"\nO numero pesquisado foi encontrado na(s) posicao(oes) acima.";
        }
        else
        {
                cout<<"Nao foi encontrado nenhum numero.";
        }
        getch();
}