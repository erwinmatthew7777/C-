#include "GameOfLife.hpp"

size_t GameOfLife::getXsize() const
{
    return x_size;
}

size_t GameOfLife::getYsize() const
{
    return y_size;
}

const Universe& GameOfLife::getColonies() const
{
    return colonies_;
}