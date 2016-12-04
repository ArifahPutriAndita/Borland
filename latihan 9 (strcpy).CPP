#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

main()
{
char huruf [20];
char pindah [20];
clrscr();
cout<<"Masukan Sembarang Kata =";
gets(huruf);
/*proses*/
strcpy(pindah,huruf);
cout<<"peindahannya = "<<pindah;

getch();

}