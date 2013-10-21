
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
