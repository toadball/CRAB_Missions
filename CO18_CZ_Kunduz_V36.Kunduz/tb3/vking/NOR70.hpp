class NOR70 {
    class BaseUnit {
        allowPlayerGoggles = 0;
        ace_medic = 1;
        assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

        uniform[] = {"rhsgref_uniform_woodland_olive"};
        vest[] = {"rhsgref_alice_webbing"};
        backpack[] = {"B_FieldPack_green_F"};
        #define MEDIC_PACK "B_FieldPack_green_F"
        headGear[] = {"rhsgref_helmet_M1_erdl"};
        goggles[] = {};

        #define UNIFORM_CONTENTS \
                {"ACE_fieldDressing",4},\
                {"ACE_elasticBandage",4},\
                {"ACE_tourniquet",2},\
                {"ACE_morphine",2},\
                {"ACE_splint",2},\
                {"ACE_salineIV_500",1},\
                {"ACE_MapTools",1},\
                {"ACE_Flashlight_XL50",1}

        uniformContents[] = {
            UNIFORM_CONTENTS
        };

        #define RIFLES \
                {"CUP_arifle_G3A3_ris", {"CUP_20Rnd_762x51_G3"}}

        #define PISTOL {"rhsusf_weap_m1911a1",{"rhsusf_mag_7x45acp_MHP"}}

        weapons[] = {
            {RIFLES}
        };

        vestContents[] = {
            {"CUP_20Rnd_762x51_G3",6},
            {"rhs_grenade_mkii_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"CUP_20Rnd_762x51_G3",6},
            {"rhs_grenade_mkii_mag",3}
        };
    };

    class PL: BaseUnit {
        weapons[] = {
            {RIFLES},
            "Binocular",
            "rhs_weap_rsp30_white"
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhs_weap_rsp30_white",1}
        };

        vestContents[] = {
            {"CUP_20Rnd_762x51_G3",6},
            {"rhs_grenade_mkii_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"acre_prc77",1},
            {"rhs_weap_rsp30_white",2},
            {"rhs_grenade_anm8_mag",2},
            {"SmokeShellBlue",2}
        };
    };

    class ZEUS: PL {
        
    };

    class FSO: PL {

    };

    class MED: BaseUnit {
        ace_medic = 2;

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"CUP_20Rnd_762x51_G3",1}
        };

        #define MEDIC_PACK_CONTENTS \
                {"SmokeShellGreen",2},\
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

        backpackContents[] = {
            
        };
    };

    class TL: BaseUnit {
        weapons[] = {
            {RIFLES},
            "Binocular",
            "rhs_weap_rsp30_white"
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhs_weap_rsp30_white",1}
        };

        vestContents[] = {
            {"CUP_20Rnd_762x51_G3",6},
            {"rhs_grenade_mkii_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"CUP_20Rnd_762x51_G3",5},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_weap_rsp30_white",2},
            {"rhs_grenade_anm8_mag",2}
        };
    };

    class RF: BaseUnit {

    };

    class UGL: BaseUnit {
        weapons[] = {
            {RIFLES},
            {"rhs_weap_M320",{"rhs_mag_M441_HE"}}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"CUP_20Rnd_762x51_G3",4},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_mag_M441_HE",13}
        };
    };

    class LMG: BaseUnit {
        weapons[] = {
            {"CUP_lmg_MG3",{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}}
        };

        vestContents[] = {
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1},
            {"rhs_grenade_mkii_mag",4}
        };

        backpackContents[] = {
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3}
        };
    };

    class DMR: BaseUnit {
        weapons[] = {
            {"CUP_arifle_G3A3_ris", {"CUP_20Rnd_762x51_G3","cup_optic_susat"}}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"CUP_20Rnd_762x51_G3",6},
            {"CUP_20Rnd_TE1_Red_Tracer_762x51_G3",4},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",1}
        };
    };

    class GPMG: LMG {

    };

    class GPMGA: BaseUnit {
        weapons[] = {
            {RIFLES},
            "Binocular"
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2},
            {"CUP_20Rnd_762x51_G3",3},
            {"rhs_grenade_mkii_mag",1}
        };
    };

    class MAT: BaseUnit {
        weapons[] = {
            {RIFLES},
            {"rhs_weap_maaws",{"rhs_mag_maaws_HEAT","rhs_optic_maaws"}}
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhs_mag_maaws_HEAT",2},
            {"rhs_grenade_anm8_mag",1}
        };
    };

    class MATA: BaseUnit {
        weapons[] = {
            {RIFLES},
            "Binocular"
        };

        backpackContents[] = {
            {"ACE_salineIV",1},
            {"rhs_mag_maaws_HEAT",1},
            {"rhs_mag_maaws_HE",1},
            {"rhs_grenade_anm8_mag",2}
        };
    };

    class SNIPER: BaseUnit {
        weapons[] = {
            {"CUP_srifle_CZ550", {"CUP_5x_22_LR_17_HMR_M"}},
            PISTOL
        };

        uniformContents[] = {
            UNIFORM_CONTENTS,
            {"rhsusf_mag_7x45acp_MHP",2}
        };

        vestContents[] = {
            {"CUP_5x_22_LR_17_HMR_M",13},
            {"rhs_grenade_mkii_mag",2}
        };

        backpackContents[] = {
            {"ACE_salineIV_500",1},
            {"CUP_5x_22_LR_17_HMR_M",18},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"rhs_grenade_mkii_mag",2},
            {"rhs_grenade_anm8_mag",2}
        };
    };

    class PILOT: BaseUnit {
        headGear[] = {"rhsusf_hgu56p","rhsusf_hgu56p_visor"};
        uniform[] = {"rhs_uniform_g3_rgr"};
        vest[] = {"rhsgref_chestrig"};
        backpack[] = {"B_AssaultPack_khk"};

        weapons[] = {
            {"CUP_smg_MP5A5",{"CUP_30Rnd_9x19_MP5"}},
            PISTOL
        };

        vestContents[] = {
            {"CUP_30Rnd_9x19_MP5",7},
            {"rhsusf_mag_7x45acp_MHP",3},
            {"SmokeShellGreen",2}
        };

        backpackContents[] = {
            {"acre_prc77",1}
        };
    };

    class SupplyCrate {
        vehCargoWeapons[] = {
            {"CUP_arifle_G3A3_ris",4},
            {"rhs_weap_rsp30_white",16}
        };
        vehCargoMagazines[] = {
            {"CUP_20Rnd_762x51_G3",64},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",24},
            {"rhs_mag_M441_HE",32},
            {"CUP_10x_303_M",16},
            {"rhs_grenade_mkii_mag",24},
            {"rhs_grenade_anm8_mag",16},
            {"rhs_mag_maaws_HEAT",8}
        };
        vehCargoItems[] = {};
        vehCargoRucks[] = {
            {MEDIC_PACK, 1, {MEDIC_PACK_CONTENTS}}
        };
    };
};
