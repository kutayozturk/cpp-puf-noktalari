/* Karşılaştırma Hatası

3 < 6 < 5 
ifadesi C++ dilinde derlenir mi?
Matematiksel olarak yazılabilir ama hatalı bir ifade ama ne yazıkki derlenir.
Gelin inceleyelim
Derleyiciler ekranda yazılan kodları bizler gibi bir bakışta göremezler
Sol'dan başlayarak ifadeyi tek tek okurlar
Yukarıdaki örnek için;
3 değerini okur ve ilk kez bir operatör ile karşılaşır <
işlemi yapmak isteyecek ancak, işleme girecek değerlerden biri yine bir operatöre bağlı
her iki operatörde aynı olduğundan işlem önceliğini ilk okuduğu operatöre verecektir.
YANİ;

ilk önce 3 < 6 işlemini gerçekleştirir.
bu ifade doğru olduğu için TRUE olarak kabül edecektir.
o zaman ifademizin yeni hali;
true < 5 oldu
Derleyici bu noktada karşılaştırma yapabilmek için, true ifadesini 1 olarak kabül edecektir
1 < 5 olacaktır.
Bu durum da yine doğru olduğu için, sonuç 1 olarak kabül edilir.

ÖRNEK
*/

int x = 15;

if (1 < x < 10)
	cout << "Dogru" << endl;
else
    cout << "Yanlis" << endl;
	
/*
Ekran Çıktısı:

	Dogru


ifadesi normalde çalışmaması gereken bir koşuldur. Hatta C# gibi diller syntax hatası verirler.
Ancak c++ dili hata vermez ve içerideki ifadeyi 1 yani true olarak kabül ettiği için
ekran çıktısı verir.
Bu kullanım HATALI bir kullanımdır.
*/