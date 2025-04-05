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
=======
#ifndef USER_SOLVER_H_
#define USER_SOLVER_H_

#include "solver.h"

class UserSolver : public Solver {
   public:
    void solve(Board &board) override;
};

#endif // USER_SOLVER_H_
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
