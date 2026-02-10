
#include <stdio.h>

int main(int argc, char* argv[]){

    /*
    argc (Argument Count): Terminale kaç tane kelime yazdığını sayar. 
    Programın adı dahil olduğu için her zaman en az 1 olur.
    argv (Argument Vector): Yazdığın kelimelerin listesidir. 
    argv[0] her zaman ./program_adi dır. Senin yazdığın ilk veri argv[1] de durur.*/

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