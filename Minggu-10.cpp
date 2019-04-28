#include<iostream>
#include<stdlib.h>

using namespace std;

struct mahasiswa{
char nim[15],nama[15],kelas[7];
double nilai,data;
};
mahasiswa mhs[100];
char input,cari[10];
int I,a,b,nilai['I'],jml,indeks;
bool status=false;

void InputData()
{  cout<<"\nInput Jumlah Data :";cin>>I;
   a=0;
   for(int i=0;i<I;i++){
   a=a+1;
   cout<<"\nData ke-"<<a<<endl;
   cout<<"NIM\t: ";cin>>mhs[i].nim;
   cout<<"Nama\t: ";cin>>mhs[i].nama;
   cout<<"Kelas\t: ";cin>>mhs[i].kelas;
   }system("CLS");
}

void SortingBuble()// MASIH SALAH
{  cout<<"Data Sebelum diurutkan"<<endl;
   for(int a=1; a<=I; a++){
   cout<<"NIM\t: "<<mhs[a].nim<<endl;
   cout<<"Nama\t: "<<mhs[a].nama<<endl;
   cout<<"Kelas\t: "<<mhs[a].kelas<<endl;
}
   for(int a=I-1; a>=1; a--){
   for(int b=1; b<=a; b++){
   if(nilai[b]>nilai[b+1]){
   jml=nilai[b+1];
   nilai[b+1]=nilai[b];
   nilai[b]=jml;}}}
   cout<<"\n\nData Setelah Diurutkan (Ascending)"<<endl;
   for (int a=1; a<=I; a++){
   cout<<nilai[a]<<" ";}
   cout<<"\n";
   cout<<"\nData Setelah Diurutkan (Descending)"<<endl;
   for (int a=I; a>=1; a--){
   cout<<nilai[a]<<" ";}
}

void Searching()// MASIH SALAH
{
cout<<"Inputkan nama yang dicari : ";cin>>cari;
a=0;
for(int i=0;i<I;i++){
a=a+1;
if(cari==mhs[i].nama){
status=true;
indeks=a;}
}
system("CLS");
if(status=true)
cout<<"nama ditemukan di indeks ke-"<<indeks<<endl;
else
cout<<"nama tidak ditemukan"<<endl;
}

void HapusData()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {mhs[i]=mhs[i+1];}
 system("CLS");
 cout<<"\nData ke-"<<x<<" Terhapus"<<endl;
 //system("CLS");
}

void LihatData()
{int i,j;
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"Data ke-"<<j<<endl;
  cout<<"NIM\t: "<<mhs[i].nim<<endl;
  cout<<"Nama\t: "<<mhs[i].nama<<endl;
  cout<<"Kelas\t: "<<mhs[i].kelas<<endl;
  }
}

void UbahData()
{
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM\t: ";cin>>mhs[l].nim;
cout<<"Nama\t: ";cin>>mhs[l].nama;
cout<<"Kelas\t: ";cin>>mhs[l].kelas;
LihatData();
}


main(){
start :
//cout<<" Input Data Mahasiswa \n\n";
cout<<"========MENU========\n";
cout<<"1. Input Data\n";
cout<<"2. Sorting (urutkan data)\n";
cout<<"3. Searching\n";
cout<<"4. Hapus data\n";
cout<<"5. Ubah data\n";
cout<<"6. Lihat data\n";
cout<<"7. Exit\n\n";
cout<<" Pilih menu : ";cin>>input;
system("CLS");
if(input=='1')
{
    InputData();goto start;
}
if(input=='2')
{
    SortingBuble();goto start;
}
if(input=='3')
{
    Searching();goto start;
}
if(input=='4')
{
    HapusData();goto start;
}
if(input=='5')
{
    UbahData();goto start;
}
if(input=='6')
{
    LihatData();goto start;
}
else
    return 0;









//return;
}
