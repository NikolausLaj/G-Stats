# G-Stats
This will be a small programm that can take in player data such as name of the player score reached by the player and
if the player took place.

First it will be implemented as a command tool only. As an object oriented program.

---

# Description of the all classes

## `Player.hpp` / `Player.cpp`

### Class `Player`
#### Data Members

- `name_`
    - stores the name of the player as an `std::string`.
- `surname_`
    - stores the surname of the player as an `std::string`.
- `game_coutn_` counts the ammount of games the player played as an `uchar`.
- `games_`
    - stores the played games of the player as `std::vector<Games*>`.

> Note: Add comments for contructor, destructor... when implementing

---

## `Game.hpp` / `Game.cpp`
### Class `Game`
In here the game characteristics will be defined. Which player took place in the game and how many points the player
recieved in each round of the game will be saved in `player_game_points_` . Also the date of the game will be saved in
`date_`

#### Data Members
- `data_`
    - stores the date of the game as an `int`
- `player_game_points`
    - stores the point of each round of the game for each player in a `std::map<Player*,std::vector<int>>`. As the key
    of the map a pointer to the Player is used.The `std::vector<int>` represents the points of each round.

#### Methods

> Note: Add comments for contructor, destructor... when implementing

---

## `Season.hpp` / `Season.cpp`
### Class `Season`
To be able to seperate the game play into individual season, linke semester championship and silvester championship,
the `Season` class is implemented. It will habe two datamember, the first one `games_`, will store all games in
and the second `seasons_` stores the man, start and end date of a season.

#### Data Members
- `games_`
    - stores all games in a `std::vector<Game*>`
- `seasons_`
    - stores the name of the season as the key, and the start and end date as an integer into a vector
    `std::map<std::string, std::vector<int>>`

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
| Simba         | 2          | 14            | 2            | 12            | ... |
| Afro Jack     | 1          | 3             | 3            | -             | ... |
