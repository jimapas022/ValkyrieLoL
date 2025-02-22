#pragma once

#include "GameHud.h"
#include "GameObject.h"
#include "GameChampion.h"
#include "GameMissile.h"
#include "GameUnit.h"
#include "GameMinion.h"
#include "GameJungle.h"
#include "GameTurret.h"
#include "GameMap.h"

#include <vector>
#include <map>

struct GameState {

	bool                                        gameStarted;
	float                                       time;
	float                                       ping;

	GameRenderer                                renderer;
	GameHud                                     hud;
	GameMap                                     map;
	
	std::map<int, std::shared_ptr<GameObject>>  objectCache;
	std::vector<std::shared_ptr<GameMinion>>    minions;
	std::vector<std::shared_ptr<GameJungle>>    jungle;
	std::vector<std::shared_ptr<GameTurret>>    turrets;
	std::vector<std::shared_ptr<GameChampion>>  champions;
	std::vector<std::shared_ptr<GameMissile>>   missiles;
	std::vector<std::shared_ptr<GameUnit>>      others;

	std::shared_ptr<GameChampion>               player;
	std::shared_ptr<GameObject>                 hovered;
	std::shared_ptr<GameObject>                 focused;
};