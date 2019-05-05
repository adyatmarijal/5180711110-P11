#include <iostream>
#include <conio.h>

using namespace::std;
char member;
string cari,nb,pel;
int macam,a,i,k,m,jb,ha,jbl;
double total,td,ts=0,dis,dsk,tsd;

main()
{
    cout<<"Selamat datang di Akulaku\n";
    cout<<"====================================\n\n";
        string nomer [5] = {"A001","A002","A003","A007","A008"};
        string nama [5] = {"Bayu","Irvan","Susiati","Diana","Roni"};

        string namaku,cari;
        int indeks,jumlah,total,jum = 5;
        double diskon;

    cout<<"Apakah anda member dari Akulak? (y/t) : ";cin>>member;
    if (member=='y')
    {
    cout<<"Masukkan Nomer Identitas member Anda : ";cin>>cari;
    for(int i=0;i<jum;i++){
        if(cari== nomer[i]){
            namaku = nama [i];
        }
    }
    cout<<"\nAnda Member\n";
    cout<<"Nomer : "<<cari;
    cout<<"\nNama : "<<namaku;
    dsk=5;
    }
    else
    {cout<<"Nama Pelanggan : ";cin>>pel;}

    cout<<"\n\nBerapa Macam Jumlah Barang yang dibeli : ";cin>>m;
        for(i=0;k<m;k++){
            cout<<"\nNama Barang : ";cin>>nb;
            cout<<"Harga : ";cin>>ha;
            cout<<"Jumlah Barang : ";cin>>jb;
            td=ha*jb;
            jbl=jbl+jb;
            cout<<"Harga semua : "<<td<<endl;
            ts=ts+td;
            }

    cout<<"\n\nJenis Member y/t : "<<member;
    cout<<"\nNama Pelanggan : "<<namaku<<pel;
    cout<<"\nJumlah Belanjaan : "<<jbl;
    cout<<"\nMendapat Discon : "<<dsk<<"%";
    cout<<"\nTotal Harga Semua Sebelum Discon : "<<ts;
    tsd=ts*dsk/100;
    total=ts-tsd;
    cout<<"\nTotal Harga Setelah Discon : "<<total;
    cout<<endl<<endl;



}
