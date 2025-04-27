// chiffrement.h
#ifndef CHIFFREMENT_H
#define CHIFFREMENT_H

#define TAILLE_MAX 100

extern char texte[TAILLE_MAX];
extern char key[TAILLE_MAX];

void message();
void verifier();
void cesarChiffre(char *text, int shift);
void cesarDechiffre(char *text, int shift);
void vigenereChiffre(char *text, char *key);
void vigenereDechiffre(char *text, char *key);

#endif
