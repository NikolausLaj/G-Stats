#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <vector>

class Player
{
  private:
    std::string name_;
    bool can_modify_ = false;

  public:
    Player( std::string name, bool can_modify );

    Player( const Player&)  = delete;

    ~Player() = default;
    
    std::string getName();
 
    bool getCanModify();
  
    void setName( const std::string& name );
    
    void setCanModify( bool can_modify );

};

#endif