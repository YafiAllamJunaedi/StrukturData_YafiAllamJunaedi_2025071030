#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char nama[50];
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void tambahAwal(){
    struct Node *baru = (struct Node*)malloc(sizeof(struct Node));

    printf("Masukkan Nama: ");
    scanf("%s", baru->nama);

    baru->prev = NULL;
    baru->next = head;

    if(head != NULL)
        head->prev = baru;
    else
        tail = baru;

    head = baru;
}

void tambahAkhir(){
    struct Node *baru = (struct Node*)malloc(sizeof(struct Node));

    printf("Masukkan Nama: ");
    scanf("%s", baru->nama);

    baru->next = NULL;
    baru->prev = tail;

    if(tail != NULL)
        tail->next = baru;
    else
        head = baru;

    tail = baru;
}

void hapusAwal(){
    if(head == NULL){
        printf("List kosong\n");
        return;
    }

    struct Node *hapus = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;
    else
        tail = NULL;

    free(hapus);
    printf("Data pertama berhasil dihapus\n");
}

void tampil(){
    struct Node *temp = head;

    if(temp == NULL){
        printf("List kosong\n");
        return;
    }

    while(temp != NULL){
        printf("%s", temp->nama);

        if(temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf("\n");
}

int main(){
    int pilihan;

    do{
        printf("\n=== MENU ===\n");
        printf("1. Tambah di awal\n");
        printf("2. Tambah di akhir\n");
        printf("3. Hapus di awal\n");
        printf("4. Tampil maju\n");
        printf("5. Keluar\n");
        printf("Pilih: ");
        scanf("%d",&pilihan);

        switch(pilihan){
            case 1: tambahAwal(); break;
            case 2: tambahAkhir(); break;
            case 3: hapusAwal(); break;
            case 4: tampil(); break;
            case 5: printf("Program selesai\n"); break;
            default: printf("Pilihan tidak ada\n");
        }

    }while(pilihan != 5);

    return 0;
}