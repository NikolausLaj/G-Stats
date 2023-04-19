#ifndef GAME_HPP
#define GAME_HPP

class Player;

#include <vector>
#include <map>

class Game
{
  private:
    int date_;
    std::map<Player*, std::vector<int>> player_points_;

  public:
    Game( int date_ );
    
    ~Game() = default;

    Game( const Game& ) = delete;

    int getDate();

    std::map<Player*, std::vector<int>> getPlayerPoints();

    void setDate( int date );

    void setPlayerPoints( std::map<Player*, std::vector<int>> );
};

#endif