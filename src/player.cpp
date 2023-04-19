#include "player.hpp"

#include <string>

Player::Player(std::string name, bool can_modify)
{
  name_ = name;
  can_modify_ = can_modify;
}

std::string Player::getName()
{
    return name_;
}

bool Player::getCanModify()
{
    return can_modify_;
}

void Player::setName( const std::string& name )
{
    name_ = name;
}

void Player::setCanModify( bool can_modify )
{
    can_modify_ = can_modify;
}