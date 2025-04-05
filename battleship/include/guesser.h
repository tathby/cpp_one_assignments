<<<<<<< HEAD
#ifndef GUESSER_H_
#define GUESSER_H_

#include "board.h"
#include "types.h"

enum ReturnType { bad_guess, hit, miss, near_miss };

struct GuessContext {
    mut_uint32 guess_count;
};

class Guesser {
    GuessContext ctx;
    ReturnType check_coordinates(size_t x, size_t y, Board &board);

   public:
    ReturnType guess(size_t x, size_t y, Board &board);
    int getGuessCount();
};

#endif  // GUESSER_H_
=======
#ifndef GUESSER_H_
#define GUESSER_H_

#include "board.h"
#include "types.h"

enum ReturnType { bad_guess, hit, miss, near_miss };

struct GuessContext {
    mut_uint32 guess_count;
};

class Guesser {
    GuessContext ctx;
    ReturnType check_coordinates(size_t x, size_t y, Board &board);

   public:
    ReturnType guess(size_t x, size_t y, Board &board);
    int getGuessCount();
};

#endif  // GUESSER_H_
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
