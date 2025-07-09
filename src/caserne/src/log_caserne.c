/******************************************************************************/
/*                                                                            */
/* log_pompier.c                                                              */
/*                                                                            */
/* By: Xavier.Megnoux <sckavens@gmail.com>                                    */
/*                                                                            */
/* Created: 2025/05/25 21:49:32 by Xavier.Megnoux                             */
/* Updated: 2025/05/25 21:56:27 by Xavier.Megnoux                             */
/*                                                                            */
/******************************************************************************/

#include "log_caserne.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void log_caserne(const char *message)
{
	int fd = open("src/pompier/logs/caserne.log", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if(fd < 0)
		return;

	write(fd, message, strlen(message));
	write(fd, "\n", 1);
	close(fd);
}
