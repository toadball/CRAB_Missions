class REDFOR_SPETZ {
  class BaseUnit {
    allowPlayerGoggles = 0;
    ace_medic = 1;
    weapons[] = {
      {"arifle_AK12_F",
        {"rhs_acc_perst3","optic_hamr","30Rnd_762x39_AK12_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    priKit[] = {};
    secKit[] = {};
    pisKit[] = {};

    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","O_NVGoggles_grn_F"};

    headgear[] = {
      "H_HelmetAggressor_cover_F"
    };
    goggles[] = {
      "rhs_balaclava"
    };
    uniform[] = {"U_O_R_Gorka_01_F"};

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

    vest[] = {"V_SmershVest_01_F"};
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_b",1},
      {"ACE_MapTools",1}
    };

    backpack[] = {"B_FieldPack_green_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"75rnd_762x39_AK12_Mag_Tracer_F",3}
    };

    magazines[] = {}; items[] = {};
  };
  class PL: BaseUnit {
    weapons[] = {
      {"arifle_AK12U_F",
          {"rhs_acc_perst3","optic_hamr","30Rnd_762x39_AK12_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "ACE_Vector"
    };
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","O_NVGoggles_grn_F"};
    vest[] = {"V_SmershVest_01_radio_F"};
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"muzzle_snds_b",1},
      {"itc_land_tablet_rover",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
  };
  class ZEUS: PL {
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","O_NVGoggles_grn_F"};
  };
  class TL: PL {};
  class FSO: PL {
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",2},
      {"muzzle_snds_b",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"ITC_Land_b_uav_backpack"};
    assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","B_UavTerminal","O_NVGoggles_grn_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"ace_IR_strobe_item",1},
      {"itc_land_b_ar2i_packed",1},
      {"ace_uavbattery",2},
      {"Laserdesignator_01_khk_F",1},
      {"Laserbatteries",3},
      {"itc_land_tablet_rover",1}
    };
  };
  class MED: BaseUnit {
    ace_medic = 2;
    backpack[] = {"B_Carryall_green_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
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
      {"arifle_AK12_GL_F",
        {"rhs_acc_perst3","optic_hamr","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",2},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_b",1},
      {"1Rnd_HE_Grenade_shell",10},
      {"1Rnd_Smoke_Grenade_Shell",2},
      {"ACE_MapTools",1}
    };
    backpack[] = {"B_Carryall_green_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"1Rnd_HE_Grenade_shell",10},
      {"1Rnd_Smoke_Grenade_Shell",2},
      {"75rnd_762x39_AK12_Mag_Tracer_F",2}
    };
  };
  class LMG: BaseUnit {
    weapons[] = {
      {"arifle_RPK12_F",
          {"optic_hamr","rhs_acc_perst3","75rnd_762x39_AK12_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    vestContents[] = {
      {"75rnd_762x39_AK12_Mag_F",2},
      {"75rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1}
    };
    backpack[] = {"B_Carryall_green_F"};
    backpackContents[] = {
      {"75rnd_762x39_AK12_Mag_F",2},
      {"75rnd_762x39_AK12_Mag_Tracer_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_b",1}

    };
  };
  class GPMG: LMG {};
  class DMR: BaseUnit {
    weapons[] = {
      {"srifle_DMR_05_blk_F",
        {"optic_hamr","bipod_01_F_blk","rhs_acc_perst3","10Rnd_93x64_DMR_05_Mag"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      "RangeFinder"
    };
    vestContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",5},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_93mmg",1},
      {"ACE_MapTools",1}
    };
    backpackContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",6},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"75rnd_762x39_AK12_Mag_Tracer_F",3}
    };
  };
  class MAT: BaseUnit {
    weapons[] = {
      {"arifle_AK12U_F",
        {"rhs_acc_perst3","optic_hamr","30Rnd_762x39_AK12_Mag_F"}
      },
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}},
      {"launch_RPG32_green_F",{"RPG32_F"}}
    };
    backpack[] = {"B_Carryall_green_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"RPG32_F",1},
      {"RPG32_HE_F",1}
    };
  };

  class MATA: BaseUnit {
    backpack[] = {"B_Carryall_green_F"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"RPG32_F",1},
      {"RPG32_HE_F",1}
    };
  };
  class PILOT: baseUnit {
    weapons[] = {
      "SMG_03C_khaki",
      {"hgun_Rook40_F",{"16Rnd_9x21_Mag"}}
    };
    headgear[] = {
      "rhsusf_hgu56p_black",
      "rhsusf_hgu56p_visor_black",
      "rhsusf_hgu56p_mask_black",
      "rhsusf_hgu56p_visor_mask_Empire_black",
      "rhsusf_hgu56p_visor_black","rhsusf_hgu56p_green",
      "rhsusf_hgu56p_mask_green_mo",
      "rhsusf_hgu56p_visor_green",
      "rhsusf_hgu56p_visor_mask_green_mo",
      "rhsusf_hgu56p",
      "rhsusf_hgu56p_mask",
      "rhsusf_hgu56p_mask_mo",
      "rhsusf_hgu56p_mask_skull",
      "rhsusf_hgu56p_visor",
      "rhsusf_hgu56p_visor_mask",
      "rhsusf_hgu56p_visor_mask_mo",
      "rhsusf_hgu56p_visor_mask_skull",
      "rhsusf_hgu56p_pink",
      "rhsusf_hgu56p_visor_pink",
      "rhsusf_hgu56p_mask_smiley",
      "rhsusf_hgu56p_visor_mask_smiley"
    };
    vest[] = {
      "V_CarrierRigKBT_01_Olive_F",
    };
    vestContents[] = {
      {"50Rnd_570x28_SMG_03",4},
      {"SmokeShellRed",2},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {
      "rhsusf_falconii_coy","rhsusf_falconii_mc"
    };
    backpackContents[] = {
      {"ToolKit",1}
    };
  };
  class LauncherCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"launch_RPG32_green_F",2},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"RPG32_F",9},
      {"RPG32_HE_F",9}
    };
    vehCargoRucks[] = {
      {"B_FieldPack_green_F",4},
      {"B_Carryall_green_F",4}
    };
  };

  class LargeGearCrate {
    vehCargoWeapons[] = {
      {"rhs_weap_rpg75",10},
      {"ACE_Vector",2}
    };
    vehCargoMagazines[] = {
      {"30Rnd_762x39_AK12_Mag_F",32},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",16},
      {"75rnd_762x39_AK12_Mag_F",10},
      {"75rnd_762x39_AK12_Mag_Tracer_F",10},
      {"10Rnd_762x54_Mag",8},
      {"ACE_10Rnd_762x54_Tracer_mag",4},
      {"10Rnd_93x64_DMR_05_Mag",12},
      {"HandGrenade",16},
      {"SmokeShell",16},
      {"1Rnd_HE_Grenade_shell",20},
      {"DemoCharge_Remote_Mag",16}
    };
    vehCargoItems[] = {
      {"ToolKit",1},
      {"ACE_M26_Clacker",4},
      {"ACE_DefusalKit",2},
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
      {"B_FieldPack_green_F",4},
      {"B_Carryall_green_F",4}
    };
  };
};
class REDFOR_AFRF: REDFOR_SPETZ {
  class BaseUnit: BaseUnit {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    backpack[] = {"B_Kitbag_rgr"};
  };
  class PL: PL {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ace_IR_strobe_item",1},
      {"ACRE_PRC148",1},
      {"ACE_MapTools",1},
      {"ACE_MicroDagr",1}
    };
    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_b",1},
      {"itc_land_tablet_rover",1},
      {"75rnd_762x39_AK12_Mag_Tracer_F",3}
    };
  };
  class ZEUS: PL {};
  class TL: PL {};
  class FSO: FSO {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
  };
  class MED: MED {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    backpack[] = {"B_Carryall_green_F"};
  };
  class RF: RF {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    backpack[] = {"B_Kitbag_rgr"};
  };
  class UGL: UGL {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",2},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_b",1},
      {"1Rnd_HE_Grenade_shell",6},
      {"ACE_MapTools",1}
    };

    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"30Rnd_762x39_AK12_Mag_F",4},
      {"30Rnd_762x39_AK12_Mag_Tracer_F",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"1Rnd_HE_Grenade_shell",14},
      {"1Rnd_Smoke_Grenade_Shell",4},
      {"75rnd_762x39_AK12_Mag_Tracer_F",2}
    };



  };
  class LMG: LMG {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    //backpack[] = {"B_Kitbag_rgr"};
    backpack[] = {"B_Carryall_green_F"};
  };
  class GPMG: LMG {};
  class DMR: DMR {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    vestContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",5},
      {"16Rnd_9x21_Mag",2},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"ACE_MapTools",1}
    };
    backpack[] = {"B_Kitbag_rgr"};
    backpackContents[] = {
      {"10Rnd_93x64_DMR_05_Mag",6},
      {"HandGrenade",2},
      {"SmokeShell",2},
      {"Chemlight_green",2},
      {"B_IR_Grenade",1},
      {"muzzle_snds_93mmg",1},
      {"75rnd_762x39_AK12_Mag_Tracer_F",3}
    };
  };
  class MAT: MAT {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    //backpack[] = {"B_Kitbag_rgr"};
    backpack[] = {"B_Carryall_green_F"};
  };

  class MATA: MATA {
    headgear[] = { "H_HelmetAggressor_cover_taiga_F" };
    goggles[] = {
      "G_Bandanna_beast",
      "G_Bandanna_blk",
      "G_Bandanna_khk",
      "G_Bandanna_oli",
      "G_Bandanna_tan"
    };
    uniform[] = {"U_O_R_Gorka_01_camo_F"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F"};
    //backpack[] = {"B_Kitbag_rgr"};
    backpack[] = {"B_Carryall_green_F"};
  };
  class PILOT: PILOT {};
  class LauncherCrate: LauncherCrate { };

  class LargeGearCrate: LargeGearCrate { };
};
class REDFOR_AFRFA: REDFOR_AFRF {
  class BaseUnit {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class PL: PL {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class ZEUS: ZEUS {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class TL: TL {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class FSO: FSO {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class RF: RF {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class UGL: UGL {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class LMG: LMG {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class GPMG: LMG {};
  class DMR: DMR {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class MAT: MAT {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };

  class MATA: MATA {
    headgear[] = { "H_HelmetAggressor_cover_F" };
    uniform[] = {"U_O_R_Gorka_01_brown_F"};
  };
  class PILOT: PILOT {};
  class LauncherCrate: LauncherCrate { };

  class LargeGearCrate: LargeGearCrate { };
};
