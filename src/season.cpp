#include "season.hpp"

Season::Season(std::string season_name, int start_date, int end_date)
{
  std::vector<int> date_vec;
  date_vec.push_back(start_date);
  date_vec.push_back(end_date);
  season_def_.insert ( std::pair<std::string,std::vector<int>> ( season_name, date_vec) );
}