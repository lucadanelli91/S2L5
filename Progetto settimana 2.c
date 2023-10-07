#include <stdio.h>
#include <string.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu ();
	do {
	    scanf ("%s", &scelta);
	    if ((scelta!='A')&&(scelta!='B')&&(scelta!='C')) {
	        printf("scegli tra A, B o C\n");
	    }
	}
	while ((scelta!='A')&&(scelta!='B')&&(scelta!='C'));
	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
    int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	scanf ("%d", &b);

	int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        float  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a);
	    printf ("Inserisci il denumeratore:");
	    do {
        scanf ("%f", &b);
            if (b==0) {
            printf("il denominatore non può essere zero!\ninseriscilo di nuovo:");
            }
	    }
	    while (b==0);
        float divisione = a / b;

        printf ("La divisione tra %.2f e %.2f e': %.2f", a,b,divisione);
}





void ins_string () 
{
	char stringa[10]={'\0'};
	do {
        printf ("Inserisci la stringa (MAX 10 caratteri):");
        scanf ("%s", stringa);
        if (strlen(stringa) > 10) {
        	printf("inserisci massimo 10 caratteri!\n");
		}
	}
	while (strlen(stringa) > 10);
	printf("la stringa che hai inserito: %s", stringa);
}
