#include <stdio.h>
#include <malloc.h>

void main() {

    unsigned int range;
    int i;
    int *rangeStart;

    printf("Please supply the range length: ");

    scanf("%u", &range);

    rangeStart = (int *) malloc(range * sizeof(int));

    for (i = 0; i < range; i++) {
        printf("Value %d: ", i);
        scanf("%d", rangeStart + i);
    }

    printf("Memeory contents:");
    for (i = 0; i < range; i++) {
        printf(" %d ", *(rangeStart + i));
    }

    free(rangeStart);
}