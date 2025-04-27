// chiffrement.c
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "chiffrement.h"

char texte[TAILLE_MAX];
char key[TAILLE_MAX];

void message() {
    printf("Entrez votre texte : ");
    fgets(texte, TAILLE_MAX, stdin);
    texte[strcspn(texte, "\n")] = '\0';
}

void verifier() {
    for (int i = 0; texte[i] != '\0'; i++) {
        if (!isalnum(texte[i]) && !isspace(texte[i])) {
            printf("Erreur : Le texte contient des caractères spéciaux.\n");
            exit(1);
        }
    }
}

void cesarChiffre(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base;
            if (isupper(text[i])) {
                base = 'A';
            } else {
                base = 'a';
            }
            text[i] = (text[i] - base + shift) % 26 + base;
        }
    }
}

void cesarDechiffre(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base;
            if (isupper(text[i])) {
                base = 'A';
            } else {
                base = 'a';
            }
            text[i] = (text[i] - base - shift + 26) % 26 + base;
        }
    }
}

void vigenereChiffre(char *text, char *key) {
    int keyLength = strlen(key);
    for (int i = 0, j = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base;
            if (isupper(text[i])) {
                base = 'A';
            } else {
                base = 'a';
            }
            int keyShift;
            if (isupper(key[j])) {
                keyShift = key[j] - 'A';
            } else {
                keyShift = key[j] - 'a';
            }

            text[i] = (text[i] - base + keyShift) % 26 + base;
            j = (j + 1) % keyLength;
        }
    }
}

void vigenereDechiffre(char *text, char *key) {
    int keyLength = strlen(key);
    for (int i = 0, j = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char base;
            if (isupper(text[i])) {
                base = 'A';
            } else {
                base = 'a';
            }
            int keyShift;
            if (isupper(key[j])) {
                keyShift = key[j] - 'A';
            } else {
                keyShift = key[j] - 'a';
            }
            text[i] = (text[i] - base - keyShift + 26) % 26 + base;
            j = (j + 1) % keyLength;
        }
    }
}

