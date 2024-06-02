#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char nome[MAX+1];
char nomePrimo[MAX+1];
char nomeLungo[MAX+1];
char stop[2]="*";
int i;
int lunghezza, lunghezzaLungo;

int main(void){
    do
    {
        printf("Inserisci un nome");
        scanf("%s", nome);

        if(isalpha(nome[0])!=0){
            if(strcmp(nome, nomePrimo)<0){
            strcpy(nomePrimo, nome);
            }
        }        

        lunghezza=((int)strlen(nome));
        lunghezzaLungo=((int)strlen(nomeLungo));

        if(lunghezza>lunghezzaLungo){
            strcpy(nomeLungo, nome);
        }
        i++;
    } while (strcmp(nome, stop)!=0);

    i--;
    printf("Il primo nome in ordine alfabetico è %s\n", nomePrimo);
    printf("Il nome più lungo è %s\n", nomeLungo);
    printf("La sua lunghezza è %d\n", lunghezzaLungo);
    printf("In totale hai inserito %d nomi\n", i);
    return 0;
}

