// Programa para calculo de salario (Lista 1 - 2)
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
        float salarioLiquido,INSS,aulas,valorHora;
        clrscr();
        cout<<"Digite o valor da hora aula: ";
        cin>>valorHora;
        cout<<"\nDigite o numero de aulas:";
        cin>>aulas;
        cout<<"\nDigite o valor de desconto do INSS:";
        cin>>INSS;
        salarioLiquido=(valorHora*aulas)-INSS;
        cout<<"\nSalario liquido: "<<salarioLiquido;
        sleep(3);
}