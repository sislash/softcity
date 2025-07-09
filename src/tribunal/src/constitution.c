/******************************************************************************/
/*                                                                            */
/* constitution.c                                                             */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/26 18:24:56 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 20:11:54 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "constitution.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int constitution_valider(const char *service, const char *action)
{
	int fd = open("src/tribunal/scripts/constitution.dsl", O_RDONLY);
	if(fd<=0)
		return 1; /*autorisé par défaut si fichier absent*/

	char ligne[128], c;
	int i = 0;

	while(read(fd, &c, 1) > 0)
	{
		if(c=='\n' || i >=127)
		{
			ligne[i]='\0';
			i = 0;

			if(strncmp(ligne, "DENY ", 5)==0)
			{
				if(strstr(ligne+5, service) && strstr(ligne+5, action))
				{
					close(fd);
					return 0; /*interdit*/
				}
			}
		}
		else
			ligne[i++]=c;
	}
	close(fd);
	return 1 /*autorisé si aucune regle ne bloc*/;
}
