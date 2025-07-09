# Feuille de progression de Softcity

## [OK] Etat ctuel

## Structure des dossiers
-[x] Création de la structure de la ville ( DOSSIER /src/ 
    'citadelle/',
    'mairie/',
    'tribunal/',
    'banque/',
    'commissariat/',
    'caserne/',
    'hopital/',
    'bibliotheque/',
    'station/',
    'ecole/',
    'logements/',
    'usine/',
    'studio_ui/',
    'scripts/',
    'fonction_utilitaire/',
    'habitants',
    'etc',)
    
## Interpréteur de scripts
-[X] Mise en place d'un point d'entrée unique dans mairie/ via salon_commandement.c
-[X] Système d'interpétation des scripts.
-[X] Déclaration propre de ligne[128] dans 'executer_script.h' via extern
-[X] Lecture securisée des scripts avec gestion d'erreur ( open, read, close )

### Commandes intégrées
-[X] 'print'
-[X] 'pause'
-[X] 'alert'
-[X] 'check'
-[X] Séparation des commande dans des fichier 'commande_*.c' indépendants
-[X] Inclusion des chemins ( 'config.h', 'config_commissariat.h', 'config_mairie.h' ect.)

### Affichage intégrées 
-[x] affichage enrichi des scripts lus avec diagnostics ASCII

---

## En cour/ à faire

### Sécurité
-[ ] Ajout d'un systéme de log centralisé ( journal/ )
-[ ] Constitution logicielle ( ALLOW, LIMIT, TIMEOUT)
-[ ] Interface sécurisées pour intercepter et bloquer les scripts non autorisés

### Infrastructures à venir
-[ ] Mise en place des immeuble avec appartement, maison, dans logement/
-[ ] Mise en place d'une prison, bunker, dans src/
-[ ] Création du module mobilité/ a la place de transport/ pour véicules et transports commun

### Langage avencé DSL
-[ ] Intégration du langage DSL avencé ( goto, label, if, set, input )

### IA et mande vivant
-[ ] Génération d'agents autonomes (habitants/)

### UI & Navigation
-[ ] Simulation '3D' ASCII compléte et navigable (zqsd)
-[ ] Affichage enrichi + prompts info système

---

### Astuce .md
Pour cocher une case dans Github Code :
```md
-[x] Fait
-[ ] Â faire
