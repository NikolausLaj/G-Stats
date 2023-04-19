#ifndef SEASON_HPP
#define SEASON_HPP

#include "player.hpp"
#include "game.hpp"

#include <vector>
#include <map>
class Season
{
  private:
    std::vector<Player*> players_;
    std::vector<Game*> games_;
  
  public:
    void setPlayer();
    void setGames();
    std::vector<Player*> getPlayers();
    std::vector<Game*> getGames();
};


#endif