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


int main()
{
    // Soru1: Kullancýnýn girdiði sayýnýn asal olup olmadýðýný bulan bir fonksiyon yazýn sayý asal ise 1 deðil ise 0 return etsin.

    printf("sonuc: %d \n",asalMi());

    // Soru2: Kendisine parametre olarak verilen bir metni (char array) ter çevirip ekrana yazan bir fonksiyon yazýnýz.
    char cdizi[15];

    printf("Bir karakter dizisi giriniz:");
    scanf("%s",cdizi);
    tersDondur(cdizi);



    return 0;
}




