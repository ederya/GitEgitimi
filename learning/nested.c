
#include <stdio.h>

void dis_fonksiyon() {
    printf("Dişardayim\n");

    // İç fonksiyon (Sadece GCC derleyicisi destekler)
    void ic_fonksiyon() {
        printf("İçerdeyim\n");
    }

    ic_fonksiyon(); 
}

int main() {
    dis_fonksiyon(); // Programı buradan tetikliyoruz
    return 0;
}