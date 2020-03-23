#include <iostream>

using namespace std;

int main()
{
     int nilaiMHS;
     string indeks;

     
     cout<<"\t== Program Konversi Nilai ==\n\n";
     cout<<"Masukkan nilai MHS UNPGRI KEDIRI : ";

    
     cin>>nilaiMHS;

     
     if(nilaiMHS >= 80){
          indeks = "A";
     }
     else if(nilaiMHS >= 75){
          indeks = "AB";
     }
     else if(nilaiMHS >= 70){
          indeks = "B";
     }
     else if(nilaiMHS >= 65){
          indeks = "BC";
     }
     else if(nilaiMHS >= 60){
          indeks = "C";
     }
     else if(nilaiMHS >= 55){
          indeks = "CD";
     }
     else if(nilaiMHS >= 40){
          indeks = "D";
     }
     else{
          indeks = "E";
     }

     
     cout<<"\nNilai indeks hasil konversi dari "<<nilaiMHS;
     cout<<" adalah "<<indeks;
 
     return 0;
}
