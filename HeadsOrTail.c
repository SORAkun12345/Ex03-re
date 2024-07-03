#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tossCoin(int results[], int rounds) {
    for (int i = 0; i < rounds; i++) {
        results[i] = rand() % 2; // 0 for Heads, 1 for Tails
    }
}

void printResults(int results[], int rounds) {
    int heads = 0, tails = 0;
    printf("Tossing a coin...\n");
    for (int i = 0; i < rounds; i++) {
        if (results[i] == 0) {
            printf("Round %d: Heads\n", i + 1);
            heads++;
        } else {
            printf("Round %d: Tails\n", i + 1);
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);
}

int main() {
    srand(time(0));
    int rounds = 3;
    int results[rounds];
    char name[50];

    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    tossCoin(results, rounds);
    printResults(results, rounds);

    return 0;
}
