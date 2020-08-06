  class CDF_Blk {
	class BaseUnit {
		ace_earplugs = 1;
		allowPlayerGoggles = 0;
		ace_medic = 1;

	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
	  		{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
		 	 {"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	headgear[] = {
		"RHS_altyn_novisor_bala",
		"RHSUSF_opscore_fg_pelt_cam",
		"RHSUSF_opscore_bk_pelt"
		};

	goggles[] = {
		"RHS_googles_clear",
		"RHS_googles_black",
		"RHSUSF_oakley_goggles_blk",
		"RHSUSF_oakley_goggles_clr"
		};

	uniform[] = {"RHSGREF_uniform_para_ttsko_urban"};
	uniformContents[] = {
		{"ACRE_SEM52SL",1},
		{"ACE_fieldDressing",4},
		{"ACE_elasticBandage",4},
		{"ACE_quikclot",4},
		{"ACE_morphine",2},
		{"ACE_adenosine",1},
		{"ACE_tourniquet",2},
		{"ACE_Splint",2},
		{"ACE_salineIV_250",1},
		{"ace_maptools",1},
		{"ACE_Flashlight_XL50",1}
		};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2},
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"ACE_salineIV_500",1},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class SL: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	headgear[] = {"rhsusf_opscore_bk_pelt"};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ITC_land_tablet_rover",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"ACE_salineIV_500",1},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}	
		};
	};

class TL: SL {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_MicroDAGR",1},
		{"ACE_IR_strobe_item",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"ACE_salineIV_500",1},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}	
		};
	};

class PL: SL {};
class ZEUS: SL {};

class FSO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};

	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2},
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"ITC_Land_b_uav_backpack"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ITC_Land_B_AR2i_Packed",2},
		{"ACE_UAVBattery",2},
		{"O_R_IR_grenade",2},
		{"CUP_30Rnd_762x39_CZ807",4}
		};
	};

class FO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"LaserDesignator_03"
	};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
	 	{"LaserBatteries",2},
		{"ITC_land_tablet_rover",1},
		{"ACE_salineIV_500",1},
		{"CUP_30Rnd_762x39_CZ807",6}
		};
	};

class RF: BaseUnit {
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"RHSUSF_100Rnd_762x51_m62_tracer",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",4}
		};
	};

class DEMO: BaseUnit {
	vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};

	backpack[] = {"B_Kitbag_sgg"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"DemoCharge_Remote_Mag",4},
		{"ACE_M26_clacker",1},
		{"ACE_salineIV_500",1},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class RTO: BaseUnit {
	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"CRAB_RadioBag_01_wdl_F"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",4},
		{"ACRE_PRC117F",1},
		{"ACE_salineIV_500",1}
		};
	};

class UGL: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_14_GL",
	  		{"CUP_30Rnd_762x39_CZ807","CUP_1rnd_HE_m203","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_14_GL",
		 	 {"CUP_30Rnd_762x39_CZ807","CUP_1rnd_HE_m203","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};

	backpack[] = {"B_Kitbag_sgg"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",4},
		{"RHS_Mag_M441_HE",16},
		{"RHS_Mag_M4009",4},
		{"RHS_Mag_M576",4};
		{"ACE_salineIV_500",1},	
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};
	
class MGL: BaseUnit {
	weapons[] = {
		{"CUP_glaunch_6G30",
			{"CUP_6Rnd_HE_GP25_M"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_yardage450"
	};

	vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
	vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",6},
		{"CUP_6Rnd_HE_GP25_M",2},
		{"RHS_mag_RGO",2}
		};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_6Rnd_HE_GP25_M",6},
		{"RHS_VG40TB",6},
		{"RHS_VG40MD",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};		

class DM: BaseUnit {
	weapons[] = {
		{"CUP_arifle_mk17_std_black",
			{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR","ACE_acc_pointer_green","RHSUSF_Acc_SU230A","bipod_02_f_blk"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	headgear[] = {"rhsusf_opscore_bk_pelt"};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",4},		
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"optic_TWS_mg",1},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",6},
		{"RHS_mag_20Rnd_SCAR_762x51_m62_TRACER",2},
		{"ACE_salineIV_500",1},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class SMG: BaseUnit {
	weapons[] = {
		{"RHSUSF_weap_MP7A2_grip1",
			{"RHSUSF_mag_40Rnd_46x30_JHP","ace_acc_pointer_green","RHS_acc_grip_rk2","optic_Holosight_smg_blk_F"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	headgear[] = {"RHS_Altyn_VisorDown"};

	vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
	vestContents[] = {
		{"RHSUSF_acc_rotex_mp7",1},
		{"RHSUSF_mag_40Rnd_46x30_JHP",6},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};

	backpack[] = {"B_FieldPack_green_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_mag_40Rnd_46x30_JHP",6},
		{"ACE_salineIV_500",1},
		{"ACE_CableTie",3},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class SG: BaseUnit {
	weapons[] = {
		{"CUP_sgun_M1014_Entry",
			{"CUP_6Rnd_B_Beneli_74Pellets","ace_acc_pointer_green","optic_Holosight_smg_blk_F"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	headgear[] = {"RHS_Altyn_VisorDown"};

	vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F"};
	vestContents[] = {
		{"CUP_6Rnd_B_Beneli_74Pellets",6},
		{"CUP_18Rnd_9x19_Phantom",4},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};

	backpack[] = {"B_FieldPack_green_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_6Rnd_B_Beneli_74Pellets",6},
		{"ACE_salineIV_500",1},
		{"ACE_CableTie",3},
		{"ACE_CTS9",2},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class LMG: BaseUnit {
	weapons[] = {
		{"CUP_lmg_m249_pip3",
			{"RHSUSF_200Rnd_556x45_soft_pouch_coyote","ace_acc_pointer_green","RHSUSF_Acc_SU230"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"RHSUSF_200Rnd_556x45_soft_pouch_coyote",1},
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_200Rnd_556x45_soft_pouch_coyote",4},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class GPMG: BaseUnit {
	weapons[] = {
		{"CUP_lmg_M60E4",
			{"RHSUSF_100Rnd_762x51_m61_ap","RHSUSF_Acc_SU230A","RHSUSF_Acc_SU230A"}
		},
	 	{"CUP_hgun_Phantom",
		{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {V_CarrierRigKBT_01_light_Olive_F};
	vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",2},
		{"RHSUSF_100Rnd_762x51_m62_tracer",2}
		};

	backpack[] = {"B_FieldPack_green_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_100Rnd_762x51_m61_ap",3},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2}
		};
	};

class GPMGA: BaseUnit {
	weapons[] = {
		{"CUP_CZ_BREN2_762_14",
			{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","RHSUSF_acc_g33_xps3","bipod_01_f_blk"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "binocular"
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"RHSUSF_100Rnd_762x51_m61_ap",3},
		{"RHSUSF_100Rnd_762x51_m62_tracer",2},
		{"ACE_salineIV_500",1}
		};
	};	

class MAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
	  		{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
		 	 {"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_MRAWS_green_rail_F",
			{"MRAWS_HEAT55_F", "ace_acc_pointer_green"}
		}
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",4},
		{"MRAWS_HEAT55_F",1},
		{"MRAWS_HE_F",1},
		{"ACE_salineIV_500",1}
		};
	};	
	
class MATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
	  		{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
		 	 {"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_vector"
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"MRAWS_HEAT55_F",2},
		{"MRAWS_HE_F",2},
		{"ACE_salineIV_500",1}
		};
	};

class HAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
	  		{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
		 	 {"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_o_titan_short_f",
			{"Titan_AT", "ace_acc_pointer_green"}
		}
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"CUP_30Rnd_762x39_CZ807",8},		
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"B_Kitbag_sgg"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHS_mag_RGO",2},
		{"RHS_mag_nspd",2},
		{"Titan_AT",1}
		};
	};	
	
class HATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_CZ_BREN2_762_8",
	  		{"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","CUP_optic_Eotech553_Black"},
	},
		{"CUP_CZ_BREN2_762_8",
		 	 {"CUP_30Rnd_762x39_CZ807","ace_acc_pointer_green","optic_Holosight_blk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_mx2a"
	};

	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
	{"O_NVGoggles_grn_f",1},
	{"CUP_30Rnd_762x39_CZ807",4},
	{"Titan_AT",1},
	{"Titan_AP",2}
		};
	};

class MED: BaseUnit {
	ace_medic = 2;
	
	vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_30Rnd_762x39_CZ807",6},
		{"ACE_elasticBandage",15},
		{"ACE_packingBandage",15},
		{"ACE_quikclot",15},
		{"ACE_fieldDressing",15},
	  	{"ACE_morphine",8},
		{"ACE_adenosine",8},
	  	{"ACE_epinephrine",8},
	  	{"ACE_salineIV_250",4},
		{"ACE_salineIV_500",4},
	  	{"ACE_salineiv",2},
	  	{"ACE_bloodIV",4},
		{"ACE_Splint",8},
		{"ACE_tourniquet",4},
	  	{"ACE_personalAidKit",1},
		{"ACE_surgicalKit",1}
		};
	};

class Pilot: BaseUnit {
	weapons[] = {
		{"RHSUSF_weap_MP7A2_grip1",
			{"RHSUSF_mag_40Rnd_46x30_JHP","ACE_acc_pointer_green","optic_Holosight_smg_blk_F","RHS_acc_grip_rk2"}
		},
		{	"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	headgear[] = {
		"RHSUSF_hgu56p_visor_white",
		"RHSUSF_hgu56p_visor_black",
		"RHSUSF_hgu56p_visor_pink"
		};

	goggles[] = {"RHS_Balaclava"};

	uniform[] = {"RHSGREF_uniform_para_ttsko_urban"};

	vest[] = {"V_CarrierRigKBT_01_Olive_F"};
	vestContents[] = {
		{"RHSUSF_acc_rotex_mp7",1},
		{"CUP_18Rnd_9x19_Phantom",2}
		};

	backpack[] = {"b_fieldpack_blk"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_mag_40Rnd_46x30_JHP",8},
		{"ACE_IR_strobe_item",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_RGO",2},		
		{"Toolkit",1},
		{"ACE_salineIV_500",1}
		};
	};	

class LargeGearCrate {
	vehCargoWeapons[] = {
		{"RHS_Weap_RshG2",6},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"CUP_30Rnd_762x39_CZ807",50},
		{"RHSUSF_100Rnd_762x51_m61_ap",10},
		{"RHSUSF_200Rnd_556x45_soft_pouch_coyote",10},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",10},
		{"RHS_Mag_M441_HE",20},
		{"RHS_mag_nspd",10},
		{"RHS_mag_RGO",20},
		{"RHSUSF_mag_40Rnd_46x30_JHP",10},
		{"CUP_6Rnd_B_Beneli_74Pellets",10},
		{"ACE_CTS9",20},
		{"DemoCharge_Remote_Mag",4}
	};
	vehCargoItems[] = {
		{"ACE_fieldDressing",20},
		{"ACE_quikclot",20},
		{"ACE_elasticBandage",20},
		{"ACE_packingBandage",20},
		{"ACE_Splint",10},
		{"ACE_tourniquet",10},
		{"ACE_morphine",10},
		{"ACE_adenosine",10},
		{"ACE_epinephrine",10},
		{"ACE_salineiv",4},
		{"ACE_salineIV_500",4},
		{"ACE_salineIV_250",4},
		{"ACE_M26_clacker",4},
		{"Toolkit",4},
		{"ACE_DefusalKit",4}
	};
	vehCargoRucks[] = {
		{"B_Kitbag_sgg",4}
		};
	};

class LauncherCrate {
	vehCargoWeapons[] = {
		{"RHS_Weap_RshG2",8},
		{"launch_MRAWS_green_rail_F",2},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"MRAWS_HEAT_F",10},
		{"MRAWS_HEAT55_F",10},
		{"MRAWS_HE_F",10}
	};
	vehCargoRucks[] = {
		{"B_Kitbag_sgg",4}
		};
	};

class DemoCrate {
	vehCargoMagazines[] = {
		{"DemoCharge_Remote_Mag",10},
		{"SatchelCharge_Remote_Mag",10},
		{"ACE_CTS9",20}
	};
	vehCargoItems[] = {
		{"ACE_M26_clacker",4},
		{"ACE_DefusalKit",4}
		};
	};	
};