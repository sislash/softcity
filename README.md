# 🏙️ *Documentation du système - SoftCity*

---

## 📁 **Arborescence du projet**

softcity/
│
├── bin/
│ └── softcity
├── build/
│ └── src/
│ └── ... (fichiers .o classés par service)
├── include/
│ ├── config.h
│ └── README.md
├── logs/
│ ├── historique.log
│ ├── pompier.log
│ └── README.md
├── src/
│ ├── citadelle/
│ │ ├── data/
│ │ ├── logs/
│ │ ├── scripts/
│ │ ├── include/
│ │ │ └── centre_commandement.h
│ │ ├── src/
│ │ │ └── centre_commandement.c
│ │ └── README.md
│ ├── tribunal/
│ │ ├── logs/
│ │ ├── scripts/
│ │ │ └── constitution.dsl
│ │ ├── include/
│ │ │ ├── config_tribunal.h
│ │ │ ├── constitution.h
│ │ │ └── tribunal.h
│ │ ├── src/
│ │ │ ├── constitution.c
│ │ │ └── tribunal.c
│ │ └── README.md
│ ├── mairie/
│ │ ├── logs/
│ │ │ └── mairie.log
│ │ ├── scripts/
│ │ │ └── scripts_mairie_demarage.dsl
│ │ ├── include/
│ │ │ ├── config_mairie.h
│ │ │ └── mairie.h
│ │ ├── src/
│ │ │ ├── mairie.c
│ │ │ └── test.int
│ │ └── README.md
│ ├── commissariat/
│ │ ├── logs/
│ │ │ └── police.log
│ │ ├── scripts/
│ │ │ ├── pause.dsl
│ │ │ └── police_test.dsl
│ │ ├── include/
│ │ │ ├── commissariat.h
│ │ │ ├── config_commissariat.h
│ │ │ ├── controle_passwd.h
│ │ │ ├── menu_commissariat.h
│ │ │ ├── menu_commissariat_script.h
│ │ │ └── option_executer_script.h
│ │ ├── src/
│ │ │ ├── commissariat.c
│ │ │ ├── controle_passwd.c
│ │ │ ├── menu_commissariat.c
│ │ │ ├── menu_commissariat_script.c
│ │ │ └── option_executer_script.c
│ │ └── README.md
│ ├── caserne/
│ │ ├── logs/
│ │ │ └── pompier.log
│ │ ├── scripts/
│ │ ├── include/
│ │ │ ├── pompier.h
│ │ │ ├── config_caserne.h
│ │ │ ├── log_caserne.h
│ │ │ └── pompier_intervention.h
│ │ ├── src/
│ │ │ ├── pompier.c
│ │ │ ├── log_caserne.c
│ │ │ └── pompier_intervention.c
│ │ └── README.md
│ ├── hopital/
│ │ ├── logs/
│ │ ├── scripts/
│ │ ├── include/
│ │ │ └── hopital.h
│ │ ├── src/
│ │ │ └── hopital.c
│ │ └── README.md
│ ├── banque/
│ │ ├── banque.c
│ │ ├── banque.h
│ │ ├── resource_manager.c
│ │ └── README.md
│ ├── ecole/
│ │ ├── ecole.c
│ │ ├── ecole.h
│ │ ├── telechargement_modules.c
│ │ └── README.md
│ ├── bibliotheque/
│ │ ├── events.c
│ │ ├── journal.c
│ │ └── README.md
│ ├── station/
│ │ ├── bus_interne.c
│ │ ├── transport.c
│ │ ├── transport.h
│ │ └── README.md
│ ├── logements/
│ │ ├── include/
│ │ ├── src/
│ │ └── README.md
│ ├── habitants/
│ │ ├── scripts/
│ │ │ └── script_exemple.dsl
│ │ ├── include/
│ │ ├── src/
│ │ └── README.md
│ ├── usine/
│ │ ├── rapport_gen.c
│ │ ├── usine.c
│ │ └── README.md
│ ├── scripts/
│ │ ├── include/
│ │ │ ├── commande_alert.h
│ │ │ ├── commande_check.h
│ │ │ ├── commande_pause.h
│ │ │ ├── commande_print.h
│ │ │ └── executer_script.h
│ │ ├── src/
│ │ │ ├── commande_alert.c
│ │ │ ├── commande_check.c
│ │ │ ├── commande_pause.c
│ │ │ ├── commande_print.c
│ │ │ └── executer_script.c
│ │ └── README.md
│ ├── fonction_utilitaire/
│ │ ├── include/
│ │ │ └── afficher_contenu_dossier.h
│ │ ├── src/
│ │ │ └── afficher_contenu_dossier.c
│ │ └── README.md
│ └── studio_ui/
│ ├── logs/
│ │ └── historique.log
│ ├── scripts/
│ ├── include/
│ │ ├── afficher_map.h
│ │ ├── clear_terminal.h
│ │ ├── grille.h
│ │ └── ui_terminal.h
│ ├── src/
│ │ ├── afficher_map.c
│ │ ├── clear_terminal.c
│ │ ├── grille.c
│ │ └── ui_terminal.c
│ └── README.md
├── tests/
│ └── tdd/
│ └── README.md
├── feuille_de_progression.md
├── glossary.md
├── index_thematique.txt
├── LICENSE.txt
├── Makefile
└── README.md

yaml
Copier
Modifier

---

## 🎯 **Présentation générale**

- **Objectif du projet** :  
  SoftCity est un **système abstrait** qui représente symboliquement le système d’exploitation réel, à travers une ville ASCII interactive en pur C.

- **Philosophie** :  
  Inspiré de *Tron*, *Unix*, *SimCity ASCII*, mais réinventé de manière minimaliste, textuelle, pédagogique, et **artistique**.

- **Utilité pédagogique** :  
  Permet l’apprentissage rigoureux du langage C, de la structure logicielle, des systèmes modulaires, de l’interaction système, et de la simulation de comportement.

---

## ⚙️ **Exécution du projet**

> **Important** : le binaire **doit être lancé depuis la racine** du projet `SoftCity/`.

```bash
cd /home/sckavens/piscine_C/SoftCity
./bin/softcity
❗ Si tu lances depuis un autre dossier (bin/, src/, etc.), les chemins internes vers les scripts, logs et données seront invalides.

🧠 Pourquoi ce fonctionnement ?
Le système repose sur des chemins relatifs codés en dur :

c
Copier
Modifier
#define BASE_PATH "src/"
#define SCRIPT_PATH "scripts/"
#define COMMISSARIAT_SCRIPT_PATH "commissariat/"
Ces chemins sont interprétés relativement au répertoire courant, donc :

✅ Bon exemple : exécution depuis SoftCity/ ➜ les chemins sont valides.

❌ Mauvais exemple : exécution depuis bin/ ➜ erreurs de type fichier introuvable.

📚 Compléments
feuille_de_progression.md : plan d’apprentissage personnel.

glossary.md : dictionnaire des concepts de SoftCity.

index_thematique.txt : liens logiques entre les modules.

Chaque service (mairie/, tribunal/, etc.) contient son propre README.md.

🛡️ Licence
Ce projet est une œuvre personnelle, libre, non-commerciale. Voir LICENSE.txt.

✨ Bienvenue à SoftCity.
Un monde en ASCII, un code en C, une ville pour comprendre le système.