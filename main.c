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

void diziBuyuk(){
    int dizi[6];
    for(int i=0;i<6;i++){
        printf("%d.eleman: ",i+1);
        scanf("%d",&dizi[i]);
    }
    int buyuk=0;
    for(int i=0;i<6;i++){
        if(dizi[i]>buyuk){
            buyuk=dizi[i];
        }
    }
    printf("\ndizideki en buyuk eleman: %d",buyuk);

}

void diziTers(){
    char dizi[100];
    gets(dizi);
    int boyut;
    for(int i=0;i<100;i++){
        if(dizi[i]=='\0'){
            boyut=i-1;
            break;
        }
    }
    for(boyut;-1<boyut;boyut--){
        printf("%c",dizi[boyut]);
    }
}

void decimalToBinary() {
    int deger;
    int dizi[8];
    int i = 0;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &deger);

    // 8 bit için hesaplama
    for(i = 0; i < 8; i++) {
        dizi[i] = deger % 2;
        deger = deger / 2;
    }

    // Ters sırada yazdırma
    printf("Binary: ");
    for(i = 7; i >= 0; i--) {
        printf("%d", dizi[i]);
    }
}

void diziSira(){
    int dizi[10]={5,6,8,7,2,5,9,4,1,23};
    for(int i=0;i<10;i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");
    int kucuk=dizi[0];
    int eleman=0;
    for(int i=0;i<10;i++){
        if(dizi[i]<kucuk){
            kucuk=dizi[i];
            eleman=i;
        }
    }
    printf("%d dizinin en kucuk elemani ve dizinin %d.elemanidir",kucuk,(eleman+1));

}

void notGecme(){
    int notlar[25]={15,59,84,65,25,38,45,98,76,84,26,95,12,85,83,45,56,58,52,51,53,54,68,64,77};
    int sayac=0;
    for(int i=0;i<25;i++){
        if(notlar[i]>=50){
            sayac++;
        }
    }
    printf("%d kisi dersten gecti",sayac);
}

void bolunebilme(){
    int dizi[10]={45,12,20,40,32,60,80,35,98,100};
    for(int i=0;i<10;i++){
        if(dizi[i]%20==0){
            printf("%d ",dizi[i]);
        }
    }
}

void polindrom(){
    char dizi[20];
    printf("Lutfen kelimeyi giriniz: ");
    gets(dizi);
    // scanf("%19s",dizi);
    int left = 0;
    int right = strlen(dizi) - 1;

    while(left < right){
        if(dizi[left] != dizi[right]){
            printf("Polindrom degildir");
            return;
        }
        left++;
        right--;
    }

    printf("Polindromdur");
}

void tersDizi(){
    int dizi[]={45,87,59,23,54,68};
    int len = sizeof(dizi)/sizeof(dizi[0])-1;
    for(int i=len;0<=len;len--){
        printf("%d ",dizi[len]);
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
    // carpimTablo();

    // Soru10: Fibonacci serisinin ilk 10 terimini ekrana yazan fonksiyon.
    // Fibonacci();

    // Soru11: 10 elemanlı bir sayı dizisinin girişini yapan ve bunları ekrana yazdıran fonksiyonu yazınız.
    // diziYaz();

    // Soru12: Klavyeden girilen bir kelimenin uzunluğunu bulan fonksiyon yazınız.
    //kelimeBoyut();

    // Soru13: Klavyeden girilen 6 elemanlı bir sayı dizisiniz en büyük elemanını bulan fonksiyonu girin.
    // diziBuyuk();

    // Soru14: Girilen kelimeyi tersten yazan fonksiyonu yazınız.
    // diziTers();

    // Soru15: Girilen bir decimal sayıyı binary sayıya çeviren fonksiyonu yazınız.
    // decimalToBinary();

    // Soru16: 10 elemanlı bir sayı dizesinde en küçük elemanın dizinin kaçıncı elemanı olduğunu bulan programı yazınız.
    // diziSira();

    // Soru17: Bir sınıftaki 50 öğrencinin bir dersten aldıkları yıl sonu notları veriliyor.Başarı notu 50 olduğuna göre kaç öğrencinin başarılı olduğunu bulan programı yazınız.
    // notGecme();

    // Soru18: 10 elemanlı bir dizinin elemanlarından hem 4'e hem de 5'e bolunen sayıları bulan programı yazınız.
    // bolunebilme();

    // Soru19: Klavyeden girilen bir  yazının polindrom olup olmadığını bulan fonksiyonu yazınız.
    // polindrom();

    // Soru20: Bir sayı dizisinde dizi elemanlarının sondan başa gelecek şekilde düzenlenmesini sağlayan programı yazınız.
    tersDizi();


    return 0;
}




