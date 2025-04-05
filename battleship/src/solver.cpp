<<<<<<< HEAD
#include "../include/solver.h"

Solver::Solver() { this->guesser = new Guesser(); }

Solver::~Solver() { delete guesser; }

int Solver::score() { return this->guesser->getGuessCount(); }

ReturnType Solver::guess(size_t x, size_t y, Board &board) {
    return this->guesser->guess(x, y, board);
}
=======
#include "../include/solver.h"

Solver::Solver() { this->guesser = new Guesser(); }

Solver::~Solver() { delete guesser; }

int Solver::score() { return this->guesser->getGuessCount(); }

ReturnType Solver::guess(size_t x, size_t y, Board &board) {
    return this->guesser->guess(x, y, board);
}
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
