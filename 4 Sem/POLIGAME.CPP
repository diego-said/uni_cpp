#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct aresta{
       int *v1,*v2;
       char operador;
};

void main()
{
        clrscr();
        int n,*vertices,f=1,b=0,i,j,k,l,m,*resultado,*guia,*cguia,*atual,*gera;
        aresta *arestas;
        cout<<"Digite o numero de vertices: ";
        cin>>n;
        arestas = new aresta[n];
        vertices = new int[n];
        resultado = new int[n+1];
        guia= new int[n];
        cguia= new int[n];
        atual=new int[n+1];
        gera= new int[2][n];
        for(i=0;i<n;i++)
        {
                cout<<"Digite um sinal(+ ou *): ";
                cin>>arestas[i].operador;
                cout<<"Digite um numero inteiro: ";
                cin>>vertices[i];
                if(b==0)
                {
                        *arestas[i].v1=vertices[i];
                        b=1;
                }
                else
                {
                        *arestas[i].v1=vertices[i-1];
                        *arestas[i].v2=vertices[i];
                }
        }
        *arestas[0].v2=vertices[i-1];
        for(i=0;i<n;i++)
        {
                for(j=1;j<=(n-i);j++)
                {
                        f=f*j;
                }
                guia[i]=f/(n-i);
                cguia[i]=f/(n-i);
                f=1;
        }
        k=guia[0];
        l=n;
        for(i=0;i<n;i++)
        {
                for(j=0;j<k;j++)
                {

                        for(m=0;m<n;m++)
                        {
                                if(cguia[m]>0)
                                {
                                        atual[m]=l-m;
                                        cguia-=1;
                                }
                        }
                        getch();
                        cout<<endl;
                }
        }
        getch();

}