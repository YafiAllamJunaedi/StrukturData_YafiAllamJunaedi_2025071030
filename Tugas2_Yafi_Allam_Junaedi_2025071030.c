#include <stdio.h>

int hitungTotal(int arr[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

float hitungRataRata(int arr[], int n) {
    int total = hitungTotal(arr, n);
    return (float) total / n;
}

int nilaiTertinggi(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void tampilArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Nilai ke-%d : %d\n", i+1, arr[i]);
    }
}

int main() {
    int nilai[10];
    int n = 10;

    printf("Masukkan 10 nilai:\n");
    for(int i = 0; i < n; i++) {
        printf("Nilai ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDATA NILAI\n");
    tampilArray(nilai, n);

    printf("\nHASIL PERHITUNGAN\n");
    printf("Total Nilai      : %d\n", hitungTotal(nilai, n));
    printf("Rata-rata Nilai  : %.2f\n", hitungRataRata(nilai, n));
    printf("Nilai Tertinggi  : %d\n", nilaiTertinggi(nilai, n));

    return 0;
}