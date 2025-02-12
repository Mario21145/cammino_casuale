#include "random_walk.h"
#include <stdio.h>
#include <stdlib.h>

void initialize_board(int cols, int rows, char *board) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            if (i == 0 && j == 0) {
                *(board + cols * i + j) = '.';
            } else if (i == 29 && j == 29) {
                *(board + cols * i + j) = '.';
            } else {
                *(board + cols * i + j) = '0';
            }
        }
    }
}

int pawns_step_into(int cols, int rows,  char *board) {
    int steps = 0;

    int iW = 0;
    int jW = 0;

    int iB = 29;
    int jB = 29;

    initialize_board(cols, rows, board);
    do {
        //0 -> Movimento sotto
        //1 -> Movimento sopra
        //2 -> Movimento sinistra
        //3 -> Movimento destra
        int casesW[4] = {0, 1, 2, 3};
        int casesB[4] = {0, 1, 2, 3};

        *(board + cols * iW + jW) = '-';
        check_borders(iW, jW, casesW, cols, rows);
        move_pawn(&iW, &jW, cols, rows, casesW, &steps);

        *(board + cols * iB + jB) = '-';
        check_borders(iB, jB, casesB, cols, rows);
        move_pawn(&iB, &jB, cols, rows, casesB, &steps);

        if (iW == iB && jW == jB) {
            printf("Le pedine si sono incontrate nelle seguenti posizioni: [%d][%d] - [%d][%d] \n", jW, iW, jB, iB);
            *(board + cols * iW + jW) = 'X';
        }
    } while (!(iW == iB && jW == jB));

    return steps;
}

void check_borders(int i, int j, int *cases, int rows, int cols) {
    if (i == 0) {
         cases[1] = -1; //sopra
    } else if (i == (cols - 1)){
        cases[0] = -1; //sotto
    }else if (j == 0) {
        cases[2] = -1; //sinistra
    }else if (j == (rows - 1)) {
        cases[3] = -1; //destra
    }

}

int generate_random_numbers() {
    return rand() % 4;
}

void move_pawn(int *i, int *j, int cols, int rows, int *cases, int *steps) {
    //0 -> Movimento sotto
    //1 -> Movimento sopra
    //2 -> Movimento sinistra
    //3 -> Movimento destra

    switch (generate_random_numbers()) {
        //sotto
        case 0: {
            if (cases[0] != -1 && *i < cols - 1) {
                (*i)++;
                (*steps)++;
            }
            break;
        }
        //sopra
        case 1: {
            if (cases[1] != -1 && *i > 0) {
                (*i)--;
                (*steps)++;
            }
            break;
        }
        //sinistra
        case 2: {
            if (cases[2] != -1 && *j > 0) {
                (*j)--;
                (*steps)++;
            }
            break;
        }
        //destra
        case 3: {
            if (cases[3] != -1 && *j < rows - 1) {
                (*j)++;
                (*steps)++;
            }
            break;
        }
    }
}

void print_board(int rows, int cols, char *board) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf(" %c ", *(board + cols * i + j));
        }
        printf("\n");
    }
}

void print_info() {
    printf("|-----------------------------------------------------------------------------------|\n");
    printf("| Benvenuto nel simulatore di cammini casuali                                       |\n");
    printf("| Ecco a te alcune informazioni:                                                    |\n");
    printf("|   [X] , sara' il punto in cui le pedine si incontreranno                          |\n");
    printf("|   [-] , rappresentano i punti che una delle due pedine ha già attraversato        |\n");
    printf("|   [0] , rappresentano i punti che nessuna delle due pedine ha ancora attraversato |\n");
    printf("|-----------------------------------------------------------------------------------|\n");
}