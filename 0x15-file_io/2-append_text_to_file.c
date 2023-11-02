#include "main.h"

/**
* append_text_to_file - Appends a text to a file
* @filename: pointer to the name of the file
* @text_content: string to add to the end of the file
*
* Return: Return 1 if the file exists and -1 if the file does
* not exist or if you do not have the required permissions
* to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
int len = 0;
int op, wrt;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
op = open(filename, O_WRONLY | O_APPEND);
wrt = write(op, text_content, len);

if (op == -1 || wrt == -1)
return(-1);	
close(op);
return (1);
}
