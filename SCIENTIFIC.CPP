#include<fstream.h>
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>
class calc
{float a,b,c,d,rc,dc;
public:
float abc(float a,float b, char c);
};
float calc :: abc(float a,float b, char c)
{
switch (c)
	{ case '+': d= a+b;
		    return d;

	  case '-': d= a-b;
		    return d;

	  case '*': d= a*b;
		    return d;

	  case '/': d= a/b;
		    return d;

	  case 'p': d= pow(a,b);
		      return d;

	  case 's': cout<<"\n Square Root of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=sqrt(a);
			else
			d=sqrt(b);
			return d;
	  case 'l': cout<<"\n log of first input or second input?";
			cin>>rc;
		    cout<<"\n 1.Natural\n 2.Base10 \n";
			cin>>dc;
			if(rc==1)
			{if(dc==1)
			d=log(a);
			else
			d=log10(a);
			}
			else
			{if(dc==1)
			d=log(b);
			else
			d=log10(b);
			}
			return d;

	  case 'S': cout<<"\n Sin of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=asin(a);
			else
			d=asin(b);
			return d;

	  case 'C': cout<<"\n Cos of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=acos(a);
			else
			d=acos(b);
			return d;

	  case 'T': cout<<"\n Tan of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=atan(a);
			else
			d=atan(b);
			return d;

	  case 'c': cout<<"\n Cosec of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=1/asin(a);
			else
			d=1/asin(b);
			return d;

	  case 'j': cout<<"\n Sec of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=1/acos(a);
			else
			d=1/acos(b);
			return d;

	  case 'k': cout<<"\n Cot of first input or second input?";
			cin>>rc;
			if(rc==1)
			d=1/atan(a);
			else
			d=1/atan(b);
			return d;

	  case '#':cout<<"\nCommand List:\n+\t=\tAdd\n-\t=\tSubtract";
			cout<<"\n*\t=\tMultiply\n/\t=\tDivide\np\t=\tPower";
			cout<<"\ns\t=\tSquare Root\n%\t=\tPercentage\n!\t=\tFactorial\nm\t=\tRemainder";
			cout<<"\nl\t=\tLog(both Natural and Base 10)";
			cout<<"\nS\t=\tSin\nC\t=\tCos\nT\t=\tTan\nc\t=\tCosec";
			cout<<"\nj\t=\tSec\nk\t=\tCot\nd\t=\tDegree To Radian or Radian to Degree";
			cout<<"\n\n\n\tPress # for Command List";
		    return d;
	  case 'd': cout<<"\n 1.Deg to Rad \n 2.Rad to Deg\n";
			cin>>rc;
			if(rc==1)
			d=a*3.14/180;
			else
			d=a*180/3.14;
			return d;

	  case 'm':     d=(int)a%(int)b;
			return d;

	  case '%':     d=a*b/100;
			return d;

	  case '!':     cout<<"\n Factorial of First Input or Second Input?";
			cin>>rc;
			if(rc==1)
			{d=1;
			for(dc=a;dc>0;dc--)
			d*=dc;
			}
			else
			{d=1;
			for(dc=b;dc>0;dc--)
			d*=dc;
			}
			return d;

	  default: cout<<"\n Please Enter a correct option";
		    return d;
}
}
int main()
{char pass[50];int k;
 clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tScientific Calculator\n\n\t\t\t";
system("pause");
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tProject By-\n\t\t\t Aditya Alok Jha\n\n\t\t\t";
system("pause");
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tEnter Password:";
gets(pass);
k=strcmp(pass,"helloAdmin");
clrscr();
if(k==0)
{calc c1;
int ch,ch1;
ifstream f("calc.txt",ios::out);
float d,b;
char c, choice;
aditya1:
cout<<"\n Menu: \n 1.Command List \n 2.New Operation \n 3.Exit";
cout<<"\n Enter Your Choice:";
cin>>ch1;
clrscr();
if(ch1==2)
{aditya: clrscr();
cout<<"\n Enter Operand:";
cin>>d;
do{ cout<<"\n Enter Operand:";
cin>>b;
cout<<"\n Enter Operator:";
cin>>c;
d=c1.abc(d,b,c);
cout<<"\n Do You Want To Enter More?";
cin>>choice;
}while(choice!='n');
cout<<"\n Your Final Result is:"<<d;
getch();
clrscr();
f.close();
cout<<"\n Menu:";
cout<<"\n 1. New Calculation \n 2.Review Recent Step (Check Operation) \n 3. Exit";
cout<<"\n Enter Your Choice:";
cin>>ch;
if(ch==1)
{
goto aditya;
}
else if(ch==2)
{ifstream f("calc.txt",ios::in);
while(!f.eof())
{f>>b>>c>>d;
cout<<"\n\tAnswer\t"<<c<<"\t"<<b<<"\t=\t"<<d;
}
f.close();
}
else
exit(0);
}
else if(ch1==1)
{cout<<"\nCommand List:\n+\t=\tAdd\n-\t=\tSubtract";
cout<<"\n*\t=\tMultiply\n/\t=\tDivide\np\t=\tPower";
cout<<"\ns\t=\tSquare Root\n%\t=\tPercentage\n!\t=\tFactorial\nm\t=\tRemainder";
cout<<"\nl\t=\tLog(both Natural and Base 10)";
cout<<"\nS\t=\tSin\nC\t=\tCos\nT\t=\tTan\nc\t=\tCosec";
cout<<"\nj\t=\tSec\nk\t=\tCot\nd\t=\tDegree To Radian or Radian to Degree";
cout<<"\n\n\n\t\tPress # for Command List";
goto aditya1;
}
else
exit(0);



}else
cout<<"\n Incorrect Password!";
getch();
return (0);
}