#ifndef SEASON_HPP
#define SEASON_HPP

class GameEvent;

#include <string>
#include <vector>
#include <map>

class Season
{
  private:
    std::vector<GameEvent*> games_;
    std::map<std::string, std::vector<int>> season_def_;

  public:
    Season(std::string season_name, int start_date, int end_date);

    ~Season() = default;

    Season( const Season& ) = delete;
};


#endif