<<<<<<< HEAD
#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) {
    int board_size_x = board.getX();
    int board_size_y = board.getY();

    std::vector<std::vector<bool>> visited(board_size_x, std::vector<bool>(board_size_y, false));

    //Uses a checkerboard pattern for efficiency
    for (int i = 0; i < board_size_x; i += 2) {
        for (int j = (i % 4 == 0 ? 0 : 1); j < board_size_y; j += 2) {
            if (visited[i][j]) continue; //check if is in visited, skip iteration if so to prevent out of bounds errors
            ReturnType result = guess(i, j, board);
            visited[i][j] = true;
            //If we find a hit or near miss search around it
            if (result == ReturnType::hit || result == ReturnType::near_miss) {
                searchNearby(i, j, board, visited);
            }
        }
    }
}

void UserSolver::searchNearby(int x, int y, Board &board, std::vector<std::vector<bool>> &visited) {
    int board_size_x = board.getX();
    int board_size_y = board.getY();
    //Need to check all adjacent tiles to locate full ship
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int d = 0; d < 4; d++) {
        int new_x = x + dx[d];
        int new_y = y + dy[d];

        if (new_x < 0 || new_x >= board_size_x || new_y < 0 || new_y >= board_size_y) {
            continue;  
        }

        if (visited[new_x][new_y])
            continue;

        visited[new_x][new_y] = true;

        ReturnType result = guess(new_x, new_y, board);
        if (result == ReturnType::hit || result == ReturnType::near_miss) {
            searchNearby(new_x, new_y, board, visited);
        }
    }
}
=======
#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) {
    // Your Implementation goes here
    ReturnType t = guess(1, 1, board);
    std::cout << t << std::endl;
}
>>>>>>> 7dcff40e8bf12ff73921a872abd54fe043e9c661
