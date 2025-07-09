/******************************************************************************/
/*                                                                            */
/* tribunal.c                                                                 */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/06/01 17:58:40 by Xavier.Megnoux                             */
/* Updated: 2025/06/01 18:01:20 by Xavier.Megnoux                             */
/*                                                                            */
/* Softcity - (c) 2025 Xavier Megnoux                                         */
/* Consultation uniquement -- Tout droits réservés                            */
/* Voir LICENSE pour plus d'informations.                                     */
/*                                                                            */
/******************************************************************************/

#include "config.h"
#include "config_tribunal.h"
#include "constitution.h"
#include "tribunal.h"
#include <unistd.h>

int constitution_valider(const char *service, const char *action);

void tribunal_lancer(void)
{
	int i=0;
	while(1)
	{

	}
	if (i<1)
	{
		write(1, "[TRIBUNAL] teste", 16);
	}
	i++;
}
