#include <conio.h>
#include <iostream.h>
#include <stdio.h>

main()
{
float na, tugas,absen,uts,uas;

cout<< "MASUKAN NILAI MAHASISWA" <<endl;
cout<< "**********************************" <<endl;
cout<< "MASUKAN NILAI TUGAS		:" ,cin>>tugas;
cout<< "MASUKAN NILAI ABSEN		:" ,cin>>absen;
cout<< "MASUKAN NILAI UTS		:" ,cin>>uts;
cout<< "MASUKAN NILAI UAS		:" ,cin>>uas;

na= (0.1*tugas)+(0.2*absen)+(0.3*uts)+(0.4*uas);
cout<< "\n\n=====HASIL AKHIR======="<<endl;
cout<<"NILAI AKHIR ANDA ADALAH	:"<<na<<endl;

getch();
}
