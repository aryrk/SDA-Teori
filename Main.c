#include <stdio.h>
#include <string.h>
#define JmlRak 20

void MakeNULL(char Rak[JmlRak])
{
    for (size_t i = 0; i < JmlRak; i++)
    {
        Rak[i] = '\0';
    }
}
void IsiRak(char Rak[JmlRak], int jml)
{
    MakeNULL(Rak);
    for (int i = 0; i < jml; i++)
    {
        Rak[i] = 'A' + i;
    }
}

// HASNA

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
void tambahElemen(char Array[JmlRak], int posisi)
{
    // deklarasi
    char inputan;

    // menggeser elemen ke arah kanan
    GeserKanan(Array, posisi);

    // membaca inputan user
    scanf("\n%c", &inputan);
    Array[posisi] = inputan;
}

// FARHAN

// ROHIID

// ROHIID

void print(char Rak[JmlRak])
{
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

    tambahElemen(Rak, 1);
    // GeserKanan(Rak, 1);
    print(Rak);

    return 0;
}