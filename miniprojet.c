/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : BIN SYAHRUL AZLAN Ian                                        *
*                                                                             *
*  Nom-prénom2 : HILAIRE Kenny                                                *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : mini_projet.c                                             *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define TAILLE_MAX 100

char texte[TAILLE_MAX];

// Function to ask the user to input a message
void message() {
    printf("Entrez du texte : ");
    fgets(texte, TAILLE_MAX, stdin);
    texte[strcspn(texte, "\n")] = '\0'; // Remove newline character
}

// Function to verify if the text is alphanumeric
void verify_alpha() {
    for (int i = 0; texte[i] != '\0'; i++) {
        if (!isalnum(texte[i]) && !isspace(texte[i])) { // Allow spaces
            printf("Erreur : Le texte contient des caractères spéciaux.\n");
            exit(1);
        }
    }
}

int main() {
    message();
    verify_alpha();
    printf("Texte validé : %s\n", texte);
    // Proceed with encryption (to be implemented)
    return 0;
}

