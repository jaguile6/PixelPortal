#pragma once

#include <Arduboy2.h>
#include "GameState.h"
#include "Player.h"
#include "Level.h"

const uint8_t fps = 30;
const uint8_t LASTLEVEL = 10;

extern Arduboy2 arduboy;

extern GameState gameState;

extern Player player;

extern Level level;