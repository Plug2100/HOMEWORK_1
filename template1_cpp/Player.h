#ifndef MAIN_PLAYER_H
#define MAIN_PLAYER_H

#include "Image.h"

struct Point
{
  int x;
  int y;
};

enum class MovementDir
{
  UP,
  DOWN,
  LEFT,
  RIGHT
};

struct Player
{
  explicit Player(Point pos = {.x = 10, .y = 10}) :
                 coords(pos), old_coords(coords) {};

  bool Moved() const;
  void ProcessInput(MovementDir dir);
  void Draw(Image &screen, MovementDir dir);

//private:
  int enemy = 0;
  Point coords {.x = 10, .y = 10};
  Point old_coords {.x = 10, .y = 10};
  Pixel color {.r = 111, .g = 111, .b = 111, .a = 111};
  int move_speed = 4;
  int hitpoint = 4;
  int wait = 0;

};

#endif //MAIN_PLAYER_H
