#include <stdio.h>
#include "sudokugrid.h"

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
