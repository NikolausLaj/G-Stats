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

#### Constructor / Copy Constructor / Destructor


#### Methods


---

# Description CSV-File Structure
The header of the CSV-File contains the first and last name of the player. Followed by game counter and total points
the player. From the 5th colum on there are the dates of the game (in the header) and the points each player received.
If the player does not took place in the game at that day, a "-" is inserted. An exmaple of the CSV-File can be in the following subchapter.

> Note: The max number of rows is not set.
#### Table View

|   Name    | Surname  | Game Count | Total Points  | 17.04.2023 | 24.04.2023 | ... | 
| :------:  | :------: | :--------: | ------------- |---------- | ---------- | --- |
| Monsta    | Mane     | 0          | 0             | -         | -          | ... |
| Sending   | Simba    | 2          | 14            | 2         | 12         | ... |
| Afro      | Jack     | 1          | 3             | 3         | -          | ... |
