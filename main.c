#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "random_walk.h"

int main(void) {
    srand(time(NULL));

    char board[30][30];

    print_info();

    printf("\n");

    char choice = ' ';
    printf("Vuoi stampare tutti e 100 i percorsi relativi al cammino casuale?[S][N]\n");
    scanf("%c" , &choice);

    for (int i = 0; i <= 100; i++) {
        printf("\n");
        printf("Cammino numero[%d]\n", i);
        int steps = pawns_step_into(30, 30, board);
        if (choice == 'S') {
            print_board(30 , 30 , board);
        }
        printf("Passi: [%d]\n", steps);
        printf("\n");
        printf("|=======================================================================================|\n");
    }

    return 0;
}
