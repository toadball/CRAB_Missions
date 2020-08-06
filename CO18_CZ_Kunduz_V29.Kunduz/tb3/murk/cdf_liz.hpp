  class CDF_Rus {
	class BaseUnit {
		ace_earplugs = 1;
		allowPlayerGoggles = 0;
		ace_medic = 1;

	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
	}
		};

		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	headgear[] = {
		"RHS_6b27m_green",
		"RHS_6b27m_green_bala",
		"RHS_6b27m_ml",
		"RHS_6b27m_ml_bala",
		};

	goggles[] = {
		"RHS_googles_clear",
		"RHS_googles_black",
		"RHSUSF_oakley_goggles_blk",
		"RHSUSF_oakley_goggles_clr"
		};

	uniform[] = {"RHS_uniform_mflora_patchless"};
	uniformContents[] = {
		{"ACRE_SEM52SL",1},
		{"ACE_maptools",1},
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

	vest[] = {"RHS_6b23_ML_6Sh92"};
	vestContents[] = {
		{"RHS_30Rnd_762x39mm_89",4},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2},
		{"RHS_Weap_6p53",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class SL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
		"Ace_Vector"
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Headset_Mapcase"};

	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACRE_PRC152",1},
		{"ACE_DAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}	
		};
	};

class TL: SL {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Headset"};

	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_DAGR",1},
		{"ACE_IR_strobe_item",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}	
		};
	};

class PL: SL {};
class ZEUS: SL {};

class FO: SL {
	assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
		"LaserDesignator_03"
	};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACRE_PRC152",1},
		{"ACE_DAGR",1},
		{"RHS_Mag_NSPD",6},
	 	{"LaserBatteries",2},
		{"ACE_entrenchingtool",1},
		{"ACE_salineIV_500",1},
		{"RHS_30Rnd_762x39mm_89",6}
		};
	};

class RF: BaseUnit {
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_100Rnd_762x54mmR_7BZ3",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",4}
		};
	};

class FSO: FO {};

class DEMO: BaseUnit {
	backpack[] = {"RHSGREF_ttsko_alicepack"};	
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"SatchelCharge_Remote_Mag",2},
		{"ACE_M26_clacker",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class RTO: BaseUnit {
	backpack[] = {"CRAB_RadioBag_01_eaf_F"};	
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",4},
		{"ACRE_PRC117F",1},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};	

class UGL: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_GL_top_rail",
			{"RHS_30Rnd_762x39mm_89","RHS_VOG25","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_GL_top_rail",
			{"RHS_30Rnd_762x39mm_89","RHS_VOG25","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	};

	vest[] = {"RHS_6b23_ML_6Sh92_Vog"};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};	
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_VOG25P",8},
		{"RHS_VOG25",12},
		{"RHS_VG40TB",4},
		{"RHS_VG40MD",4},
		{"ACE_salineIV_500",1},	
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};
	
class MGL: BaseUnit {
	weapons[] = {
		{"CUP_glaunch_6G30",
			{"CUP_6Rnd_HE_GP25_M"}
		},
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	};

	vest[] = {"RHS_6b23_ML_Engineer"};
	vestContents[] = {
		{"RHS_Weap_6p53",6}
		};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"CUP_6Rnd_HE_GP25_M",8},
		{"RHS_VG40TB",6},
		{"RHS_VG40MD",6},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",4}
		};
	};		

class DM: BaseUnit {
	weapons[] = {
		{"rhs_weap_svds",
			{"RHS_10Rnd_762x54mmR_7N14","RHS_acc_pso1m2"}
		},
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
		"binocular"
	};

	vest[] = {"RHS_6B23_ML_Sniper"};
	vestContents[] = {
		{"RHS_10Rnd_762x54mmR_7N14",8},
		{"ACE_10Rnd_762x54_Tracer_mag",2},
		{"RHS_Weap_6p53",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"CUP_Optic_Goshawk",1},
		{"ACE_entrenchingtool",1},
		{"RHS_10Rnd_762x54mmR_7N14",4},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};
	};

class LMG: BaseUnit {
	weapons[] = {
		{"arifle_RPK12_F",
			{"75rnd_762x39_AK12_Mag_F","RHS_acc_pso1m21"}
		},
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	};

	vest[] = {"RHS_6b23_ML_Vydra_3m"};
	vestContents[] = {
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2},
		{"RHS_Weap_6p53",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"75rnd_762x39_AK12_Mag_F",8},
		{"ACE_salineIV_500",1},
		};
	};

class GPMG: BaseUnit {
	weapons[] = {
		{"CUP_lmg_Pecheneg",
			{"RHS_100Rnd_762x54mmR_7BZ3"}
		},
	 	{"RHS_Weap_6p53",
		{"RHS_Weap_6p53"}
		},
	};

	vest[] = {"RHS_6Sh92_VSR"};
	vestContents[] = {
		{"RHS_Weap_6p53",2},
		{"ACE_salineIV_500",1},
		{"RHS_mag_rdg2_black",2},
		{"RHS_mag_rgd5",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_100Rnd_762x54mmR_7BZ3",3},
		{"RHS_100Rnd_762x54mmR_green",1}
		};
	};

class GPMGA: BaseUnit {
	weapons[] = {
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","optic_Arco_AK_blk_F"}
		},
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	  "binocular"
	};

	vest[] = {"RHS_6Sh92_VSR"};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_100Rnd_762x54mmR_7BZ3",3},
		{"ACE_salineIV_500",1}
		};
	};	

class MAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
		{"RHS_Weap_RPG7",
			{"RHS_RPG7_PG7V_Mag", "RHS_Acc_PGO7V3"}
		}
	};

	vest[] = {"RHS_6b23_ML_6Sh92"};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_RPG7_PG7V_Mag",1},
		{"RHS_RPG7_OG7V_Mag",1},
		{"ACE_salineIV_500",1}
		};
	};	
	
class MATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	  "ACE_Yardage450"
	};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
		{"RHS_RPG7_PG7V_Mag",2},
		{"RHS_RPG7_OG7V_Mag",3},
		{"ACE_salineIV_500",1}
		};
	};

class HAT: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
		{"RHS_Weap_RPG7",
			{"RHS_RPG7_PG7VL_Mag", "RHS_Acc_PGO7V3"}
		}
	};

	vest[] = {"RHS_6b23_ML_Engineer"};
	vestContents[] = {
		{"RHS_Weap_6p53",2},
		{"RHS_30Rnd_762x39mm_89",2}
		};

	backpack[] = {"CUP_B_AlicePack_Bedroll"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",8},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_rdg2_black",2},
		{"RHS_RPG7_TBG7V_Mag"},
		{"RHS_RPG7_PG7VR_Mag",1}
		};
	};	
	
class HATA: BaseUnit {
	weapons[] = {
			{
		{"CUP_arifle_AK109_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK104_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	},
		{"CUP_arifle_AK103_top_rail",
			{"RHS_30Rnd_762x39mm_89","rhs_acc_perst1ik_ris","optic_Arco_AK_blk_F"},
	}
		},	
	 	{"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	  "ACE_Yardage450"
	};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
	{"rhsusf_ANPVS_15",1},
	{"ACE_entrenchingtool",1},
	{"RHS_30Rnd_762x39mm_89",4},
	{"RHS_RPG7_PG7VR_Mag",1},
	{"RHS_RPG7_TBG7V_Mag",2}
		};
	};

class MED: BaseUnit {
	ace_medic = 2;
	
	vest[] = {"RHS_6B23_ML_Medic"};

	backpack[] = {"RHSGREF_ttsko_alicepack"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"ACE_entrenchingtool",1},
		{"RHS_30Rnd_762x39mm_89",6},
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
		{"CUP_smg_vityaz_vfg_top_rail",
			{"CUP_30Rnd_9x19AP_Vityaz","rhs_acc_perst1ik_ris"}
		},
		{	"RHS_Weap_6p53",
			{"RHS_Weap_6p53"}
		},
	};

	headgear[] = {"rhs_gssh18"};

	goggles[] = {"G_Aviator"};

	uniform[] = {"rhs_uniform_m88_patchless"};

	vest[] = {"RHS_6B5_Rifleman_khak"};
	vestContents[] = {
		{"RHS_Weap_6p53",2},
		{"CUP_30Rnd_9x19AP_Vityaz",2},
		{"RHS_mag_rgd5",2},
		{"RHS_mag_rdg2_black",2}
		};

	backpack[] = {"CUP_B_RPGPack_Khaki"};
	backpackContents[] = {
		{"rhsusf_ANPVS_15",1},
		{"CUP_30Rnd_9x19AP_Vityaz",2},
		{"ACE_IR_strobe_item",1},
		{"RHS_Mag_NSPD,2"},
		{"Toolkit",1},
		{"ACE_salineIV_500",1}
		};
	};	

class LargeGearCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_RPG26",6},
		{"RHS_weap_RSHG2",4},
		{"binocular",2}
	};
	vehCargoMagazines[] = {
		{"RHS_30Rnd_762x39mm_89",40},
		{"75rnd_762x39_AK12_Mag_F",10},
		{"RHS_100Rnd_762x54mmR_7BZ3",10},
		{"RHS_100Rnd_762x54mmR_green",5},
		{"RHS_10Rnd_762x54mmR_7N14",20},
		{"ACE_10Rnd_762x54_Tracer_mag",10},
		{"RHS_VOG25",20},
		{"RHS_VG40TB",10},
		{"RHS_VG40MD",10},
		{"RHS_mag_rdg2_black",10},
		{"RHS_Mag_NSPD",10},
		{"RHS_mag_rgd5",20},
		{"DemoCharge_Remote_Mag",8}
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
		{"RHSGREF_ttsko_alicepack",4}
		};
	};

class LauncherCrate {
	vehCargoWeapons[] = {
		{"RHS_weap_RPG26",6},
		{"RHS_weap_RSHG2",4},
		{"RHS_Weap_RPG7",2},
		{"ACE_Yardage450",2}
	};
	vehCargoMagazines[] = {
		{"RHS_RPG7_PG7VL_Mag",6},
		{"RHS_RPG7_PG7VR_Mag",4},
		{"RHS_RPG7_OG7V_Mag",6},
		{"RHS_RPG7_TBG7V_Mag",4}
	};
	vehCargoItems[] = {
		{"RHS_Acc_PGO7V3",2}
	};
	vehCargoRucks[] = {
		{"RHSGREF_ttsko_alicepack",4}
		};
	};

class DemoCrate {
	vehCargoMagazines[] = {
		{"DemoCharge_Remote_Mag",10},
		{"SatchelCharge_Remote_Mag",10},
		{"RHS_Mine_OZM72_c_mag",10}
	};
	vehCargoItems[] = {
		{"ACE_M26_clacker",4},
		{"ACE_DefusalKit",4}
		};
	};	
};