// Programa para converter temperatura (Lista 1 - 1)
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
        float tempC, tempF;
        clrscr();
        cout<<"Digite a temperatura a ser convertida de §C para Fahrenheit: "<<endl;
        cin>>tempC;
        tempF=(9*tempC+160)/5;
        cout<<"Temperatura convertida: " << tempF;
        sleep(3);
}
