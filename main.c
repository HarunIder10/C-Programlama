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

void basamakToplam(){
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    int toplam=0;
    int sayi2 = sayi;
    while(sayi2>=1){
        toplam=toplam+(sayi2%10)*(sayi2%10)*(sayi2%10);
        sayi2 = sayi2/10;
    }
    if(toplam==sayi){
        printf("basamaklari toplami esittir.");
    }
    else{
        printf("Basamaklari toplami esit degildir");
    }

}

void ciftTekOran(){
    int tek=0;
    int cift=0;
    int sayi;
    float oran;
    for(int i=0;i<20;i++){
        printf("%d. sayi: ",(i+1));
        scanf("%d",&sayi);
        if(sayi%2 == 0){
            cift = cift + sayi;
        }
        else{
            tek = tek + sayi;
        }
    }
    if(tek == 0){
        printf("\nHic tek sayi olmadigi icin oran hesaplanamaz!");
        return;
    }
    oran = cift/tek;
    printf("\nCift sayilarin tek sayilara orani: %.2f",oran);

}

void tamKare(){
    for(int sayac=4;sayac*sayac<=1000;sayac++){
            int kare=sayac*sayac;
        printf("%d\n",kare);
    }
}

void carpimTablo(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,(i*j));
        }
        printf("\n");
    }

}

void Fibonacci(){
    int sayi1=0;
    int sayi2=1;
    printf("%d\n",sayi1);
    printf("%d\n",sayi2);
    int toplam;
    for(int i=0;i<8;i++){
        toplam=sayi1+sayi2;
        sayi1=sayi2;
        printf("%d\n",toplam);
        sayi2=toplam;
    }
}

void diziYaz(){
    int dizi[10];
    for(int i=0;i<10;i++){
        printf("\n%d.elemani giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin elemanlari: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", dizi[i]);   // tek tek yazdırıyoruz
    }

}

void kelimeBoyut(){
    char kelime[50];
    printf("kelimeyi giriniz: ");
    scanf("%s",kelime);
    for(int i=0;i<50;i++){
        if(kelime[i]=='\0'){
            printf("kelime sayisi: %d",i);
            break;
        }
    }

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

    // Soru5: Klavyeden girilen sayının kaç basamaklı olduğunu bulan fonsksiyonu yazın.
    //basamak();

    // Soru6: Klavyeden girilen 3 basamaklı bir sayının basamakları toplamanın kendisine eşit olup olmadığını bulan fonksiyonu bulunuz.
    //basamakToplam();

    // Soru7: Klavyeden girilen 20 adet sayıdan çift sayıların toplamını tek sayıların toplamına oranını bulan fonksiyonu bulunuz.
    //ciftTekOran();

    // Soru8: 10  ile 1000 arasındaki tam kare sayıları ekrana yazdıran fonksiyonu yazınız
    //tamKare();

    // Soru9: 1 den 10 olan sayıların çarpım tablosunu yazınız.
    //carpimTablo();

    // Soru10: Fibonacci serisinin ilk 10 terimini ekrana yazan fonksiyon.
    //Fibonacci();

    // Soru11: 10 elemanlı bir sayı dizisinin girişini yapan ve bunları ekrana yazdıran fonksiyonu yazınız.
    //diziYaz();

    // Soru12: Klavyeden girilen bir kelimenin uzunluğunu bulan fonksiyon yazınız.
    //kelimeBoyut();

    return 0;
}




