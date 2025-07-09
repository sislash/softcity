/******************************************************************************/
/*                                                                            */
/* menu_commissariat_script.c                                                 */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/29 17:36:35 by Xavier.Megnoux                             */
/* Updated: 2025/05/29 17:48:57 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "config.h"
#include "config_commissariat.h"
#include "menu_commissariat.h"
#include "menu_commissariat_script.h"
#include "afficher_contenu_dossier.h"
#include "executer_script.h"
#include "option_executer_script.h"
#include <unistd.h>
#include <fcntl.h>

void afficher_contenu(const char *repertoire);
void executer_script(const char *path);
void police_executer_script(void);
void menu_principal(void);

void menu_commissariat_choix_script(void)
{
    char choix[2];

    write(1, "+--------------------------------------+\n", 41);
    write(1, "|        [SCRITP_COMMISSARIAT]         |\n", 41);
    write(1, "|                                      |\n", 41);
    write(1, "| 1 : Afficher les script              |\n", 41);
    write(1, "|                                      |\n", 41);
    write(1, "| 2 : Lancer un script                 |\n", 41);
    write(1, "|                                      |\n", 41);
    write(1, "| 3 : Retour menu commissariat         |\n", 41);
    write(1, "|                                      |\n", 41);
    write(1, "| 4 : Retour menu principale           |\n", 41);
    write(1, "|                                      |\n", 41);
    write(1, "+--------------------------------------+\n", 41);
    write(1, "choix : ",8);

    read(0, choix, 2);
    if(choix[0] =='1')
    {
        afficher_contenu(COMMISSARIAT_SCRIPT_FULL_PATH);
        executer_script(COMMISSARIAT_SCRIPT_FULL_PATH "pause.dsl");
        menu_commissariat_choix_script();
    }
    else if(choix[0] =='2')
    {
        police_executer_script();
    }
    else if(choix[0] =='3')
    {
        menu_principal_commissariat();
    }
    else if(choix[0] =='4')
    {
        menu_principal();
    }
    else
        write(1, "choix invalide.\n", 16);
}
