#ifndef TUD_CPPP_BONUS_COLONY_HPP
#define TUD_CPPP_BONUS_COLONY_HPP

class Colony {
    private:
    bool state_; // True=alive; False=dead
    bool nextState_; // State for next iteration

  public:
    Colony(bool initial_state); // Changed {} for ; in hpp just the structure is declared

    bool getState() const; // return false was there to be able to compile

    void calculateNextState(unsigned int alive_neighbors);

    void evolve();
};

#endif // TUD_CPPP_BONUS_COLONY_HPP
