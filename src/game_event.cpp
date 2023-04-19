#include "game_event.hpp"

GameEvent::GameEvent(std::map<Player*, int> ranking)
{
  ranking_ = ranking;
}

std::map<Player*, int> GameEvent::getRanking()
{
  return ranking_;
}

void GameEvent::setRanking(std::map<Player*, int> ranking)
{
  ranking_ = ranking;
}