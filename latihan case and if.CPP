#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode,*nama;
float harga=0,potongan,bonus,total,ppn,jumlah_beli;


clrscr();
cout<<"Kode Buku : ";cin>>nama;
cout<<"Jumlah Pembelian Buku : ";cin>>jumlah_beli;

if(kode=='1')
{
strcpy(nama,"Sukses Belajar Borland C++");
harga=50000;
}

else if(kode=='2')
{
strcpy(nama,"Kunci Pribadi yang sukses");
harga=35000;
}

else if(kode=='3')
{
strcpy(nama,"mencari Mutiara Di Dasar Hati");
harga=45000;
}
else
{
strcpy(nama,"none");
harga=0;
}



cout<<"**** TOKO BUKU HALIFI*** "<<endl;
cout<<"   JL. KeadilanNo. 16    "<<endl;
cout<<"-------------------------"<<endl;
cout<<"Nama Buku : "<<nama<<endl;
cout<<"Harga Buku : "<<harga<<endl;
cout<<"Potongan : "<<potongan<<endl;
cout<<"Bonus : "<<bonus<<endl;
cout<<"Total Bayar : "<<total<<endl;
cout<<"PPN : "<<ppn<<endl;


getch();
}