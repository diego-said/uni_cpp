#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <mem.h>

const VIDEO=0x10;
unsigned char *vga = (unsigned char *) MK_FP(0xA000, 0);

int Prime(int x)
{
	int s=1;

	for(int i=2; i<x && s==1; ++i)
	{
		if(x%i==0)
			s=0;
		else
			s=1;
	}

	return s;
}

int Perfect(int x)
{
	int s=0;

	for(int i=1; i<=x/2; i++)
		if(x%i==0)
			s+=i;

	if(s==x)
		s=1;
	else
		s=0;

	return s;
}

int Mult2(int x)
{
	int s;

	if(x%2==0)
		s=1;
	else
		s=0;

	return s;
}

double Factorial(double x)
{
	double s;

	if(x==1)
		return 1;

	s=Factorial(x-1)*x;

	return s;
}

double Quad1(double a, double b, double c)
{
	if((b*b)-(4*a*c)<0)
		return 0;
	else
		return (-b+sqrt((b*b)-(4*a*c)))/(2*a);
}

double Quad2(double a, double b, double c)
{
	return (-b-sqrt((b*b)-(4*a*c)))/(2*a);
}

void SetMCGA()
{
	_AX=0x0013;
	geninterrupt(VIDEO);
}

void SetText()
{
	_AX=0x0003;
	geninterrupt(VIDEO);
}

void Putpixel(int x, int y, unsigned char Col)
{
  //  	memset(vga+(x+(y*320)), Col, 1);
	_AH = 0x0C;
	_AL = Col;
	_CX = x;
	_DX = y;
	_BX = 0x01;
	geninterrupt (VIDEO);
}

void cls()
{
	REGS regs;

	regs.h.ah=0x07;
	regs.h.al=0;
	regs.h.bh=7;
	regs.h.ch=0;
	regs.h.cl=0;
	regs.h.dh=24;
	regs.h.dl=79;

	int86(VIDEO, &regs, &regs);
}

void TopWindow(unsigned char Col1, unsigned char Col2)
{
	for(int i=70; i<=250; i++)
		for(int l=10; l<=30; l++)
			Putpixel(i, l, Col1);
	for(i=66; i<=69; i++)
		for(l=13; l<=34; l++)
			Putpixel(i, l, Col2);
	for(i=70; i<=246; i++)
		for(l=31; l<=34; l++)
			Putpixel(i, l, Col2);
}

void CALCULADORA(unsigned char Col)
{
	for(int i=76; i<=79; i++)
		Putpixel(i, 14, Col);
	Putpixel(75, 15, Col);
	Putpixel(74, 16, Col);
	for(int l=17; l<=23; l++)
		Putpixel(73, l, Col);
	Putpixel(74, 24, Col);
	Putpixel(75, 25, Col);
	for(i=76; i<=79; i++)
		Putpixel(i, 26, Col);
	for(i=87; i<=89; i++)
		Putpixel(i, 14, Col);
	for(l=15; l<=16; l++)
		{
		Putpixel(86, l, Col);
		Putpixel(90, l, Col);
		}
	for(l=17; l<=19; l++)
		{
		Putpixel(85, l, Col);
		Putpixel(91, l, Col);
		}
	for(l=20; l<=23; l++)
		{
		Putpixel(84, l, Col);
		Putpixel(92, l, Col);
		}
	for(l=23; l<=26; l++)
		{
		Putpixel(83, l, Col);
		Putpixel(93, l, Col);
		}
	for(i=85; i<=91; i++)
		Putpixel(i, 20, Col);
	for(l=14; l<=26; l++)
		Putpixel(96, l, Col);
	for(i=97; i<=103; i++)
		Putpixel(i, 26, Col);
	for(i=109; i<=112; i++)
		Putpixel(i, 14, Col);
	Putpixel(108, 15, Col);
	Putpixel(107, 16, Col);
	for(l=17; l<=23; l++)
		Putpixel(106, l, Col);
	Putpixel(107, 24, Col);
	Putpixel(108, 25, Col);
	for(i=109; i<=112; i++)
		Putpixel(i, 26, Col);
	for(l=14; l<=23; l++)
		Putpixel(116, l, Col);
	for(l=14; l<=23; l++)
		Putpixel(126, l, Col);
	Putpixel(117, 24, Col);
	Putpixel(118, 25, Col);
	for(i=119; i<=123; i++)
		Putpixel(i, 26, Col);
	Putpixel(124, 25, Col);
	Putpixel(125, 24, Col);
	for(l=14; l<=26; l++)
		Putpixel(130, l, Col);
	for(i=131; i<=137; i++)
		Putpixel(i, 26, Col);
	for(i=144; i<=146; i++)
		Putpixel(i, 14, Col);
	for(l=15; l<=16; l++)
		{
		Putpixel(143, l, Col);
		Putpixel(147, l, Col);
		}
	for(l=17; l<=19; l++)
		{
		Putpixel(142, l, Col);
		Putpixel(148, l, Col);
		}
	for(l=20; l<=23; l++)
		{
		Putpixel(141, l, Col);
		Putpixel(149, l, Col);
		}
	for(l=23; l<=26; l++)
		{
		Putpixel(140, l, Col);
		Putpixel(150, l, Col);
		}
	for(i=142; i<=148; i++)
		Putpixel(i, 20, Col);
	for(i=153; i<=158; i++)
		Putpixel(i, 14, Col);
	for(i=153; i<=158; i++)
		Putpixel(i, 26, Col);
	for(l=15; l<=25; l++)
		Putpixel(154, l, Col);
	Putpixel(159, 15, Col);
	Putpixel(160, 16, Col);
	Putpixel(159, 25, Col);
	Putpixel(160, 24, Col);
	for(l=17; l<=23; l++)
		Putpixel(161, l, Col);
	for(l=17; l<=23; l++)
		Putpixel(164, l, Col);
	for(l=17; l<=23; l++)
		Putpixel(173, l, Col);
	Putpixel(166, 15, Col);
	Putpixel(165, 16, Col);
	Putpixel(171, 15, Col);
	Putpixel(172, 16, Col);
	Putpixel(166, 25, Col);
	Putpixel(165, 24, Col);
	Putpixel(171, 25, Col);
	Putpixel(172, 24, Col);
	for(i=167; i<=170; i++)
		Putpixel(i, 14, Col);
	for(i=167; i<=170; i++)
		Putpixel(i, 26, Col);
	for(l=15; l<=26; l++)
		Putpixel(177, l, Col);
	for(i=176; i<=181; i++)
		Putpixel(i, 14, Col);
	Putpixel(182, 15, Col);
	for(l=16; l<=18; l++)
		Putpixel(183, l, Col);
	Putpixel(182, 19, Col);
	for(i=178; i<=181; i++)
		Putpixel(i, 20, Col);
	Putpixel(179, 21, Col);
	Putpixel(180, 22, Col);
	Putpixel(181, 23, Col);
	Putpixel(182, 24, Col);
	Putpixel(183, 25, Col);
	Putpixel(184, 26, Col);
	for(i=191; i<=193; i++)
		Putpixel(i, 14, Col);
	for(l=15; l<=16; l++)
		{
		Putpixel(190, l, Col);
		Putpixel(194, l, Col);
		}
	for(l=17; l<=19; l++)
		{
		Putpixel(189, l, Col);
		Putpixel(195, l, Col);
		}
	for(l=20; l<=23; l++)
		{
		Putpixel(188, l, Col);
		Putpixel(196, l, Col);
		}
	for(l=23; l<=26; l++)
		{
		Putpixel(187, l, Col);
		Putpixel(197, l, Col);
		}
	for(i=189; i<=195; i++)
		Putpixel(i, 20, Col);
	for(i=215; i<=218; i++)
		Putpixel(i, 14, Col);
	Putpixel(214, 15, Col);
	Putpixel(213, 16, Col);
	for(l=17; l<=23; l++)
		Putpixel(212, l, Col);
	Putpixel(213, 24, Col);
	Putpixel(214, 25, Col);
	for(i=215; i<=218; i++)
		Putpixel(i, 26, Col);
	for(l=14; l<=26; l++)
		Putpixel(227, l, Col);
	for(l=14; l<=26; l++)
		Putpixel(242, l, Col);
	for(i=222; i<=232; i++)
		Putpixel(i, 20, Col);
	for(i=237; i<=247; i++)
		Putpixel(i, 20, Col);
}

void BottomWindow(unsigned char Col1, unsigned char Col2, unsigned char Col3)
{
	for(int i=90; i<=230; i++)
		Putpixel(i, 150, Col1);
	for(i=90; i<=230; i++)
		Putpixel(i, 149, Col2);
	for(i=90; i<=230; i++)
		Putpixel(i, 151, Col2);
	for(i=90; i<=230; i++)
		Putpixel(i, 197, Col1);
	for(i=90; i<=230; i++)
		Putpixel(i, 196, Col2);
	for(i=90; i<=230; i++)
		Putpixel(i, 198, Col2);
	Putpixel(89, 151, Col1);
	Putpixel(89, 150, Col2);
	Putpixel(89, 152, Col2);
	Putpixel(88, 152, Col1);
	Putpixel(88, 151, Col2);
	Putpixel(88, 153, Col2);
	Putpixel(231, 151, Col1);
	Putpixel(231, 150, Col2);
	Putpixel(231, 152, Col2);
	Putpixel(232, 152, Col1);
	Putpixel(232, 151, Col2);
	Putpixel(232, 153, Col2);
	Putpixel(89, 196, Col1);
	Putpixel(89, 195, Col2);
	Putpixel(89, 197, Col2);
	Putpixel(88, 195, Col1);
	Putpixel(88, 194, Col2);
	Putpixel(88, 196, Col2);
	Putpixel(231, 196, Col1);
	Putpixel(231, 195, Col2);
	Putpixel(231, 197, Col2);
	Putpixel(232, 195, Col1);
	Putpixel(232, 194, Col2);
	Putpixel(232, 196, Col2);
	Putpixel(233, 195, Col2);
	Putpixel(87, 195, Col2);
	Putpixel(87, 152, Col2);
	Putpixel(233, 152, Col2);
	for(int l=153; l<=194; l++)
		Putpixel(87, l, Col1);
	for(l=153; l<=194; l++)
		Putpixel(233, l, Col1);
	for(l=153; l<=194; l++)
		Putpixel(86, l, Col2);
	for(l=153; l<=194; l++)
		Putpixel(234, l, Col2);
	for(l=153; l<=194; l++)
		Putpixel(232, l, Col2);
	for(l=153; l<=194; l++)
		Putpixel(88, l, Col2);
	for(i=90; i<=230; i++)
		for(l=152; l<=195; l++)
			Putpixel(i, l, Col3);
	for(l=153; l<=194; l++)
		Putpixel(89, l, Col3);
	for(l=153; l<=194; l++)
		Putpixel(231, l, Col3);
}

void BRUNO(unsigned char Col1, unsigned char Col2)
{
	for(int l=153; l<=157; l++)
		Putpixel(91, l, Col1);
	Putpixel(92, 153, Col1);
	Putpixel(93, 154, Col1);
	Putpixel(92, 155, Col1);
	Putpixel(93, 156, Col1);
	Putpixel(92, 157, Col1);
	for(l=153; l<=157; l++)
		Putpixel(95, l, Col1);
	Putpixel(96, 153, Col1);
	Putpixel(97, 154, Col1);
	Putpixel(96, 155, Col1);
	Putpixel(97, 156, Col1);
	Putpixel(98, 157, Col1);
	for(l=153; l<=157; l++)
		Putpixel(100, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(102, l, Col1);
	Putpixel(101, 157, Col1);
	for(l=153; l<=157; l++)
		Putpixel(104, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(107, l, Col1);
	Putpixel(105, 154, Col1);
	Putpixel(106, 155, Col1);
	for(l=153; l<=157; l++)
		Putpixel(109, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(111, l, Col1);
	Putpixel(110, 157, Col1);
	Putpixel(110, 153, Col1);
	for(int i=115; i<=117; i++)
		Putpixel(i, 153, Col1);
	for(i=115; i<=117; i++)
		Putpixel(i, 155, Col1);
	for(i=115; i<=117; i++)
		Putpixel(i, 157, Col1);
	Putpixel(115, 154, Col1);
	Putpixel(117, 156, Col1);
	for(l=153; l<=157; l++)
		Putpixel(119, l, Col1);
	for(i=120; i<=121; i++)
		Putpixel(i, 153, Col1);
	for(i=120; i<=121; i++)
		Putpixel(i, 157, Col1);
	for(l=153; l<=157; l++)
		Putpixel(123, l, Col1);
	Putpixel(124, 153, Col1);
	Putpixel(124, 157, Col1);
	for(l=153; l<=157; l++)
		Putpixel(125, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(127, l, Col1);
	Putpixel(128, 153, Col1);
	Putpixel(129, 154, Col1);
	Putpixel(128, 155, Col1);
	for(l=153; l<=157; l++)
		Putpixel(131, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(133, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(136, l, Col1);
	Putpixel(134, 154, Col1);
	Putpixel(135, 155, Col1);
	for(l=153; l<=157; l++)
		Putpixel(138, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(140, l, Col1);
	Putpixel(139, 155, Col1);
	for(l=153; l<=157; l++)
		Putpixel(142, l, Col1);
	for(l=153; l<=157; l++)
		Putpixel(144, l, Col1);
	Putpixel(143, 153, Col1);
	Putpixel(143, 157, Col1);
	for(i=227; i<=229; i++)
		Putpixel(i, 153, Col2);
	for(i=227; i<=229; i++)
		Putpixel(i, 155, Col2);
	for(i=227; i<=229; i++)
		Putpixel(i, 157, Col2);
	Putpixel(227, 154, Col2);
	Putpixel(229, 156, Col2);
	for(l=153; l<=157; l++)
		Putpixel(225, l, Col2);
	for(l=153; l<=155; l++)
		Putpixel(223, l, Col2);
	Putpixel(224, 155, Col2);
	Putpixel(224, 153, Col2);
	for(l=153; l<=157; l++)
		Putpixel(221, l, Col2);
	Putpixel(220, 154, Col2);
	for(l=153; l<=157; l++)
		Putpixel(218, l, Col2);
	for(l=153; l<=155; l++)
		Putpixel(216, l, Col2);
	Putpixel(217, 155, Col2);
	for(l=154; l<=157; l++)
		Putpixel(212, l, Col2);
	Putpixel(213, 157, Col2);
	Putpixel(214, 157, Col2);
	Putpixel(214, 155, Col2);
	Putpixel(213, 155, Col2);
	Putpixel(214, 156, Col2);
	Putpixel(213, 153, Col2);
}

void JULIO(unsigned char col1, unsigned char col2)
{
	for(int l=160; l<=163; l++)
		Putpixel(94, l, col1);
	for(int i=92; i<=93; i++)
		Putpixel(i, 164, col1);
	Putpixel(91, 163, col1);
	for(l=160; l<=164; l++)
		Putpixel(96, l, col1);
	for(l=160; l<=164; l++)
		Putpixel(98, l, col1);
	Putpixel(97, 164, col1);
	for(l=160; l<=164; l++)
		Putpixel(100, l, col1);
	for(i=101; i<=102; i++)
		Putpixel(i, 164, col1);
	for(l=160; l<=164; l++)
		Putpixel(104, l, col1);
	for(l=160; l<=164; l++)
		Putpixel(106, l, col1);
	for(l=160; l<=164; l++)
		Putpixel(108, l, col1);
	Putpixel(107, 164, col1);
	Putpixel(107, 160, col1);
	for(l=160; l<=164; l++)
		Putpixel(112, l, col1);
	for(i=113; i<=114; i++)
		Putpixel(i, 160, col1);
	for(i=113; i<=114; i++)
		Putpixel(i, 164, col1);
	for(l=160; l<=164; l++)
		Putpixel(116, l, col1);
	for(i=117; i<=118; i++)
		Putpixel(i, 160, col1);
	for(i=117; i<=118; i++)
		Putpixel(i, 164, col1);
	for(i=117; i<=118; i++)
		Putpixel(i, 162, col1);
	for(i=120; i<=122; i++)
		Putpixel(i, 160, col1);
	for(i=120; i<=122; i++)
		Putpixel(i, 162, col1);
	for(i=120; i<=122; i++)
		Putpixel(i, 164, col1);
	Putpixel(120, 161, col1);
	Putpixel(122, 163, col1);
	for(l=163; l<=164; l++)
		Putpixel(124, l, col1);
	for(l=161; l<=162; l++)
		Putpixel(125, l, col1);
	for(l=163; l<=164; l++)
		Putpixel(128, l, col1);
	for(l=161; l<=162; l++)
		Putpixel(127, l, col1);
	Putpixel(126, 160, col1);
	Putpixel(126, 162, col1);
	for(l=160; l<=164; l++)
		Putpixel(130, l, col1);
	Putpixel(131, 160, col1);
	Putpixel(132, 161, col1);
	Putpixel(131, 162, col1);
	Putpixel(132, 163, col1);
	Putpixel(133, 164, col1);

	Putpixel(212, 160, col2);
	for(int j=161; j<=164; j++)
		Putpixel(211, j, col2);
	Putpixel(212, 164, col2);
	Putpixel(213, 164, col2);
	Putpixel(213, 163, col2);
	Putpixel(213, 162, col2);
	Putpixel(212, 162, col2);
	for(j=160; j<=162; j++)
		Putpixel(215, j, col2);
	for(j=160; j<=164; j++)
		Putpixel(217, j, col2);
	Putpixel(216, 162, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 160, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 164, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 162, col2);
	Putpixel(221, 161, col2);
	Putpixel(219, 163, col2);
	for(j=160; j<=164; j++)
		Putpixel(223, j, col2);
	for(j=160; j<=164; j++)
		Putpixel(225, j, col2);
	Putpixel(224, 160, col2);
	Putpixel(224, 162, col2);
	Putpixel(224, 164, col2);
	for(i=227; i<=229; i++)
		Putpixel(i, 160, col2);
	for(i=227; i<=229; i++)
		Putpixel(i, 164, col2);
	for(i=227; i<=229; i++)
		Putpixel(i, 162, col2);
	Putpixel(229, 161, col2);
	Putpixel(227, 163, col2);
}

void INICIAR(unsigned char Col, unsigned char Col2)
{
	for(int l=70; l<=80; l++)
		for(int i=125; i<=126; i++)
			Putpixel(i, l, Col);
	Putpixel(124, 70, Col);
	Putpixel(127, 70, Col);
	Putpixel(124, 80, Col);
	Putpixel(127, 80, Col);
	for(l=70; l<=80; l++)
		for(i=130; i<=131; i++)
			Putpixel(i, l, Col);
	Putpixel(129, 70, Col);
	Putpixel(132, 70, Col);
	Putpixel(129, 80, Col);
	Putpixel(132, 80, Col);

	for(l=71; l<=72; l++)
		Putpixel(132, l, Col);
	for(l=71; l<=73; l++)
		Putpixel(133, l, Col);
	for(l=72; l<=74; l++)
		Putpixel(134, l, Col);
	for(l=73; l<=75; l++)
		Putpixel(135, l, Col);
	for(l=74; l<=76; l++)
		Putpixel(136, l, Col);
	for(l=75; l<=77; l++)
		Putpixel(137, l, Col);
	for(l=70; l<=80; l++)
		for(i=138; i<=139; i++)
			Putpixel(i, l, Col);
	Putpixel(137, 70, Col);
	Putpixel(140, 70, Col);
	Putpixel(137, 80, Col);
	Putpixel(140, 80, Col);
	for(l=70; l<=80; l++)
		for(i=143; i<=144; i++)
			Putpixel(i, l, Col);
	Putpixel(142, 70, Col);
	Putpixel(145, 70, Col);
	Putpixel(142, 80, Col);
	Putpixel(145, 80, Col);
	for(l=73; l<=77; l++)
		for(i=148; i<=149; i++)
			Putpixel(i, l, Col);
	for(i=149; i<=150; i++)
		Putpixel(i, 72, Col);
	for(i=150; i<=151; i++)
		Putpixel(i, 71, Col);
	for(i=149; i<=150; i++)
		Putpixel(i, 78, Col);
	for(i=150; i<=151; i++)
		Putpixel(i, 79, Col);
	for(i=151; i<=155; i++)
		Putpixel(i, 80, Col);
	for(i=151; i<=155; i++)
		Putpixel(i, 70, Col);
	for(i=152; i<=155; i++)
		Putpixel(i, 71, Col);
	for(i=150; i<=155; i++)
		Putpixel(i, 79, Col);
	for(l=70; l<=80; l++)
		for(i=158; i<=159; i++)
			Putpixel(i, l, Col);
	Putpixel(157, 70, Col);
	Putpixel(160, 70, Col);
	Putpixel(157, 80, Col);
	Putpixel(160, 80, Col);
	for(l=78; l<=80; l++)
		for(i=163; i<=164; i++)
			Putpixel(i, l, Col);
	for(l=75; l<=77; l++)
		for(i=164; i<=165; i++)
			Putpixel(i, l, Col);
	for(l=72; l<=74; l++)
		for(i=165; i<=166; i++)
			Putpixel(i, l, Col);
	for(l=70; l<=71; l++)
		for(i=166; i<=167; i++)
			Putpixel(i, l, Col);
	for(l=78; l<=80; l++)
		for(i=171; i<=172; i++)
			Putpixel(i, l, Col);
	for(l=75; l<=77; l++)
		for(i=170; i<=171; i++)
			Putpixel(i, l, Col);
	for(l=72; l<=74; l++)
		for(i=169; i<=170; i++)
			Putpixel(i, l, Col);
	for(l=70; l<=71; l++)
		for(i=168; i<=169; i++)
			Putpixel(i, l, Col);
	for(i=166; i<=169; i++)
		Putpixel(i, 75, Col);
	Putpixel(162, 80, Col);
	Putpixel(165, 80, Col);
	Putpixel(173, 80, Col);
	Putpixel(170, 80, Col);
	for(l=70; l<=80; l++)
		for(i=176; i<=177; i++)
			Putpixel(i, l, Col);
	for(l=70; l<=71; l++)
		for(i=178; i<=179; i++)
			Putpixel(i, l, Col);
	for(l=71; l<=72; l++)
		for(i=180; i<=181; i++)
			Putpixel(i, l, Col);
	for(l=72; l<=75; l++)
		for(i=182; i<=183; i++)
			Putpixel(i, l, Col);
	for(l=76; l<=77; l++)
		for(i=178; i<=179; i++)
			Putpixel(i, l, Col);
	for(l=75; l<=78; l++)
		for(i=180; i<=181; i++)
			Putpixel(i, l, Col);
	for(l=78; l<=80; l++)
		for(i=182; i<=183; i++)
			Putpixel(i, l, Col);
	Putpixel(184, 80, Col);
	Putpixel(181, 80, Col);
	Putpixel(175, 80, Col);
	Putpixel(178, 80, Col);
	Putpixel(175, 70, Col);
	Putpixel(183, 72, Col2);
	Putpixel(183, 75, Col2);
	Putpixel(182, 77, Col);
	Putpixel(180, 75, Col2);
	Putpixel(180, 72, Col2);
	Putpixel(180, 78, Col2);
}

void ENCERRAR(unsigned char Col, unsigned char Col2)
{
	for(int l=97; l<=103; l++)
		for(int i=115; i<=116; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=97; l++)
		Putpixel(117, l, Col);
	for(l=103; l<=105; l++)
		Putpixel(117, l, Col);
	for(l=95; l<=96; l++)
		for(i=118; i<=122; i++)
			Putpixel(i, l, Col);
	for(l=104; l<=105; l++)
		for(i=118; i<=122; i++)
			Putpixel(i, l, Col);
	for(l=99; l<=100; l++)
		for(i=117; i<=121; i++)
			Putpixel(i, l, Col);
	Putpixel(116, 96, Col);
	Putpixel(116, 104, Col);
	for(l=95; l<=105; l++)
		for(i=125; i<=126; i++)
			Putpixel(i, l, Col);
	Putpixel(124, 95, Col);
	Putpixel(124, 105, Col);
	Putpixel(127, 105, Col);
	for(l=95; l<=97; l++)
		Putpixel(127, l, Col);
	for(l=96; l<=98; l++)
		Putpixel(128, l, Col);
	for(l=97; l<=99; l++)
		Putpixel(129, l, Col);
	for(l=98; l<=100; l++)
		Putpixel(130, l, Col);
	for(l=99; l<=101; l++)
		Putpixel(131, l, Col);
	for(l=100; l<=102; l++)
		Putpixel(132, l, Col);
	for(l=95; l<=105; l++)
		for(i=133; i<=134; i++)
			Putpixel(i, l, Col);
	Putpixel(132, 95, Col);
	Putpixel(135, 95, Col);
	Putpixel(132, 105, Col);
	Putpixel(135, 105, Col);
	for(l=98; l<=102; l++)
		for(i=137; i<=138; i++)
			Putpixel(i, l, Col);
	for(i=138; i<=139; i++)
		Putpixel(i, 97, Col);
	for(i=139; i<=140; i++)
		Putpixel(i, 96, Col);
	for(i=138; i<=139; i++)
		Putpixel(i, 103, Col);
	for(i=139; i<=140; i++)
		Putpixel(i, 104, Col);
	for(i=140; i<=144; i++)
		Putpixel(i, 105, Col);
	for(i=140; i<=144; i++)
		Putpixel(i, 95, Col);
	for(i=140; i<=144; i++)
		Putpixel(i, 96, Col);
	for(i=140; i<=144; i++)
		Putpixel(i, 104, Col);

	for(l=97; l<=103; l++)
		for(i=146; i<=147; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=97; l++)
		Putpixel(148, l, Col);
	for(l=103; l<=105; l++)
		Putpixel(148, l, Col);
	for(l=95; l<=96; l++)
		for(i=149; i<=153; i++)
			Putpixel(i, l, Col);
	for(l=104; l<=105; l++)
		for(i=149; i<=153; i++)
			Putpixel(i, l, Col);
	for(l=99; l<=100; l++)
		for(i=148; i<=152; i++)
			Putpixel(i, l, Col);
	Putpixel(147, 96, Col);
	Putpixel(147, 104, Col);
	for(l=95; l<=105; l++)
		for(i=156; i<=157; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=96; l++)
		for(i=158; i<=159; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=97; l++)
		for(i=160; i<=161; i++)
			Putpixel(i, l, Col);
	for(l=97; l<=100; l++)
		for(i=162; i<=163; i++)
			Putpixel(i, l, Col);
	for(l=101; l<=102; l++)
		for(i=158; i<=159; i++)
			Putpixel(i, l, Col);
	for(l=100; l<=103; l++)
		for(i=160; i<=161; i++)
			Putpixel(i, l, Col);
	for(l=103; l<=105; l++)
		for(i=162; i<=163; i++)
			Putpixel(i, l, Col);
	Putpixel(164, 105, Col);
	Putpixel(161, 105, Col);
	Putpixel(155, 105, Col);
	Putpixel(158, 105, Col);
	Putpixel(155, 95, Col);
	Putpixel(163, 97, Col2);
	Putpixel(163, 100, Col2);
	Putpixel(162, 102, Col);
	Putpixel(160, 100, Col2);
	Putpixel(160, 97, Col2);
	Putpixel(160, 103, Col2);
	Putpixel(161, 95, Col2);
	Putpixel(160, 95, Col2);
	for(l=95; l<=105; l++)
		for(i=167; i<=168; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=96; l++)
		for(i=169; i<=170; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=97; l++)
		for(i=171; i<=172; i++)
			Putpixel(i, l, Col);
	for(l=97; l<=100; l++)
		for(i=173; i<=174; i++)
			Putpixel(i, l, Col);
	for(l=101; l<=102; l++)
		for(i=168; i<=170; i++)
			Putpixel(i, l, Col);
	for(l=100; l<=103; l++)
		for(i=171; i<=172; i++)
			Putpixel(i, l, Col);
	for(l=103; l<=105; l++)
		for(i=173; i<=174; i++)
			Putpixel(i, l, Col);
	Putpixel(175, 105, Col);
	Putpixel(172, 105, Col);
	Putpixel(166, 105, Col);
	Putpixel(169, 105, Col);
	Putpixel(166, 95, Col);
	Putpixel(174, 97, Col2);
	Putpixel(174, 100, Col2);
	Putpixel(173, 102, Col);
	Putpixel(171, 100, Col2);
	Putpixel(171, 97, Col2);
	Putpixel(171, 103, Col2);
	Putpixel(172, 95, Col2);
	Putpixel(172, 95, Col2);
	for(l=103; l<=105; l++)
		for(i=178; i<=179; i++)
			Putpixel(i, l, Col);
	for(l=100; l<=102; l++)
		for(i=179; i<=180; i++)
			Putpixel(i, l, Col);
	for(l=97; l<=99; l++)
		for(i=180; i<=181; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=96; l++)
		for(i=181; i<=182; i++)
			Putpixel(i, l, Col);
	for(l=103; l<=105; l++)
		for(i=186; i<=187; i++)
			Putpixel(i, l, Col);
	for(l=100; l<=102; l++)
		for(i=185; i<=186; i++)
			Putpixel(i, l, Col);
	for(l=97; l<=99; l++)
		for(i=184; i<=185; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=96; l++)
		for(i=183; i<=184; i++)
			Putpixel(i, l, Col);
	for(i=181; i<=184; i++)
		Putpixel(i, 100, Col);
	Putpixel(177, 105, Col);
	Putpixel(180, 105, Col);
	Putpixel(188, 105, Col);
	Putpixel(185, 105, Col);

	for(l=95; l<=105; l++)
		for(i=191; i<=192; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=96; l++)
		for(i=193; i<=194; i++)
			Putpixel(i, l, Col);
	for(l=95; l<=97; l++)
		for(i=195; i<=196; i++)
			Putpixel(i, l, Col);
	for(l=97; l<=100; l++)
		for(i=197; i<=198; i++)
			Putpixel(i, l, Col);
	for(l=101; l<=102; l++)
		for(i=192; i<=194; i++)
			Putpixel(i, l, Col);
	for(l=100; l<=103; l++)
		for(i=195; i<=196; i++)
			Putpixel(i, l, Col);
	for(l=103; l<=105; l++)
		for(i=197; i<=198; i++)
			Putpixel(i, l, Col);
	Putpixel(199, 105, Col);
	Putpixel(196, 105, Col);
	Putpixel(190, 105, Col);
	Putpixel(193, 105, Col);
	Putpixel(190, 95, Col);
	Putpixel(198, 97, Col2);
	Putpixel(198, 100, Col2);
	Putpixel(197, 102, Col);
	Putpixel(195, 100, Col2);
	Putpixel(195, 97, Col2);
	Putpixel(195, 103, Col2);
	Putpixel(196, 95, Col2);
	Putpixel(196, 95, Col2);
}

void SelINICIAR(unsigned char Col1, unsigned char Col2)
{
	for(int i=120; i<=187; i++)
		Putpixel(i, 66, Col1);
	for(i=120; i<=187; i++)
		Putpixel(i, 84, Col1);
	for(int l=67; l<= 83; l++)
		Putpixel(120, l, Col1);
	for(l=67; l<= 83; l++)
		Putpixel(187, l, Col1);
	for(i=119; i<=188; i++)
		Putpixel(i, 65, Col2);
	for(i=119; i<=188; i++)
		Putpixel(i, 85, Col2);
	for(l=66; l<= 84; l++)
		Putpixel(119, l, Col2);
	for(l=66; l<= 84; l++)
		Putpixel(188, l, Col2);
}

void SelENCERRAR(unsigned char Col1, unsigned char Col2)
{
	for(int i=111; i<=202; i++)
		Putpixel(i, 91, Col1);
	for(i=111; i<=202; i++)
		Putpixel(i, 109, Col1);
	for(int l=92; l<=108; l++)
		Putpixel(111, l, Col1);
	for(l=92; l<=108; l++)
		Putpixel(202, l, Col1);
	for(i=110; i<=203; i++)
		Putpixel(i, 90, Col2);
	for(i=110; i<=203; i++)
		Putpixel(i, 110, Col2);
	for(l=91; l<=109; l++)
		Putpixel(110, l, Col2);
	for(l=91; l<=109; l++)
		Putpixel(203, l, Col2);
}

void EnterINICIAR(unsigned char Col)
{
	for(int i=121; i<=186; i++)
		for(int l=67; l<=83; l++)
			Putpixel(i, l, Col);
}

void EnterENCERRAR(unsigned char Col)
{
	for(int i=112; i<=201; i++)
		for(int l=92; l<=108; l++)
			Putpixel(i, l, Col);
}

void Mcls()
{
	for(int l=47; l<=132; l++)
		for(int i=106; i<=212; i++)
			Putpixel(i, l, 0);
}

void MainWindow(unsigned char Col1, unsigned char Col2)
{
	for(int l=47; l<=128; l++)
		for(int i=110; i<=212; i++)
			Putpixel(i, l, Col1);
	for(l=50; l<=132; l++)
		for(i=106; i<=109; i++)
			Putpixel(i, l, Col2);
	for(l=129; l<=132; l++)
		for(i=110; i<=208; i++)
			Putpixel(i, l, Col2);
}

void OperacoesBasicas(unsigned char col)
{
	for(int l=49; l<=53; l++)
		Putpixel(112, l, col);
	for(int i=113; i<=114; i++)
		Putpixel(i, 49, col);
	for(i=113; i<=114; i++)
		Putpixel(i, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(114, l, col);
	for(l=49; l<=53; l++)
		Putpixel(116, l, col);
	for(i=117; i<=118; i++)
		Putpixel(i, 49, col);
	for(l=50; l<=51; l++)
		Putpixel(118, l, col);
	Putpixel(117, 51, col);
	for(l=49; l<= 53; l++)
		Putpixel(120, l, col);
	for(i=121; i<=122; i++)
		Putpixel(i, 49, col);
	for(i=121; i<=122; i++)
		Putpixel(i, 51, col);
	for(i=121; i<=122; i++)
		Putpixel(i, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(124, l, col);
	for(i=125; i<=126; i++)
		Putpixel(i, 49, col);
	for(l=50; l<=51; l++)
		Putpixel(126, l, col);
	Putpixel(125, 51, col);
	Putpixel(125, 52, col);
	Putpixel(126, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(128, l, col);
	for(l=49; l<=53; l++)
		Putpixel(130, l, col);
	Putpixel(129, 49, col);
	Putpixel(129, 51, col);
	for(l=49; l<=53; l++)
		Putpixel(132, l, col);
	for(i=133; i<=134; i++)
		Putpixel(i, 49, col);
	for(i=133; i<=134; i++)
		Putpixel(i, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(136, l, col);
	for(i=137; i<=138; i++)
		Putpixel(i, 49, col);
	for(i=137; i<=138; i++)
		Putpixel(i, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(138, l, col);
	for(l=49; l<=53; l++)
		Putpixel(140, l, col);
	for(i=141; i<=142; i++)
		Putpixel(i, 49, col);
	for(i=141; i<=142; i++)
		Putpixel(i, 53, col);
	for(i=141; i<=142; i++)
		Putpixel(i, 51, col);
	for(i=144; i<=146; i++)
		Putpixel(i, 49, col);
	for(i=144; i<=146; i++)
		Putpixel(i, 51, col);
	for(i=144; i<=146; i++)
		Putpixel(i, 53, col);
	Putpixel(144, 50, col);
	Putpixel(146, 52, col);
	for(l=49; l<=53; l++)
		Putpixel(151, l, col);
	Putpixel(152, 49, col);
	Putpixel(153, 50, col);
	Putpixel(152, 51, col);
	Putpixel(153, 52, col);
	Putpixel(152, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(155, l, col);
	for(l=49; l<=53; l++)
		Putpixel(157, l, col);
	Putpixel(156, 49, col);
	Putpixel(156, 51, col);
	for(i=159; i<=161; i++)
		Putpixel(i, 49, col);
	for(i=159; i<=161; i++)
		Putpixel(i, 51, col);
	for(i=159; i<=161; i++)
		Putpixel(i, 53, col);
	Putpixel(159, 50, col);
	Putpixel(161, 52, col);
	for(l=49; l<=53; l++)
		Putpixel(163, l, col);
	for(l=49; l<=53; l++)
		Putpixel(165, l, col);
	for(i=166; i<=167; i++)
		Putpixel(i, 49, col);
	for(i=166; i<=167; i++)
		Putpixel(i, 53, col);
	for(l=49; l<=53; l++)
		Putpixel(169, l, col);
	for(l=49; l<=53; l++)
		Putpixel(171, l, col);
	Putpixel(170, 49, col);
	Putpixel(170, 51, col);
	for(i=173; i<=175; i++)
		Putpixel(i, 49, col);
	for(i=173; i<=175; i++)
		Putpixel(i, 51, col);
	for(i=173; i<=175; i++)
		Putpixel(i, 53, col);
	Putpixel(173, 50, col);
	Putpixel(175, 52, col);
}

void VerificacaoNumerica(unsigned char col)
{
	for(int l=56; l<=59; l++)
		Putpixel(112, l, col);
	for(l=56; l<=59; l++)
		Putpixel(114, l, col);
	Putpixel(113, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(116, l, col);
	for(int i=117; i<=118; i++)
		Putpixel(i, 56, col);
	for(i=117; i<=118; i++)
		Putpixel(i, 58, col);
	for(i=117; i<=118; i++)
		Putpixel(i, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(120, l, col);
	for(i=121; i<=122; i++)
		Putpixel(i, 56, col);
	for(l=57; l<=58; l++)
		Putpixel(122, l, col);
	Putpixel(121, 58, col);
	Putpixel(121, 59, col);
	Putpixel(122, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(124, l, col);
	for(l=56; l<=60; l++)
		Putpixel(126, l, col);
	for(i=127; i<=128; i++)
		Putpixel(i, 56, col);
	for(i=127; i<=128; i++)
		Putpixel(i, 58, col);
	for(l=56; l<=60; l++)
		Putpixel(130, l, col);
	for(l=56; l<=60; l++)
		Putpixel(132, l, col);
	for(i=133; i<=134; i++)
		Putpixel(i, 56, col);
	for(i=133; i<=134; i++)
		Putpixel(i, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(136, l, col);
	for(l=56; l<=60; l++)
		Putpixel(138, l, col);
	Putpixel(137, 56, col);
	Putpixel(137, 58, col);
	for(l=56; l<=60; l++)
		Putpixel(140, l, col);
	for(i=141; i<=142; i++)
		Putpixel(i, 56, col);
	for(i=141; i<=142; i++)
		Putpixel(i, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(144, l, col);
	for(l=56; l<=60; l++)
		Putpixel(146, l, col);
	Putpixel(145, 56, col);
	Putpixel(145, 58, col);
	for(l=56; l<=60; l++)
		Putpixel(148, l, col);
	for(l=56; l<=60; l++)
		Putpixel(150, l, col);
	Putpixel(149, 56, col);
	Putpixel(149, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(155, l, col);
	for(l=56; l<=60; l++)
		Putpixel(158, l, col);
	Putpixel(156, 57, col);
	Putpixel(157, 58, col);
	for(l=56; l<=60; l++)
		Putpixel(160, l, col);
	for(l=56; l<=60; l++)
		Putpixel(162, l, col);
	Putpixel(161, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(164, l, col);
	for(l=56; l<=60; l++)
		Putpixel(168, l, col);
	Putpixel(165, 57, col);
	Putpixel(166, 58, col);
	Putpixel(167, 57, col);
	for(l=56; l<=60; l++)
		Putpixel(170, l, col);
	for(i=171; i<=172; i++)
		Putpixel(i, 56, col);
	for(i=171; i<=172; i++)
		Putpixel(i, 58, col);
	for(i=171; i<=172; i++)
		Putpixel(i, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(174, l, col);
	for(i=175; i<=176; i++)
		Putpixel(i, 56, col);
	for(l=57; l<=58; l++)
		Putpixel(176, l, col);
	Putpixel(175, 58, col);
	Putpixel(175, 59, col);
	Putpixel(176, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(178, l, col);
	for(l=56; l<=60; l++)
		Putpixel(180, l, col);
	for(i=181; i<=182; i++)
		Putpixel(i, 56, col);
	for(i=181; i<=182; i++)
		Putpixel(i, 60, col);
	for(l=56; l<=60; l++)
		Putpixel(184, l, col);
	for(l=56; l<=60; l++)
		Putpixel(186, l, col);
	Putpixel(185, 56, col);
	Putpixel(185, 58, col);
}

void Equacao2o(unsigned char col)
{
	for(int l=63; l<=67; l++)
		Putpixel(112, l, col);
	for(int i=113; i<=114; i++)
		Putpixel(i, 63, col);
	for(i=113; i<=114; i++)
		Putpixel(i, 65, col);
	for(i=113; i<=114; i++)
		Putpixel(i, 67, col);
	for(l=63; l<=67; l++)
		Putpixel(116, l, col);
	for(l=63; l<=67; l++)
		Putpixel(119, l, col);
	for(i=117; i<=118; i++)
		Putpixel(i, 63, col);
	for(i=117; i<=118; i++)
		Putpixel(i, 67, col);
	Putpixel(118, 66, col);
	for(l=63; l<=67; l++)
		Putpixel(121, l, col);
	for(l=63; l<=67; l++)
		Putpixel(123, l, col);
	Putpixel(122, 67, col);
	for(l=63; l<=67; l++)
		Putpixel(125, l, col);
	for(l=63; l<=67; l++)
		Putpixel(127, l, col);
	Putpixel(126, 63, col);
	Putpixel(126, 65, col);
	for(l=63; l<=67; l++)
		Putpixel(129, l, col);
	for(i=130; i<=131; i++)
		Putpixel(i, 63, col);
	for(i=130; i<=131; i++)
		Putpixel(i, 67, col);
	for(l=63; l<=67; l++)
		Putpixel(133, l, col);
	for(l=63; l<=67; l++)
		Putpixel(135, l, col);
	Putpixel(134, 63, col);
	Putpixel(134, 65, col);
	for(l=63; l<=67; l++)
		Putpixel(137, l, col);
	for(l=63; l<=67; l++)
		Putpixel(139, l, col);
	Putpixel(138, 63, col);
	Putpixel(138, 67, col);
	for(i=144; i<=146; i++)
		Putpixel(i, 63, col);
	Putpixel(146, 64, col);
	Putpixel(146, 65, col);
	Putpixel(145, 66, col);
	for(i=144; i<=146; i++)
		Putpixel(i, 67, col);
	for(l=63; l<=64; l++)
		Putpixel(148, l, col);
	for(l=63; l<=64; l++)
		Putpixel(149, l, col);
}

void Fatorial(unsigned char col)
{
	for(int l=70; l<=74; l++)
		Putpixel(112, l, col);
	for(int i=113; i<=114; i++)
		Putpixel(i, 70, col);
	for(i=113; i<=114; i++)
		Putpixel(i, 72, col);
	for(l=70; l<=74; l++)
		Putpixel(116, l, col);
	for(l=70; l<=74; l++)
		Putpixel(118, l, col);
	Putpixel(117, 70, col);
	Putpixel(117, 72, col);
	for(l=70; l<=74; l++)
		Putpixel(121, l, col);
	Putpixel(120, 70, col);
	Putpixel(122, 70, col);
	for(l=70; l<=74; l++)
		Putpixel(124, l, col);
	for(l=70; l<=74; l++)
		Putpixel(126, l, col);
	Putpixel(125, 70, col);
	Putpixel(125, 74, col);
	for(l=70; l<=74; l++)
		Putpixel(128, l, col);
	Putpixel(129, 70, col);
	Putpixel(130, 70, col);
	Putpixel(130, 71, col);
	Putpixel(130, 72, col);
	Putpixel(129, 72, col);
	Putpixel(129, 73, col);
	Putpixel(130, 74, col);
	for(l=70; l<=74; l++)
		Putpixel(132, l, col);
	for(l=70; l<=74; l++)
		Putpixel(134, l, col);
	for(l=70; l<=74; l++)
		Putpixel(136, l, col);
	Putpixel(135, 70, col);
	Putpixel(135, 72, col);
	for(l=70; l<=74; l++)
		Putpixel(138, l, col);
	Putpixel(139, 74, col);
	Putpixel(140, 74, col);
}

void JOAO(unsigned char col1, unsigned char col2)
{
	for(int j=167; j<=170; j++)
		Putpixel(94, j, col1);
	Putpixel(93, 171, col1);
	Putpixel(92, 171, col1);
	Putpixel(91, 170, col1);
	for(j=167; j<=171; j++)
		Putpixel(96, j, col1);
	for(j=167; j<=171; j++)
		Putpixel(98, j, col1);
	Putpixel(97, 167, col1);
	Putpixel(97, 171, col1);
	for(j=170; j<=171; j++)
		Putpixel(100, j, col1);
	for(j=170; j<=171; j++)
		Putpixel(104, j, col1);
	for(int i=101; i<=103; i++)
		Putpixel(i, 169, col1);
	Putpixel(101, 168, col1);
	Putpixel(103, 168, col1);
	Putpixel(102, 167, col1);
	for(j=167; j<=171; j++)
		Putpixel(106, j, col1);
	for(j=167; j<=171; j++)
		Putpixel(108, j, col1);
	Putpixel(107, 167, col1);
	Putpixel(107, 171, col1);
	for(j=167; j<=171; j++)
		Putpixel(112, j, col1);
	Putpixel(113, 171, col1);
	Putpixel(114, 171, col1);
	for(j=167; j<=171; j++)
		Putpixel(116, j, col1);
	for(j=167; j<=171; j++)
		Putpixel(118, j, col1);
	Putpixel(117, 171, col1);
	for(j=167; j<=171; j++)
		Putpixel(120, j, col1);
	for(i=122; i<=125; i++)
		Putpixel(i, 167, col1);
	for(i=122; i<=125; i++)
		Putpixel(i, 171, col1);
	Putpixel(124, 168, col1);
	Putpixel(123, 169, col1);
	Putpixel(122, 170, col1);

	Putpixel(212, 167, col2);
	for(j=168; j<=171; j++)
		Putpixel(211, j, col2);
	Putpixel(212, 171, col2);
	Putpixel(213, 171, col2);
	Putpixel(213, 170, col2);
	Putpixel(213, 169, col2);
	Putpixel(212, 169, col2);
	for(j=167; j<=169; j++)
		Putpixel(215, j, col2);
	for(j=167; j<=171; j++)
		Putpixel(217, j, col2);
	Putpixel(216, 169, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 167, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 169, col2);
	for(i=219; i<=221; i++)
		Putpixel(i, 171, col2);
	Putpixel(221, 168, col2);
	Putpixel(219, 170, col2);
	Putpixel(224, 167, col2);
	for(j=168; j<=171; j++)
		Putpixel(223, j, col2);
	Putpixel(224, 171, col2);
	Putpixel(225, 171, col2);
	Putpixel(225, 170, col2);
	Putpixel(225, 169, col2);
	Putpixel(224, 169, col2);
	for(j=167; j<=171; j++)
		Putpixel(227, j, col2);
	for(j=167; j<=171; j++)
		Putpixel(229, j, col2);
	Putpixel(228, 167, col2);
	Putpixel(228, 171, col2);
}

void CLAUDIO(unsigned char col1)
{
	for(int j=174; j<=178; j++)
		Putpixel(91, j, col1);
	for(int i=92; i<=93; i++)
		Putpixel(i, 174, col1);
	for(i=92; i<=93; i++)
		Putpixel(i, 178, col1);
	for(j=174; j<=178; j++)
		Putpixel(95, j, col1);
	for(i=96; i<=97; i++)
		Putpixel(i, 178, col1);
	for(j=177; j<=178; j++)
		Putpixel(99, j, col1);
	for(j=177; j<=178; j++)
		Putpixel(103, j, col1);
	for(i=100; i<=102; i++)
		Putpixel(i, 176, col1);
	Putpixel(100, 175, col1);
	Putpixel(102, 175, col1);
	Putpixel(101, 174, col1);
	for(j=174; j<=178; j++)
		Putpixel(105, j, col1);
	for(j=174; j<=178; j++)
		Putpixel(107, j, col1);
	Putpixel(106, 178, col1);
	for(j=174; j<=178; j++)
		Putpixel(109, j, col1);
	Putpixel(110, 174, col1);
	Putpixel(111, 175, col1);
	Putpixel(112, 176, col1);
	Putpixel(111, 177, col1);
	Putpixel(110, 178, col1);
	for(j=174; j<=178; j++)
		Putpixel(114, j, col1);
	for(j=174; j<=178; j++)
		Putpixel(116, j, col1);
	for(j=174; j<=178; j++)
		Putpixel(118, j, col1);
	Putpixel(117, 174, col1);
	Putpixel(117, 178, col1);
}

void MenuPrincipal(unsigned char col)
{
	for(int l=120; l<=124; l++)
		Putpixel(112, l, col);
	for(l=120; l<=124; l++)
		Putpixel(116, l, col);
	Putpixel(113, 121, col);
	Putpixel(114, 122, col);
	Putpixel(115, 121, col);
	for(l=120; l<=124; l++)
		Putpixel(118, l, col);
	for(int i=119; i<=120; i++)
		Putpixel(i, 120, col);
	for(i=119; i<=120; i++)
		Putpixel(i, 122, col);
	for(i=119; i<=120; i++)
		Putpixel(i, 124, col);
	for(l=120; l<=124; l++)
		Putpixel(122, l, col);
	for(l=120; l<=124; l++)
		Putpixel(125, l, col);
	Putpixel(123, 121, col);
	Putpixel(124, 122, col);
	for(l=120; l<=124; l++)
		Putpixel(127, l, col);
	for(l=120; l<=124; l++)
		Putpixel(129, l, col);
	Putpixel(128, 124, col);
	for(l=120; l<=124; l++)
		Putpixel(134, l, col);
	for(i=135; i<=136; i++)
		Putpixel(i, 120, col);
	for(i=135; i<=136; i++)
		Putpixel(i, 122, col);
	Putpixel(136, 121, col);
	for(l=120; l<=124; l++)
		Putpixel(138, l, col);
	for(i=139; i<=140; i++)
		Putpixel(i, 120, col);
	for(i=139; i<=140; i++)
		Putpixel(i, 122, col);
	Putpixel(140, 121, col);
	Putpixel(139, 123, col);
	Putpixel(140, 124, col);
	for(l=120; l<=124; l++)
		Putpixel(142, l, col);
	for(l=120; l<=124; l++)
		Putpixel(144, l, col);
	for(l=120; l<=124; l++)
		Putpixel(147, l, col);
	Putpixel(145, 121, col);
	Putpixel(146, 122, col);
	for(l=120; l<=124; l++)
		Putpixel(149, l, col);
	for(i=150; i<=151; i++)
		Putpixel(i, 120, col);
	for(i=150; i<=151; i++)
		Putpixel(i, 124, col);
	for(l=120; l<=124; l++)
		Putpixel(153, l, col);
	for(l=120; l<=124; l++)
		Putpixel(155, l, col);
	Putpixel(156, 120, col);
	Putpixel(156, 122, col);
	Putpixel(157, 120, col);
	Putpixel(157, 122, col);
	Putpixel(157, 121, col);
	for(l=120; l<=124; l++)
		Putpixel(159, l, col);
	for(l=120; l<=124; l++)
		Putpixel(161, l, col);
	Putpixel(160, 120, col);
	Putpixel(160, 122, col);
	for(l=120; l<=124; l++)
		Putpixel(163, l, col);
	for(i=164; i<=165; i++)
		Putpixel(i, 124, col);
}

void main()
{
	char sel1='\x20';
	char sel2='\x20';
	int flag1=1;
	int flag2=0;
	int flag3=1;
	int flag4=1;

	cls();

	SetMCGA();

	while(flag4==1)
	{
		TopWindow(55, 17);
		CALCULADORA(11);

		INICIAR(10, 0);
		ENCERRAR(12, 0);

		BottomWindow(53, 54, 55);
		BRUNO(11, 53);
		JULIO(11, 53);
		JOAO(11, 53);
		CLAUDIO(11);

		SelINICIAR(53, 54);

		while(sel1!='\xD')
		{
			sel1=getch();
			if(sel1=='\x20')
			{
				if(flag1==1)
					flag1=0;
				else
					flag1=1;
			}
			if(flag1==1)
			{
				SelINICIAR(53, 54);
				SelENCERRAR(0, 0);
			}
			else
			{
				SelINICIAR(0, 0);
				SelENCERRAR(53, 54);
			}
		}
		if(flag1==0)
		{
			EnterENCERRAR(55);
			ENCERRAR(12, 55);
			delay(100);
			EnterENCERRAR(0);
			ENCERRAR(12, 0);
			delay(100);
			flag4=0;
		}
		else
		{
			EnterINICIAR(55);
			INICIAR(10, 55);
			delay(100);
			EnterINICIAR(0);
			INICIAR(10, 0);
			delay(100);
			Mcls();
			MainWindow(55, 17);
			OperacoesBasicas(52);
			VerificacaoNumerica(53);
			Equacao2o(53);
			Fatorial(53);
			MenuPrincipal(53);

			while(flag3==1)
			{
				while(sel2!='\xD')
				{
					sel2=getch();
					if(sel2=='\x20')
					{
						if(flag2==0)
							flag2=1;
						else
							if(flag2==1)
								flag2=2;
							else
								if(flag2==2)
									flag2=3;
								else
									if(flag2==3)
										flag2=4;
									else
										if(flag2==4)
											flag2=0;
						if(flag2==0)
						{
							OperacoesBasicas(52);
							VerificacaoNumerica(53);
							Equacao2o(53);
							Fatorial(53);
							MenuPrincipal(53);
						}
						else
						{
							if(flag2==1)
							{
								OperacoesBasicas(53);
								VerificacaoNumerica(52);
								Equacao2o(53);
								Fatorial(53);
								MenuPrincipal(53);
							}
							else
							{
								if(flag2==2)
								{
									OperacoesBasicas(53);
									VerificacaoNumerica(53);
									Equacao2o(52);
									Fatorial(53);
									MenuPrincipal(53);
								}
								else
								{
									if(flag2==3)
									{
										OperacoesBasicas(53);
										VerificacaoNumerica(53);
										Equacao2o(53);
										Fatorial(52);
										MenuPrincipal(53);
									}
									else
									{
										if(flag2==4)
										{
											OperacoesBasicas(53);
											VerificacaoNumerica(53);
											Equacao2o(53);
											Fatorial(53);
											MenuPrincipal(52);
										}
									}
								}
							}
						}
					}
				}
				switch(flag2)
				{
					case 0:
						SetText();

						double N1, N2, SOL;
						char op, CONT='s';

						cls();

						gotoxy(8, 8);
						cout << '\xC9';
						gotoxy(9, 8);
						for(int i=1; i<=15; i++)
							cout << '\xCD';
						gotoxy(24, 8);
						cout << '\xBB';
						gotoxy(24, 9);
						cout << '\xBA';
						gotoxy(24, 11);
						cout << '\xBA';
						gotoxy(24, 13);
						cout << '\xBA';
						gotoxy(24, 15);
						cout << '\xBA';
						gotoxy(8, 9);
						cout << '\xBA';
						gotoxy(8, 11);
						cout << '\xBA';
						gotoxy(8, 13);
						cout << '\xBA';
						gotoxy(8, 15);
						cout << '\xBA';
						gotoxy(8, 16);
						cout << '\xC8';
						gotoxy(9, 16);
						for(i=1; i<=15; i++)
							cout << '\xCD';
						gotoxy(24, 16);
						cout << '\xBC';
						gotoxy(24, 10);
						cout << '\xB6';
						gotoxy(24, 12);
						cout << '\xB6';
						gotoxy(24, 14);
						cout << '\xB6';
						gotoxy(8, 10);
						cout << '\xC7';
						gotoxy(8, 12);
						cout << '\xC7';
						gotoxy(8, 14);
						cout << '\xC7';
						gotoxy(9, 10);
						for(i=1; i<=15; i++)
							cout << '\xC4';
						gotoxy(9, 12);
						for(i=1; i<=15; i++)
							cout << '\xC4';
						gotoxy(9, 14);
						for(i=1; i<=15; i++)
							cout << '\xC4';
						gotoxy(10, 9);
						cout << "Nø1: ";
						gotoxy(16, 9);
						cin >> N1;
						while(CONT=='s')
						{
							op=' ';
							gotoxy(10, 11);
							cout << "Op.: ";
							while(op!='+' && op!='*' && op!='/' && op!='-')
							{
								gotoxy(16, 11);
								cout << ' ';
								gotoxy(16, 11);
								op=getche();
							}
							gotoxy(10, 13);
							cout << "Nø2: ";
							gotoxy(16, 13);
							cin >> N2;
							if(op=='+')
								SOL=N1+N2;
							else
								if(op=='*')
									SOL=N1*N2;
								else
									if(op=='/')
										SOL=N1/N2;
									else
										if(op=='-')
											SOL=N1-N2;
							gotoxy(11, 15);
							cout << '=';
							gotoxy(16, 15);
							cout << SOL;
							N1=SOL;
							gotoxy(24, 19);
							cout << ' ';
							gotoxy(6, 18);
							cout << '\xC9';
							gotoxy(6, 20);
							cout << '\xC8';
							gotoxy(26, 18);
							cout << '\xBB';
							gotoxy(26, 20);
							cout << '\xBC';
							gotoxy(26, 19);
							cout << '\xBA';
							gotoxy(6, 19);
							cout << '\xBA';
							gotoxy(7, 18);
							for(i=1; i<=19; i++)
								cout << '\xCD';
							gotoxy(7, 20);
							for(i=1; i<=19; i++)
								cout << '\xCD';
							gotoxy(8, 19);
							cout << "Continua? (s/n)";
							gotoxy(24, 19);
							CONT=getche();
							if(CONT=='s')
							{
								gotoxy(16, 9);
								cout << "       ";
								gotoxy(16, 9);
								cout << N1;
								gotoxy(16, 13);
								cout << "       ";
								gotoxy(16, 15);
								cout << "       ";
							}
						}

						SetMCGA();
						TopWindow(55, 17);
						CALCULADORA(11);
						BottomWindow(53, 54, 55);
						BRUNO(11, 53);
						JULIO(11, 53);
						MainWindow(55, 17);
						OperacoesBasicas(52);
						VerificacaoNumerica(53);
						Equacao2o(53);
						Fatorial(53);
						MenuPrincipal(53);
						sel2='\x20';
						flag2=0;
						break;
					case 1:
						SetText();

						int N, PR, PE, M;

						cls();

						gotoxy(21, 9);
						cout << "\xC9";
						gotoxy(22, 9);
						for(i=1; i<=31; i++)
							cout << "\xCD";
						gotoxy(53, 9);
						cout << "\xBB";
						gotoxy(53, 10);
						cout << "\xBA";
						gotoxy(21, 10);
						cout << "\xBA";
						gotoxy(53, 11);
						cout << "\xB6";
						gotoxy(21, 11);
						cout << "\xC7";
						gotoxy(22, 11);
						for(i=1; i<=31; i++)
							cout << "\xC4";
						gotoxy(53, 12);
						cout << "\xBA";
						gotoxy(21, 12);
						cout << "\xBA";
						gotoxy(53, 13);
						cout << "\xBA";
						gotoxy(21, 13);
						cout << "\xBA";
						gotoxy(53, 14);
						cout << "\xBA";
						gotoxy(21, 14);
						cout << "\xBA";
						gotoxy(21, 15);
						cout << "\xC8";
						gotoxy(53, 15);
						cout << "\xBC";
						gotoxy(22, 15);
						for(i=1; i<=31; i++)
							cout << "\xCD";
						gotoxy(42, 15);
						cout << "\xCF";
						gotoxy(42, 11);
						cout << "\xC2";
						gotoxy(42, 12);
						cout << "\xB3";
						gotoxy(42, 13);
						cout << "\xB3";
						gotoxy(42, 14);
						cout << "\xB3";
						gotoxy(23, 10);
						cout << "Digite um n£mero inteiro: ";
						cin >> N;
						PR=Prime(N);
						PE=Perfect(N);
						M=Mult2(N);
						gotoxy(23, 12);
						cout << "N£mero Primo";
						gotoxy(23, 13);
						cout << "N£mero Perfeito";
						gotoxy(23, 14);
						cout << "M£ltiplo de 2";
						if(PR==1)
						{
							gotoxy(46, 12);
							cout << "SIM";
						}
						else
						{
							gotoxy(46, 12);
							cout << "NAO";
						}
						if(PE==1)
						{
							gotoxy(46, 13);
							cout << "SIM";
						}
						else
						{
							gotoxy(46, 13);
							cout << "NAO";
						}
						if(M==1)
						{
							gotoxy(46, 14);
							cout << "SIM";
						}
						else
						{
							gotoxy(46, 14);
							cout << "NAO";
						}
						getch();

						SetMCGA();
						TopWindow(55, 17);
						CALCULADORA(11);
						BottomWindow(53, 54, 55);
						BRUNO(11, 53);
						JULIO(11, 53);
						MainWindow(55, 17);
						OperacoesBasicas(52);
						VerificacaoNumerica(53);
						Equacao2o(53);
						Fatorial(53);
						MenuPrincipal(53);
						sel2='\x20';
						flag2=0;
						break;
					case 2:
						SetText();

						double A, B, C, x1, x2;
						cls();
						gotoxy(21, 9);
						cout << "\xC9";
						for(i=1; i<=26; i++)
							cout << "\xCD";
						cout << "\xBB";
						gotoxy(48, 10);
						cout << "\xBA";
						gotoxy(48, 12);
						cout << "\xBA";
						gotoxy(48, 14);
						cout << "\xBA";
						gotoxy(48, 16);
						cout << "\xBA";
						gotoxy(48, 17);
						cout << "\xBA";
						gotoxy(21, 12);
						cout << "\xBA";
						gotoxy(21, 14);
						cout << "\xBA";
						gotoxy(21, 16);
						cout << "\xBA";
						gotoxy(21, 17);
						cout << "\xBA";
						gotoxy(21, 18);
						cout << "\xC8";
						gotoxy(48, 18);
						cout << "\xBC";
						gotoxy(48, 15);
						cout << "\xB6";
						gotoxy(48, 13);
						cout << "\xB6";
						gotoxy(48, 11);
						cout << "\xB6";
						gotoxy(21, 15);
						cout << "\xC7";
						gotoxy(21, 13);
						cout << "\xC7";
						gotoxy(21, 11);
						cout << "\xC7";
						gotoxy(22, 11);
						for(i=2; i<=27; i++)
							cout << "\xC4";
						gotoxy(22, 15);
						for(i=2; i<=27; i++)
							cout << "\xC4";
						gotoxy(22, 13);
						for(i=2; i<=27; i++)
							cout << "\xC4";
						gotoxy(22, 18);
						for(i=1; i<=26; i++)
							cout << "\xCD";
						gotoxy(21, 10);
						cout << "\xBA Digite o valor de A: ";
						cin >> A;
						gotoxy(23, 12);
						cout << "Digite o valor de B: ";
						cin >> B;
						gotoxy(23, 14);
						cout << "Digite o valor de C: ";
						cin >> C;
						x1=Quad1(A, B, C);
						if(x1==0)
						{
							gotoxy(23, 16);
							cout << "Delta menor que 0";
						}
						else
						{
							x2=Quad2(A, B, C);
							gotoxy(23, 16);
							cout << "x1=" << x1;
							gotoxy(23, 17);
							cout << "x2=" << x2;
						}
						getch();

						SetMCGA();
						TopWindow(55, 17);
						CALCULADORA(11);
						BottomWindow(53, 54, 55);
						BRUNO(11, 53);
						JULIO(11, 53);
						MainWindow(55, 17);
						OperacoesBasicas(52);
						VerificacaoNumerica(53);
						Equacao2o(53);
						Fatorial(53);
						MenuPrincipal(53);
						sel2='\x20';
						flag2=0;
						break;
					case 3:
						SetText();

						double NU, SO;

						cls();

						gotoxy(19, 9);
						cout << "\xC9";
						gotoxy(20, 9);
						for(i=1; i<=23; i++)
							cout << "\xCD";
						gotoxy(43, 9);
						cout << "\xBB";
						gotoxy(19, 10);
						cout << "\xBA";
						gotoxy(19, 12);
						cout << "\xBA";
						gotoxy(43, 10);
						cout << "\xBA";
						gotoxy(43, 12);
						cout << "\xBA";
						gotoxy(19, 11);
						cout << "\xC7";
						gotoxy(43, 11);
						cout << "\xB6";
						gotoxy(20, 11);
						for(i=1; i<=23; i++)
							cout << "\xC4";
						gotoxy(19, 13);
						cout << "\xC8";
						gotoxy(43, 13);
						cout << "\xBC";
						gotoxy(20, 13);
						for(i=1; i<=23; i++)
							cout << "\xCD";
						gotoxy(21, 10);
						cout << "Digite um n£mero: ";
						cin >> NU;
						SO=Factorial(NU);
						gotoxy(21, 12);
						cout << "A fatorial do Nø ‚";
						gotoxy(40, 12);
						cout << SO;

						getch();

						SetMCGA();
						TopWindow(55, 17);
						CALCULADORA(11);
						BottomWindow(53, 54, 55);
						BRUNO(11, 53);
						JULIO(11, 53);
						MainWindow(55, 17);
						OperacoesBasicas(52);
						VerificacaoNumerica(53);
						Equacao2o(53);
						Fatorial(53);
						MenuPrincipal(53);
						sel2='\x20';
						flag2=0;
						break;
					case 4:
						Mcls();
						flag1=1;
						flag2=0;
						flag3=0;
						sel1='\x20';
						sel2='\x20';
					break;
				}
			}
		}
	}
	SetText();
}








