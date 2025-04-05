<<<<<<< HEAD
#include "../include/example_solver.h"

void ExampleSolver::solve(Board &board) {
    for (size_t i = 0; i < board.getX(); i++) {
        for (size_t j = 0; j < board.getY(); j++) {
            guess(i, j, board);
        }
    }
}
=======
#include "../include/example_solver.h"

void ExampleSolver::solve(Board &board) {
    for (size_t i = 0; i < board.getX(); i++) {
        for (size_t j = 0; j < board.getY(); j++) {
            guess(i, j, board);
        }
    }
}
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
