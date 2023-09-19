#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
void handler(va_list args, int *char_count, const char *f);
void handle(va_list args, int *char_count, const char *f);
#endif
