// Lista 4 - 5
#include<iostream.h>
#include<conio.h>
void main()
{
        int i, qtde=0;
        float VetNum[20], s=0;
        clrscr();
        for(i=0;i<=19;i++)
        {
                VetNum[i]=0;
                cout<<"Digite o valor do vetor VetNum: ";
                cin>>VetNum[i];
                if(VetNum[i]>100)
                {
                        qtde=qtde+1;
                        s=s+VetNum[i];
                }
        }
        cout<<"Quantidade de valores maiores que 100: "<<qtde<<" sua soma: "<<s;
        getch();
}