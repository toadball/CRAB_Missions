    class CCESF_ARID { 
        class baseUnit {
            ace_earplugs = 1;
            allowPlayerGoggles = 1;
            ace_medic = 1;	
            
            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch", "ItemRadio", "nvgoggles_opfor"};
            
            headgear[] = {
                "rhs_6b27m_ml",
                "rhs_6b27m_ml_ess"
            };
           
            goggles[] = {};
            
            uniform[] = {"rhs_uniform_m88_patchless"};
            uniformContents[] = {
                {"ACE_fieldDressing", 5},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},   
                {"ACE_adenosine", 1},
                {"ACE_elasticBandage", 2},
                {"ACE_quikclot", 2},
                {"ACE_Splint", 1},
                {"ACE_salineIV_500", 1},
                {"ACE_Flashlight_MX991", 1},
                {"rhs_mag_rgd5", 1}
            };
                
            vest[] = {
                "rhs_6b23_ml_6sh92",
                "rhs_6b23_ml_vydra_3m"
            };
            vestContents[] = {
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"rhs_mag_rgd5", 3},
                {"rhs_mag_9x18_8_57n181s", 2}
            };
                
            backpack[] = {"b_carryall_oli"};
            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"30Rnd_762x39_ak12_mag_tracer_f", 2},
                {"SmokeShell", 2}
            };
        };

        class SL: baseUnit { 
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};

            weapons[] = {
                            {"rhs_weap_ak103_gp25_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_vog25", "rhs_acc_perst1ik", "optic_mrco", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };
            vest[] = {"rhs_6b23_ml_6sh92_vog_headset"};
            vestContents[] = {
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"rhs_mag_rgd5", 3},
                {"rhs_vog25", 5},
                {"acre_prc148", 1},
                {"rhs_mag_9x18_8_57n181s", 2}
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"itc_land_tablet_rover", 1},
                {"ace_microdagr", 1},
                {"SmokeShell", 2},
                {"ace_maptools", 1},
                {"SmokeShellGreen", 2},
                {"rhs_vog25", 5},
                {"rhs_vg40Op_green", 3},
                {"rhs_vg40Op_red", 3},
                {"rhs_vg40md", 5}

            };      
        };
        class PL: SL {};
        class ZEUS: PL {};

        class TL: baseUnit { 

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_vectore_maptools", "ItemRadio", "nvgoggles_opfor"};

            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "optic_mrco", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };
            vest[] = {
                "rhs_6b23_ml_6sh92_headset",
                "rhs_6b23_ml_6sh92_radio"
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 8},
                {"30Rnd_762x39_ak12_mag_tracer_f", 2},
                {"SmokeShell", 2},
                {"ACE_salineIV_500", 2},
                {"acre_prc148", 1},
                {"ace_microdagr", 1},
                {"75rnd_762x39_ak12_mag_f", 3}
            };   
        };

         class RF: baseUnit { 
            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "rhs_weap_rpg26"
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 6},
                {"30Rnd_762x39_ak12_mag_tracer_f", 2},
                {"SmokeShell", 2},
                {"ACE_salineIV_500", 2},
                {"75rnd_762x39_ak12_mag_f", 2}
            };      
        };

        class LMG: baseUnit { 

            weapons[] = {
                            {"arifle_rpk12_f", 
                                {"75rnd_762x39_ak12_mag_f", "optic_aco", "rhs_acc_perst1ik"},
                            }
                        };
            vestContents[] = {
                {"75rnd_762x39_ak12_mag_f", 3},
                {"SmokeShell", 2},
                {"rhs_mag_rgd5", 2}
            };

            backpackContents[] = {
                {"ace_maptools", 1},
                {"75rnd_762x39_ak12_mag_f", 6}
            };      
        };
        class UGL: baseUnit { 
            
            weapons[] = {
                            {"rhs_weap_ak103_gp25_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_vog25", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };

            vest[] = {"rhs_6b23_ml_6sh92_vog"};
            vestContents[] = {
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"rhs_mag_rgd5", 1},
                {"rhs_vog25", 5},
                {"rhs_vg40tb", 4},
                {"rhs_mag_9x18_8_57n181s", 2}
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"SmokeShell", 2},
                {"rhs_vog25", 25},
                {"rhs_vg40md", 5}

            };      
        };
        
        class UAV: TL {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor", "B_UAVTerminal"};

            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_vog25", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };
            vest[] = {"rhs_6b23_ml_6sh92_radio"};
            vestContents[] = {
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"rhs_mag_rgd5", 3},
                {"acre_prc148", 1},
                {"rhs_mag_9x18_8_57n181s", 2}
            };

            backpack[]={"itc_land_i_uav06_backpack"};
             backpackContents[] = {
                {"acre_prc148", 1},
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"SmokeShell", 2},
                {"itc_land_b_uav_packed", 2}

            };      
        };

        class FSO: baseUnit {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor", "B_UAV_Terminal"};

            weapons[] = {
                            {"rhs_weap_ak103_gp25_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_vog25", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "Laserdesignator_01_khk_F"
            };

            vestContents[] = {
                {"30Rnd_762x39_ak12_mag_f", 4},
                {"rhs_mag_rgd5", 3},
                {"rhs_vog25", 5},
                {"acre_prc148", 1},
                {"rhs_mag_9x18_8_57n181s", 2}
            };

             backpackContents[] = {
                {"acre_prc148", 1},
                {"Laserbatteries", 3},
                {"itc_land_tablet_rover", 1},
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"ace_vector", 1},
                {"ace_microdagr", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"SmokeShell", 2},
                {"SmokeShellGreen", 2},
                {"rhs_vg40Op_green", 3},
                {"rhs_vg40Op_red", 3},
                {"rhs_vg40md", 5}
            };      
        };

        class RTO: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 7},
                {"30Rnd_762x39_ak12_mag_tracer_f", 2},
                {"SmokeShell", 2},
                {"acre_prc148", 1},
                {"acre_prc117f", 1}
            };      
        };


        class DMR: baseUnit {
            
            weapons[] = {
                            {"rhs_weap_svdp", 
                                {"rhs_10rnd_762x54mmr_7n14", "rhs_acc_pso1m2"}
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };
                
            vest[] = {"rhs_6b23_ml_sniper"};
            vestContents[] = {
                {"rhs_10rnd_762x54mmr_7n14", 6},
                {"rhs_mag_rgd5", 3},
                {"rhs_mag_9x18_8_57n181s", 2}
            };
                
            backpackContents[] = {
                {"rhs_acc_tgpv2", 1},
                {"ace_maptools", 1},
                {"rhs_acc_1pn34", 1},
                {"rhs_10rnd_762x54mmr_7n14", 6},
                {"SmokeShell", 2},
                {"ACE_salineIV_500", 2}
            };
        };

        class VSS: baseUnit {
            
            weapons[] = {
                            {"rhs_weap_vss", 
                                {"rhs_20rnd_9x39mm_sp6", "rhs_acc_pso1m2"}
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };
                
            vest[] = {"rhs_6b23_ml_sniper"};
            vestContents[] = {
                {"rhs_20rnd_9x39mm_sp6", 5},
                {"rhs_mag_rgd5", 3},
                {"rhs_mag_9x18_8_57n181s", 2}
            };
                
            backpackContents[] = {
                {"rhs_acc_1pn34", 1},
                {"ace_maptools", 1},
                {"rhs_20rnd_9x39mm_sp6", 3},
                {"SmokeShell", 2},
                {"ACE_salineIV_500", 2}
            };
        };                  

        class LAT: baseUnit { 
            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            {"rhs_weap_rpg7",
                                {"rhs_rpg7_pg7vl_mag", "rhs_acc_pgo7v3"}
                        }
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"rhs_rpg7_pg7vl_mag", 1},
                {"rhs_rpg7_tbg7v_mag", 1}
            };      
        };

        class LATA: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"rhs_rpg7_pg7vl_mag", 4},
                {"rhs_rpg7_tbg7v_mag", 2}
            };           
        };

        class MAT: baseUnit { 
            weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            {"launch_RPG32_green_F",
                                {"RPG32_F"}
                        }
            };

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"RPG32_F", 1},
                {"RPG32_HE_F", 1}
            };      
        };

        class MATA: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"RPG32_F", 3},
                {"RPG32_HE_F", 2}
            };           
        };
        
        class MED: baseUnit { 
            ace_medic = 2;

            vest[] = {"rhs_6b23_ml_medic"};

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"SmokeShell", 2},
                {"ACE_fieldDressing", 15},
                {"ACE_packingBandage", 10},
                {"ACE_quikclot", 15},
                {"ACE_elasticBandage", 15},
                {"ACE_morphine", 10},
                {"ACE_epinephrine", 10},
                {"ACE_adenosine", 10},
                {"ACE_salineIV_250", 5},
                {"ACE_bloodIV_500", 4},
                {"ACE_salineIV", 2},
                {"ACE_salineiv_500", 4},
                {"ACE_personalAidKit", 1},
                {"ACE_surgicalKit", 1},
                {"ACE_splint", 7},
                {"ACE_tourniquet", 5}
      };      
        };

        class GPMG: baseUnit { 

            weapons[] = {
                            {"rhs_weap_pkm", 
                                {"rhs_100rnd_762x54mmr_7n26"},
                            }
                        };
            vestContents[] = {
                {"rhs_100rnd_762x54mmr_7n26", 1},
                {"rhs_mag_rgd5", 2}
            };

            backpackContents[] = {
                {"ace_maptools", 1},
                {"rhs_100rnd_762x54mmr_7n26", 3}
            };      
        };

        class GPMGA: baseUnit { 

             weapons[] = {
                            {"rhs_weap_ak103_npz", 
                                {"30Rnd_762x39_ak12_mag_f", "rhs_acc_perst1ik", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "Binocular"
            };
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};

            backpackContents[] = {
                {"rhs_acc_pbs1", 1},
                {"ace_maptools", 1},
                {"30Rnd_762x39_ak12_mag_f", 2},
                {"SmokeShell", 2},
                {"rhs_100rnd_762x54mmr_7n26", 4}
            };      
        };

        class PILOT {
            ace_earplugs = 1;
            allowPlayerGoggles = 1;
            ace_medic = 1;  
            
            weapons[] = {
                            {"rhs_weap_savz61_folded",
                                {"rhsgref_20rnd_765x17_vz61"}
                            }
            };
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};
            
            headgear[] = {
                "rhs_zsh7a_mike_green",
                "rhs_zsh7a_mike_green_alt",
                "rhs_zsh7a_mike_alt",
                "rhs_zsh7a_mike",
                "rhs_zsh7a",
                "rhs_zsh7a_alt"
            };
           
            goggles[] = {};
            
            uniform[] = {
                "rhs_uniform_df15",
                "rhs_uniform_df15_tan"
            };
        
            uniformContents[] = {
                {"ACE_fieldDressing", 5},
                {"ACE_morphine", 2},
                {"ACE_tourniquet", 2},   
                {"ACE_adenosine", 1},
                {"ACE_elasticBandage", 2},
                {"ACE_quikclot", 2},
                {"ACE_Splint", 1},
                {"ACE_salineIV_500", 1},
                {"ACE_Flashlight_MX991", 1},
                {"rhs_mag_rgd5", 1}
            };
                
            vest[] = {"rhs_vest_commander"};
            vestContents[] = {
                {"rhsgref_20rnd_765x17_vz61", 5},
                {"ace_maptools", 1},
                {"ace_microdagr", 1},
                {"SmokeShellOrange", 2}
            };            

        };
    };

    class CCESF_WDL: CCESF_ARID {

        class PL: PL {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class ZEUS: ZEUS {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class SL: SL {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class UAV: UAV {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class FSO: FSO {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class RTO: RTO {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class TL: TL {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class RF: RF {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class AR: AR {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class UGL: UGL {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class DMR: DMR {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_sniper"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class VSS: VSS {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_sniper"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class MED: MED {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_medic"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class LAT: LAT {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class LATA: LATA {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class MAT: MAT {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class MATA: MATA {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class LMG: LMG {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class LMGA: LMGA {
            headgear[] = { "rhsgref_6b27m_ttsko_digi" };
            uniform[] = {"rhsgref_uniform_para_ttsko_oxblood"};
            vest[] = {"rhsgref_6b23_ttsko_digi_rifleman"};
            backpack[] = {"B_Carryall_green_F"};
        };

        class PILOT: PILOT {};

    };
