//	C++ Foreach Döngüsü

int a[] = {10,20,30,40,50}
for (int i=0; i<5; i++){
	cout << a[i] << endl;
}

/*
Yukarıda standart bir for döngüsü kullanılmıştır. 

Ekran Çıktısı
10
20
30
40
50

bu döngü ile a dizsinin tüm elemanlarını ekrana yazdırmış olduk.

foreach döngüsü, bir dizinin tüm elemanlarına daha kısa bir şekilde ulaşmamızı sağlar.
foreach döngüsü diziler ile birlikte kullanılır.
Yukarıdaki örneği foreach ile tekrar yapalım
*/

int a[] = {10,20,30,40,50}
for(int item:a){
	cout << item << endl;
}

/*
item isminde bir değişken tanımladık. Bu değişken "a" dizinin her bir elemanını temsi eder.
":" ifadesi ile "a" dizini çağırdırığımıza dikklat ediniz.
daha sonras cout komutu ile item değişkeninin ekrana yazdırdık.

Ekran Çıktısı
10
20
30
40
50

*/
