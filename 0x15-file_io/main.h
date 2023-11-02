#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void error_98(int f0, char *buffer, char *argv);
void error_99(int f0, char *buffer, char *argv);
void error_100(int f0, char *buffer);

#endif
