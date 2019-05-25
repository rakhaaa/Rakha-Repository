#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main ()
{
int i=0;
int vokal=0;
int x;
char kalimat[20];

cout <<"Masukkan kalimat : ";

cin.getline(kalimat,20);
x=strlen(kalimat);
for(i=0;i<x;i++)
{
if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
vokal++;
}
cout<<"Return : " << vokal << endl;

getch( );
}
