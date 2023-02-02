// inline (Makro) fonksiyonlar

/*
	inline fonksiyonlar aslında bildiğimiz fonksiyonlardan pekde farklı değildir.
	Ancak çalışma mantığı açısından farklıdır ve performansa etkisi vardır.
	
	Bu durumu bir örnek fonksiyon ile açıklayalım.

*/

#include <iostream>

using namespace std;

inline int topla (int a, int b){
	return a+b;
}

int main()
{
    cout << topla(5,7) << endl;
    return 0;
}

/*
	Yukarıdanda anlaşılacağı üzere "topla" isimli fonkisyon 2 adet int tipinde
	parametre almaktadır.
	Bu parametler "main" fonksiyonu içerisined "topla" fonksiyonu çağrıldığında yerine yazılır
	ve toplama işleminin sonucu ekrana bastırılır.
	
	* UYARI: Standart fonksiyon tiplerinde "main" fonksiyonundan alınan parametre değerleri
	ilgili fonksiyonu gönderilir, orada işleme tabii tutulur ve tekrar "main" fonksiyonu 
	içerisine gönderilerek işlem yapılır.


	Ancak:
	inline int topla (int a, int b){
	return a+b;
	}
	
	inline söz dizimi kullandığında, parametlere fonksiyona gönderilmezler.
	Fonksiyonun kendisi, sanki dışarıya değilde, "main" bloğuna yazılmış gibi
	davranır ve "main" de çalışır.
	
	inline fonksiyonlar "makro fonksiyon" olarak da bilinirler.
*/

