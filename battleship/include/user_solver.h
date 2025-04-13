<<<<<<< HEAD
#ifndef USER_SOLVER_H
#define USER_SOLVER_H

#include "solver.h"  

class UserSolver : public Solver {
   public:
    void solve(Board &board) override;

   private:
   void searchNearby(int x, int y, Board &board, std::vector<std::vector<bool>> &visited);
};

#endif  

