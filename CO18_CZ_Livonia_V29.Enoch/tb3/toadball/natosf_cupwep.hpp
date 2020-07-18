class natosf_cupwep_wdl {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"CUP_arifle_DSA_SA58_OSW_VFG",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhs_mag_20Rnd_762x51_m80a1_fnfal"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","CUP_NVG_GPNVG_black"};

    headgear[] = {"H_HelmetB_plain_wdl","H_HelmetB_light_wdl","H_HelmetSpecB_wdl"};
    goggles[] = {"G_Combat","G_Combat_Goggles_tna_F","G_Tactical_Clear"};
    uniform[] = {
      "U_B_CombatUniform_tshirt_mcam_wdL_f",
      "U_B_CombatUniform_vest_mcam_wdl_f",
      "U_B_CombatUniform_mcam_wdl_f"
    };

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
      {"ACE_Flashlight_MX991",1},
      {"ACRE_PRC343",1}
    };

    vest[] = {"V_PlateCarrier1_wdl"};

    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACE_MapTools",1},
      {"ACE_IR_Strobe_Item",1}
    };

    backpack[] = {"B_Kitbag_rgr"};
    //B_Kitbag_rgr
    //B_AssaultPack_wdl_F
    //CRAB_RadioBag_01_wdl_F

    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"CUP_arifle_DSA_SA58_OSW_VFG",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhs_mag_20Rnd_762x51_m80a1_fnfal"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","CUP_NVG_GPNVG_black"};

    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };

    backpack[] = {"CRAB_RadioBag_01_wdl_F"};
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"itc_land_tablet_rover",1},
      {"ACRE_PRC148",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","CUP_NVG_GPNVG_black"};
  };
  class TL: PL {
    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACRE_PRC148",1},
      {"itc_land_tablet_rover",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",2}
    };
  };
  class FSO: PL {
    vest[] = {"V_PlateCarrier2_wdl"};
    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",1},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"itc_land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","CUP_NVG_GPNVG_black"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
        {"rhs_mag_20Rnd_762x51_m62_fnfal",1},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"itc_land_b_ar2i_packed",1},
        {"ace_uavbattery",2},
        {"Laserdesignator_01_khk_F",1},
        {"Laserbatteries",2},
        {"ACRE_PRC148",1},
        {"itc_land_tablet_rover",1}
      };

  };
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_oli"};
      backpackContents[] = {
        {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
        {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
        {"HandGrenade",2},
        {"SmokeShell",2},
        {"Chemlight_green",2},
        {"ACE_fieldDressing",20},
        {"ACE_packingBandage",20},
        {"ACE_quikclot",10},
        {"ACE_elasticBandage",10},
        {"ACE_morphine",10},
        {"ACE_epinephrine",10},
        {"ACE_adenosine",10},
        {"ACE_salineIV_250",2},
        {"ACE_salineIV_500",3},
        {"ACE_bloodIV",3},
        {"ACE_personalAidKit",1},
        {"ACE_surgicalKit",1},
        {"ACE_splint",8},
        {"ACE_tourniquet",5}
      };
  };
  class RF: BaseUnit {};
  class UGL: BaseUnit {
    weapons[] = {
      {"CUP_arifle_DSA_SA58_OSW_M203",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhs_mag_20Rnd_762x51_m80a1_fnfal","1Rnd_HE_Grenade_shell"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}}
    };
    vest[] = {"V_PlateCarrierGL_wdl"};
    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",2},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"1Rnd_HE_Grenade_shell",8},
      {"1Rnd_Smoke_Grenade_Shell",2},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"1Rnd_HE_Grenade_shell",8},
      {"1Rnd_Smoke_Grenade_Shell",2}
    };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {"CUP_lmg_M60E4",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhsusf_100Rnd_762x51"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}}
    };
    vestContents[] = {
      {"rhsusf_100Rnd_762x51",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",1},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACE_MapTools",1}
    };
    backpack[] = {"B_AssaultPack_wdl_F"};
    backpackContents[] = {
      {"rhsusf_100Rnd_762x51",1},
      {"rhsusf_100Rnd_762x51_m62_tracer",1},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
    };
  };
  class GPMG: LMG { };
  class DMR: BaseUnit {
    weapons[] = {
      {"CUP_arifle_DSA_SA58_DMR",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","bipod_01_f_blk","rhs_mag_20Rnd_762x51_m80a1_fnfal"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}},
      "ACE_Vector"
    };
    vest[] = {"V_PlateCarrier2_wdl"};
    
    backpack[] = {"B_AssaultPack_wdl_F"};
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",2},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"rhsusf_100Rnd_762x51_m62_tracer",1}
    };

  };
  class MAT: BaseUnit {

    weapons[] = {
      {"CUP_arifle_DSA_SA58_OSW_VFG",{"rhsusf_acc_su230a","rhsusf_acc_anpeq15side_bk","rhs_mag_20Rnd_762x51_m80a1_fnfal"}},
      {"hgun_Pistol_heavy_01_green_F",{"11Rnd_45ACP_Mag"}},
      {"launch_MRAWS_green_rail_F",{"MRAWS_HEAT55_F"}}
    };
    vestContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",1},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ACE_MapTools",1},
      {"ACE_IR_Strobe_Item",1}
    };

    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",1},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class MATA: BaseUnit {
    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",3},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",1},
      {"11Rnd_45ACP_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"MRAWS_HEAT55_F",1},
      {"MRAWS_HE_F",1}
    };
  };
  class PILOT: baseUnit {  };

  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"launch_MRAWS_green_F",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"MRAWS_HE_F",12},
      {"MRAWS_HEAT55_F",12},
      {"MRAWS_HEAT_F",6}
    };
    vehCargoRucks[] = {
      {"B_Carryall_oli",2}
    };
  };
  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_m72a7",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"rhs_mag_20Rnd_762x51_m80a1_fnfal",38},
      {"rhs_mag_20Rnd_762x51_m62_fnfal",20},
      {"rhsusf_100Rnd_762x51",6},
      {"rhsusf_100Rnd_762x51_m62_tracer",6},
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
      {"B_Kitbag_rgr",4}
    };
  };
};
