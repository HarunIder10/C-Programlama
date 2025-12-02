#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int asalMi(){
    printf("lutfen bir sayi giriniz: ");
    int sayi;
    int sayac=0;
    scanf("%d",&sayi);
    for(int i=2;i<sayi;i++){
        if(sayi%i == 0){
            sayac++;
        }
    }
    if(sayac>0){
        return 0;
    }
    else{
        return 1;
    }
}

void tersDondur(char dizi[]) {
    int boyut = strlen(dizi);
    for(int i = boyut - 1; i >= 0; i--) {
        printf("%c", dizi[i]);
    }
}

void kup(){
    int toplam = 0;
    for(int i=1;i<=10;i++){
        toplam = toplam + i*i*i;
    }
    printf("Toplam: %d",toplam);

}

void Faktoryel(){
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    int sonuc=1;
    for(int i=1;i<=sayi;i++){
        sonuc=sonuc*i;
    }
    printf("%d sayisinin faktoryeli: %d",sayi,sonuc);

}

void basamak(){
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    int sayac=1;
    while(10<=sayi){
        sayi = sayi/10;
        sayac++;
    }
    printf("basamak sayisi: %d",sayac);
}
int main()
{
    // Soru1: kullanıcının girdiği sayının asal olup olmadığını bulan bir fonksiyon yazın sayı asal ise 1 değil ise 0 return etsin.

    //printf("sonuc: %d \n",asalMi());

    // Soru2: Kendisine parametre olarak verilen bir metni (char array) ter çevirip ekrana yazan bir fonksiyon yazınız.
    //char cdizi[15];
    //printf("Bir karakter dizisi giriniz:");
    //scanf("%s",cdizi);
    //tersDondur(cdizi);

    // Soru3: 1 den 10 a kadar olan sayıların küplerini bulan fonksiyon yazınız.
    //kup();

    // Soru4: Klavyeden girilen sayının faktöryelini hesaplayan fonksiyon yazınız.
    //Faktoryel();

    // Soru5: Klavyeden girilen sayının kaç basamaklı olduğunu bulan fonskşyonu yazın
    //basamak();

    return 0;
}




