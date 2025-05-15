#ifndef TUD_CPPP_BONUS_GAMEOFLIFE_HPP
#define TUD_CPPP_BONUS_GAMEOFLIFE_HPP

#include <string>
#include <vector>

#include "Colony.hpp"

typedef std::vector<std::vector<Colony*>> Universe;

// only for the stub implementation for GameOfLife::getColonies(), can be removed at the end.
static Universe MOCKUP_UNIVERSE = {};

class GameOfLife {

    size_t x_size, y_size; //Un entero sin signo suficientemente grande para contar o medir objetos en memoria.
    Universe colonies_;

  public:
    GameOfLife(size_t x_size, size_t y_size, unsigned int prob) {}

    GameOfLife(Universe& colonies) {} // 2D grid = Universe(alisa for std::vector<std::vector<Colony*>>

    GameOfLife(const GameOfLife&) {}

    GameOfLife& operator=(const GameOfLife&) = delete;

    ~GameOfLife() {}

    void iterate() {}

    size_t getXsize() const;

    size_t getYsize() const;

    const Universe& getColonies() const;

    void writeToFile(const std::string& filename); //3a)

    static GameOfLife readFromFile(std::string filename) { return GameOfLife(1, 1, 50); }
};

#endif // TUD_CPPP_BONUS_GAMEOFLIFE_HPP
