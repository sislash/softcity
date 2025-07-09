/******************************************************************************/
/*                                                                            */
/* pompier_intervention.c                                                     */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 20:53:38 by Xavier.Megnoux                             */
/* Updated: 2025/05/26 09:17:53 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "pompier_intervention.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void pompier_intervenir(const char *service_name, const char *incident)
{
	int fd = open("logs/pompier.log", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if(fd < 0)
		return;
	write(fd, "[POMPIER] Intervention sur : ", 29);
	write(fd, service_name, strlen(service_name));
	write(fd, " | incident : ", 14);
	write(fd, incident, strlen(incident));
	write(fd, "\n", 1);
	close(fd);
}
