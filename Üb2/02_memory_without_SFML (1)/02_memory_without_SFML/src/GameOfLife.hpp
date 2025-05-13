#ifndef TUD_CPPP_BONUS_GAMEOFLIFE_HPP
#define TUD_CPPP_BONUS_GAMEOFLIFE_HPP

#include <string>
#include <vector>

#include "Colony.hpp"

typedef std::vector<std::vector<Colony*>> Universe;

// only for the stub implementation for GameOfLife::getColonies(), can be removed at the end.
static Universe MOCKUP_UNIVERSE = {};

class GameOfLife {
    Universe colonies_;

  public:
    GameOfLife(size_t x_size, size_t y_size, unsigned int prob) {}

    GameOfLife(Universe& colonies) {}

    GameOfLife(const GameOfLife&) {}

    GameOfLife& operator=(const GameOfLife&) = delete;

    ~GameOfLife() {}

    void iterate() {}

    size_t getXsize() const { return 0; }

    size_t getYsize() const { return 0; }

    const Universe& getColonies() const { return MOCKUP_UNIVERSE; }

    void writeToFile(std::string filename) {}

    static GameOfLife readFromFile(std::string filename) { return GameOfLife(1, 1, 50); }
};

#endif // TUD_CPPP_BONUS_GAMEOFLIFE_HPP
