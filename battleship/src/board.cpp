<<<<<<< HEAD
#include "../include/board.h"

#include <algorithm>
#include <iostream>
#include <random>
#include <utility>

#include "../include/types.h"

Board::Board(uint32 x, uint32 y, uint32 ship_count) {
    this->ship_count = ship_count;
    this->x = x;
    this->y = y;
    this->grid = new std::vector<std::vector<mut_uint32> *>(x);
    for (mut_uint32 i = 0; i < x; i++) {
        (*this->grid)[i] = new std::vector<mut_uint32>(y, 0);  // Initialize each cell to 0 directly
    }
    this->random_fill(ship_count);
}

Board::~Board() {
    size_t s = this->grid->size();
    for (mut_uint32 i = 0; i < s; i++) {
        delete this->grid->at(i);
    }
    delete this->grid;
}

size_t Board::getShipCount() { return this->ship_count; }

size_t Board::getX() { return this->grid->size(); }

size_t Board::getY() {
    if (this->getX() > 0) {
        return this->grid->at(0)->size();
    }
    return 0;
}

std::vector<std::vector<mut_uint32> *> *Board::get_grid() { return this->grid; }

void Board::print() {
    for (const auto rowPtr : *grid) {
        for (const int cell : *rowPtr) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

void Board::random_fill(uint32 n) {
    size_t rows = this->grid->size();
    size_t cols = this->grid->front()->size();

    std::vector<std::pair<size_t, size_t>> indices;
    indices.reserve(rows * cols);

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            indices.emplace_back(i, j);
        }
    }

    std::random_device r;

    std::mt19937 gen(r());

    std::shuffle(indices.begin(), indices.end(), gen);

    for (size_t k = 0; k < n && k < indices.size(); k++) {
        size_t row = indices.at(k).first;
        size_t col = indices.at(k).second;
        this->grid->at(row)->at(col) = 1;
    }
}
