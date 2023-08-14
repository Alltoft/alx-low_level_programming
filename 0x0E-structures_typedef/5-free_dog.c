#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - it frees dogs
 *@d: structer to free dogs
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
