#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
        clrscr();
        char ver;
        int n=1;
        float x,y,c;


      while(ver!='s')
      {
      cout<<"Calculadora eletronica versao 0.1"<<
      endl<<endl<<"* - Multiplica‡Æo"<<
      endl<<"/ - DivisÆo"<<
      endl<<"+ - para Soma"<<
      endl<<"- - subtra‡Æo"<<
      endl<<"5 para raiz quadrada"<<
      endl<<"6 para potencia‡Æo"<<
      endl<<"7 para elevar a potencia 10"<<
      endl<<"8 para fatorial"<<
      endl<<"0 para sair"<<endl;

      cin>>n;
             if(n>0&&n<12)
             {             
             cout<<"Insira os numeros"<<endl;
             cin>>x >> y;
                       

                 switch(n)
                 { 
                 case 1:  c=x*y ; break;
                 case 2:  c= x / y; break;
                 case 3:  c= x + y; break;
                 case 4:  c= x-y; break;
                 case 5:  c=sqrt(x); break;//repair tratar
                 case 6:  c=pow(x,y);break;//repair tratar
                 case 7:  c=pow(x,10);break;//repair tratar com if
                 }
             cout<<" = "<<c;

             cout<<"\nTecle 1 para continuar ou 0 para sair"<<endl;
             cin>>n;
             }
       }

getch();

}