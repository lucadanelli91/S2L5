#include <stdio.h>
#include <string.h> //necessario includere la libreria per utilizzare la funzione strlen(), che restituisce la lunghezza di una stringa

void print_menu();
int gioca_partita();

int main(){
    char scelta = {'\0'};
    do {
    print_menu();

    scanf("\n%c", &scelta);
    }
    
    while ((scelta!='A')&&(scelta!='B'));
    
    if(scelta == 'B')
        {
            printf("Grazie per aver giocato, alla prossima\n");
            return 0;
        }

    while(scelta == 'A')
        {
            gioca_partita();
            print_menu();
            scanf ("\n%c", &scelta);
        }

return 0;
}



void print_menu(){

    printf("Menu iniziale:\n");
    printf("A >> Nuova partita\nB >> Esci dal gioco\n");
    printf("Fai la tua scelta:");

}


int gioca_partita(){

    int punteggio=0;
    char nome[20]={'\0'};
    char risposta1, risposta2;
    do {
    printf("Inserisci il tuo nome (MAX 20 caratteri):\n");
    scanf("%s", nome);
    }
    while (strlen(nome) > 20); //se la lunghezza del nome inserito è maggiore di 20 caratteri il ciclo si ripete
    do {
    printf("Domanda numero 1:\n");
    printf("Qual e' l'ingrediente principale del pesto alla Genovese?:\n");
    printf("A >> Basilico\nB >> Spinaci\nC >> Rucola\n");
    printf("Inserire la risposta:");
    scanf("\n%c", &risposta1);
    }
    while ((risposta1!='A') && (risposta1!='B') && (risposta1!='C')); //se la risposta fornita è diversa dalle 3 opzioni proposte il ciclo si ripete



    if(risposta1=='A'){
        punteggio++;
    }

    do {
    printf("Domanda numero 2:\n");
    printf("Quale tra i seguenti animali e' un mammifero?:\n");
    printf("A >> Topo\nB >> Serpente\nC >> Pettirosso\n");
    printf("Inserire la risposta:");

    scanf("\n%c", &risposta2);
    }
    while ((risposta2!='A') && (risposta2!='B') && (risposta2!='C')); //se la risposta fornita è diversa dalle 3 opzioni proposte il ciclo si ripete

    if(risposta2=='A'){
        punteggio++;
    }

    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);

    return 0;
}
