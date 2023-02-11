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
    if (strlen(Rak) == JmlRak)
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
    
    // menggeser elemen ke arah kanan
    GeserKanan(Array, inputanPosisi);
    
    // membaca inputan nilai
	printf("\nMasukkan nilai : ");
    scanf("\n%c", &inputanNilai);
    Array[inputanPosisi-1] = inputanNilai;
}

// FARHAN
void hapusElemen(char Array[JmlRak]){
	// dekalrasi
	int inputPosisi;
	
	// membaca input posisi
	printf("\nMasukkan posisi : ");
	scanf("%d", &inputPosisi);
	
	// menggeser elemen ke kiri
	GeserKiri(Array, inputPosisi - 1);
	
	// menghapus elemen terakhir
	Array[strlen(Array)]='\0';
}

// ROHIID
void print(char Rak[JmlRak])
{
    //	system("cls");
    printf("\n");
    for (int i = 0; i < JmlRak; i++)
    {
        printf(" %c ", Rak[i]);
        if ( (i+1) % 10 == 0) {
            printf("\n");
            for (int j = i - 9; j <= i; j++)
            {
                printf("[%d]", j + 1);
            }
            printf("\n");
        }
    }
}
// ROHIID



int main(int argc, char *argv[])
{

    char Rak[JmlRak];
    int Pilihan;
    IsiRak(Rak, 8);

Start:
	system("cls");
    printf("\nKondisi Rak:\n");
    print(Rak);

StartInteraksi:
    printf("\n\nPilih aksi yang ingin dilakukan:\n1. Insert\n2. Delete\n3. Keluar\nMasukkan input :");
    scanf("%d", &Pilihan);
    switch (Pilihan)
    {
    case 1:
        if (CekSpace == false)
        {
            goto StartInteraksi;
        }
        tambahElemen(Rak);
        break;
    case 2:
        hapusElemen(Rak);
        break;
    case 3:
        exit(0);
        break;
    }
    goto Start;

    return 0;
}