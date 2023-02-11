#include <stdio.h>
#include <stdbool.h>

void IsiRak(char Rak[], int jml)
{
    for (size_t i = 0; i < jml; i++)
    {
        Rak[i] = 'A' + i;
    }
}

void MakeNULL(char Rak[])
{
    for (size_t i = 0; i < sizeof(Rak); i++)
    {
        Rak[i] = '\0';
    }
}

// HASNA
bool CekSpace(char Rak[]){

    for (int i = 0; i < sizeof(Rak); i++)
    {
        if (Rak[i] == '\0')
        {
            return true;
        }
    }
}

// HASNA

// ARYO

// ARYO

// FARHAN
void tambahElemen(char *Array[], int posisi){
	//deklarasi
	char inputan;
	
	//menggeser elemen ke arah kanan
	modulGeserKanan(&(*Array), posisi);
	
	//membaca inputan user
	scanf("%c",&inputan);
	*Array[posisi]=inputan;
}

// FARHAN

// ROHIID

// ROHIID

int main(int argc, char *argv[])
{

    char Rak[20];

    return 0;
}