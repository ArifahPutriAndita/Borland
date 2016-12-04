#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
int bil;

cout<<"\t\t Latihan Perulangan C++ dengan for "<< endl;
cout<<"\t\t =================================="<<endl;
cout<<"\t 1.Menampilkan deret angka 1 sampai 10 :"<<bil;
for(bil=0;bil<=10;bil++)
{
cout<<bil;
}
cout<<"\n\t 1.Menampilkan deret bilangan genap dari angka 1 sampai 10 : "<<bil;
for(bil=0;bil<=10;bil+=2)
{
cout<<bil;
}
cout<<"\n\t 1.Menampilkan deret bilangan ganjil dari angka 1 sampai 10 : "<<bil;
for(bil=1;bil<=10;bil+=2)
{
cout<<bil;
}
getch();
}
