#include<iostream>

using namespace std;

double faktorial(double n){
    if(n==0)
        return 1;
    else
        return n * faktorial(n-1);
}

double perkalian(double angka, double pengali){
    if(pengali==0)
        return 0;
    else
        return angka+perkalian(angka,pengali-1);
}

double pembagian(double angka, double pembagi){
    if(angka < pembagi)
        return 0;
    else
        return 1 + pembagian(angka-pembagi,pembagi);
}

double perpangkat(double angka,double pangkat){
    if(pangkat==0)
        return 1;
    else if(pangkat>0)
        return angka*perpangkat(angka,pangkat-1);
    else return 1/angka*perpangkat(angka,pangkat+1);
}


main(){

double angka1,angka2;
cout<<"==========INPUT==========\n";
cin>>angka1;
cin>>angka2;
cout<<"==========OUTPUT==========\n";
cout<<faktorial(angka1)<<endl;
cout<<perkalian(angka1,angka2)<<endl;
cout<<pembagian(angka1,angka2)<<endl;
cout<<"==========INPUT PANGKAT==========\n";
cin>>angka1;
cin>>angka2;
cout<<perpangkat(angka1,angka2)<<endl;
//return 0;
}
