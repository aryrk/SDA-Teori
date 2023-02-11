#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#define JmlRak 20

void MakeNULL(char Rak[JmlRak])
{
    for (size_t i = 0; i < JmlRak; i++)
    {
        Rak[i] = '\0';
    }
}

void IsiRak(char Rak[], int jml)
{
    MakeNULL(Rak);
    for (int i = 0; i < jml; i++)
    {
        Rak[i] = 'A' + i;
    }
}

// HASNA
bool CekSpace(char Rak[JmlRak])
{
    if (strlen(Rak) - 1 == JmlRak)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// HASNA

// ARYO
void GeserKanan(char Rak[JmlRak], int Start)
{
    for (size_t i = strlen(Rak); i >= Start; i--)
    {
        Rak[i] = Rak[i - 1];
    }
}
void GeserKiri(char Rak[JmlRak], int Start)
{
    for (size_t i = Start; i < strlen(Rak); i++)
    {
        Rak[i] = Rak[i + 1];
    }
}
// ARYO

// FARHAN
void tambahElemen(char Array[JmlRak])
{
    // deklarasi
    int inputanPosisi;
    char inputanNilai;

    // membaca inputan posisi
    printf("\nMasukkan posisi : ");
    scanf("\n%d", &inputanPosisi);
    if (inputanPosisi > strlen(Array))
    {
        inputanPosisi = strlen(Array) + 1;
    }

    // menggeser elemen ke arah kanan
    GeserKanan(Array, inputanPosisi);

    // membaca inputan nilai
    printf("\nMasukkan nilai : ");
    scanf("\n%c", &inputanNilai);
    Array[inputanPosisi - 1] = inputanNilai;
}

// FARHAN

// ROHIID

// ROHIID

void print(char Rak[JmlRak])
{
    //	system("cls");
    for (size_t i = 0; i < JmlRak; i++)
    {
        printf("%c, ", Rak[i]);
    }
}

int main(int argc, char *argv[])
{

    char Rak[JmlRak];
    int Pilihan;
    IsiRak(Rak, 8);

Start:
    printf("\nKondisi Rak:\n");
    print(Rak);

StartInteraksi:
    printf("\n\nPilih aksi yang ingin dilakukan:\n1. Insert\n2. Delete\n3. Keluar\n:");
    scanf("%d", &Pilihan);
    switch (Pilihan)
    {
    case 1:
        if (CekSpace(Rak) == false)
        {
            printf("Storange penuh!");
            getch();
            goto StartInteraksi;
        }
        tambahElemen(Rak);
        break;
    case 2:
        // tambahElemen(Rak, 2);
        break;
    case 3:
        exit(0);
        break;
    }
    goto Start;

    return 0;
}