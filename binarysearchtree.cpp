#include <iostream>
#include <stdlib.h>
#include <conio.h>
 
using namespace std;
 
struct Node{
    int INFO;
    struct Node* Left;
    struct Node* Right;
};
 
typedef struct Node Simpul;
 
Simpul *Root, *P;
 
// Fungsi Miss K
void inisialisasi();
void BuatSimpul(int X);
void BuatSimpulAkar(int X);
void InsertSimpulBinSearch(int X);
void BinSearch(int X);
 
int main(){
    inisialisasi();
   
    int pilihan, x;
   
    do{
        cout << "Program Binary Search" << endl;
        cout << "1. Bikin Root" << endl;
        cout << "2. Insert Data" << endl;
        cout << "3. Search Data" << endl;
        cout << "0. Exit" << endl;
        cout << "pilihan : ";
        cin >> pilihan;
       
        switch(pilihan){
            case 1:
                cout << "Masukan data : ";
                cin >> x;
                BuatSimpulAkar(x);
                break;
            case 2:
                cout << "Masukan data : ";
                cin >> x;
                InsertSimpulBinSearch(x);
                break;
            case 3:
                cout << "Data yg mau dicari : ";
                cin >> x;
                BinSearch(x);
                break;
        }
        cout << endl << endl;
    }while(pilihan!=0);
   
    return 0;
}
 
void inisialisasi(){
    Root = NULL;
    P = NULL;
}
 
void BuatSimpul(int X) {
    P = (Simpul*) malloc(sizeof(Simpul));
   
    if (P !=NULL) {
        P->INFO = X;
        P->Left = NULL;
        P->Right = NULL;
        cout << "Simpul dibuat!";
    }
    else {
        cout <<"Memori Heap Full";
        exit(1);
    }
}
 
void BuatSimpulAkar(int X) {
    if (Root ==NULL){
        Root = (Simpul*) malloc(sizeof(Simpul));
       
        Root->INFO = X;
        Root->Left = NULL;
        Root->Right = NULL;
        cout << "Root dibuat!";
    }
    else
        cout <<"pohon h sudah ada";
}
 
void InsertSimpulBinSearch(int X){
    Simpul *Q, *R;
   
    if (Root !=NULL) {
        Q = Root;
        R = Root;
       
        while (R != NULL && X != R->INFO){
            Q = R;
           
            if(X < Q->INFO)
                R = R->Left;
            else
                R = R->Right;
           
            if (R == NULL){
                BuatSimpul(X);
                if(X < Q->INFO)
                    Q->Left = P;
                else
                    Q->Right = P;
            }
        }
    }
    else
        cout<<"akar belum ada";
}
 
void BinSearch (int X) {
    Simpul *Q;
    Q = Root;
    int Flag = 0;
   
    while (Q !=NULL && Flag == 0){
        if (X == Q->INFO)
            Flag = 1;
        else if (X < Q->INFO)
            Q = Q->Left;
        else
            Q = Q->Right;
    }
    if (Flag == 1)
        cout<<"ditemukan";
    else
        cout<<"tidak ditemukan";
}