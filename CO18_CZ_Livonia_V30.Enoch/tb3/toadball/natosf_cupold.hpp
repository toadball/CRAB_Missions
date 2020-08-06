class NATOSF_CUPOLD_WDL {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {
        {"CUP_arifle_Colt727",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}},
        {"CUP_arifle_M16A2",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    headgear[] = {
      "rhs_Booniehat_m81",
      "rhs_Booniehat_m81",
      "rhs_Booniehat_m81",
      "rhs_Booniehat_m81",
      "rhs_Booniehat_m81",
      "H_Watchcap_camo",
      "H_MilCap_grn",
      "H_Booniehat_mgrn",
      "H_Bandanna_camo",
      "H_Bandanna_khk"
    };
    goggles[] = { };
    uniform[] = {"rhsgref_uniform_woodland"};

      uniformContents[] = {
        {"ACE_fieldDressing",5},
        {"ACE_packingBandage",5},
        {"ACE_quikclot",5},
        {"ACE_Tourniquet",2},
        {"ACE_splint",1},
        {"ACE_morphine",1},
        {"ACE_epinephrine",1},
        {"ACE_adenosine",1},
        {"ACE_salineIV_500",1},
        {"ACE_Flashlight_MX991",1}
      };

    vest[] = {"rhsgref_alice_webbing"};

      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };

    backpack[] = {"rhsgref_wdl_alicepack"};
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_Colt727",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}},
        {"CUP_arifle_M16A2",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}},
      "Binocular"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_Dagr",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","rhsusf_ANPVS_15"};
  };
  class TL: PL {};
  class FSO: PL {
    vestContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACRE_PRC148",1},
      {"ACE_Dagr",1}
    };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"Laserdesignator_01_khk_F",1},
        {"Laserbatteries",3},
        {"ACRE_PRC148",1}
      };

  };
  class MED: BaseUnit {
    ace_medic = 2;
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"B_IR_Grenade",1},
        {"ACE_fieldDressing",20},
        {"ACE_packingBandage",20},
        {"ACE_quikclot",10},
        {"ACE_elasticBandage",10},
        {"ACE_morphine",10},
        {"ACE_epinephrine",10},
        {"ACE_adenosine",10},
        {"ACE_salineIV_250",4},
        {"ACE_salineIV_500",4},
        {"ACE_bloodIV",2},
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_Colt727_M203",{"rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell"}},
        {"CUP_arifle_M16A2_GL",{"rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell"}}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
      vestContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",2},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"1Rnd_HE_Grenade_shell",8},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
        {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"1Rnd_HE_Grenade_shell",10},
        {"1Rnd_Smoke_Grenade_Shell",4},
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",2}
      };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {"rhs_weap_m249",{"rhsusf_200Rnd_556x45_mixed_soft_pouch"}},
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
      vestContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch",3},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"rhsusf_100Rnd_762x51_m62_tracer",2}
      };
  };
  class GPMG: BaseUnit {
    weapons[] = {
      {"CUP_lmg_M60",{"rhsusf_100Rnd_762x51"}},
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}}
    };
      vestContents[] = {
        {"rhsusf_100Rnd_762x51",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",1},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      //backpack[]={"rhsusf_falconii_coy"};
      backpackContents[] = {
        {"rhsusf_100Rnd_762x51",4},
        {"rhsusf_100Rnd_762x51_m62_tracer",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
      };
  };
  class DMR: BaseUnit {
    weapons[] = {
      {"rhs_weap_m14_rail",
        {"optic_KHS_old","rhsusf_20Rnd_762x51_m118_special_Mag"}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}},
      "Binocular"
    };
      vestContents[] = {
        {"rhsusf_20Rnd_762x51_m118_special_Mag",2},
        {"rhsusf_20Rnd_762x51_m62_Mag",2},
        {"rhsusf_mag_15Rnd_9x19_JHP",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_MapTools",1}
      };
      backpackContents[] = {
        {"rhsusf_20Rnd_762x51_m118_special_Mag",4},
        {"rhsusf_20Rnd_762x51_m62_Mag",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"rhsusf_200Rnd_556x45_mixed_soft_pouch",1},
        {"rhsusf_100Rnd_762x51_m62_tracer",2}
      };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {
        {"CUP_arifle_Colt727",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}},
        {"CUP_arifle_M16A2",{"rhs_mag_30Rnd_556x45_M855A1_Stanag"}}
      },
      {"rhsusf_weap_m9",{"rhsusf_mag_15Rnd_9x19_JHP"}},
      {"rhs_weap_maaws",{"MRAWS_HEAT55_F"}}
    };

    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class MATA: BaseUnit {
    backpackContents[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2},
      {"rhsusf_mag_15Rnd_9x19_JHP",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class PILOT: baseUnit {};

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"rhs_weap_maaws",2},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HE_F",12},
      {"MRAWS_HEAT55_F",12},
      {"MRAWS_HEAT_F",6}
    };
    vehCargoRucks[] = {
      {"rhsgref_wdl_alicepack",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"Binocular",2}
    };
    vehCargoMagazines[] = {
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag",32},
      {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",16},
      {"rhsusf_200Rnd_556x45_mixed_soft_pouch",8},
      {"rhsusf_20Rnd_762x51_m118_special_Mag",8},
      {"rhsusf_20Rnd_762x51_m62_Mag",4},
      {"rhsusf_100Rnd_762x51_m62_tracer",10},
      {"HandGrenade",16},
      {"SmokeShell",16},
      {"1Rnd_HE_Grenade_shell",20},
      {"DemoCharge_Remote_Mag",16}
    };
    vehCargoItems[] = {
      {"ToolKit",1},
      {"ACE_M26_Clacker",4},
      {"ACE_DefusalKit",2},
      {"ACE_fieldDressing",20},
      {"ACE_packingBandage",20},
      {"ACE_quikclot",20},
      {"ACE_Tourniquet",8},
      {"ACE_splint",4},
      {"ACE_morphine",4},
      {"ACE_epinephrine",4},
      {"ACE_adenosine",4},
      {"ACE_salineIV_500",4},
      {"ACE_Flashlight_MX991",4},
      {"ACE_MapTools",4}
    };
    vehCargoRucks[] = {
      {"rhsgref_wdl_alicepack",4}
    };
  };
};
class NATOSF_CUPOLD_DES: NATOSF_CUPOLD_WDL {
  class PL: PL {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class ZEUS: ZEUS {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class TL: TL {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class FSO: FSO {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class MED: MED {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class RF: RF {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class UGL: UGL {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class LMG: LMG {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class DMR: DMR {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class MAT: MAT {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class MATA: MATA {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };
  class PILOT: PILOT {
    headgear[] = {
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Booniehat_tan",
      "H_Watchcap_khk",
      "H_MilCap_grn",
      "H_Bandanna_sgg",
      "H_Bandanna_sand"
    };
    uniform[] = {"rhsgref_uniform_3color_desert"};
    backpack[] = {"rhsgref_hidf_alicepack"};
  };

};
