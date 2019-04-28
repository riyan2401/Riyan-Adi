#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct mmhs{
    int nim;
char nama[15],kelas[7];
double nilai,data;
};
mmhs mhs[100];
mmhs temp;
char input,cari[10];
int I,a,i,b,nilai,jml,indeks;
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

void SortingBuble()
{  cout<<"Data Sebelum diurutkan"<<endl;
 for(i=0;i<I;i++){

    cout<<"=====================\n";
    cout<<"Data ke :["<<i+1<<"]\n";
    cout<<"NIM   :"<<mhs[i].nim<<endl;
    cout<<"Nama  :"<<mhs[i].nama<<endl;
    cout<<"Nilai :"<<mhs[i].kelas<<endl;
}
   for(int p=0;p<I;p++){
for(int k=0;k<I-1;k++){
if(mhs[k].nim>mhs[b+1].nim){
temp.nim=mhs[k].nim;
mhs[k].nim=mhs[b+1].nim;
mhs[k+1].nim=temp.nim;

strcpy(temp.nama,mhs[k].nama);
strcpy(mhs[k].nama,mhs[k+1].nama);
strcpy(mhs[k+1].nama,temp.nama);
}}}
cout<<"setelah data di sorting :\n";
for(int k=0;k<I;k++)
{
    cout<<"===========================\n";
    cout<<"NIM   :"<<mhs[k].nim<<endl;
    cout<<"Nama  :"<<mhs[k].nama<<endl;
    cout<<"Nilai :"<<mhs[k].nilai<<endl;
}
    cout<<"===========================\n";
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
//cout<<" Input Data mhs \n\n";
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
