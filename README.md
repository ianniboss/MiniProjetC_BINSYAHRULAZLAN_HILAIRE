# 🔐 **CryptoMaster** - L'Arsenal Ultime du Chiffrement ! 🔐

<div align="center">

![Crypto Badge](https://img.shields.io/badge/Crypto-Master-gold?style=for-the-badge&logo=shield&logoColor=white)
![C Language](https://img.shields.io/badge/C-Language-blue?style=for-the-badge&logo=c&logoColor=white)
![Security](https://img.shields.io/badge/Security-First-red?style=for-the-badge&logo=lock&logoColor=white)

*🚀 Transformez vos messages secrets en codes indéchiffrables ! 🚀*

</div>

---

## 🎯 **Mission Secrète**

Bienvenue, agent ! Votre mission, si vous l'acceptez, est de maîtriser l'art ancestral du chiffrement. Cette application ultra-secrète vous permet de :

- 🛡️ **Protéger** vos messages les plus confidentiels
- 🔍 **Déchiffrer** les codes ennemis
- 🎭 **Choisir** entre deux techniques légendaires de cryptographie

### 🏛️ **Les Armes de Chiffrement Disponibles**

| 🏺 **César** | 🗝️ **Vigenère** |
|:---:|:---:|
| *Le classique intemporel* | *La sophistication incarnée* |
| Décalage simple mais efficace | Clé complexe pour une sécurité renforcée |

---

## 👥 **Les Maîtres Cryptographes**

<table align="center">
<tr>
<td align="center">
<img src="https://img.shields.io/badge/Agent-Ian-success?style=for-the-badge" alt="Ian Badge"/>
<br><b>🕵️ BIN SYAHRUL AZLAN Ian</b>
<br><i>Spécialiste César</i>
</td>
<td align="center">
<img src="https://img.shields.io/badge/Agent-Kenny-success?style=for-the-badge" alt="Kenny Badge"/>
<br><b>🕵️ HILAIRE Kenny</b>
<br><i>Expert Vigenère</i>
</td>
</tr>
</table>

---

## 🚀 **Démarrage Rapide**

```bash
# 📥 Clonez le dépôt secret
git clone https://github.com/ianniboss/MiniProjetC_BINSYAHRULAZLAN_HILAIRE.git

# 🔨 Compilez votre arsenal
make

# ⚡ Lancez la mission
./main
```

---

## 📁 **Architecture du Projet - Dossiers Secrets**

<div align="center">

*🗂️ Chaque fichier a sa mission spécifique dans l'opération CryptoMaster ! 🗂️*

</div>

### 🎯 **`main.c`** - *Centre de Commandement*
> **🎮 Rôle** : Interface utilisateur et orchestration des opérations
> - 🚀 **Mission principale** : Point d'entrée du programme
> - 🎨 **Interface** : Affichage du menu thématique d'espionnage
> - 🔄 **Workflow** : Gestion du flux d'exécution complet
> - 🎯 **Fonctionnalités** :
>   - Accueil de l'agent avec interface immersive
>   - Sélection de la méthode de chiffrement
>   - Coordination entre saisie, vérification et chiffrement
>   - Gestion des choix utilisateur (César vs Vigenère)

### 🛡️ **`chiffrement.h`** - *Protocoles Secrets*
> **📋 Rôle** : Déclarations et définitions des opérations cryptographiques
> - 🔧 **Constantes** : `TAILLE_MAX` (100) - Limite de sécurité des messages
> - 🌐 **Variables globales** : `texte[]` et `key[]` - Stockage sécurisé
> - 📝 **Prototypes** : Signatures de toutes les fonctions de chiffrement
> - 🔗 **Interface** : Pont entre les modules du système

### ⚔️ **`chiffrement.c`** - *Arsenal Cryptographique*
> **🔐 Rôle** : Implémentation complète des algorithmes de chiffrement
> - 🎤 **`message()`** : Capture sécurisée des messages secrets
> - 🔍 **`verifier()`** : Scanner de sécurité anti-caractères spéciaux
> - 🏛️ **`cesarChiffre()`** : Algorithme César - chiffrement par décalage
> - 🔓 **`cesarDechiffre()`** : Décodeur César - récupération du message
> - 🌟 **`vigenereChiffre()`** : Système Vigenère - chiffrement par clé
> - 🔮 **`vigenereDechiffre()`** : Décodeur Vigenère - révélation avancée

### 🔨 **`Makefile`** - *Centre de Production*
> **⚙️ Rôle** : Automatisation de la compilation et gestion du projet
> - 🎯 **Cible principale** : `mini_projet` - Exécutable final
> - 📦 **Sources** : Compilation de `main.c` et `chiffrement.c`
> - 🛠️ **Options** : Flags de sécurité (`-Wall -Wextra -std=c11`)
> - 🧹 **Maintenance** :
>   - `make clean` : Nettoyage des fichiers temporaires
>   - `make fclean` : Nettoyage complet
>   - `make re` : Reconstruction totale du projet

### 📖 **`README.md`** - *Manuel de l'Agent*
> **📚 Rôle** : Documentation complète et guide d'utilisation
> - 🎨 **Présentation** : Interface attractive avec thème d'espionnage
> - 📋 **Documentation** : Guide complet des fonctionnalités
> - 🚀 **Instructions** : Procédures de compilation et d'utilisation
> - 👥 **Équipe** : Présentation des développeurs

---

## 📚 **Arsenal des Fonctions**

### 🎤 **`void message()`**
> **Mission** : Capture les messages secrets de l'utilisateur
> - 📥 **Entrée** : Saisie utilisateur interactive
> - 💾 **Stockage** : Variable globale `texte`
> - ⚠️ **Risques** : Aucun danger détecté

### 🔍 **`void verifier()`**
> **Mission** : Scanner de sécurité pour caractères suspects
> - 🕵️ **Analyse** : Détection de caractères spéciaux
> - ✅ **Validation** : Vérification alphanumérique
> - 📊 **Rapport** : Affichage des résultats d'analyse

### ⚔️ **`void cesarChiffre(char *message, int shift)`**
> **Mission** : Déploiement du chiffrement César
> - 📝 **Cible** : `char *message` - Votre message secret
> - 🔢 **Clé** : `int shift` - Décalage de chiffrement
> - 🎯 **Résultat** : Message transformé et sécurisé

### 🔓 **`void cesarDechiffre(char *texte, int shift)`**
> **Mission** : Décryptage des codes César
> - 🔐 **Source** : `char *texte` - Message chiffré
> - 🗝️ **Clé** : `int shift` - Clé de déchiffrement
> - 💡 **Révélation** : Message original restauré

### 🌟 **`void vigenereChiffre(char *message, char *key)`**
> **Mission** : Activation du système Vigenère
> - 📜 **Message** : `char *message` - Texte à protéger
> - 🔑 **Clé secrète** : `char *key` - Mot de passe complexe
> - 🛡️ **Protection** : Chiffrement de niveau supérieur

### 🔮 **`void vigenereDechiffre(char *texte, char *key)`**
> **Mission** : Décodage Vigenère avancé
> - 🎭 **Code** : `char *texte` - Message crypté
> - 🗝️ **Sésame** : `char *key` - Clé de déchiffrement
> - ✨ **Magie** : Révélation du message caché

---

## ⚠️ **Protocoles de Sécurité**

<div align="center">

| 🚨 **Type d'Alerte** | 📋 **Description** | 🛠️ **Action** |
|:---:|:---:|:---:|
| 🔤 **Caractères Spéciaux** | Détection d'éléments non-standard | Notification utilisateur |
| 🔢 **Validation Alpha** | Vérification de conformité | Rapport de statut |
| ❌ **Choix Invalide** | Sélection de méthode incorrecte | Message d'erreur guidé |

</div>

---

## 🎮 **Mode d'Emploi - Guide de l'Agent**

1. **🎯 Lancement** : Exécutez le programme
2. **✍️ Saisie** : Entrez votre message secret
3. **🔍 Analyse** : Le système vérifie la sécurité
4. **⚔️ Choix** : Sélectionnez votre arme (César ou Vigenère)
5. **🔐 Chiffrement** : Votre message devient indéchiffrable !
6. **🔓 Déchiffrement** : Récupérez le message original si nécessaire

---

## 🌟 **Fonctionnalités Spéciales**

- ✨ **Interface Intuitive** : Navigation simple et claire
- 🛡️ **Double Protection** : Deux méthodes de chiffrement
- 🔍 **Validation Intelligente** : Vérification automatique des entrées
- 🎨 **Expérience Immersive** : Interface thématique d'espionnage

---

<div align="center">

### 🔗 **Liens Secrets**

[![GitHub](https://img.shields.io/badge/GitHub-Repository-black?style=for-the-badge&logo=github)](https://github.com/ianniboss/MiniProjetC_BINSYAHRULAZLAN_HILAIRE.git)

---

*🕵️ "Dans le monde de la cryptographie, seuls les plus astucieux survivent !" 🕵️*

**Made with ❤️ by the CryptoMaster Team**

</div>
