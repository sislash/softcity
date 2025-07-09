/******************************************************************************/
/*                                                                            */
/* controle_passwd.c                                                          */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/28 12:02:12 by Xavier.Megnoux                             */
/* Updated: 2025/05/28 12:43:18 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "controle_passwd.h"
#include <fcntl.h>
#include <unistd.h>

void police_controle_passwd(void)
{
	int fd=open("/etc/passwd", O_RDONLY);
	if(fd>=0)
	{
		write(1, "[POLICE] Fichier /etc/passwd trouvé\n", 36);
		close(fd);
	}
	else
	{
		write(1, "[POLICE] Fichier /etc/passwd introuvable\n", 41);
	}
}
