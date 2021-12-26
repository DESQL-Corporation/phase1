#include <stdio.h>
#include "img.h"

#define n 2

int main(int argc, char const *argv[])
{
    Descripteur descripteur;

	printf("Tout commence ici....\n");
    descripteur = indexer_image("../Database/Image/RGB/50.txt", n);
        printf("{%d,%d,", descripteur.ID, descripteur.t_max);
        for (int i = 0; i < descripteur.t_max; i++) {
            printf("%d ", descripteur.histogramme[i]);
        }
        printf("}\n");
	return 0;
}