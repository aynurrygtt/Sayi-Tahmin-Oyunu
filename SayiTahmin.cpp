// Sayi tahmini oyunu
// Rastgele sayi uretmek icin seed (baslangic) srand(time(0));
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int tahmin, deneme = 0;
    int rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasinda rastgele sayi uret
   // cout << rastgeleSayi << endl;   -> Burada tutulan sayı görünür 
    cout <<"Lütfen tahmin ettiğiniz bir sayı giriniz!!" << endl;
    do{
        cin >> tahmin;
        deneme++;
        if(tahmin > rastgeleSayi)
            cout << "Daha kucuk sayi girin: ";
        else if(tahmin < rastgeleSayi)
            cout << "Daha buyuk sayi girin: ";
        else
            cout << "Sayiyi " << deneme << ". denemede buldunuz" << endl;
    }while(tahmin != rastgeleSayi);
    return 0;
}
