#include "GameHud.h"
#include "Offsets.h"
#include "Memory.h"
#include <cstring>

void GameHud::ReadFromBaseAddress(int baseAddr)
{
	__try {
		int minimapObject = ReadInt(baseAddr + Offsets::MinimapObject);
		int minimapHud = ReadInt(minimapObject + Offsets::MinimapObjectHud);

		memcpy(&minimapSize, AsPtr(minimapHud + Offsets::MinimapHudSize), sizeof(Vector2));
		memcpy(&minimapPosition, AsPtr(minimapHud + Offsets::MinimapHudPos), sizeof(Vector2));
	}
	__except (1) {}
}
