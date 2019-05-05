#include <iostream>

using namespace::std;

int main(){
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"BAYU","IRVAN","SUSI","DIANA","RONI"};

    string namaku,cari,mmbr,barang,N;
    int hrg,diskon,jumlah,total,juml=5;


    cout<<"Apakah Anda member atau tidak?[t/y] : ";cin>>mmbr;

 if(mmbr=="t")
    {cout<<"\nMasukan nama anda:";cin>>N;
     cout<<"\nBerapa jumlah barang yang anda beli : ";cin>>jumlah;

        cout<<"\nNama barang : ";cin>>barang;
        cout<<"\nHarga : ";cin>>hrg;

        total=jumlah*hrg;

        cout<<"\nJumlah Harga semuanya:"<<total;
        return 0;}

      else  if (mmbr=="y"){
            cout<<"\nSilahakan masukan no id: ";cin>>cari;
            for (int i=0;i<juml;i++){
                if(cari==nomor[i]){
                    namaku=nama[i];
                }
            }
            cout<<"\nAnda member"<<endl;
            cout<<"\nNomor    : "<<cari<<endl;
            cout<<"\nNama     : "<<namaku<<endl;

            cout<<"\nBerapa jumlah barang yg dibeli : ";cin>>jumlah;


            cout<<"\nNama barang : ";cin>>barang;
            cout<<"\nHarga :Rp ";cin>>hrg;

            total=jumlah*hrg;
            cout<<"\nSelamat anda beruntung mendapatkan diskon 5%";
            total=total*5/100;
            cout<<"\nTotal Harga semuanya:"<<total;

}





}
