# Citadelle -Centre de Commandement

La Citadelle est le **noyau central** de SoftCity.
Elle contient le **centre de commandement**, véritable point d'entrée du système.
C'est ici que tout commence.

---

## Fichiers

-   `centre_commandement.c`
    -> Fichier principal.
        Contient la fonction `main()` qui initialise la ville et lance tout les services (mairie, hopital, tribunal...).
        
-   `centre_commandement.h`
    -> Fichier d'en-tête déclarant `init_softcity()`.

---

## Fonctionnement

### 1. Initialisation

```c
void init_softcity(void);
```
Cette fonction:
.   Affiche un message de bienvenue
.   Lance chaque service via `fork()`
.   Prépare le système à fonctionner en parallèle

### 2. Lancement terminal

```c
ui_terminal_lancer();
```
Prévue dans une boucle `while(1)` commentée.
Sert à afficher en continue l'état de la ville.

## Dépendances

.   `clear_terminal.h`                                -> Vide l'écran au démarrage.
.   `ui_terminal.h`                                   -> Interface terminale (affichage
                                                         ASCII).
.   `mairie.h`, `tribunal.h`, `commissariat.h`, `...` -> Lancement des services.

## Rôle stratégique

Le centre de commandement est réservé au root_user.
Il orchestre tout le système, surveille les services, gère les entrée/sorties, et agit
comme coeur symbolique de SoftCity.

## Sécurité

Seul le disque root peut modifier ce module.
Tout tentative de modification sans autorisation doit être bloquée par la constitution.
CE NAIS PAS ENCORE FAIS URGENT.

## Auteur

Projet SoftCity (c) 2025 Xavier Megnoux
Licence: voir licence personelle a la racine de SoftCity