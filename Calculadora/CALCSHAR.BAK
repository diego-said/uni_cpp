// IC - Calculadora
// Alunos: Daniel Mambrini, Diego Alves
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
        clrscr();
        char ver,sair='N';
        while(ver!='0')
        {
        clrscr();
        cout<<"Calculadora Shark's - versao 0.1";
        cout<<"\n________________________________";
        cout<<"\n\nMenu de Opcoes:\n";
        cout<<"\n1 - Adicao";
        cout<<"\n2 - Subtracao";
        cout<<"\n3 - Multiplicacao";
        cout<<"\n4 - Divisao";
        cout<<"\n5 - Porcentagem";
        cout<<"\n6 - Soma com porcentagem";
        cout<<"\n7 - Subtracao com porcentagem";
        cout<<"\n8 - Raiz quadrada";
        cout<<"\n9 - Potenciacao";
        cout<<"\na - Potencia elevada a 10";
        cout<<"\nb - Potencia com base 10";
        cout<<"\nc - Fatorial";
        cout<<"\n\n0- Sair";
        cout<<"\n\nDigite a opcao desejada:";
        cin>>ver;
        switch (ver)
        {
              case '1':
              clrscr();
              cout<<"Funcao Adicao";
              do
              {
              int a, qtda=0;
              float soma=0,valad=0;
              cout<<"\n\nDigite a quantidade de numeros a serem somados:";
              cin>>qtda;
              cout<<"\nInsira os valores:";
              for(a=1;a<=qtda;a++)
              {
                cin>>valad;
                soma=soma+valad;
              }
              cout<<"Resultado: "<<soma;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '2':
              clrscr();
              cout<<"Funcao Subtracao";
              do
              {
              int s, qtds=0;
              float sub=0,valsub=0;
              cout<<"\n\nDigite a quantidade de numeros a serem subtraidos:";
              cin>>qtds;
              cout<<"\nInsira os valores:";
              cin>>valsub;
              sub=valsub;
              for(s=1;s<=(qtds-1);s++)
              {
                cin>>valsub;
                sub=sub-valsub;
              }
              cout<<"Resultado: "<<sub;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '3':
              clrscr();
              cout<<"Funcao Multiplicacao";
              do
              {
              int m, qtdm=0;
              float mult=1,valmul=0;
              cout<<"\n\nDigite a quantidade de numeros a serem multiplicados:";
              cin>>qtdm;
              cout<<"\nInsira os valores:";
              for(m=1;m<=qtdm;m++)
              {
                cin>>valmul;
                mult=mult*valmul;
              }
              cout<<"Resultado: "<<mult;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              mult=1;
              }while(sair!='N');
              break;

              case '4':
              clrscr();
              cout<<"Funcao Divisao";
              do
              {
              int d, qtdd=0,bandd=1;
              float div=1,valdiv=0;
              cout<<"\n\nDigite a quantidade de numeros a serem divididos:";
              cin>>qtdd;
              cout<<"\nInsira os valores:";
              for(d=1;d<=qtdd;d++)
              {
                cin>>valdiv;
                if (bandd==1)
                {
                div=valdiv;
                bandd=0;
                }
                else
                {
                div=div / valdiv;
                }
              }
              cout<<"Resultado: "<<div;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '5':
              clrscr();
              float valpor=0, por=0, porres=0;
              cout<<"Funcao Porcentagem";
              do
              {
              cout<<"\n\nDigite o valor: ";
              cin>>valpor;
              cout<<"Digite a porcentagem: ";
              cin>>por;
              porres=valpor*(por/100);
              cout<<"A porcentagem de "<<por<<"% do numero "
              <<valpor<<" e: "<<porres;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '6':
              clrscr();
              float valpora=0, pora=0, porresa=0;
              cout<<"Funcao Soma com porcentagem";
              do
              {
              cout<<"\n\nDigite o valor: ";
              cin>>valpora;
              cout<<"Digite a porcentagem: ";
              cin>>pora;
              porresa=valpora*(1+(pora/100));
              cout<<"O valor "<<valpora<<" somando-se "<<pora<<"% e: "<<porresa;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '7':
              clrscr();
              float valpors=0, pors=0, porress=0;
              cout<<"Funcao Subtracao com porcentagem";
              do
              {
              cout<<"\n\nDigite o valor: ";
              cin>>valpors;
              cout<<"Digite a porcentagem: ";
              cin>>pors;
              porress=valpors*(1-(pors/100));
              cout<<"O valor "<<valpors<<" subtraindo-se "<<pors<<"% e: "<<porress;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '8':
              clrscr();
              float raiz=0, valraz=0;
              cout<<"Funcao Raiz quadrada";
              do
              {
              cout<<"\n\nDigite o valor: ";
              cin>>valraz;
              raiz=sqrt(valraz);
              cout<<"Resultado: "<<raiz;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case '9':
              clrscr();
              float pont=0,base=0,exp=0;
              cout<<"Funcao Potenciacao";
              do
              {
              cout<<"\n\nDigite a base: ";
              cin>>base;
              cout<<"Digite o expoente: ";
              cin>>exp;
              pont=pow(base,exp);
              cout<<"Resultado: "<<pont;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case 'a':
              case 'A':
              clrscr();
              float pontx=0,basex=0;
              cout<<"Funcao Potencia elevada a 10";
              do
              {
              cout<<"\n\nDigite a base: ";
              cin>>basex;
              pontx=pow(basex,10);
              cout<<"Resultado: "<<pontx;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case 'b':
              case 'B':
              clrscr();
              float ponty=0,expy=0;
              cout<<"Funcao Potencia com base 10";
              do
              {
              cout<<"\n\nDigite o expoente: ";
              cin>>expy;
              ponty=pow(10,expy);
              cout<<"Resultado: "<<ponty;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;

              case 'c':
              case 'C':
              clrscr();
              cout<<"Funcao Fatorial";
              do
              {
              int f,fat=1,valfat=0;
              cout<<"\n\nDigite o valor: ";
              cin>>valfat;
              for(f=1;f<=valfat;f++)
              {
                fat=fat*f;
              }
              cout<<"Resultado: "<<fat;
              cout<<"\n\nDeseja continuar (S/N) ?";
              cin>>sair;
              }while(sair!='N');
              break;
        }
        }
}