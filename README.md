# *Documentation du système.*

## **arborescence:**

softcity
    |
    |___ bin
    |     |___ softcity
    |___ build
    |     |___ src
    |           |___ Fichier obj "placer dans des dossier au nom des service"
    |___ include
    |     |___ config.h
    |     |___ README.md
    |___ logs
    |     |___ historique.log
    |     |___ pompier.log
    |     |___ README.md
    |___ src
    |     |___ citadelle
    |     |       |___ data
    |     |       |___ logs
    |     |       |___ scripts
    |     |       |___ include
    |     |       |      |___ centre_commandement.h
    |     |       |___ src
    |     |       |      |___ centre_commandement.c
    |     |       |___ README.md
    |     |___ tribunal
    |     |       |___ logs
    |     |       |___ scripts
    |     |       |      |___ constitution.dsl
    |     |       |___ include
    |     |       |      |___ config_tribunal.h
    |     |       |      |___ constitution.h
    |     |       |      |___ tribunal.h
    |     |       |___ src
    |     |       |      |___ constitution.c
    |     |       |      |___ tribunal.c
    |     |       |___ README.md
    |     |___ mairie
    |     |       |___ logs
    |     |       |      |___ mairie.log
    |     |       |___ scripts
    |     |       |      |___ scripts_mairie_demarage.dsl
    |     |       |___ include
    |     |       |      |___ config_mairie.h
    |     |       |      |___ mairie.h
    |     |       |___ src
    |     |       |      |___ mairie.c
    |     |       |      |___ test.int
    |     |       |___ README.md
    |     |___ commissariat
    |     |       |___ logs
    |     |       |      |___ police.log
    |     |       |___ scripts
    |     |       |      |___ pause.dsl
    |     |       |      |___ police_test.dsl
    |     |       |___ include
    |     |       |      |___ commissariat.h
    |     |       |      |___ config_commissariat.h
    |     |       |      |___ controle_passwd.h
    |     |       |      |___ menu_commissariat.h
    |     |       |      |___ menu_commissariat_script.h
    |     |       |      |___ option_executer_script.h
    |     |       |___ src
    |     |       |      |___ commissariat.c
    |     |       |      |___ controle_passwd.c
    |     |       |      |___ menu_commissariat.c
    |     |       |      |___ menu_commissariat_script.c
    |     |       |      |___ option_executer_script.c
    |     |       |___ README.md
    |     |___ caserne
    |     |       |___ logs
    |     |       |      |___ pompier.log
    |     |       |___ scripts
    |     |       |___ include
    |     |       |      |___ pompier.h
    |     |       |      |___ config_caserne.h
    |     |       |      |___ log_caserne.h
    |     |       |      |___ pompier_intervention.h
    |     |       |___ src
    |     |       |      |___ pompier.c
    |     |       |      |___ log_caserne.c
    |     |       |      |___ pompier_intervention.c
    |     |       |___ README.md
    |     |___ hopital
    |     |       |___ logs
    |     |       |___ scripts
    |     |       |___ include
    |     |       |      |___ hopital.h
    |     |       |___ src
    |     |       |      |___ hopital.c
    |     |       |___ README.md
    |     |___ banque
    |     |       |___ banque.c
    |     |       |___ banque.h
    |     |       |___ resource_manager.c
    |     |       |___ README.md
    |     |___ ecole
    |     |       |___ ecole.c
    |     |       |___ ecole.h
    |     |       |___ telechargement_modules.c
    |     |       |___ README.md
    |     |___ bibliotheque
    |     |       |___ events.c
    |     |       |___ journal.c
    |     |       |___ README.md
    |     |___ station
    |     |       |___ bus_interne.c
    |     |       |___ transport.c
    |     |       |___ transport.h
    |     |       |___ README.md
    |     |___ logements
    |     |       |___ include
    |     |       |___ src
    |     |       |___ README.md
    |     |___ habitants
    |     |       |___ scripts
    |     |       |      |___ script_exemple.dsl
    |     |       |___ include
    |     |       |___ src
    |     |       |___ README.md
    |     |___ usine
    |     |       |___ rapport_gen.c
    |     |       |___ usine.c
    |     |       |___ README.md
    |     |___ scripts
    |     |       |___ include
    |     |       |      |___ commande_alert.h
    |     |       |      |___ commande_check.h
    |     |       |      |___ commande_pause.h
    |     |       |      |___ commande_print.h
    |     |       |      |___ executer_script.h
    |     |       |___ src
    |     |       |      |___ commande_alert.c
    |     |       |      |___ commande_check.c
    |     |       |      |___ commande_pause.c
    |     |       |      |___ commande_print.c
    |     |       |      |___ executer_script.c
    |     |       |___ README.md
    |     |___ fonction_utilitaire
    |     |       |___ include
    |     |       |      |___ afficher_contenu_dossier.h
    |     |       |___ src
    |     |       |      |___ afficher_contenu_dossier.c
    |     |       |___ README.md
    |     |___ studio_ui
    |     |       |___ logs
    |     |       |      |___ historique.log
    |     |       |___ scripts
    |     |       |___ include
    |     |       |      |___ afficher_map.h
    |     |       |      |___ clear_terminal.h
    |     |       |      |___ grille.h
    |     |       |      |___ ui_terminal.h
    |     |       |___ src
    |     |       |      |___ afficher_map.c
    |     |       |      |___ clear_terminal.c
    |     |       |      |___ grille.c
    |     |       |      |___ ui_terminal.c
    |     |       |___ README.md
    |___ tests
    |     |___ tdd
    |     |       |___ README.md
    |___ feuille_de_progression.md
    |___ glossary.md
    |___ index_thematique.txt
    |___ LICENSE.txt
    |___ Makefile
    |___ README.md

## **Présentation générale:**

.   Objectif du projet: Sofycity est une système symbolique et créatif qui contrôle
    le système réel de manière abstraite.
.   Philosophie: inspiré de Tron/Unix, mais en pur C et ASCII.
.   Utilité: apprentissage du C,contrôle, visualisation des données

## **Exécution du projet - chemain de travail**

.   Le projet SoftCity utilise des chemins relatifs pour accéder au scripts DSL et
    au fichiers internes.
    
.   Pour que tout fonctionne correctement, le binaire doit toujour être lancé depuis
    la racine du projet `SoftCity/`.
    
    cd /home/sckavens/piscine_C/SoftCity
    ./bin/softcity

## **Pourquoi ?**

.   Le code source utilise des chemins construits comme ceci :
    ```c
    #define BASE_PATH "src/"
    #define SCRIPT_PATH "scripts/"
    #define COMMISSARIAT_SCRIPT_PATH "commissariat/"
    ```
    .   Ces chemins sont relatifs aurépertoire courant.
    .   Si tu lances le binaire depuis un sous-dossier (ex : bin/), la ou le
        binaire se trouve, les chemins comme `src/commissariat/scripts/pause.dsl`
        ne seront plus valides et on obtiendras une erreur.