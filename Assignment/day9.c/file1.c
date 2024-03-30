#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[100] = "/home/rps/batch01/classwork/day07/akhila.txt";
    FILE *fp = NULL;
    fp = fopen(fileName,"r");
    if(fp == NULL)
    {
        perror("fopen()");
        exit(-1);
    }
    printf("\nOpened the file succesfully\n");

    return 0;
}
