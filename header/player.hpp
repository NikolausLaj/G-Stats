#ifndef PERSON_HPP
#define PERSON_HPP

#include "game.hpp"

#include <string>
#include <vector>

class Player
{
  private:
    std::string name_;
    std::vector<Game*> games_;
    unsigned game_counter_;
    unsigned total_points_;
    bool can_modify_ = false;

  public:
    Player(std::string name, std::string surname);

    Player(const Player&) = delete;

    virtual ~Player() = default;

    std::string getName();
    std::string getSurname();
    unsigned getGameCounter();
    unsigned getTotalPoints();

    void setName(std::string name);
    void setSurname(std::string surname);
    void setGameCounter(unsigned game_counter);
    void setTotalPoints(unsigned total_points);
};


#endif