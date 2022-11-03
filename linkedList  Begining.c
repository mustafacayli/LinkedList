#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct rehber{
    char ad[20];
    char soyad[20];
    char tel[20];
    struct rehber *next;

};

typedef struct rehber node;
