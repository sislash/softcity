/******************************************************************************/
/*                                                                            */
/* afficher_contenu_dossier.c                                                 */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/28 12:57:06 by Xavier.Megnoux                             */
/* Updated: 2025/05/28 13:05:41 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "afficher_contenu_dossier.h"
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>

void afficher_contenu(const char *repertoire)
{
	DIR *dir;
	struct dirent *entree;

	dir=opendir(repertoire);
	if(dir==NULL)
		return;
	fprintf(stdout, "%s :\n", repertoire);
	while((entree = readdir(dir))!=NULL)
		fprintf(stdout, "    %s\n",entree -> d_name);
	fprintf(stdout, "\n");
	closedir(dir);
	fflush(stdout);
}
