#include <stdio.h>

#define MIN_VALUE = '1';
#define MAX_VALUE = '9';
#define EMPTY_VALUE = '.';
#define NUM_VALUES = (MAX_VALUE-MIN_VALUE+1);
#define GRID_SIZE = (NUM_VALUES*NUM_VALUES);
#define MAX_CELL = (GRID_SIZE - 1);

typedef char value;
typedef int cell;
typedef value sudokugrid[GRID_SIZE];

int has_solution(sudokugrid game);

int main() {
    // read the game from stdin or somewhere else
    sudokugrid sample;
    readGame(sample);

    // passes reference to array sample - not a copy
    if (has_solution(sample)) {
        readGame(sample);
    }
    return 0;
}

int has_solution(sudokugrid game) {
    int solved;
    cell candidate_cell;
    value trial_value;
    solved = FALSE;

    if (is_full(game)) {
        //done
        solved = TRUE;
    } else {
        candidate_cell = get_empty_cell(game);
        // after empty cell, stick in a value :)
        trial_value = MIN_VALUE;

        while (!solved && trial_value <= MAX_VALUE) {
            if (is_legal(game, candidate_cell, trial_value)) {
                set_cell(game, candidate_cell, trial_value);
            }
            if (has_solution(game)) {
                solved = TRUE;
            } else {
                clear_cell(game, candidate_cell);
            }
            trial_value++;
        }

    }
    return solved;
}
