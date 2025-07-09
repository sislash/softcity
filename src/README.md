# `src/` - Architecture logique de SoftCity.

le dossier `src/` contient tout les **services actifs**, **bâtiments**, 
**composants essentiels** de la ville logicielle SoftCity.
Chaque sous-dossier représente une **entité fonctionnelle indépendante**, inspirée d'une
ville réelle, mais transposée dans une structure informatique modulaire et symbolique.

---

## Structure générale

src/
|___ citadelle/     -> Centre de commandement.
(point d'entrée principal du système).
|___ mairie/                -> Administration, loi générales et initialisation.
|___ tribunal/              -> Justice, constitution, validation des actions.
|___ commissariat/          -> Sécurité, scripts de surveillance, gestion des alertes.
|___ caserne/               -> Pompiers, interventions système, prévention.
|___ hopital/               -> Réparation des services, soins symboliques.
|___ banque/                -> Gestion des ressources et quotas.
|___ ecole/                 -> Modules d'apprentissage, progression, téléchargement.
|___ bibliotheque/          -> Êvénements système, journalisation, base de données logique.
|___ station/               -> Transports internes, routage, flux symboliques.
|___ logements/             -> Dossier des entités résidentes (agents).
|___ habitants/             -> Scripts et identités des agents autonomes.
|___ usine/                 -> Génération de rapports, traitement, calculs.
|___ scripts/               -> Commandes DSL.
|___ fonction_utilitaire/   -> Fonction systèmes utiles (affichage, dossier).
|___ studio_ui/             -> Affichage, terminal visuel, ASCII, cartes et interface.
|--- tests/                 -> Tests internes, TDD, progression pédagogique.

---

## Convention de structure par Module

Chaque dossier contient généralement :

-   `include/`  -> Fichiers `.h` de définition.
-   `src/`      -> Fichiers `.c` d'implémentation.
-   `scripts/`  -> Scripts symbolique DSL.
-   `logs/`     -> Historique des actions du module.
-   `README.md` -> Documentation locale du service.

---

## Point d'entrée unique

-   Le **fichier `centre_commandement.c`** situé dans `src/citadelle/` contient la fonction 
    `main()` du projet.
-   Il **démarre tout les services** via `fork()` et représente le **coeur symbolique**
    de SoftCity.

---

## Philosophie du système

SoftCity n'est pas un simple projet : 
> C'est une **ville numérique autonome**, un **système d'exploitation imagé**, et un 
    **laboratoire personnel d'exploitation de langage C**, avec gestion complète du
    comportement logiciel, de la sécurité, des données, de la logique, de l'interaction
    et dela visualisation ASCII.

---

## Sécurité et pérmissions

-   Chaque module peut être protégé par une **constitution logicielle** (`.dsl`) stockée
    dans le `tribunal/`.
-   L'exécution des scripts est régulée par des **régles de permission** et des identités
    (`disques`) symboliques.
-   Seul le **root_user** peut modifier la `citadelle/`.

---

## auteur

Projet SoftCity
(c) 2025 Xavier Megnoux
Licence: voir licence personelle a la racine de SoftCity