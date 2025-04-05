<<<<<<< HEAD
#ifndef SOLVER_H_
#define SOLVER_H_

#include "board.h"
#include "guesser.h"

class Solver {
   protected:
    Guesser *guesser;

    ReturnType guess(size_t x, size_t y, Board &board);

   public:
    Solver();
    ~Solver();
    virtual void solve(Board &board) = 0;
    int score();
};

#endif  // SOLVER_H_
=======
#ifndef SOLVER_H_
#define SOLVER_H_

#include "board.h"
#include "guesser.h"

class Solver {
   protected:
    Guesser *guesser;

    ReturnType guess(size_t x, size_t y, Board &board);

   public:
    Solver();
    ~Solver();
    virtual void solve(Board &board) = 0;
    int score();
};

#endif  // SOLVER_H_
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
