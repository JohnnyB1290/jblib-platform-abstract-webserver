#ifndef STRCASESTR_H
#define STRCASESTR_H

#ifndef __CC_ARM
#include <sys/types.h>
#else
#include <stddef.h>
#endif
char *strcasestr(const char *s, const char *find);
char *strncasestr(const char *s, const char * find, size_t slen);

#endif /* STRCASESTR_H */
