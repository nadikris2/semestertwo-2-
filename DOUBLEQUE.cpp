#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
 
int Q[100];
int l=0,r=-1,n;
 
void tampil(){
   int i;
 
   cout << endl;
 
   cout << "      ";
   for(i=-1; i<=n; i++){
    cout << setw(2);
    if(i == l && i == r){
        cout << "LR";
      } else if (i == l){
        cout << "L";
      } else if(i == r){
        cout << "R";
      } else {
            cout << "  ";
      }
      cout << " ";
   }
   cout << endl;
 
   for(i=0; i<n*3+9; i++){
    cout << "-";
   }
    cout << endl;
 
   cout << "Nilai  : ";
    for(i=0; i<n; i++){
    if(i > l-1 && i<=r){
        cout << setw(2) << Q[i];
      } else {
            cout << " -";
      }
      cout << " ";
   }
   cout << endl;
 
   cout << "Indeks : ";
   for(i=0; i<n; i++){
      cout << setw(2) << i << " ";
   }
    cout << endl;
 
   for(i=0; i<n*3+9; i++){
    cout << "-";
   }
    cout << endl << endl;
}
 
void awal();
void insert_kanan();
void insert_kiri();
void delete_kanan();
void delete_kiri();
 
void main(){
    int pilihan;
 
   cout << "Masukan jumlah double ended queue : ";
    cin >> n;
 
    do{
    clrscr();
        cout << "Program Double Ended Queue" << endl;
      tampil();
      cout << "Menu : " << endl;
        cout << "1. Insert Kanan" << endl;
        cout << "2. Insert Kiri" << endl;
        cout << "3. Delete kanan" << endl;
        cout << "4. Delete Kiri" << endl;
      cout << "5. inisialkan Awal" << endl;
        cout << "0. Keluar" << endl;
      cout << "Masukan pilihan : ";
        cin >> pilihan;
 
      clrscr();
      cout << "Program Double Ended Queue" << endl;
      tampil();
        switch(pilihan){
            case 1:
                insert_kanan();
                break;
            case 2:
                insert_kiri();
                break;
            case 3:
                delete_kanan();
                break;
            case 4:
                delete_kiri();
                break;
         case 5:
                awal();
            cout << "Data telah direset!" << endl;
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan salah!" << endl;
        }
        cout << "lanjut ?" << endl;
        getch();
    } while(pilihan != 0);
}
 
void awal(){
    l = 0;
    r = -1;
}
 
void insert_kanan(){
    if(r < n-1){
        int x;
        cout << "Masukan Data : ";
        cin >> x;
 
        r++;
        Q[r] = x;
 
        cout << "Data masuk!" << endl;
    } else {
        cout << "Data penuh!" << endl;
    }
}
 
void insert_kiri(){
    if(l > 0){
        int x;
        cout << "Masukan Data : ";
        cin >> x;
 
        l--;
        Q[l] = x;
 
        cout << "Data  masuk!" << endl;
    } else {
        cout << "Data penuh!" << endl;
    }
}
 
void delete_kanan(){
    if(r >= l){
        int x = Q[r];
        r--;
 
        cout << "Nilai " << x << " telah dikeluarkan!" << endl;
    } else {
        cout << "Data tidak ada!" << endl;
    }
}
 
void delete_kiri(){
    if(l <= r){
        int x = Q[l];
        l++;
 
        cout << "Nilai " << x << " telah dikeluarkan!" << endl;
    } else {
        cout << "Data tidak ada!" << endl;
    }
}
