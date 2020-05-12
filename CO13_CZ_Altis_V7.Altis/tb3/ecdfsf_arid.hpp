    class ECDFSF_ARID { 
        class baseUnit {
            ace_earplugs = 1;
            allowPlayerGoggles = 1;
            ace_medic = 1;	
            
            weapons[] = {
                            {"rhs_weap_ak74mr", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};
            
            headgear[] = {
                "rhs_6b27m_ml",
                "rhs_6b27m_ml_ess"
            };
           
            goggles[] = {};
            
            uniform[] = {"rhs_uniform_m88_patchless"};
            uniformContents[] = {
                {"ACE_fieldDressing",5},
                {"ACE_morphine",2},
                {"ACE_tourniquet",2},   
                {"ACE_adenosine",1},
                {"ACE_elasticBandage",2},
                {"ACE_quikclot",2},
                {"ACE_Splint",1},
                {"ACE_salineIV_500",1},
                {"ACE_Flashlight_MX991",1},
                {"rhs_mag_rgd5", 1}
            };
                
            vest[] = {
                "rhs_6b23_ml_6sh92",
                "rhs_6b23_ml_vydra_3m"
            };
            vestContents[] = {
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_mag_rgd5",3},
                {"rhs_mag_9x18_8_57n181s",2}
            };
                
            backpack[] = {"b_carryall_oli"};
            backpackContents[] = {
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_30rnd_545x39_ak_plum_green",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1}
            };
        };

        class SL: baseUnit { 
            
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};

            weapons[] = {
                            {"rhs_weap_ak74mr_gp25", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_vog25", "rhs_acc_perst3", "optic_mrco", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };
            vest[] = {"rhs_6b23_ml_6sh92_vog_headset"};
            vestContents[] = {
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_mag_rgd5", 3},
                {"rhs_vog25", 10},
                {"acre_prc148",1},
                {"rhs_mag_9x18_8_57n181s",2}
            };

            backpackContents[] = {
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"ace_microdagr",1},
                {"SmokeShell",2},
                {"SmokeShellGreen", 2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"rhs_vg40Op_green", 3},
                {"rhs_vg40Op_red", 3},
                {"rhs_vg40md", 5}

            };      
        };
        class PL: SL {};

        class TL: baseUnit { 

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};

            weapons[] = {
                            {"rhs_weap_ak74mr", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_acc_perst3", "optic_mrco", "rhs_acc_grip_ffg2"},
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
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak", 8},
                {"rhs_30rnd_545x39_ak_plum_green",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"ACE_salineIV_500",2},
                {"rhs_rpg7_pg7vl_mag",1},
                {"acre_prc148",1},
                {"ace_microdagr",1},
                {"rhs_100rnd_762x54mmr_7n13",1}
            };   
        };
        
        class DFO: SL {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor", "B_UAV_Terminal"};

            weapons[] = {
                            {"rhs_weap_ak74mr_gp25", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_vog25", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };
            vest[] = {"rhs_6b23_ml_6sh92_radio"};
            vestContents[] = {
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_mag_rgd5", 3},
                {"rhs_vog25", 5},
                {"acre_prc148",1},
                {"rhs_mag_9x18_8_57n181s",2}
            };

            backpack[]={"itc_land_i_uav06_backpack"};
             backpackContents[] = {
                {"acre_prc148",1},
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"rhs_vg40Op_green",3},
                {"rhs_vg40Op_red",3},
                {"rhs_vg40md",5},
                {"itc_land_b_uav_packed",1}

            };      
        };

        class FO: baseUnit {
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor", "B_UAV_Terminal"};

            weapons[] = {
                            {"rhs_weap_ak74mr_gp25", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_vog25", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "ace_vector"
            };

            vestContents[] = {
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_mag_rgd5", 3},
                {"rhs_vog25", 5},
                {"acre_prc148",1},
                {"rhs_mag_9x18_8_57n181s",2}
            };

             backpackContents[] = {
                {"acre_prc148",1},
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"rhs_vg40Op_green",3},
                {"rhs_vg40Op_red",3},
                {"rhs_vg40md",5}
            };      
        };

        class RTO: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak",8},
                {"rhs_30rnd_545x39_ak_plum_green",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"acre_prc148",1},
                {"acre_prc117f",1}
            };      
        };


        class DM: baseUnit {
            
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
                {"rhs_10rnd_762x54mmr_7n14",6},
                {"rhs_mag_rgd5",3},
                {"rhs_mag_9x18_8_57n181s",2}
            };
                
            backpackContents[] = {
                {"rhs_acc_tgpv2",1},
                {"rhs_acc_1pn34",1},
                {"rhs_10rnd_762x54mmr_7n14",6},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"ACE_salineIV_500",2},
                {"I_IR_Grenade",1}
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
                {"rhs_20rnd_9x39mm_sp6",5},
                {"rhs_mag_rgd5",3},
                {"rhs_mag_9x18_8_57n181s",2}
            };
                
            backpackContents[] = {
                {"rhs_acc_1pn34",1},
                {"rhs_20rnd_9x39mm_sp6",3},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"ACE_salineIV_500",2},
                {"I_IR_Grenade",1}
            };
        };
         
         class GN: baseUnit { 
            
            weapons[] = {
                            {"rhs_weap_ak74mr_gp25", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_vog25", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            }
            };

            vest[] = {"rhs_6b23_ml_6sh92_vog"};
            vestContents[] = {
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"rhs_mag_rgd5", 1},
                {"rhs_vog25", 10},
                {"rhs_vg40tb", 4},
                {"rhs_mag_9x18_8_57n181s",2}
            };

            backpackContents[] = {
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",4},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"rhs_vog25", 15},
                {"rhs_vg40md", 5}

            };      
        };

        class RPG: baseUnit { 
            weapons[] = {
                            {"rhs_weap_ak74mr", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            {"rhs_weap_rpg7",
                                {"rhs_rpg7_pg7vl_mag", "rhs_acc_pgo7v3"}
                        }
            };

            backpackContents[] = {
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak", 2},
                {"rhs_rpg7_pg7vl_mag", 1},
                {"rhs_rpg7_tbg7v_mag", 1}
            };      
        };

        class RPGA: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak", 2},
                {"rhs_rpg7_pg7vl_mag", 2},
                {"rhs_rpg7_tbg7v_mag", 2}
            };           
        };
        
        class ME: baseUnit { 
            ace_medic = 2;

            vest[] = {"rhs_6b23_ml_medic"};

            backpackContents[] = {
                {"rhs_acc_tgpa", 1},
                {"rhs_30rnd_545x39_7n22_ak",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"ACE_fieldDressing",15},
                {"ACE_packingBandage",10},
                {"ACE_quikclot",15},
                {"ACE_elasticBandage",15},
                {"ACE_morphine",10},
                {"ACE_epinephrine",10},
                {"ACE_adenosine",10},
                {"ACE_salineIV_250",5},
                {"ACE_bloodIV_500",4},
                {"ACE_salineiv_500",4},
                {"ACE_personalAidKit",1},
                {"ACE_surgicalKit",1},
                {"ACE_splint",8},
                {"ACE_tourniquet",5}
      };      
        };

         class RM: baseUnit { 
            backpackContents[] = {
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak", 8},
                {"rhs_30rnd_545x39_ak_plum_green",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"ACE_salineIV_500",2},
                {"rhs_rpg7_pg7vl_mag", 1},
                {"rhs_100rnd_762x54mmr_7n13",1}
            };      
        };

        class MG: baseUnit { 

            weapons[] = {
                            {"rhs_weap_pkp", 
                                {"rhs_100rnd_762x54mmr_7n13", "rhs_acc_ekp8_02"},
                            }
                        };
            vestContents[] = {
                {"rhs_100rnd_762x54mmr_7n13",1},
                {"rhs_mag_rgd5",2}
            };

            backpackContents[] = {

                {"rhs_100rnd_762x54mmr_7n13",3}
            };      
        };

        class MGA: baseUnit { 

             weapons[] = {
                            {"rhs_weap_ak74mr", 
                                {"rhs_30rnd_545x39_7n22_ak", "rhs_acc_perst3", "rhs_acc_ekp8_18", "rhs_acc_grip_ffg2"},
                            },
                            {"rhs_weap_pb_6p9",
                                {"rhs_mag_9x18_8_57n181s"}
                            },
                            "Binocular"
            };
            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ace_maptools", "ItemRadio", "nvgoggles_opfor"};

            backpackContents[] = {
                {"rhs_acc_tgpa",1},
                {"rhs_30rnd_545x39_7n22_ak",2},
                {"SmokeShell",2},
                {"Chemlight_green",2},
                {"I_IR_Grenade",1},
                {"rhs_100rnd_762x54mmr_7n13",3}
            };      
        };
    };