
#include <stdio.h>

int main(int argc, char* argv[]){

    // Eğer sadece programın adını yazdıysan (argüman yoksa)
    if (argc < 2) {
        printf("Lutfen isminizi de yazin! Ornek: ./arg_test Derya\n");
        return 1; // Hata ile kapat
    }

    // argv[0] programın adıdır, argv[1] yazdığın ilk kelimedir
    printf("Merhaba %s, C dunyasina hos geldin!\n", argv[1]);
    printf("Toplam arguman sayisi: %d\n", argc);

    return 0;


}