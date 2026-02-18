// No 1. Looping Dasar

// Looping 1-10 menggunakan for
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}

// menampilkan bilangan genap dari 1 sampai 50
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

// No.2 Kasus Perhitungan
#include <stdio.h>

int main() {
    int input;
    int jumlah = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++) {
        jumlah += i;
    }

    printf("Jumlah bilangan dari 1 sampai %d adalah %d\n", input, jumlah);

    return 0;
}

// Studi Kasus Sederhana (Meminta input 5 nilai menggunakan array )

#include <stdio.h>

int main() {
    int nilai[5];
    int total = 0;
    int rata_rata;

    for(int i = 0; i < 5; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    for(int i = 0; i < 5; i++) {
        total += nilai[i];
    }

    rata_rata = total / 5;

    printf("\nTotal : %d\n", total);
    printf("Rata-rata : %d\n", rata_rata);

    return 0;
}