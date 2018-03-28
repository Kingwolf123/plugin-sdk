/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CZoneInfo
{
public:
	char GangDensity[10];
	char DrugDealerCounter;
	RwRGBA ZoneColor;
	char Flags1;
	char Flags2;
};

VALIDATE_SIZE(CZoneInfo, 0x11);