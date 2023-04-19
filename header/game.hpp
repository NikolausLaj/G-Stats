#ifndef GAME_HPP
#define GAME_HPP
#include "player.hpp"

#include <vector>
#include <map>

class Game
{
  private:
    int game_data_;
    std::map<Player*, int> game_stats_;

   public:
    int getGameDate();
    std::map<Player*, int> getGameStats();

    void setGameDate();
    void setGameStats();
};

#endif