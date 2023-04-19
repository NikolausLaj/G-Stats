#include "game.hpp"

Game::Game(int date)
{
  date = date_;
}

void Game::setDate( int date )
{
  date_ = date;
}

void Game::setPlayerPoints( std::map<Player*, std::vector<int>> player_pts )
{
  player_points_ = player_pts;
}