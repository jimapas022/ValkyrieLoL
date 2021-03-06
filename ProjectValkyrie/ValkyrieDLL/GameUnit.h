#pragma once
#include "GameObject.h"
#include "UnitInfo.h"
#include "SpellCast.h"

#include <boost/python.hpp>
using namespace boost::python;

class GameUnit : public GameObject, public Collidable {

public:
	          GameUnit();
	          GameUnit(std::string name);
		      
	void      ReadFromBaseAddress(int addr);
	void      ImGuiDraw();
	bool      HasTags(UnitTag tag);
	float     GetAttackSpeed();
	bool      IsRanged();
	object    GetStaticData();
	object    GetCastingSpell();

public:

	bool        isCasting = false;
	bool        targetable;
	bool        invulnerable;
	bool        isDead;
	float       mana;
	float       health;
	float       maxHealth;
	float       armor;
	float       magicRes;
	float       baseAtk;
	float       bonusAtk;
	float       moveSpeed;
	int         lvl;
	float       expiry;
	float       crit;
	float       critMulti;
	float       abilityPower;
	float       atkSpeedMulti;
	float       attackRange;
	
	SpellCast   castingSpell;
	UnitInfo*   staticData;

	std::string nameTransformed;
};