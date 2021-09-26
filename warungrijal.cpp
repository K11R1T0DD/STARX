#include<iostream>

using namespace std; 
int main () 
{ 	
   int kode,pri,jml,tot,byr,kbl,jarak,akhir,diskon; 	
   char mad; 	
   do 	
   { 	
   cout<<"          JANGAN LUPA MAKAN        	"<<endl; 
   cout<<"          menawarkan layanan pesan    "<<endl;
   cout<<"          makanan dan minuman         "<<endl;
   cout<<"          pesan antar dalam kota      "<<endl;
   cout<<"======================================"<<endl;
   cout<<""<<endl;
   cout<<"  Menu Makanan                Harga "<<endl;
   cout<<"======================================"<<endl;
   cout<<"  1.soto                    RP. 18.000"<<endl;
   cout<<"  2.sate                    Rp. 22.500"<<endl;
   cout<<"  3.ayam bakar              Rp. 20.000"<<endl;
   cout<<"  4.jus mangga              Rp. 10.000"<<endl;
   cout<<"  5.kopi                    Rp.  7.000"<<endl;
   cout<<"  6.es teh                  Rp.  5.000"<<endl;
   cout<<"  MASUKKAN PILIHAN ANDA:              "<<endl;
   cin>>kode;
   switch (kode){
   case 1:
        cout<<'\n'<<"SOTO "<<endl;
        pri=18000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	case 2:
        cout<<'\n'<<"SATE  "<<endl;
            pri=22000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	case 3:
        cout<<'\n'<<"AYAM BAKAR "<<endl;
            pri=20000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	case 4:
        cout<<'\n'<<"JUS MANGGA "<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	case 5:
        cout<<'\n'<<"KOPI "<<endl;
            pri=7000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"ES TEH "<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
	default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
}
     
    while (mad/='Y');
  cout<<"Total Harga tanpa ongkir	: Rp. "<<tot<<endl;
printf("masukan jarak: "); scanf("%d",&jarak);
if(jarak<5){
tot=tot+7500;
printf("biaya pembayaran : %d",tot);
}
else if(jarak >=5 && jarak<=10){
tot=tot+12500;
printf("biaya pembayaran : %d",tot);
}
else if(jarak>10){
tot=tot+15000;
printf("biaya pembayaran : %d",tot);
}
if(tot>60000){
diskon = tot * 10/100;
tot = tot - diskon;
printf("\n total diskon = %d",diskon);
printf("\n biaya setelah diskon: %d",tot);
}
}
 
