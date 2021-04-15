#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 
using namespace std;
 
struct Node{
    char INFO;
    struct Node* LEFT;
    struct Node* RIGHT;
};
 
typedef struct Node Simpul;
 
int n;
 
Simpul *Root, *P, *Q[63], *R;
 
char X;
 
void inisialisasi();
void BuatSimpul(char X);
void BuatSimpulAkar(char X);
void InsertUrutNomor();
void BacaPerLevel();
void preorder(Simpul* baca);
void inorder(Simpul* baca);
void postorder(Simpul* baca);
void cekData(); // gw buat fungsi ini untuk debug
 
int main(){
    inisialisasi();
   
    int d;
    cout << "(Max Level : 5)\nMORE THAN 5 IS NOT RECOMMENDED\n";
    cout << "Masukan Level Binary Tree : ";
    cin >> d;
    n = pow(2, d+1) -1;
   
    cout << "Masukan data :\n";
    char x = getche();
    BuatSimpulAkar(x);
   
    InsertUrutNomor();
   
    system("CLS"); // ubah jadi clrscr() untuk borland
   
    cekData(); // gw pakai untuk debug.
   
    cout << endl;
    cout << "Baca Per Level (Miss K)\n";
    BacaPerLevel();
   
    // koding miss K untuk tranvers : UNKNOWN
    cout << "\n\nFungsi Tranversal : ";
    cout << "\nPreOrder  : "; preorder(Root);
    cout << "\nInOrder   : "; inorder(Root);
    cout << "\nPostOrder : "; postorder(Root);
   
    return 0;
}
 
void inisialisasi(){
    Root = NULL;
    P = NULL;
}
 
void BuatSimpul(char X) {
    P = (Simpul*) malloc(sizeof(Simpul));
   
    if (P !=NULL) {
        P->INFO = X;
        P->LEFT = NULL;
        P->RIGHT = NULL;
    }
    else {
        cout <<"Memori Heap Full";
        exit(1);
    }
}
 
void BuatSimpulAkar(char X) {
    if (Root ==NULL){
        Root = (Simpul*) malloc(sizeof(Simpul));
       
        Root->INFO = X;
        Root->LEFT = NULL;
        Root->RIGHT = NULL;
    }
    else
        cout <<"pohon h sudah ada";
}
 
void InsertUrutNomor() {
    int i, j, Flag;
    char X;
    Flag = 0; i=0;j=0;
    Q[i] = Root;
   
    while (Flag==0 && j<n-2) {
        X = getche();
       
        if (X != '0') {
            BuatSimpul(X);
            R = Q[i];
            R->LEFT = P;
            j++;
            Q[j]=P;
        }
        else {
            Flag = 1;
            j++;
            Q[j]=NULL;
        }
       
        if (Flag==0) {
            X = getche();
            if(X != '0') {
                BuatSimpul(X);
                R = Q[i];
                R->RIGHT =P;
                j++;
                Q[j]=P;
            }
            else {
                Flag = 1;
                j++;
                Q[j] = NULL;
            }
        }
        i++;
    }
}
 
void BacaPerLevel() {
    P = Root;
    Simpul *LastKiri=Root;
   
    cout << P->INFO;
   
    while(P->LEFT != NULL) {
        cout << " ";
        P = P->LEFT;
        LastKiri = LastKiri->LEFT;
        cout << P->INFO;
       
        while(P->RIGHT != NULL){
            P = P->RIGHT;
            cout << P->INFO;
        }
       
        P = LastKiri;
    }
}
 
void preorder(Simpul* baca){
    if(baca != NULL){
        cout << baca->INFO;
        preorder(baca->LEFT);
        preorder(baca->RIGHT);
    }
}
 
void inorder(Simpul* baca){
    if(baca != NULL){
        inorder(baca->LEFT);
        cout << baca->INFO;
        inorder(baca->RIGHT);
    }
}
 
void postorder(Simpul* baca){
    if(baca != NULL){
        postorder(baca->LEFT);
        postorder(baca->RIGHT);
        cout << baca->INFO;
    }
}
 
void cekData() {
    cout << "Data  | Lokasi Nilai LEFT     RIGHT\n";
    for(int i=0;i<n;i++){
        cout << "Q[" << setw(2) << i << "] :";
       
        if(Q[i]!=NULL){
            cout << " " << Q[i]
                 << " " << Q[i]->INFO;
           
            if(Q[i]->LEFT != NULL)   
                cout << " " << Q[i]->LEFT;
            else
                cout << "   NULL  ";
           
            if(Q[i]->RIGHT != NULL)  
                cout << " " << Q[i]->RIGHT;
            else
                cout << "   NULL  ";
           
            cout << "\n";
        }
        else
            cout << " NULL\n";
    }
}