#include "Offsets.h"

Offsets::Offsets() {};

std::string Offsets::GameVersion             = "11.3.356.7268";

int Offsets::ObjectManager                   = 0x016b2a74;
int Offsets::Renderer                        = 0x02f73e78;
int Offsets::ViewMatrix                      = 0x02f71098;
int Offsets::MinimapObject                   = 0x02F6BBBC;
int Offsets::LocalPlayer                     = 0x02f4f764;
int Offsets::GameTime                        = 0x02f4759c;
int Offsets::FnCharacterDataStackUpdate      = 0x0010e530;

int Offsets::ProjectionMatrix                = ViewMatrix + 16*sizeof(float);
										    
int Offsets::ObjIndex                        = 0x20;
int Offsets::ObjTeam                         = 0x4C;
int Offsets::ObjNetworkID                    = 0xCC;
int Offsets::ObjPos                          = 0x1d8;
int Offsets::ObjVisibility                   = 0x270;
int Offsets::ObjSpawnCount                   = 0x284;
int Offsets::ObjSrcIndex                     = 0x290;
int Offsets::ObjMana                         = 0x298;
int Offsets::ObjHealth                       = 0xD98;
int Offsets::ObjMaxHealth                    = 0xDA8;
int Offsets::ObjArmor                        = 0x1298;
int Offsets::ObjMagicRes                     = 0x12A0;
int Offsets::ObjBaseAtk                      = 0x1270;
int Offsets::ObjBonusAtk                     = 0x11F0;
int Offsets::ObjMoveSpeed                    = 0x12B0;
int Offsets::ObjSpellBook                    = 0x2b80;
int Offsets::ObjName                         = 0x2F6C;
int Offsets::ObjLvl                          = 0x36BC;
int Offsets::ObjExpiry                       = 0x298; 
int Offsets::ObjCrit                         = 0x1294;
int Offsets::ObjCritMulti                    = 0x1284;
int Offsets::ObjAbilityPower                 = 0x1200;
int Offsets::ObjAtkSpeedMulti                = 0x126C;
int Offsets::ObjAtkRange                     = 0x12B8;

int Offsets::ObjItemList                     = 0x3708;
int Offsets::ItemListItem                    = 0xC;
int Offsets::ItemInfo                        = 0x20;
int Offsets::ItemInfoId                      = 0x68;
										    
int Offsets::RendererWidth                   = 0x10;
int Offsets::RendererHeight                  = 0x14;
										    
int Offsets::SpellSlotLevel                  = 0x20;
int Offsets::SpellSlotTime                   = 0x28;
int Offsets::SpellSlotValue                  = 0x94;
int Offsets::SpellSlotSpellInfo              = 0x13C;
int Offsets::SpellInfoSpellData              = 0x44;
int Offsets::SpellDataSpellName              = 0x64;
int Offsets::SpellDataMissileName            = 0x64;
										    
int Offsets::UnderMouseObject                = 0x2300BD8;
										    
int Offsets::ObjectMapCount                  = 0x2C;
int Offsets::ObjectMapRoot                   = 0x28;
int Offsets::ObjectMapNodeNetId              = 0x10;
int Offsets::ObjectMapNodeObject             = 0x14;
										    
int Offsets::MissileSpellInfo                = 0x230;
int Offsets::MissileSrcIdx                   = 0x290;
int Offsets::MissileDestIdx                  = 0x2E8;
int Offsets::MissileStartPos                 = 0x2A8;
int Offsets::MissileEndPos                   = 0x2B4;
										    
int Offsets::MinimapObjectHud                = 0xCC;
int Offsets::MinimapHudPos                   = 0x5C;
int Offsets::MinimapHudSize                  = 0x64;          // has values between (191, 191) and (383, 383)
										    
int Offsets::CharacterDataStack              = 0x2F60;
int Offsets::CharacterDataStackSkinId        = 0x18;