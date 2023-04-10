#include "main.h"

/**
 * 
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int ltrs;
	int wrvalue;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ltrs = 0;
		while (text_content[ltrs])
			ltrs++;

		wrvalue = write(fd, text_content, ltrs);

		if (wrvalue == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
