#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
struct jual{
int harga,banyak;
char nama[20];
float totalbar;
};
struct member{
string nama,nomor;
};
jual input[100];
jual sorti;
member me[5];
int i,a,n;
float total=0,diskon,potongan;
string member,nomember,pelangan,benar;
char ke;


int main(){

me[0].nama="Bayu";
me[0].nomor="A001";
me[1].nama="Irvan";
me[1].nomor="A002";
me[2].nama="Susiati";
me[2].nomor="A003";
me[3].nama="Diana";
me[3].nomor="A007";
me[4].nama="Roni";
me[4].nomor="A008";
start :
cout<<"Apakah memiliki member :"; cin>>member;
if(member=="tidak"||member=="t"){
        system ("CLS");
        cout<<"Nama pelanggan :"; cin>>pelangan;
        diskon=1;
        potongan=0;

}
if(member=="ya"||member=="y"){
cout<<"nomor member :";cin>>nomember;
for(i=0;i<5;i++){
    if(nomember==me[i].nomor)
    {
        benar="ya";
        ke=i;
    }
}
if (benar=="ya"){
        system ("CLS");
    cout<<"member yang ditemukan"<<endl;
    cout<<"nomor :"<<me[ke].nomor<<endl;
    cout<<"nama  :"<<me[ke].nama<<endl;
    diskon=0.95;
    potongan=5;
}
else {cout<<"Nomor member tidak ditemukan "<<endl;
      goto start;
      //system ("CLS");
}
}

cout<<" Jumlah Barang Belanja : ";
cin>>n;cout<<endl;
for (i=0;i<n;i++){
    cout<<"----------Barang ke-"<<i+1<<"----------"<<endl;
    cout<<" NAMA Barang       :" ;cin>>input[a].nama;
    cout<<" HARGA Barang    Rp." ;cin>>input[a].harga;
   int x=input[a].harga;
    cout<<" JUMLAH Barang     :" ;cin>>input[a].banyak;
   int y=input[a].banyak;
    a++;
    input[a].totalbar=x*y;
    cout<<"Total harga      Rp."<<input[a].totalbar<<endl;
total=total+input[a].totalbar;
    }

 int b;
 for(i=0;i<n;i++){
        for(b=0;b<n-1;b++){

        if(input[b].harga>input[b+1].harga)
    {
        sorti.harga=input[b].harga;
        input[b].harga=input[b+1].harga;
        input[b+1].harga=sorti.harga;

        strcpy(sorti.nama,input[b].nama);
        strcpy(input[b].nama,input[b+1].nama);
        strcpy(input[b+1].nama,sorti.nama);

        sorti.banyak=input[b].banyak;
        input[b].banyak=input[b+1].banyak;
        input[b+1].banyak=sorti.banyak;


}   }   }

getch();system ("CLS");


a=b;
cout<<"     Barang belanjaan"<<endl<<endl;
for(i=0;i<=a;i++){
    cout<<"----------Barang ke-"<<i+1<<"----------"<<endl<<endl;
    cout<<" HARGA       Rp."<<input[i].harga<<endl;
    cout<<" BANYAK        :"<<input[i].banyak<<endl;
    cout<<" NAMA          :"<<input[i].nama<<endl;
    cout<<" Total Bayar Rp."<<input[i+1].totalbar<<endl<<endl;

    }


cout<<endl<<"Diskon member (persen) :"<<potongan;
cout<<endl<<"total belanjaan Rp."<<total*diskon;
cout<<endl<<endl<<endl;




}
