/**
 * @ingroup kernel
 * @{
 * @file
 * @author      Freie Universität Berlin, Computer Systems & Telematics, FeuerWhere project
 * @author      Kaspar Schleiser <kaspar@schleiser.de>
 */

#ifndef _MALLOC_H
#define _MALLOC_H

#include <stddef.h>

void* _malloc(size_t size);
void _free (void* ptr);

/** @} */
#endif /* _MALLOC_H */
