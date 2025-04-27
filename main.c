// main.c
#include <stdio.h>
#include "chiffrement.h"

int main() {
    int choix, shift;

    printf("☀ Bienvenue au programme de cryptage ultime! ☀\n");
    printf("==========================================\n");
    printf("Arme de chiffrement disponible :\n");
    printf(" 🕷 Chiffre de César: un chiffrement classique basé sur le décalage\n");
    printf(" 🕷 Chiffre de Vigenère : une méthode de chiffrement plus sophistiquée\n");
    printf("Votre mission : sécuriser ou révéler les secrets cachés dans vos messages !\n");
    printf("Préparez-vous à démarrer l'aventure du cryptage !\n");
    printf("==========================================\n\n");

    message();
    verifier();
    printf("Votre message secret : %s\n", texte);

    printf("Choisissez votre arme de chiffrement :\n");
    printf("1. Chiffrement de César\n2. Chiffrement de Vigenère\n");
    scanf("%d", &choix);
    getchar();

    if (choix == 1) {
        printf("Entrez le décalage pour le chiffrement César (valeur entière) : ");
        scanf("%d", &shift);
        getchar();

        cesarChiffre(texte, shift);
        printf("Message chiffré : %s\n", texte);

        cesarDechiffre(texte, shift);
        printf("Message déchiffré : %s\n", texte);
    } else if (choix == 2) {
        printf("Entrez la clé ✎ pour le chiffrement Vigenère : ");
        fgets(key, TAILLE_MAX, stdin);
        key[strcspn(key, "\n")] = '\0';

        vigenereChiffre(texte, key);
        printf("Message chiffré : %s\n", texte);

        vigenereDechiffre(texte, key);
        printf("Message déchiffré : %s\n", texte);
    } else {
        printf("Choix invalide 💀 \n");
    }

    return 0;
}

