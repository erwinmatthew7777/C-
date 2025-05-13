#ifndef TUD_CPPP_BONUS_VISUALIZER_HPP
#define TUD_CPPP_BONUS_VISUALIZER_HPP

#include <SFML/Graphics.hpp>

#include "GameOfLife.hpp"

class Visualizer {
    GameOfLife gol_;
    sf::RenderWindow window_;
    const unsigned int scale_;

  public:
    Visualizer(size_t x, size_t y, unsigned int prop, unsigned int scale);
    Visualizer(const GameOfLife& g, unsigned int scale);
    void run();
    bool render(const Universe& colonies);
};

#endif // TUD_CPPP_BONUS_VISUALIZER_HPP
