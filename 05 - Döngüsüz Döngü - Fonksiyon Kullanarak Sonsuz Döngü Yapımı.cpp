// Fonksiyon kullanarak sonsuz döngü oluşturma
    // Döngü Kullanmadan Sonsuz Döngü Üretmek

#include <iostream>

using namespace std;

void birinci();
void ikinci();


int main()
{
    birinci();
      return 0;
}

void birinci(){
cout << "ilk fonksiyonu calistiriyorum";
ikinci();
}


void ikinci(){
cout << "ikinci fonksiyonu calistiriyorum";
birinci();
}



