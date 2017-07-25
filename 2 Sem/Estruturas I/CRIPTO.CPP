#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void cripto(char[],int,int);
void dcripto(char[],int,int);
int contchars(char[],int);
void chars(char[],char[],int);
void dchars(char[],char[],int);

void main()
{
	clrscr();
	FILE *Ptrabre;
	int tam=0,i=0,tam2,k,ce;
	char *Ptrchar,*Ptrtrab,c;
	if((Ptrabre=fopen("original.txt","r"))==NULL)
	{
		cout<<"Problema na abertura do arquivo original.";
		getch();
	}
	else
	{
		while(!feof(Ptrabre))
		{
		       c=fgetc(Ptrabre);
		       cout<<c;
		       tam=tam+1;
		}
		rewind(Ptrabre);
		Ptrchar=new char[tam];
		while(!feof(Ptrabre))
		{
		       Ptrchar[i]=fgetc(Ptrabre);
		       i++;
		}
		Ptrchar[tam-1]='\0';
		cout<<endl<<"Ptrchar"<<Ptrchar;
		tam=tam-1;
		ce=contchars(Ptrchar,tam);
		tam2=(tam+ce);
		cout << "\n Tamanho2 arquivo = "<<tam2;
		Ptrtrab=new char[tam2];
		chars(Ptrtrab,Ptrchar,tam);
		cout<<endl<<"Digite k: ";
		cin>>k;
		cripto(Ptrtrab,tam2,k);
		cout<<Ptrtrab<<endl;
		dcripto(Ptrtrab,tam2,k);
		cout<<Ptrtrab<<endl;
		dchars(Ptrchar,Ptrtrab,tam2);
		cout<<Ptrchar;
		getch();
	}
}

int contchars(char msg[],int tam)
{
	int cod,i,ce=0;
	for(i=0;i<tam;i++)
	{
		cod=(int)msg[i];
		if(cod<65 || cod>90)
		{
			ce=ce+1;
		}
	}
	ce=(ce*4);
	return ce;
}

void chars(char msg[],char msgcpy[],int tam)
{
	int i,j=0,cod;
	for(i=0;i<strlen(msgcpy);i++)
	{
		cod=(int)msgcpy[i];
		if(cod>=65 && cod <=90)
		{
			msg[j]=msgcpy[i];
			j=j+1;
		}
		else if(cod==32)
		{
			msg[j]='W';
			msg[j+1]='B';
			msg[j+2]='R';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==44)
		{
			msg[j]='W';
			msg[j+1]='V';
			msg[j+2]='R';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==46)
		{
			msg[j]='W';
			msg[j+1]='P';
			msg[j+2]='T';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==59)
		{
			msg[j]='W';
			msg[j+1]='P';
			msg[j+2]='V';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==58)
		{
			msg[j]='W';
			msg[j+1]='D';
			msg[j+2]='P';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==33)
		{
			msg[j]='W';
			msg[j+1]='E';
			msg[j+2]='X';
			msg[j+3]='W';
			j=j+4;
		}
		else if(cod==63)
		{
			msg[j]='W';
			msg[j+1]='I';
			msg[j+2]='N';
			msg[j+3]='W';
			j=j+4;
		}
	}
	msg[j]='\0';
	cout<<endl<<msg;
}

void cripto(char msg[],int tam,int k)
{
	FILE *Ptrscod;
	int i,cod,codf=0,aux1,aux2;
	for(i=0;i<strlen(msg);i++)
	{
		cod=(int)msg[i];
		codf=cod+k;
		if(codf>90)
		{
			aux1=codf-90;
			aux2=k-aux1;
			codf=65+aux2;
		}
		msg[i]=(char)codf;
	}
	if((Ptrscod=fopen("cripto.txt","w+"))==NULL)
	{
		cout<<"Problema em salvar o arquivo criptografado.";
	}
	else
	{
		for(i=0;i<strlen(msg);i++)
		{
			fputc(msg[i],Ptrscod);
		}
	}
}

void dcripto(char msg[],int tam,int k)
{
	FILE *Ptrscod;
	int i,cod,codf=0,aux1,aux2;
	for(i=0;i<strlen(msg);i++)
	{
		codf=(int)msg[i];
		cod=codf-k;
		if(cod<65)
		{
			aux1=cod-65;
			aux2=k-aux1;
			cod=90-aux2;
		}
		msg[i]=(char)cod;
	}
	if((Ptrscod=fopen("volta.txt","w+"))==NULL)
	{
		cout<<"Problema em salvar o arquivo criptografado.";
	}
	else
	{
		for(i=0;i<strlen(msg);i++)
		{
			fputc(msg[i],Ptrscod);
		}
	}
}

void dchars(char msg[],char msgcpy[],int tam)
{
	int i,cod1,cod2,cod3,cod4,j=0;
	for(i=0;i<strlen(msgcpy);i++)
	{
		cod1=(int)msgcpy[i];
		if(cod1!=87)
		{
			msg[j]=(char)cod1;
			j=j+1;
		}
		else
		{
			cod2=(int)msgcpy[i+1];
			cod3=(int)msgcpy[i+2];
			cod4=(int)msgcpy[i+3];
			if(cod1==87 && cod2==66 && cod3==82 && cod4==87)
			{
				msg[j]=' ';
				j=j+1;
				i=i+3;
			}
                        else if(cod1==87 && cod2==86 && cod3==82 && cod4==87)
                        {
                                msg[j]=',';
				j=j+1;
                                i=i+3;
                        }
                        else if(cod1==87 && cod2==80 && cod3==84 && cod4==87)
                        {
                                msg[j]='.';
                                j=j+1;
                                i=i+3;
                        }
                        else if(cod1==87 && cod2==80 && cod3==86 && cod4==87)
                        {
                                msg[j]=';';
                                j=j+1;
                                i=i+3;
                        }
                        else if(cod1==87 && cod2==68 && cod3==80 && cod4==87)
                        {
                                msg[j]=':';
                                j=j+1;
                                i=i+3;
                        }
                        else if(cod1==87 && cod2==69 && cod3==87 && cod4==87)
                        {
                                msg[j]='!';
                                j=j+1;
                                i=i+3;
                        }
                        else
                        {
                                msg[j]='?';
                                j=j+1;
				i=i+3;
                        }
                }
        }
}