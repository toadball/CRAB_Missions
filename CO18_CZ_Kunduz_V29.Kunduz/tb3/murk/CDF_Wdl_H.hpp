  class CDF_Wdl_H {
	class BaseUnit {
		ace_earplugs = 1;
		allowPlayerGoggles = 0;
		ace_medic = 1;

	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
	}
		};

		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	headgear[] = {"RHSUSF_opscore_mar_fg_pelt"};

	goggles[] = {
		"RHS_googles_clear",
		"RHS_googles_black",
		"RHSUSF_oakley_goggles_blk",
		"RHSUSF_oakley_goggles_clr"
		};

	uniform[] = {"rhs_uniform_emr_patchless"};
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
		{"ACE_Flashlight_XL50",1}
		};

	vest[] = {"RHS_6B23_6Sh116_OD"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class SL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_ERCO_Khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_ERCO_Khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_ERCO_Khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_ERCO_Khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	headgear[] = {"RHSUSF_opscore_mar_fg"};

	vest[] = {"RHS_6b23_Digi_6Sh92_Headset_Spetsnaz"};

	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ITC_land_tablet_rover",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}	
		};
	};

class TL: SL {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
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
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}	
		};
	};

class PL: SL {};
class ZEUS: SL {};

class FSO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};

	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	vest[] = {"RHS_6b23_Digi_6Sh92_Radio"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",4},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"ITC_Land_i_uav_backpack"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
		{"ITC_Land_B_AR2i_Packed",2},
		{"ACE_UAVBattery",2},
		{"O_R_IR_grenade",2},
		{"CUP_30Rnd_556x45_EMAG_Olive",4}
		};
	};

class FO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
	  		{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"LaserDesignator_03"
	};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACRE_PRC152",1},
		{"ACE_MicroDAGR",1},
	 	{"LaserBatteries",2},
		{"ITC_land_tablet_rover",1},
		{"ACE_entrenchingtool",1},
		{"ACE_salineIV_500",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6}
		};
	};

class RF: BaseUnit {
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"150Rnd_556x45_Drum_Green_Mag_F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",4}
		};
	};

class DEMO: BaseUnit {
	backpack[] = {"B_Carryall_green_f"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"SatchelCharge_Remote_Mag",2},
		{"ACE_M26_clacker",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class RTO: BaseUnit {
	backpack[] = {"CRAB_RadioBag_01_eaf_F"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",4},
		{"ACRE_PRC117F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};	

class UGL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_EGLM_woodland",
	  		{"CUP_30Rnd_556x45_EMAG_Olive","CUP_1rnd_HE_m203","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_EGLM_woodland",
		 	 {"CUP_30Rnd_556x45_EMAG_Olive","CUP_1rnd_HE_m203","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
		{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {"RHS_6B23_6Sh116_VOG_OD"};

	backpack[] = {"B_ViperHarness_Oli_F"};	
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"CUP_1rnd_HE_m203",12},
		{"CUP_1rnd_HEDP_m203",12},
		{"1Rnd_SmokeOrange_Grenade_shell",4},
		{"ACE_salineIV_500",1},	
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
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

	vest[] = {"RHS_6B43"};
	vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",6},
		{"ace_maptools",1}
		};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"CUP_6Rnd_HE_GP25_M",8},
		{"RHS_VG40TB",6},
		{"RHS_VG40MD",6},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",4}
		};
	};		

class DM: BaseUnit {
	weapons[] = {
		{"CUP_arifle_mk20_woodland",
			{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR","ACE_acc_pointer_green","RHSUSF_Acc_SU230A","bipod_02_f_lush"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		"ace_vector"
	};

	headgear[] = {"RHSUSF_opscore_mar_fg"};

	vest[] = {"RHS_6b23_Digi_6Sh92_Headset_Spetsnaz"};
	vestContents[] = {
		{"RHSGREF_sdn6_silencer",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"optic_TWS_mg",1},
		{"ACE_entrenchingtool",1},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",10},
		{"RHS_mag_20Rnd_SCAR_762x51_m62_TRACER",2},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class LMG: BaseUnit {
	weapons[] = {
		{"CUP_arifle_Mk16_SV_woodland",
			{"150Rnd_556x45_Drum_Green_Mag_F","ace_acc_pointer_green","optic_Holosight_khk_F","bipod_02_F_lush"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {"RHS_6B23_6Sh116_OD"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"150Rnd_556x45_Drum_Green_Mag_F",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class GPMG: BaseUnit {
	weapons[] = {
		{"CUP_lmg_M60E4_jungle",
			{"RHSUSF_100Rnd_762x51_m61_ap","ace_acc_pointer_green","optic_MRCO"}
		},
	 	{"CUP_hgun_Phantom",
		{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	vest[] = {"RHS_6B43"};
	vestContents[] = {
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"RHSUSF_100Rnd_762x51_m61_ap",3},
		{"RHSUSF_100Rnd_762x51_m62_tracer",2},
		{"ACE_salineIV_500",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2}
		};
	};

class GPMGA: BaseUnit {
	weapons[] = {
		{"CUP_arifle_Mk16_SV_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_ERCO_Khk_F","bipod_02_F_lush"}
		},
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "binocular"
	};

	vest[] = {"RHS_6B23_6Sh116_OD"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",8},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"150Rnd_556x45_Drum_Green_Mag_Tracer_F",2},
		{"RHSUSF_100Rnd_762x51_m61_ap",4},
		{"RHSUSF_100Rnd_762x51_m62_tracer",2},
		{"ACE_salineIV_500",1}
		};
	};	

class MAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_MRAWS_green_rail_F",
			{"MRAWS_HEAT55_F", "ace_acc_pointer_green"}
		}
	};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"MRAWS_HEAT55_F",1},
		{"MRAWS_HE_F",1},
		{"ACE_salineIV_500",1}
		};
	};	
	
class MATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_vector"
	};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
		{"MRAWS_HEAT55_F",2},
		{"MRAWS_HE_F",2},
		{"ACE_salineIV_500",1}
		};
	};

class HAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
	  		{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
		{"launch_o_titan_short_f",
			{"Titan_AT", "ace_acc_pointer_green"}
		}
	};

	vest[] = {"RHS_6B23_Digi"};
	vestContents[] = {
		{"RHSUSF_acc_rotex5_grey",1},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"B_ViperHarness_Oli_F"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",8},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_nspd",2},
		{"Titan_AT",1}
		};
	};	
	
class HATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_Mk16_CQC_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_CQC_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_AFG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	},
		{"CUP_arifle_Mk16_STD_FG_woodland",
			{"CUP_30Rnd_556x45_EMAG_Olive","ace_acc_pointer_green","optic_Holosight_khk_F"},
	}
		},	
	 	{"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	  "ace_mx2a"
	};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
	{"O_NVGoggles_grn_f",1},
	{"ACE_entrenchingtool",1},
	{"CUP_30Rnd_556x45_EMAG_Olive",4},
	{"Titan_AT",1},
	{"Titan_AP",2}
		};
	};

class MED: BaseUnit {
	ace_medic = 2;
	
	vest[] = {"RHS_6B23_Digi_Medic"};

	backpack[] = {"B_Carryall_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"ACE_entrenchingtool",1},
		{"CUP_30Rnd_556x45_EMAG_Olive",6},
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
			{"RHSUSF_mag_40Rnd_46x30_JHP","ACE_acc_pointer_green","optic_Holosight_smg_blk_F","rhs_acc_grip_rk2"}
		},
		{	"CUP_hgun_Phantom",
			{"CUP_18Rnd_9x19_Phantom"}
		},
	};

	headgear[] = {
		"RHSUSF_hgu56p_visor_white",
		"RHSUSF_hgu56p_black",
		"RHSUSF_hgu56p_visor_mask_pink"
		};

	goggles[] = {"rhs_balaclava1_olive"};

	uniform[] = {"RHSGREF_uniform_olive"};

	vest[] = {"V_TacVest_Oli"};
	vestContents[] = {
		{"RHSUSF_acc_rotex_mp7",1},
		{"CUP_18Rnd_9x19_Phantom",2},
		{"ace_maptools",1}
		};

	backpack[] = {"b_fieldpack_green_f"};
	backpackContents[] = {
		{"O_NVGoggles_grn_f",1},
		{"RHSUSF_mag_40Rnd_46x30_JHP",8},
		{"ACE_IR_strobe_item",1},
		{"RHS_mag_nspd",2},
		{"RHS_mag_rgd5",2},		
		{"Toolkit",1},
		{"ACE_salineIV_500",1}
		};
	};	

class LargeGearCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_M72A7",6},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"CUP_30Rnd_556x45_EMAG_Olive",40},
		{"150Rnd_556x45_Drum_Green_Mag_F",10},
		{"RHSUSF_100Rnd_762x51_m61_ap",10},
		{"RHS_mag_20Rnd_SCAR_762x51_m80a1_EPR",10},
		{"CUP_1rnd_HEDP_m203",20},
		{"RHS_mag_nspd",10},
		{"RHS_mag_rgd5",20},
		{"ClaymoreDirectionalMine_Remote_Mag",4},
		{"SLAMDirectionalMine_Wire_Mag",4},
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
		{"B_Carryall_green_f",4}
		};
	};

class LauncherCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_M72A7",8},
		{"launch_MRAWS_green_rail_F",2},
		{"ace_vector",2}
	};
	vehCargoMagazines[] = {
		{"MRAWS_HEAT_F",10},
		{"MRAWS_HEAT55_F",10},
		{"MRAWS_HE_F",10}
	};
	vehCargoRucks[] = {
		{"B_Carryall_green_f",4}
		};
	};

class DemoCrate {
	vehCargoMagazines[] = {
		{"DemoCharge_Remote_Mag",10},
		{"SatchelCharge_Remote_Mag",10},
		{"APERSMineDispenser_Mag",10}
	};
	vehCargoItems[] = {
		{"ACE_M26_clacker",4},
		{"ACE_DefusalKit",4}
		};
	};	
};