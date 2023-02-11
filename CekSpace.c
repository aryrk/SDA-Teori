#include <stdio.h>
#include <stdbool.h>

bool CekSpace(char Arr[6]){

    for (int i = 0; i < 6; i++)
    {
        if (Arr[i] == '\0')
        {
            return true;
        }
    }
}