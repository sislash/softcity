# Commissariat - SoftCity

Le **Commissariat** est le module de sécurité de Softcity.
Il gère les contrôles critiques du système, exécuté des scripts de vérification,
et permet une interaction via un menu textuel organisé.
Il symbolise la **Police** de la ville logicielle.

---

## Structure du dossier

|---commissariat/
|       |---include/    -> #Headers du module.
|       |       |---commissariat.h
|       |       |---config_commissariat.h
|       |       |---controle_passwd.h
|       |       |---menu_commissariat.h
|       |       |---menu_commissariat_script.h
|       |       |---option_executer_script.h
|       |---logs/       -> #Logs du service
|       |       |---police.log
|       |---scripts/    -> #Scripts DSL spécifiques au commissariat
|       |       |---pause.dsl
|       |       |---police_test.dsl
|       |---src/        -> #Code source du module
|       |       |---commissariat.c
|       |       |---controle_passwd.c
|       |       |---menu_commissariat.c
|       |       |---menu_commissariat_script.c
|       |       |---option_executer_script.c
|       |---README.md

---

## Fonctionnalités principales

-   **Menu principal (`menu_commissariat.c`)** :
    .   Accés aux scripts.
    .   Test de sécurité.
    .   Retour vers le menu principal.
    
-   **Vérification de fichier (`controle_passwd.c`)** :
    .   Contrôle l'existence du fichier `/etc/passwd`.
    .   Affiche un message selon sa présence ou non.

-   **Menu de gestion des scripts (`menu_commissariat_script.c`)** :
    .   Afficher les scripts disponibles.
    .   Lancer un script spécifique (`pause.dsl`, `police_test.dsl`, `...`).
    
-   **Exécution d'un script (`option_executer_script.c`)** :
    .   Fonction `police_executer_script()` qui exécute un script prédéfini.
    .   Utilise la macro `COMMISSARIAT_SCRIPT_FULL_PATH` definie dans `config_commissariat.h`.

---

## Intégration dans SoftCity

-   Le module est lancé par le **Centre de commandement** via un `fork()`.
-   Il agit comme un processus autonome.
-   Les scripts sont écrits dans un DSL personnalisé.
-   Les logs sont écrit dans `logs/police.log`.
-   Chaque interaction passe par un menu ASCII clair et lisible.

---

## Sécurité & permissions

### Le commissariat ne doit jamais :

-   Modifier de fichiers critiques.
-   Contourner les autorisations définies dans la constitution.
-   Ecrire hors de son propre périmètre (`logs/`, `scripts/`).

---

## Symbolique dans l'univers de SoftCity

-   Le commissariat représente **le respect des règles** et la **surveillance du système**.
-   Il sert à **auditer les fichiers sensible**, à **exécuter des tests** et à **appliquer les politiques de sécurité**.
-   Il pourra être étendu pour inclure des agents patrouilleurs, des caméras virtuelle (scripts), ou des prisons logicielles.

---

## Développement futur

-   Implémentation d'un système de permissions par rôle.
-   Détection d'actions suspectes dans le système.
-   Communication avec d'autres modules (mairie, tribunal, ...).
-   Historique complet des scripts exécuté (via le `journal/`).

---

## Auteur

Projet SoftCity
(c) 2025 Xavier Megnoux
Licence: voir licence personelle a la racine de SoftCity