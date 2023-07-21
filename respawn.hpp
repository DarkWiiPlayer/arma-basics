respawn = "BASE";
respawnTemplates[] = { "MenuInventory", "MenuPosition" };
respawnDelay = 5;
respawnOnStart = 1;

class CfgRoles {
	class Assault { displayName = "Assault"; }
	class Recon { displayName = "Recon"; }
	class Support { displayName = "Support"; }
	class Divers { displayName = "Divers"; }
}

class CfgRespawnInventory {
	class ctrg_rifleman
	{
		displayName = "Rifleman";
		role = "Assault";
		show = "true";
		uniformClass = "U_B_CTRG_1";
		backpack = "";
		weapons[] = {"Laserdesignator", "arifle_Mk20_plain_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "optic_Nightstalker"};
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_camo", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "muzzle_snds_m_snd_F", "acc_pointer_IR", "optic_Hamr"};
	};

	// ----------------------------------------

	class ctrg_demo {
		displayName = "Demolition Expert";
		role = "Support";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_Kitbag_cbr";
		weapons[] = {"Laserdesignator", "arifle_SPAR_01_snd_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "DemoCharge_Remote_Mag", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "DemoCharge_Remote_Mag", "APERSMineDispenser_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "SmokeShellRed", "SmokeShellRed"};
		items[] = {"FirstAidKit", "FirstAidKit", "optic_Nightstalker", "MineDetector", "ToolKit"};
		linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", "NVGogglesB_gry_F", "muzzle_snds_m_snd_F", "acc_pointer_IR", "optic_ERCO_snd_F", "", "", "", "", ""};
	}

	class ctrg_jtac {
		displayName = "JTAC";
		role = "Support";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_UAV_01_backpack_F";
		weapons[] = {"Laserdesignator", "arifle_SPAR_01_GL_blk_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "B_IR_Grenade", "B_IR_Grenade", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "UGL_FlareWhite_F", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "HandGrenade"};
		items[] = {"FirstAidKit", "FirstAidKit", "optic_Nightstalker"};
		linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "B_UavTerminal", "NVGogglesB_gry_F", "muzzle_snds_M", "acc_pointer_IR", "optic_ERCO_blk_F", "", "", "", "", ""};
	}

	class ctrg_machinegunner {
		displayName = "Machinegunner";
		role = "Support";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_AssaultPack_cbr";
		weapons[] = {"Laserdesignator", "arifle_SPAR_02_snd_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "150Rnd_556x45_Drum_Sand_Mag_F", "150Rnd_556x45_Drum_Sand_Mag_F", "150Rnd_556x45_Drum_Sand_Mag_F"};
		items[] = {"FirstAidKit", "FirstAidKit", "optic_Nightstalker", "MineDetector"};
		linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", "NVGogglesB_gry_F", "muzzle_snds_m_snd_F", "acc_pointer_IR", "optic_ERCO_snd_F", "bipod_01_F_snd", "", "", "", ""};
	}

	class ctrg_medic {
		displayName = "Medic";
		role = "Support";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_AssaultPack_khk";
		weapons[] = {"Laserdesignator", "arifle_SPAR_01_blk_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red"};
		items[] = {"FirstAidKit", "FirstAidKit", "optic_Nightstalker", "Medikit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"V_TacVest_khk", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_blk_F", "muzzle_snds_M", "acc_pointer_IR", "optic_Aco", "", "", "", "", ""};
	};

	// ----------------------------------------

	class ctrg_marksman {
		displayName = "Marksman";
		role = "Recon";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "";
		weapons[] = {"Laserdesignator", "arifle_SPAR_03_snd_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
		items[] = {"FirstAidKit", "optic_Nightstalker"};
		linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", "NVGogglesB_gry_F", "muzzle_snds_B_snd_F", "acc_pointer_IR", "optic_AMS_snd", "bipod_01_F_snd", "", "", "", ""};
	}

	class ctrg_scout {
		displayName = "Scout";
		role = "Recon";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "";
		weapons[] = {"Laserdesignator", "arifle_SPAR_01_blk_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red"};
		items[] = {"FirstAidKit", "FirstAidKit", "MineDetector"};
		linkedItems[] = {"V_Chestrig_rgr", "H_ShemagOpen_tan", "G_Combat", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", "NVGogglesB_gry_F", "muzzle_snds_M", "acc_pointer_IR", "optic_AMS", "", "", "", "", ""};
	}

	class ctrg_sniper {
		displayName = "Sniper";
		role = "Recon";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_AssaultPack_rgr";
		weapons[] = {"Laserdesignator", "srifle_DMR_02_sniper_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSTripMine_Wire_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag"};
		items[] = {"FirstAidKit", "optic_Nightstalker", "MineDetector", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"V_Chestrig_rgr", "H_ShemagOpen_tan", "G_Combat", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS", "NVGogglesB_gry_F", "muzzle_snds_338_sand", "acc_pointer_IR", "optic_AMS_snd", "bipod_01_F_snd", "", "", "", ""};
	}

	class ctrg_assault {
		displayName = "Assault";
		role = "Recon";
		show = "true";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		backpack = "B_AssaultPack_rgr";
		weapons[] = {"Rangefinder", "arifle_SPAR_01_GL_snd_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_red", "MiniGrenade", "MiniGrenade", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "MiniGrenade", "MiniGrenade", "HandGrenade", "HandGrenade", "150Rnd_556x45_Drum_Sand_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
		items[] = {"FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F", "H_HelmetB_TI_arid_F", "G_Balaclava_TI_G_blk_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_gry_F", "muzzle_snds_m_snd_F", "acc_pointer_IR", "optic_ERCO_snd_F", "", "", "", "", ""};
	};

	// ----------------------------------------

	class blufor_diver
	{
		displayName = "Assault Diver";
		role = "Divers";
		show = "true";
		uniformClass = "U_B_Wetsuit";
		backpack = "";
		weapons[] = {"Laserdesignator", "arifle_SDAR_F", "Throw", "Put"};
		magazines[] = {"20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red"};
		items[] = {"FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"V_RebreatherB", "", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "B_UavTerminal", "NVGogglesB_blk_F", "", "", "", "", "", "", "", ""};
	};

	class blufor_diver_medic
	{
		displayName = "Diver Medic";
		role = "Divers";
		show = "true";
		uniformClass = "U_B_Wetsuit";
		backpack = "B_AssaultPack_blk";
		weapons[] = {"arifle_SDAR_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Chemlight_blue", "Chemlight_blue", "SmokeShellBlue", "20Rnd_556x45_UW_mag"};
		items[] = {"FirstAidKit", "Medikit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"V_RebreatherB", "", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "", "", "", "", "", "", "", ""};
	};

	class blufor_diver_demo
	{
		displayName = "Diver Explosives Specialist";
		role = "Divers";
		show = "true";
		uniformClass = "U_B_Wetsuit";
		backpack = "B_AssaultPack_blk_DiverExp";
		weapons[] = {"arifle_SDAR_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_red", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Chemlight_blue", "Chemlight_blue", "20Rnd_556x45_UW_mag", "SmokeShellBlue", "SmokeShellRed", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"};
		items[] = {"FirstAidKit", "ToolKit", "MineDetector"};
		linkedItems[] = {"V_RebreatherB", "", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "", "", "", "", "", "", "", ""};
	};
}
