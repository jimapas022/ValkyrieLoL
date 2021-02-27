#pragma once

#include "Offsets.h"
#include <map>
#include <vector>
#include <set>


class SkinChanger {

public:

	static void   ImGuiDraw();

	/// Refreshe the skin. When a champion dies the skin is reset so this is necessarry
	static void   Refresh();

private:
	static int    CurrentSkinId;
	static int    CurrentSkinIndex;
	static int    CurrentChromaIndex;

	static bool   HasDied;
};