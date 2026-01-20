#include <stddef.h>
#include <stdlib.h>


char* ft_strdup(char* src) {
    int i = 0;
    int len = 0;
    char* dup;

    while (src[len]) len++;  // Calculamos la longitud

    dup = (char*)malloc(sizeof(char) * (len + 1));
    if (!dup) return NULL;

    while (src[i]) {
	dup[i] = src[i];
	i++;
    }
    dup[i] = '\0';
    return (dup);
}
