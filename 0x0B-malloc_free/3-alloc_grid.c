#include <stdlib.h>
#include "main.h"
int **alloc_grid(int width, int height)
{
int **ss;
int n = 0;

if (width <= 0 || height <= 0)
    return (NULL);

ss = malloc(height * sizeof(int *));
if (ss == NULL)
    return (NULL);

while (n < height)
{
    ss[n] = malloc(width * sizeof(int));
    if (ss[n] == NULL)
    {
        while (n > 0)
        {
            n--;
            free(ss[n]);
        }
        free(ss);
        return (NULL);
    }
    n++;
}
return (ss);
}
/*int **alloc_grid(int width, int height)
{
	int **ss;
	unsigned int n = 0;
	unsigned int o = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ss = (int **) malloc(sizeof(char) * (width * height));
	if (ss == NULL)
		return (NULL);

	while (n < height)
	{
		while (o < width)
		{
			o++;
		}
	o = 0;
	n++;
	}
	return (ss);
}*/
