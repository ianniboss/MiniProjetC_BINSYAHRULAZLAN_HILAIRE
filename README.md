# Sujet3_BINSYAHRULAZLANIan_HILAIREKenny
# Projet Chiffrement de Messages
--- Ce fichier README fournit une presentation claire de notre projet, des informations sur l'auteur(notre nom), une documentation detaillee de chaque fonction, des cas d'erreur, et des instructions d'utilisation. ---
--- Voici le lien vers notre depot du GIT : https://github.com/ianniboss/MiniProjetC_BINSYAHRULAZLAN_HILAIRE.git ---

## L'objectif de l'application
L'objectif de cette application est de permettre le chiffrement des messages en utilisant deux methodes de chiffrement :
le chiffrement de Cesar et le chiffrement de Vigenere. L'application permet a utilisateur d'entrer un texte, de verifier 
s'il contient des caracteres speciaux ou non alphanumeriques, puis de chiffrer selon la methode choisie.

# Auteur
- **Nom 1** : BIN SYAHRUL AZLAN Ian
- **Nom 2** : HILAIRE Kenny

## Documentation de fonctions

### void message()
- **Description** : Demande à l'utilisateur d'entrer du texte et le stocke dans le tableau global 'texte'.
- **Parametres d'entree** : Aucun
- **Sorties** : Aucun retour, mais modifie la variable globale 'texte'
- **Cas d'erreur** : Aucun

### void verifier()
- **Description** : Vérifie si le texte contient des caracteres speciaux et si le texte est alphanumerique
- **Parametres d'entree** : Aucun
- **Sorties** : Aucun retour, mais affiche de message sur la presence de caracteres spéciaux et l'etat alphanumerique du texte
- **Cas d'erreur** : Aucun

### void Cesar(char *message, int cleCesar)
- **Description** : Chiffre le message en utilisant le chiffrement de César
- **Parametres d'entree** : 'char *message' - Message à chiffrer
                          : 'int cleCesar' - Clé de chiffrement (decalage)
- **Sorties** : Aucun retour, mais modifie et affiche le message chiffré
- **Cas d'erreur** : Aucun

### void CesarDechiffre(char *text, int *cleCesar)
- **Description** : Dechiffre le message qui avait précedemment été chiffré avec le chiffrement par Cesar
- **Parametres d'entree** : 'char *text' - texte qui à été chiffré
                          : 'int cleCesar' - la clé de dechiffrement (decalage)
- **Sorties** : Aucun retour, mais modifie et affiche le message chiffré
- **Cas d'erreur** : Aucun

### void Vigenere(char *message, char cleVigenere)
- **Description** : Chiffre le message en utilisant le chiffrement de vigenere
- **Parametres d'entree** : 'char *message' - Message à chiffrer
                          : 'char cleVigenere' - Clé de chiffrement (decalage)
- **Sorties** : Aucun retour, mais modifie et affiche le message chiffré
- **Cas d'erreur** : Aucun

### void VigenereDechiffre(char *text, char *key)
- **Description** : Dechiffre le message qui avait précedemment été chiffré avec le chiffrement Vigenere
- **Parametres d'entree** : 'char *text' - texte chiffré
                          : 'char *key' - la clé de dechiffrement (decalage)
- **Sorties** : Aucun retour, mais modifie et affiche le message chiffré
- **Cas d'erreur** : Aucun

### void CesarDechiffre(char *text, int *cleCesar)
- **Description** : Dechiffre le message qui avait précedemment été chiffré avec le chiffrement par Cesar
- **Parametres d'entree** : 'char *text' - texte qui à été chiffré
                          : 'int cleCesar' - la clé de dechiffrement (decalage)
- **Sorties** : Aucun retour, mais modifie et affiche le message chiffré
- **Cas d'erreur** : Aucun


### Cas d'erreur 
- **Entree l'utilisateur** : Le programme peut afficher un message d'erreur si l'utilisateur fait un choix invalide pour la methode de chiffrement
- **Caracteres speciaux** : Le programme informe l'utilisateur si des caracteres speciaux sont presents dans le texte
- **Verification alphanumerique** : Le programme informe l'utilisateur si le texte n'est pas alphanumerique
