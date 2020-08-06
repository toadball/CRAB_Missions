class ArmedCivilians {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"U_C_HunterBody_grn","U_BG_Guerilla3_1","U_Competitor","U_BG_Guerilla2_1",
                     "U_C_WorkerCoveralls","U_I_G_Story_Protagonist_F","U_I_C_Soldier_Bandit_2_F",
                     "U_I_C_Soldier_Bandit_3_F","U_I_L_Uniform_01_tshirt_black_F","U_C_Mechanic_01_F"};
        vest[] =    {"V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_LegStrapBag_olive_F",//"V_Pocketed_coyote_F","V_Pocketed_black_F","V_Pocketed_olive_F",
                     "V_BandollierB_blk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_khk","V_BandollierB_oli","V_TacChestrig_cbr_F",
                     "V_TacChestrig_grn_F","V_TacChestrig_oli_F","rhsgref_chestrig","rhsgref_chicom"};

        #define BACKPACKS_SMALL  "B_AssaultPack_cbr","B_AssaultPack_rgr","B_AssaultPack_khk"
        #define BACKPACKS_MEDIUM "B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"
        #define BACKPACKS_BIG    "B_TacticalPack_blk","B_TacticalPack_rgr","B_TacticalPack_oli"
        #define BACKPACKS_LARGE  "B_Kitbag_cbr","B_Kitbag_rgr","B_Kitbag_tan"
        backpack[] = {BACKPACKS_MEDIUM,BACKPACKS_BIG,BACKPACKS_LARGE};
        #define MEDIC_PACK "B_Kitbag_rgr"

        headGear[] = {"H_Hat_Safari_sand_F","H_Hat_Safari_olive_F","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand",
                      "H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Cap_grn_BI","H_Cap_blk","H_Cap_blk_CMMG","H_Cap_grn","H_Cap_blk_ION","H_Cap_oli","H_Cap_tan"};
        goggles[] = {"G_Aviator","G_Bandanna_aviator","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_shades","G_Bandanna_sport","G_Shades_Black","G_Shades_Blue",
                     "G_Shades_Red","G_Spectacles","G_Sport_Blackred","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted","rhs_googles_black","rhs_googles_clear",
                     "rhs_googles_yellow","rhs_googles_orange","rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan",
                     "rhsusf_shemagh2_tan","G_EyeProtectors_F","G_Respirator_white_F","","","","","","","",""};

        #define UNIFORM_CONTENTS \
                {"ACRE_SEM52SL",1},\
                {"ACE_microDAGR",1},\
                {"ACE_fieldDressing",4},\
                {"ACE_elasticBandage",4},\
                {"ACE_tourniquet",2},\
                {"ACE_morphine",2},\
                {"ACE_splint",2},\
                {"ACE_MapTools",1},\
                {"ACE_Flashlight_XL50",1}

        uniformContents[] = {
            UNIFORM_CONTENTS
        };

        #define OPTICS_1x "rhsusf_acc_t1_low","optic_yorris","rhsusf_acc_mrds"

        #define WEP_CZ584 {"CUP_sgun_CZ584_RIS",{"CUP_1Rnd_B_CZ584_74Slug","CUP_1Rnd_762x51_CZ584",{OPTICS_1x}}}
        #define VEST_CZ584 \
                {"CUP_1Rnd_762x51_CZ584",15},\
                {"CUP_1Rnd_B_CZ584_74Pellets",10},\
                {"CUP_1Rnd_B_CZ584_74Slug",5}
        #define PACK_CZ584 \
                {"CUP_1Rnd_762x51_CZ584",40},\
                {"CUP_1Rnd_B_CZ584_74Pellets",20},\
                {"CUP_1Rnd_B_CZ584_74Slug",20}

        #define WEP_CZ550 {"CUP_srifle_CZ550_rail",{"CUP_5x_22_LR_17_HMR_M",{OPTICS_1x}}}
        #define WEP_CZ550_SNIPER {"CUP_srifle_CZ550",{"CUP_5x_22_LR_17_HMR_M"}}
        #define VEST_CZ550 {"CUP_5x_22_LR_17_HMR_M",10}
        #define PACK_CZ550 {"CUP_5x_22_LR_17_HMR_M",20}

        #define WEP_KOZLICE {"sgun_HunterShotgun_01_F",{"2Rnd_12Gauge_Slug"}}  // "2Rnd_12Gauge_Pellets"
        #define VEST_KOZLICE \
                {"2Rnd_12Gauge_Slug",6},\
                {"2Rnd_12Gauge_Pellets",5}
        #define PACK_KOZLICE \
                {"2Rnd_12Gauge_Slug",15},\
                {"2Rnd_12Gauge_Pellets",10}
                
        #define WEP_REM700 {"CUP_srifle_Remington700",{"CUP_6Rnd_762x51_R700"}}
        #define VEST_REM700 {"CUP_6Rnd_762x51_R700",10}
        #define PACK_REM700 {"CUP_6Rnd_762x51_R700",20}

        #define WEP_K98K {"rhs_weap_kar98k",{"rhsgref_5Rnd_792x57_kar98k"}}
        #define VEST_K98K {"rhsgref_5Rnd_792x57_kar98k",25}
        #define PACK_K98K {"rhsgref_5Rnd_792x57_kar98k",55}

        #define WEP_M38 {"rhs_weap_m38",{"rhsgref_5Rnd_762x54_m38"}}
        #define VEST_M38 {"rhsgref_5Rnd_762x54_m38",25}
        #define PACK_M38 {"rhsgref_5Rnd_762x54_m38",65}
        
        #define WEP_M590 {"rhs_weap_M590_5RD",{"rhsusf_5Rnd_00Buck"}}  // "rhsusf_5Rnd_Slug"
        #define VEST_M590 \
                {"rhsusf_5Rnd_00Buck",6},\
                {"rhsusf_5Rnd_Slug",6}
        #define PACK_M590 \
                {"rhsusf_5Rnd_00Buck",15},\
                {"rhsusf_5Rnd_Slug",15}


        weapons[] = {
            {WEP_CZ584},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_CZ584};

        #define SALINE {"ACE_salineIV",1}
        backpackContents[] = {
            SALINE,
            PACK_CZ584
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            {WEP_CZ550},
            "ACE_Flashlight_Maglite_ML300L",
            "ACE_Yardage450"
        };

        vestContents[] = {VEST_CZ550};

        backpackContents[] = {
            SALINE,
            PACK_CZ550,
            {"SmokeShell",1},
            {"SmokeShellGreen",1},
            {"SmokeShellRed",1},
            {"SmokeShellOrange",1},
            {"SmokeShellBlue",1},
            {"SmokeShellYellow",1},
            {"SmokeShellPurple",1}
        };
    };

    class ZEUS: PL {};

    class FSO: BaseUnit {
        weapons[] = {
            {WEP_KOZLICE},
            "ACE_Flashlight_Maglite_ML300L",
            "ACE_Yardage450"
        };

        vestContents[] = {VEST_KOZLICE};

        backpackContents[] = {
            SALINE,
            PACK_KOZLICE,
            {"SmokeShell",1},
            {"SmokeShellGreen",1},
            {"SmokeShellRed",1},
            {"SmokeShellOrange",1},
            {"SmokeShellBlue",1},
            {"SmokeShellYellow",1},
            {"SmokeShellPurple",1}
        };
    };

    class MED: BaseUnit {
        ace_medic = 2;
        backpack[] = {BACKPACKS_LARGE};

        weapons[] = {
            {WEP_CZ550},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_CZ550};

        #define MEDIC_PACK_CONTENTS \
                {"ACE_fieldDressing",20},\
                {"ACE_packingBandage",20},\
                {"ACE_quikclot",10},\
                {"ACE_elasticBandage",15},\
                {"ACE_morphine",10},\
                {"ACE_epinephrine",10},\
                {"ACE_adenosine",4},\
                {"ACE_salineIV_500",3},\
                {"ACE_salineIV",3},\
                {"ACE_personalAidKit",1},\
                {"ACE_surgicalKit",1},\
                {"ACE_splint",8},\
                {"ACE_tourniquet",5}

        backpackContents[] = {MEDIC_PACK_CONTENTS};
    };

    class TL: BaseUnit {
        weapons[] = {
            {WEP_M590},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_M590};

        backpackContents[] = {
            SALINE,
            PACK_M590,
            {"rhs_mag_rdg2_black",1},
            {"rhs_mag_rdg2_white",1}
        };
    };

    class RF: BaseUnit {

    };

    class UGL: BaseUnit {
        backpackContents[] = {
            SALINE,
            {"CUP_1Rnd_762x51_CZ584",15},
            {"CUP_1Rnd_B_CZ584_74Pellets",10},
            {"CUP_1Rnd_B_CZ584_74Slug",10},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_m1939l_f_mag",2},
            {"rhs_mag_f1",2},
            {"rhs_mag_rdg2_black",2},
            {"rhs_mag_rdg2_white",2}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {WEP_K98K},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_K98K};

        backpackContents[] = {
            SALINE,
            PACK_K98K
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {WEP_CZ550_SNIPER},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_CZ550};

        backpackContents[] = {
            SALINE,
            PACK_CZ550
        };
    };

    class GPMG: BaseUnit {
        weapons[] = {
            {WEP_M38},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_M38};

        backpackContents[] = {
            SALINE,
            PACK_M38
        };
    };

    class MAT: BaseUnit {
        backpack[] = {BACKPACKS_BIG,BACKPACKS_LARGE};

        weapons[] = {
            {WEP_M590},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_M590};

        backpackContents[] = {
            SALINE,
            {"rhsusf_5Rnd_00Buck",5},
            {"rhsusf_5Rnd_Slug",5},
            {"rhs_charge_tnt_x2_mag",2},
            {"rhs_charge_sb3kg_mag",1},
            {"rhs_charge_M2tet_x2_mag",2},
            {"rhs_ec400_mag",2},
            {"ACE_Clacker",1}
        };
    };

    class MATA: BaseUnit {
        backpack[] = {BACKPACKS_BIG,BACKPACKS_LARGE};

        weapons[] = {
            {WEP_REM700},
            "ACE_Flashlight_Maglite_ML300L",
            "Binocular"
        };

        vestContents[] = {VEST_REM700};

        backpackContents[] = {
            SALINE,
            {"CUP_6Rnd_762x51_R700",6},
            {"rhs_charge_tnt_x2_mag",2},
            {"rhs_charge_sb3kg_mag",1},
            {"rhs_charge_M2tet_x2_mag",2},
            {"rhs_ec400_mag",2},
            {"ACE_Clacker",1}
        };
    };

    class SNIPER: BaseUnit {
        weapons[] = {
            {"CUP_srifle_CZ750",{"CUP_10Rnd_762x51_CZ750","cup_optic_leupoldmk4","rhsusf_acc_harris_bipod"}},
            "ACE_Flashlight_Maglite_ML300L",
            "ACE_Yardage450"
        };

        vestContents[] = {
            {"CUP_10Rnd_762x51_CZ750",5}
        };

        backpackContents[] = {
            {"CUP_10Rnd_762x51_CZ750",7}
        };
    };

    class PILOT: BaseUnit {};

    class SupplyCrate {
        vehCargoWeapons[] = {
            {"CUP_sgun_CZ584",2},
            {"sgun_HunterShotgun_01_F",2},
            {"CUP_srifle_Remington700",2}
        };
        vehCargoMagazines[] = {
            PACK_CZ584,PACK_CZ584,
            PACK_KOZLICE,PACK_KOZLICE,
            PACK_REM700,PACK_REM700,
            PACK_CZ550,PACK_CZ550,
            PACK_M38,
            PACK_K98K,
            PACK_M590
        };
        vehCargoItems[] = {};
        vehCargoRucks[] = {
            //{MEDIC_PACK, 1, {MEDIC_PACK_CONTENTS}}
        };
    };
};
