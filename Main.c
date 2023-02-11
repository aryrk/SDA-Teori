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
bool CekSpace(char Rak[JmlRak]){

    for (int i = 0; i < strlen(Rak); i++)
    {
        if (Rak[i] == '\0')
        {
            return true;
        }
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
    IsiRak(Rak, 8);
    print(Rak);

    tambahElemen(Rak);
    // GeserKanan(Rak, 1);
    print(Rak);

    return 0;
}