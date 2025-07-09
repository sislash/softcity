# Mairie - Service Administratif Central de SoftCity

La **mairie** est le service responsable de la gestion Administrative de SoftCity.
Elle lance les scripts de démarrage, enregistre les événements, et pilote la logique publique symbolique du système.

## Structure

|mairie/
|---include/
|       |---config_mairie.h              # Définit le chemin vers les scripts de la mairie.
|       |---mairie.h                     # Déclare la fonction `mairie_lancer()`.
|---logs/
|       |---mairie.log                   # Journalisation des événements.
|---scripts/
|       |---scripts_mairie_demarrage.dsl # Script DSL exécuté au lancement.
|---src/
|       |---mairie.c                     # Implémente la logique principale du service.
|       |---test.Implémente              # Fichier de test initial pour sécurité/démarrage.
|---README.md                            # Ce fichier

---

## Fonctionnement

### Fonction principale

```c
void mairie_lancer(void);
```

Définie dans `mairie.c`, cette fonction:
.   Lancer une boucle infinie.
.   Appelle régullièrement executer_script() avec un chemin pointant vers:
    ```c
    "scripts_mairie_demarrage.dsl"
    ```
.   Attend 0.5s entre chaque exécution (`usleep(500000)`).

> Ce ocmportement simule un centre de surveillance administrative.

---

## Script de démarrage (DSL)

### scripts_mairie_demarrage.dsl

```dsl
print [info] initialisation du service : MAIRIE... OK
pause 1000000
```

.   Ce script s'affiche via la fonction `executer_script()`.
.   Il indique lebon fonctionnement du module mairie.

## Fichier de test

### test.int

```txt
test securiter
fichier de tst securiter
```

.   Utilisé pour vérifier que le service peut être lancé dans un environnement sécurisé, ou pour
    effectuer des tests manuels.
    
## Configuration

### connfig_mairie.h

```c
#define MAIRIE_SCRIPT_PATH BASE_PATH "mairie/" SCRIPT_PATH
```

.   Cette macro permet de definir dynamiquement le chemin d'accès aux scripts spécifiques de la
    mairie, de manière modulaire et portable.
    
## Rôle symbolique

La mairie représente:
.   L'administration publique de SoftCity.
.   Le point de relais entre la citadelle et les lois générales.
.   La première entité déclanchée au démarage symbolique de la ville.
.   Le gardien des processus civils standards.

## Sécurité

.   Seule les scripts autorisés peuve être exécutés depuis la mairie.
.   En cas d'événement critique, elle doit     transmettre des alertes à la citadelle ou au tribunal.

## Auteur

Projet SoftCity
(c) 2025 Xavier Megnoux
Licence: voir licence personelle a la racine de SoftCity