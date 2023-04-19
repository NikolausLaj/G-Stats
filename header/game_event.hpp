#ifndef GAMEEVENT_HPP
#define GAMEEVENT_HPP

class Player;

#include <map>

class GameEvent
{
  private:
    std::map<Player*, int> ranking_;

  public:
    GameEvent(std::map<Player*, int> ranking);
    ~GameEvent() = default;
    GameEvent( const GameEvent& ) = delete;

    std::map<Player*, int> getRanking();

    void setRanking(std::map<Player*, int> ranking);


};

#endif