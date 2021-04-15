#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define n 10

void INSERT();
void DELETE();
void CETAKLAYAR();
void Inisialisasi();
void RESET();
void INSERt();
void DELETe();
void CETAKLAYAr();
void inisialisasi();
int PIL,F,R,masuk,COUNTER;
char PILIHAN [1],HURUF;
char Q[n];
void main ( )
{
cout<<"masukan pilihan "<<endl;
cout<<"1.linier queue"<<endl;
cout<<"2. singular queue"<<endl;
cin>>masuk;
switch(masuk)
{
case 1:
     Inisialisasi();
     do
     {
           cout<<" ANIMASI QUEUE"<<endl;
           cout<<"=============="<<endl;
           cout<<"1. INSERT"<<endl;
           cout<<"2. DELETE"<<endl;
           cout<<"3. CETAK QUEUE"<<endl;
           cout<<"4. QUIT"<<endl;
           cout<<"PILIHAN : "; cin>>PILIHAN;
           PIL=atoi(PILIHAN);
           switch (PIL)
           {
           case 1:
                INSERT ();
                break;
           case 2:
                DELETE();
                break;
           case 3:
                CETAKLAYAR ();
                break;
           default:
                cout<<"TERIMA KASIH"<<endl;
                break;
           }
           cout<<"press any key to continue"<<endl;
           getch();
           system("cls");
     }
     while (PIL<4);
     break;
case 2:
 inisialisasi();
    do
    {

        cout<<"                          CIRCULAR QUEUE                             "<<endl;
        cout<<"_____________________________________________________________________"<<endl;
        cout<<" PROGRAM ANIMASI QUEUE                                               "<<endl;
        cout<<"====================================================================="<<endl;
        cout<<" 1.INSERT                                                            "<<endl;
        cout<<" 2.DELETE                                                            "<<endl;
        cout<<" 3.CETAK ANTRIAN                                                     "<<endl;
        cout<<" 4.KELUAR                                                            "<<endl;
        cout<<"_____________________________________________________________________"<<endl;
        cout<<endl;
        cout<<" SILAHKAN MASUKKAN PILIHAN : ";cin>>PILIHAN;
        PIL=atoi(PILIHAN);
        switch(PIL)
        {
            case 1:
                INSERt();
                break;
            case 2:
                DELETe();
                break;
            case 3:
                CETAKLAYAr();
                break;
            default :
            cout<<"TERIMA KASIH"<<endl;
            break;
        }
        cout<<"Press any key to continue"<<endl;
        getch();
        system("cls");
    }
    while (PIL<4);
}
}
void INSERt(void)
{
    if(COUNTER<n)
    {
        cout<<endl<<"Masukkan 1 huruf : ";
        cin>>HURUF;
        R = (R + 1) % n;
        Q[R] = HURUF;
        COUNTER++;
    }
    else
        cout<<"Antrian Penuh!"<<endl;

}
void CETAKLAYAr(void)
{
    if(COUNTER>0)
    {
        for(int k = 0; k < COUNTER; k++)
        {
            int i = (F+k) % n;
            cout << "Q["<<k<<"]="<<Q[i] << endl;
        }
    }
    else
        cout<<"Queue kosong!"<<endl;

}
void DELETe(void)
{
    if(COUNTER>0)
    {
        HURUF=Q[F];
        F = (F + 1) %n;
        COUNTER--;

        cout<<"Data yang di ambil :"<<HURUF<<endl;
    }
    else
        cout<<"Antrian Kosong!"<<endl;

}
void inisialisasi(void)
{
    F=0;
    R=-1;
    COUNTER=0;
}


void INSERT()
{
      if(R<n-1)
      {
           cout<<endl<<"MASUKAN  HURUF : ";
         cin>>HURUF;
         Q[R]=HURUF;
}
else
    cout<<"Antrian Penuh"<<endl;
}

void CETAKLAYAR()
{
     if(F<R+1)
     {
           for (int i=F;i<=R;i++)
                cout<<"Q["<<i<<"] = "<<Q[i]<<endl;
     }
     else
           cout<<"Antrian Kosong"<<endl;
}
void DELETE()
{
     if(F<=R+1)
     {
           HURUF=Q[F];
           Q[F++]='\0';
           cout<<"Data yang diambil : "<<HURUF<<endl;
           if(F==n)
                RESET();
     }
     else
           cout<<"Antrian Kosong"<<endl;
}
void Inisialisasi()
{
     F=0;
     R=-1;
}

void RESET()
{
     F=0;
     R=-1;
}
