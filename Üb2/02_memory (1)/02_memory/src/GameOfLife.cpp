#include "GameOfLife.hpp"//Import hpp
#include <fstream>//Lib to read and write in text docs
#include <stdexcept>// Throws exceptions of std::error
#include <string>//For std::string

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

void GameOfLife::writeToFile(std::string const& filename)
{
std::ofstream outputFile(filename);//Open file in write mode(ofstream) (std::ifstream to read files)(std::fstream for both)
//outputFile is the name of the file created to sahe the text

    if (!outputFile)//Check if the file opened
    {
        throw std::runtime_error("Could not open file " + filename);
    }

    outputFile << x_size << " " << y_size << "\n"; // Escribe la variable x_size, un espacio, la variable y_size y se salta una linea

    for (size_t y = 0; y < y_size; ++y)// Using size_t instead of int, because it is always positive and bigger
    {
        for (size_t x = 0; x < x_size; x++)//Iterates over the whole grid
        {
          auto grid_space = colonies_[y][x];

          if (bool living = grid_space->getState())
            {
                outputFile << "1";
            }
            else
            {
                outputFile << "0";
            }
        }
   outputFile << "\n"; }
}