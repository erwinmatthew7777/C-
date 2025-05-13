#include "Visualizer.hpp"

#include <utility>

Visualizer::Visualizer(size_t x, size_t y, unsigned int prop, unsigned int scale)
    : gol_{ x, y, prop },
      window_{ sf::RenderWindow{ sf::VideoMode(x * scale, y * scale), "GameOfLife" } },
      scale_{ scale } {}

Visualizer::Visualizer(const GameOfLife& g, unsigned int scale)
    : gol_{ g },
      window_{
          sf::RenderWindow{ sf::VideoMode(gol_.getXsize() * scale, gol_.getYsize() * scale), "GameOfLife" }
      },
      scale_{ scale } {}

void Visualizer::run() {
    while (render(gol_.getColonies())) {
        gol_.iterate();
    }
}

bool Visualizer::render(const Universe& colonies) {
    if (!window_.isOpen()) {
        return false;
    }

    window_.setFramerateLimit(60);
    sf::Event event;
    while (window_.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window_.close();
            return false;
        }
    }
    window_.clear(sf::Color{ 1, 1, 31 });
    for (unsigned int i = 0; i < gol_.getYsize(); ++i) {
        for (unsigned int j = 0; j < gol_.getXsize(); ++j) {
            if (colonies.at(i).at(j)->getState()) {
                sf::RectangleShape rect(sf::Vector2f(scale_ - 1, scale_ - 1));
                rect.setPosition(j * scale_, i * scale_);
                rect.setOutlineColor(sf::Color{ 125, 125, 125 });
                rect.setFillColor(sf::Color::Green);
                window_.draw(rect);
            }
        }
    }
    window_.display();

    return true;
}
