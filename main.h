#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s

{
char *str;

unsigned int len;

struct list_s *next;

} list_t;

size_t list_len(const list_t *h);

#endif

