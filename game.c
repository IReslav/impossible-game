
#include <stdlib.h>
#include <time.h>

void ugad() {
    srand(time(NULL));
    int randomnum = rand() % 332 + 1;

    if (scanf("%i", &randomnum) == randomnum) {
        printf("yohoo");
    }
    else {
        printf("YOU SUCK!");
    }
}


int main()
{
    ugad();
    return 0;
}
