Softcity : Nom du projet, Ville symbolique en C représantant l'os de l'utilisateur, avec contrôle total via interface ASCII

Salon de commandement : Entrée principale de Softcity située dans mairie/. Point central de lancement des services.

Scripts DSL : Langage maison permettant d'executer des actions systéme (ex : pause, print, check, alert), stocké dans des fichier .dsl.
ligne[128] : Buffer principal pour lire une ligne de script. Déclaré en global via extern dans executer_script.h

command_X : Nom des fonctions gérant chaque commande (print, pause, alert, check...). Séparer dans leur propre fichier source

sofcity/src/commissariat/include/config_commissariat.h : COMMISSARIAT_SCRIPT_PATH : Macro déffinissant le chemin d'accès aux scripts du commissariat.

exemple de .h : #define COMMISSARIAT_SCRIPT_PATH BASE_PATH "commissariat/" SCRIPT_PATH

softcity/include/config.h : BASE_PATH : Macro déffinisant le chamin d'acces aux dossier src/, SCRIPT_PATH : Macro déffinisant le chamin d'acces aux dossier script/

utilisation (ex : executer_script(COMMISSARIAT_SCRIPT_PATH "pause.dsl")).

!!! : Ne pas oublier d'inclure les fichier config pour les chemin de script

habitants/ :futur dossier contenant des agents autonomes pour peupler Softcity.

journal/ : futur module de lopg sécurisé centralisant tout les événements systémes.

constitution/ : Ensemble de régles logicielles que les scripts ne peuve pas violer ( ex : TIMOUT, LIMIT, ALLOW ).

pause.dsl : Fichier script exemple contenant une commande "pause 10000000".
usleep(n) : Fonction utilisée pour appliquer une pause dans l execution, apret parcing d'un entier dans le script.
DSL(Domain Specific Languge) : Langage ersonnalisé, crée pour contrôler les action de Softcity.

zqsd : Futur touche utilisées pour naviguer dans l'univers ASCII en mode interactif (à venir).
