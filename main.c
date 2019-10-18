#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

typedef enum {LUN, MAR, MER, GIO, VEN, SAB, DOM} GiorniSettimana;

typedef struct {
    GiorniSettimana Giorno;
    float ore;
    float pagaoraria;
    int codicedipendente;
    _Bool straordinario;
} Pagamento;

int main() {
    Pagamento stipendio;

    srand(time(NULL));

    stipendio.pagaoraria = 33.00;
    stipendio.Giorno = MER;
    stipendio.codicedipendente = rand()%100;
    stipendio.ore = rand()%8;
    stipendio.straordinario = true;


    float Totale = stipendio.pagaoraria * stipendio.ore ;



    printf("il giorno %d della settimana, il dipendendte con codice %d e stato pagato %.2f euro avendo lavorato %.2f ore "
           " e straordinario %d " ,stipendio.Giorno , stipendio.codicedipendente , Totale , stipendio.ore , stipendio.straordinario );

    return 0;
}