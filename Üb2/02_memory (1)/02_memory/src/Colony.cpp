#include "Colony.hpp" // DEclare the class. Following that hpp
#include <cassert> // For sanitz checks

Colony::Colony(bool initial_state)
// Colony newcolony(true); to create a new colony object Colony:: because is using the Colony hpp
{
    state_ = initial_state;
    nextState_ = false;
}

bool Colony::getState() const // const=This method will not modify any member variables. FOR GETTERS
{
    return state_;
}

void Colony::calculateNextState(unsigned int alive_neighbors)
//If alive --> stays alive for 2 or 3 neighbors. Otherwise dies.
//If dead --> lives when having 3 neighbors. Otherwise stays dead
{
    if (state_) // state_ is a bool, therefore checks if it is true. If true = alive
    {
        if (alive_neighbors == 2 || alive_neighbors == 3)
        {
            nextState_ = true;
        }
        else
        {
            nextState_ = false;
        }
    }
    else //Is dead
    {
        if (alive_neighbors == 3)
        {
            nextState_ = true;
        }
        else
        {
            nextState_ = false;
        }
    }
}
