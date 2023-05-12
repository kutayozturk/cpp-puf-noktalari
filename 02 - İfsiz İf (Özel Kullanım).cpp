/*	ÖZEL KULLANIM (if'siz if)

	? Operatörü - Koşul Operatörü - Ternary Operatörü
	
	

Bu operatör ile çok fazla karşılaşmayız ancak, oldukça kullanışlı bir operatördür.

? ibaresi, önündeki koşulu kontrol eder. (true-false mi?)

Bir örnekle açıklayalım.

*/

int sayi;
cout << "Bir sayi giriniz: ",
cin >> sayi;

cout << ((sayi>=0)?"Pozitif":"Negatif");

/*

Yukarıdaki örnekten de anlaşılacağı gibi, girilen
değerin Pozitif yada Negatif bir olup olup olmadığı kontrol edilir.
Sadece 2 durum  karşılaştırılabilir.
3. bir durum söz konusu değildir.
Yani sayi, pozitif, negatif yada 0'mı diye kontrol edemeyiz.

	NOT: Bu kullanımın hem evetinde (true) hem hayırında (false) cevap olması gerekir.

*/
