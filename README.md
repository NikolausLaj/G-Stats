# G-Stats
This will be a small programm that can take in player data such as name of the player score reached by the player and
if the player took place.

First it will be implemented as a command tool only. As an object oriented program.

---

# Description of the all classes

## `Player.hpp` / `Player.cpp`

### Class `Player`
#### Data Members

- `std::string name_`
    - stores the name of the player.

- `bool can_modify_ = false`
    - A value which definies if the player is allowed to modify the statistics.

> Note: Add comments for contructor, destructor... when implementing

---

## `Game.hpp` / `Game.cpp`
### Class `Game`
In here the game characteristics will be defined. Which player took place in the game and how many points the player
recieved in each round of the game will be saved in `player_game_points_` . Also the date of the game will be saved in
`date_`

#### Data Members
- `int data_`
    - stores the date of the game
- `std::map<Player*,std::vector<int>> player_points`
    - stores the point of each round of the game for each player in a . As the key of the map a pointer to the Player 
    is used. In the vector the point for each round will be stored.

#### Methods

`showCGameStatistis()` --> shows the statistic of the current game.
`comparePlayer()` --> takes in a list of players and shows them in a graph.

> Note: Add comments for contructor, destructor... when implementing

---

### Class `GameEvent`
This class is similar to the class `Game`, in here the ranking of the game will be computed.

#### Datamembers
- `std::map<Player*, std::int> ranking_` 
    - save a pointer to the player and their ranking after the game ende.
---

## `Season.hpp` / `Season.cpp`
### Class `Season`
To be able to seperate the game play into individual season, linke semester championship and silvester championship,
the `Season` class is implemented. It will habe two datamember, the first one `games_`, will store all games in
and the second `seasons_` stores the man, start and end date of a season.

#### Data Members
- `std::vector<GameEvent*> games_`
    - stores all games.
- `std::map<std::string, std::vector<int>> season_def_`
    - stores the name of the season as the key, and the start and end date as an integer.

---
# Utils
In this .hpp and .cpp files functionalites will be implemented which are used in multiple files.

> Note: Add funciton descripion when implemented.

---
# Description CSV-File Structure
The header of the CSV-File contains name of the player. Followed by game counter and total points
the player. From the 5th colum on there are the dates of the game (in the header) and the points each player received.
If the player does not took place in the game at that day, a "-" is inserted. An exmaple of the CSV-File can be in the 
following subchapter.

> Note: The max number of rows is not set.
#### Table View

|   Name        | Game Count | Total Points  | 17.04.2023   | 24.04.2023    | ... | 
| :------:      | :--------: | :-----------: | :----------: | :----------:  | :-: |
| Monsta Mane   | 0          | 0             | -            | -             | ... |
| Simba         | 2          | 2             | 1            | 1             | ... |
| Afro Jack     | 1          | 2             | 2            | -             | ... |
