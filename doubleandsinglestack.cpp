#include <constrea>
#include <cstring>

int F, R, n, counter;
string Q[10], X;

void tampil()
{
int x;
 for(x=0; x<n; x++)
 {
  	cout<<(x+1)<<" "<<Q[x]<<endl;
 }
}

void AWALsing(void)
{
clrscr();
cout<<"\nBerapa data?(0 untuk keluar)\n";
cin>>n;
Q[n];
F = 0;
R = - 1;
}

void INSERTsing(void)
{
if ( R == n-1 )
cout<<"antrian penuh";
else
{
cout<<"Masukkan: ";
cin>>X;
R = R + 1;
Q[R] = X;
}
}

void DELETEsing(void)
{
if ( F == R+1 )
cout<<"antrian KOSONG";
else
{
X = Q[F];
Q[F]="";
cout<<"Keluar: "<<X;
F = F + 1;
}
}

int singQUEUE()
{
int pil;
awal:
AWALsing();
if(n==0)
return 0;
b:
clrscr();
cout<<"1.insert\n2.delete\n3.keluar\n4.tampilkan data\npil: ";
cin>>pil;
switch(pil)
{
case 1 : INSERTsing();
			getch();
			goto b;
case 2 : DELETEsing();
			if ( F == n )
			{
				cout<<" Data akan tereset";
  				getch();
            goto awal;
         }
			getch();
			goto b;
case 3 : break;
case 4 : tampil();
			getch();
         goto b;
}
return 0;
}

void AWALcirc(void)
{
clrscr();
cout<<"\nBerapa data?(0 untuk keluar)\n";
cin>>n;
Q[n];
F = 0;
R = - 1;
counter = 0;
}

void INSERTcirc()
{
if ( counter == n )
cout<<"antrian penuh";
else
{
cout<<"Masukkan: ";
cin>>X;
R = (R+1) % n;
Q[R] = X;
counter++;
}
}

void DELETEcirc()
{
if ( counter == 0 )
cout<<"antrian KOSONG";
else
{ X = Q[F];
Q[F]="";
cout<<X;
F = (F+1) % n;
counter--;
}
}

int circQUEUE()
{
int pil;
awal:
AWALcirc();
if(n==0)
return 0;
b:
clrscr();
cout<<"1.insert\n2.delete\n3.reset\n4.tampilkan data\npil: ";
cin>>pil;
switch(pil)
{
case 1 : INSERTcirc();
			getch();
			goto b;
case 2 : DELETEcirc();
			getch();
			goto b;
case 3 : goto awal;
case 4 : tampil();
			getch();
         goto b;
}
return 0;
}

int main()
{
int pil;
cout<<"1. Single \n2. Circular\npil:";
cin>>pil;
switch(pil)
{
 case 1: singQUEUE();
 			break;
 case 2: circQUEUE();
 			break;
}
return 0;
}
