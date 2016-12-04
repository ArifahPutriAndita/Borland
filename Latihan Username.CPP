#include<cstring.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>

int main()
{

int a,b,c,d,e;
char password[20], *username;
login:
cout<<endl;

cout<<"\n          Login ";
cout<<"\n==========================";
cout<<"\nUsername : "; cin>>username;
cout<<"\nPassword : "; cin>>password;

if (username=="arifah" && strcmp(password,"admin")==0)
{
  clrscr();
  cout<<"Menu Utama "<<endl;
}
else
{ cout<<"\t\t\tLogin Gagal ..."<<endl;
goto login;
}
getch();
}