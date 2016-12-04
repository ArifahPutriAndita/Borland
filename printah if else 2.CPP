#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
 int nilai,tugas;
 char *grade,*ket;

printf("Masukan Sebuah Nilai: ");scanf("%d",&nilai);
printf("Masukan Sebuah Tugas: ");scanf("%d",&tugas);

if(nilai>90)
{
ket="Lulus";
grade="A";
}
else if(nilai>80)
{
ket="Lulus";
grade="B";
}
else if(nilai>70)
{
ket="Lulus";
grade="C";
}
else if(nilai>=65)
{
ket="Gagal";
grade="D";
}

else 
{
ket="Gagal";
grade="D";
}

cout<<"Keterangan : "<<ket<<endl;
cout<<"Grade : "<<grade<<endl;
getch();
}