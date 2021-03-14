/* Include files */

#include "inverse_test_sfun.h"
#include "c4_inverse_test.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 28,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 35,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 107,/* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 115,/* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 15,/* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_k_emlrtMCI = { 21,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 71,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 86,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 96,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 15,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 18,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 19,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 20,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 21,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 26,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 27,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 28,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 29,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 34,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 35,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 36,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 22,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 23,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 30,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 31,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 37,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 38,/* lineNo */
  "Robot Pose Plot",                   /* fcnName */
  "#inverse_test:13"                   /* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 144,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 171,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 181,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 106,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 131,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 135,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 136,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 134,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 138,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 27,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 38,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 37,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 44,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 52,/* lineNo */
  "collisionBox",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\collisionBox.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 65,/* lineNo */
  "collisionBox",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\collisionBox.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 50,/* lineNo */
  "CollisionGeometryBase",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\CollisionGeometryBase.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 52,/* lineNo */
  "CollisionGeometryBase",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\CollisionGeometryBase.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 129,/* lineNo */
  "CollisionGeometryBase",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\+robotics\\+core\\+internal\\CollisionGeometryBase.m"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 125,/* lineNo */
  "collisionBox",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\robotics\\robotcore\\collisionBox.m"/* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 35,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo c4_ub_emlrtRSI = { 47,/* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo c4_vb_emlrtRSI = { 69,/* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo c4_wb_emlrtRSI = { 61,/* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo c4_xb_emlrtRSI = { 114,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c4_yb_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c4_ac_emlrtRSI = { 15,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c4_bc_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_cc_emlrtRSI = { 1121,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_dc_emlrtRSI = { 1137,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ec_emlrtRSI = { 1133,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_fc_emlrtRSI = { 117,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_gc_emlrtRSI = { 149,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_hc_emlrtRSI = { 148,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_ic_emlrtRSI = { 151,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_jc_emlrtRSI = { 150,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_kc_emlrtRSI = { 274,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_lc_emlrtRSI = { 279,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_mc_emlrtRSI = { 313,/* lineNo */
  "rigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBody.m"/* pathName */
};

static emlrtRSInfo c4_nc_emlrtRSI = { 384,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_oc_emlrtRSI = { 388,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_pc_emlrtRSI = { 391,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_qc_emlrtRSI = { 215,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_rc_emlrtRSI = { 359,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_sc_emlrtRSI = { 361,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_tc_emlrtRSI = { 363,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_uc_emlrtRSI = { 364,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_vc_emlrtRSI = { 147,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_wc_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_xc_emlrtRSI = { 76,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_yc_emlrtRSI = { 67,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c4_ad_emlrtRSI = { 98,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c4_bd_emlrtRSI = { 140,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo c4_cd_emlrtRSI = { 63,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_dd_emlrtRSI = { 138,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_ed_emlrtRSI = { 209,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_fd_emlrtRSI = { 216,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_gd_emlrtRSI = { 217,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_hd_emlrtRSI = { 218,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_id_emlrtRSI = { 16,/* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo c4_jd_emlrtRSI = { 10,/* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo c4_kd_emlrtRSI = { 227,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_ld_emlrtRSI = { 231,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_md_emlrtRSI = { 21,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_nd_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_od_emlrtRSI = { 234,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_pd_emlrtRSI = { 195,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_qd_emlrtRSI = { 199,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_rd_emlrtRSI = { 203,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_sd_emlrtRSI = { 206,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_td_emlrtRSI = { 208,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ud_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_vd_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_wd_emlrtRSI = { 244,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_xd_emlrtRSI = { 251,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_yd_emlrtRSI = { 252,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ae_emlrtRSI = { 254,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_be_emlrtRSI = { 219,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ce_emlrtRSI = { 1152,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_de_emlrtRSI = { 1155,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ee_emlrtRSI = { 1161,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_fe_emlrtRSI = { 1446,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ge_emlrtRSI = { 1450,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_he_emlrtRSI = { 374,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_ie_emlrtRSI = { 1175,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_je_emlrtRSI = { 1179,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c4_ke_emlrtRSI = { 156,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_le_emlrtRSI = { 157,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_me_emlrtRSI = { 167,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_ne_emlrtRSI = { 78,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c4_oe_emlrtRSI = { 161,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_pe_emlrtRSI = { 165,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c4_qe_emlrtRSI = { 338,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_re_emlrtRSI = { 342,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 6,/* lineNo */
  16,                                  /* colNo */
  "Robot Pose Plot",                   /* fName */
  "#inverse_test:13"                   /* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 82,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 83,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 150,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 151,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 155,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 162,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 168,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 184,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 170,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 177,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_l_emlrtRTEI = { 185,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 171,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_n_emlrtRTEI = { 178,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 186,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 172,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 179,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_r_emlrtRTEI = { 192,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_s_emlrtRTEI = { 193,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_t_emlrtRTEI = { 194,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_u_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "Robot Pose Plot",                   /* fName */
  "#inverse_test:13"                   /* pName */
};

static emlrtRTEInfo c4_v_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c4_w_emlrtRTEI = { 33,/* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c4_x_emlrtRTEI = { 273,/* lineNo */
  24,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_y_emlrtRTEI = { 273,/* lineNo */
  57,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_ab_emlrtRTEI = { 377,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_bb_emlrtRTEI = { 274,/* lineNo */
  77,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_cb_emlrtRTEI = { 381,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_db_emlrtRTEI = { 379,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_eb_emlrtRTEI = { 358,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_fb_emlrtRTEI = { 359,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_gb_emlrtRTEI = { 363,/* lineNo */
  25,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_hb_emlrtRTEI = { 367,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_ib_emlrtRTEI = { 236,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_jb_emlrtRTEI = { 367,/* lineNo */
  47,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_kb_emlrtRTEI = { 368,/* lineNo */
  44,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_lb_emlrtRTEI = { 368,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_mb_emlrtRTEI = { 229,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_nb_emlrtRTEI = { 370,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_ob_emlrtRTEI = { 370,/* lineNo */
  39,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c4_pb_emlrtRTEI = { 140,/* lineNo */
  38,                                  /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_qb_emlrtRTEI = { 67,/* lineNo */
  5,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_rb_emlrtRTEI = { 148,/* lineNo */
  13,                                  /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_sb_emlrtRTEI = { 144,/* lineNo */
  13,                                  /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_tb_emlrtRTEI = { 171,/* lineNo */
  5,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_ub_emlrtRTEI = { 116,/* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtRTEInfo c4_vb_emlrtRTEI = { 395,/* lineNo */
  13,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c4_wb_emlrtRTEI = { 241,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_xb_emlrtRTEI = { 195,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_yb_emlrtRTEI = { 1155,/* lineNo */
  38,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_ac_emlrtRTEI = { 1161,/* lineNo */
  47,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_bc_emlrtRTEI = { 1155,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_cc_emlrtRTEI = { 1179,/* lineNo */
  53,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_dc_emlrtRTEI = { 1179,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtRTEInfo c4_ec_emlrtRTEI = { 156,/* lineNo */
  57,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c4_fc_emlrtRTEI = { 85,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c4_gc_emlrtRTEI = { 43,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtDCInfo c4_emlrtDCI = { 33, /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 33,/* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 70,/* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c4_emlrtECI = { 2,  /* nDims */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo c4_d_emlrtDCI = { 221,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 243,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  243,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 244,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  244,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 246,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  246,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 247,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  247,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 0,/* iFirst */
  2,                                   /* iLast */
  221,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c4_hc_emlrtRTEI = { 1160,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c4_h_emlrtBCI = { 0,/* iFirst */
  2,                                   /* iLast */
  1161,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 0,/* iFirst */
  2,                                   /* iLast */
  226,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  230,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 230,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo c4_ic_emlrtRTEI = { 1178,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo c4_k_emlrtBCI = { 0,/* iFirst */
  2,                                   /* iLast */
  1179,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c4_jc_emlrtRTEI = { 164,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo c4_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c4_se_emlrtRSI = { 168,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_te_emlrtRSI = { 162,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_ue_emlrtRSI = { 151,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_ve_emlrtRSI = { 273,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_we_emlrtRSI = { 193,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c4_xe_emlrtRSI = { 192,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static const char_T c4_cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

static const real_T c4_dv[6] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

static const real_T c4_dv1[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static const real_T c4_dv2[3] = { 0.0, 0.0, 1.0 };

static const real_T c4_dv3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
  0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static const char_T c4_cv1[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
  '\x01' };

static const char_T c4_cv2[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
  'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
  'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p', 'e',
  'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

static const char_T c4_cv3[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i',
  'g', 'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
  'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

static const char_T c4_cv4[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
  'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N',
  'o', 'n', 'e', 'm', 'p', 't', 'y' };

static const char_T c4_cv5[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
  'S', 't', 'r', 'i', 'n', 'g' };

static const char_T c4_cv6[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
  '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
  '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
  '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
  '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
  '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b',
  'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
  's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`', 'a',
  'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
  'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', '\x7f' };

static const char_T c4_cv7[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
  'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
  'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a', 'm',
  'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

static const char_T c4_cv8[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
  'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
  'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o', 't',
  'F', 'o', 'u', 'n', 'd' };

static const char_T c4_cv9[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
  'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
  'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N', 'a',
  'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

/* Function Declarations */
static void initialize_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void initialize_params_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void enable_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void disable_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void c4_update_jit_animation_state_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance);
static void set_sim_state_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_st);
static void sf_gateway_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void mdl_start_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void mdl_terminate_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance);
static void initSimStructsc4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance);
static c4_rigidBodyJoint *c4_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj);
static c4_robotics_manip_internal_CollisionSet *c4_CollisionSet_CollisionSet
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_CollisionSet *c4_obj, real_T c4_maxElements);
static void c4_check_forloop_overflow_error(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp);
static c4_robotics_manip_internal_VisualizationInfo
  c4_VisualizationInfo_VisualizationInfo(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp);
static void c4_rand(SFc4_inverse_testInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_r[5]);
static void c4_eml_rand_mt19937ar(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_d_state[625], uint32_T c4_e_state[625],
  real_T *c4_r);
static void c4_RigidBodyTree_clearAllBodies(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree *c4_obj,
  c4_robotics_manip_internal_RigidBody *c4_iobj_0);
static c4_rigidBodyJoint *c4_b_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj);
static c4_rigidBody *c4_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj);
static c4_robotics_manip_internal_RigidBodyTree_1
  *c4_RigidBodyTree_RigidBodyTree(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBodyTree_1 *c4_obj);
static void c4_rigidBodyJoint_set_JointAxis(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj);
static void c4_rigidBody_set_Joint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj,
  c4_rigidBodyJoint *c4_value, c4_rigidBodyJoint *c4_iobj_0);
static c4_rigidBodyJoint *c4_rigidBodyJoint_copy(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj,
  c4_rigidBodyJoint *c4_iobj_0);
static void c4_validatestring(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_str, char_T c4_out_data[],
  int32_T c4_out_size[2]);
static boolean_T c4_strcmp(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, real_T c4_cmpLen);
static void c4_warning(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp);
static void c4_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2);
static real_T c4_RigidBodyTree_findBodyIndexByName
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBodyTree *c4_obj, c4_emxArray_char_T
   *c4_bodyname);
static boolean_T c4_b_strcmp(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, c4_emxArray_char_T *c4_b);
static real_T c4_RigidBodyTree_findBodyIndexByJointName
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBodyTree *c4_obj, c4_emxArray_char_T
   *c4_jointname);
static c4_robotics_manip_internal_RigidBody *c4_RigidBody_copy
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBody_1 *c4_obj,
   c4_robotics_manip_internal_CollisionSet *c4_iobj_0, c4_rigidBodyJoint
   *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2);
static c4_rigidBody *c4_b_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj);
static void c4_trvec2tform(SFc4_inverse_testInstanceStruct *chartInstance,
  real_T c4_t[3], real_T c4_H[16]);
static void c4_rigidBodyJoint_setFixedTransform(SFc4_inverse_testInstanceStruct *
  chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj, real_T
  c4_input[16]);
static void c4_b_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2);
static c4_rigidBody *c4_c_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj);
static c4_rigidBodyJoint *c4_c_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj);
static void c4_c_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2);
static real_T c4_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_b_y, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint32_T c4_c_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_b_method, const char_T *c4_identifier,
  boolean_T *c4_svPtr);
static uint32_T c4_d_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr);
static void c4_e_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_d_state, const char_T *c4_identifier, boolean_T *c4_svPtr,
  uint32_T c4_b_y[625]);
static void c4_f_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, boolean_T
  *c4_svPtr, uint32_T c4_b_y[625]);
static void c4_g_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_d_state, const char_T *c4_identifier, boolean_T *c4_svPtr,
  uint32_T c4_b_y[2]);
static void c4_h_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, boolean_T
  *c4_svPtr, uint32_T c4_b_y[2]);
static uint8_T c4_i_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_inverse_test, const char_T
  *c4_identifier);
static uint8_T c4_j_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_chart_data_browse_helper
  (SFc4_inverse_testInstanceStruct *chartInstance, int32_T c4_ssIdNumber);
static const mxArray *c4_feval(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_b_feval(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static real_T c4_b_eml_rand_mt19937ar(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, uint32_T c4_d_state[625]);
static void c4_emxInitStruct_rigidBodyTree(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_b_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBody *
  c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_char_T(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_c_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_CollisionSet *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInit_unnamed_struct(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_unnamed_struct
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T1(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBody
  c4_pMatrix[3], const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitMatrix_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody c4_pMatrix[3], const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_d_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_e_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBody_1 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_b_emxInitMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_CollisionSet c4_pMatrix[3], const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInitMatrix_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint c4_pMatrix[6],
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_char_T(SFc4_inverse_testInstanceStruct *chartInstance,
  c4_emxArray_char_T **c4_pEmxArray);
static void c4_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody *c4_pStruct);
static void c4_emxFree_unnamed_struct(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_emxArray_unnamed_struct **c4_pEmxArray);
static void c4_b_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_CollisionSet *c4_pStruct);
static void c4_emxFreeStruct_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyJoint *c4_pStruct);
static void c4_emxFree_real_T(SFc4_inverse_testInstanceStruct *chartInstance,
  c4_emxArray_real_T **c4_pEmxArray);
static void c4_c_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBodyTree *c4_pStruct);
static void c4_emxFreeMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody c4_pMatrix[3]);
static void c4_emxFreeStruct_rigidBodyTree(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyTree *c4_pStruct);
static void c4_emxFreeMatrix_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBody c4_pMatrix[3]);
static void c4_d_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody_1 *c4_pStruct);
static void c4_e_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBodyTree_1 *c4_pStruct);
static void c4_emxFreeStruct_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBody *c4_pStruct);
static void c4_b_emxFreeMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_CollisionSet c4_pMatrix[3]);
static void c4_emxFreeMatrix_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyJoint c4_pMatrix[6]);
static void c4_emxEnsureCapacity_char_T(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_char_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T1(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_unnamed_struc(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_unnamed_struct
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void init_dsm_address_info(SFc4_inverse_testInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc4_inverse_testInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c4_st, "robotics_system_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_robot_not_empty = false;
  chartInstance->c4_method_not_empty = false;
  chartInstance->c4_state_not_empty = false;
  chartInstance->c4_b_state_not_empty = false;
  chartInstance->c4_c_state_not_empty = false;
  chartInstance->c4_is_active_c4_inverse_test = 0U;
  c4_emxInitStruct_rigidBodyTree(chartInstance, &c4_st, &chartInstance->c4_robot,
    &c4_emlrtRTEI);
  c4_emxInitMatrix_rigidBody(chartInstance, &c4_st, chartInstance->c4_gobj_1,
    (emlrtRTEInfo *)NULL);
  c4_b_emxInitMatrix_robotics_manip_in(chartInstance, &c4_st,
    chartInstance->c4_gobj_2, (emlrtRTEInfo *)NULL);
  c4_emxInitMatrix_rigidBodyJoint(chartInstance, &c4_st,
    chartInstance->c4_gobj_3, (emlrtRTEInfo *)NULL);
  c4_emxInitMatrix_robotics_manip_in(chartInstance, &c4_st,
    chartInstance->c4_gobj_4, (emlrtRTEInfo *)NULL);
}

static void initialize_params_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_jit_animation_state_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_st;
  c4_st = NULL;
  c4_st = NULL;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_createcellmatrix(6, 1), false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", chartInstance->c4_y, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c4_b_y, 0, c4_c_y);
  c4_d_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", &chartInstance->c4_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c4_b_y, 1, c4_d_y);
  c4_e_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", &chartInstance->c4_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c4_b_y, 2, c4_e_y);
  c4_f_y = NULL;
  if (!chartInstance->c4_c_state_not_empty) {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", chartInstance->c4_c_state, 7, 0U,
      1U, 0U, 1, 625), false);
  }

  sf_mex_setcell(c4_b_y, 3, c4_f_y);
  c4_g_y = NULL;
  if (!chartInstance->c4_b_state_not_empty) {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", chartInstance->c4_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c4_b_y, 4, c4_g_y);
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_inverse_test, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_b_y, 5, c4_h_y);
  sf_mex_assign(&c4_st, c4_b_y, false);
  return c4_st;
}

static void set_sim_state_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  int32_T c4_i;
  int32_T c4_i1;
  uint32_T c4_uv[625];
  uint32_T c4_uv1[2];
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_y = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "y");
  chartInstance->c4_method = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 1)), "method", &chartInstance->c4_method_not_empty);
  chartInstance->c4_state = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 2)), "state", &chartInstance->c4_state_not_empty);
  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 3)),
                        "state", &chartInstance->c4_c_state_not_empty, c4_uv);
  for (c4_i = 0; c4_i < 625; c4_i++) {
    chartInstance->c4_c_state[c4_i] = c4_uv[c4_i];
  }

  c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 4)),
                        "state", &chartInstance->c4_b_state_not_empty, c4_uv1);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    chartInstance->c4_b_state[c4_i1] = c4_uv1[c4_i1];
  }

  chartInstance->c4_is_active_c4_inverse_test = c4_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 5)),
     "is_active_c4_inverse_test");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void sf_gateway_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  static char_T c4_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_jname[6] = { 'j', 'o', 'i', 'n', 't', '2' };

  static char_T c4_jname[6] = { 'j', 'o', 'i', 'n', 't', '1' };

  static char_T c4_bname[4] = { 'b', 'a', 's', 'e' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBody *c4_b_body;
  c4_rigidBody *c4_body;
  c4_rigidBody *c4_c_body;
  c4_rigidBodyJoint c4_b_joint;
  c4_rigidBodyJoint c4_c_joint;
  c4_rigidBodyJoint c4_joint;
  c4_rigidBodyJoint *c4_d_this;
  c4_rigidBodyJoint *c4_e_this;
  c4_rigidBodyJoint *c4_l_obj;
  c4_rigidBodyJoint *c4_m_obj;
  c4_rigidBodyJoint *c4_n_obj;
  c4_rigidBodyJoint *c4_o_obj;
  c4_rigidBodyJoint *c4_p_obj;
  c4_rigidBodyTree *c4_b_obj;
  c4_rigidBodyTree *c4_c_obj;
  c4_rigidBodyTree *c4_obj;
  c4_rigidBodyTree *c4_this;
  c4_robotics_manip_internal_RigidBody *c4_c_this;
  c4_robotics_manip_internal_RigidBody *c4_g_obj;
  c4_robotics_manip_internal_RigidBody *c4_h_obj;
  c4_robotics_manip_internal_RigidBody *c4_i_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_b_this;
  c4_robotics_manip_internal_RigidBodyTree *c4_d_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_e_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_f_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_j_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_k_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_b_y = NULL;
  real_T c4_b_I[36];
  real_T c4_msubspace_data[36];
  real_T c4_c_I[16];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_homepos_data[6];
  real_T c4_c_L1[3];
  real_T c4_c_L2[3];
  real_T c4_qs[2];
  real_T c4_b_L1;
  real_T c4_b_L2;
  real_T c4_b_index;
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_d_remainingDimsA;
  int32_T c4_e_k;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_k;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_g_kstr;
  int32_T c4_g_loop_ub;
  int32_T c4_h_kstr;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[6];
  char_T c4_bn_data[4];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_c_result;
  boolean_T c4_d_bool;
  boolean_T c4_d_result;
  boolean_T c4_result;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_emxInitStruct_rigidBodyJoint(chartInstance, &c4_st, &c4_joint,
    &c4_u_emlrtRTEI);
  c4_emxInitStruct_rigidBodyJoint(chartInstance, &c4_st, &c4_b_joint,
    &c4_u_emlrtRTEI);
  c4_emxInitStruct_rigidBodyJoint(chartInstance, &c4_st, &c4_c_joint,
    &c4_u_emlrtRTEI);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U,
                      (*chartInstance->c4_cart_points)[c4_i]);
  }

  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                      (*chartInstance->c4_qs_T)[c4_i1]);
  }

  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, *chartInstance->c4_L2);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, *chartInstance->c4_L1);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_b_L1 = *chartInstance->c4_L1;
  c4_b_L2 = *chartInstance->c4_L2;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_qs[c4_i2] = (*chartInstance->c4_qs_T)[c4_i2];
  }

  sf_mex_printf("%s =\\n", "qs");
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_qs, 0, 0U, 1U, 0U, 2, 1, 2),
                false);
  sf_mex_call(&c4_st, NULL, "disp", 0U, 1U, 14, c4_b_y);
  if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 0,
                     !chartInstance->c4_robot_not_empty)) {
    c4_b_st.site = &c4_e_emlrtRSI;
    c4_obj = &chartInstance->c4_robot;
    c4_b_obj = c4_obj;
    c4_c_st.site = &c4_w_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_b_obj = c4_c_obj;
    c4_d_st.site = &c4_emlrtRSI;
    c4_this = c4_b_obj;
    c4_b_obj = c4_this;
    c4_c_st.site = &c4_x_emlrtRSI;
    c4_d_obj = &c4_b_obj->TreeInternal;
    c4_e_obj = c4_d_obj;
    c4_d_st.site = &c4_ab_emlrtRSI;
    c4_f_obj = c4_e_obj;
    c4_e_obj = c4_f_obj;
    c4_e_st.site = &c4_emlrtRSI;
    c4_b_this = c4_e_obj;
    c4_e_obj = c4_b_this;
    c4_d_st.site = &c4_bb_emlrtRSI;
    c4_g_obj = &c4_e_obj->Base;
    c4_h_obj = c4_g_obj;
    c4_e_st.site = &c4_b_emlrtRSI;
    c4_i_obj = c4_h_obj;
    c4_h_obj = c4_i_obj;
    c4_c_this = c4_h_obj;
    c4_h_obj = c4_c_this;
    for (c4_i3 = 0; c4_i3 < 4; c4_i3++) {
      c4_bn_data[c4_i3] = c4_bname[c4_i3];
    }

    c4_i4 = c4_h_obj->NameInternal->size[0] * c4_h_obj->NameInternal->size[1];
    c4_h_obj->NameInternal->size[0] = 1;
    c4_h_obj->NameInternal->size[1] = 4;
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_h_obj->NameInternal,
      c4_i4, &c4_c_emlrtRTEI);
    for (c4_i5 = 0; c4_i5 < 4; c4_i5++) {
      c4_h_obj->NameInternal->data[c4_i5] = c4_bn_data[c4_i5];
    }

    c4_e_st.site = &c4_c_emlrtRSI;
    c4_h_obj->JointInternal = c4_rigidBodyJoint_rigidBodyJoint(chartInstance,
      &c4_e_st, &c4_h_obj->_pobj1);
    c4_h_obj->Index = -1.0;
    c4_h_obj->ParentIndex = -1.0;
    c4_h_obj->MassInternal = 1.0;
    for (c4_i6 = 0; c4_i6 < 3; c4_i6++) {
      c4_h_obj->CenterOfMassInternal[c4_i6] = 0.0;
    }

    for (c4_i7 = 0; c4_i7 < 9; c4_i7++) {
      c4_I[c4_i7] = 0.0;
    }

    for (c4_k = 0; c4_k < 3; c4_k++) {
      c4_b_k = c4_k;
      c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
    }

    for (c4_i8 = 0; c4_i8 < 9; c4_i8++) {
      c4_h_obj->InertiaInternal[c4_i8] = c4_I[c4_i8];
    }

    for (c4_i9 = 0; c4_i9 < 36; c4_i9++) {
      c4_b_I[c4_i9] = 0.0;
    }

    for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
      c4_d_k = c4_c_k;
      c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
    }

    for (c4_i10 = 0; c4_i10 < 36; c4_i10++) {
      c4_h_obj->SpatialInertia[c4_i10] = c4_b_I[c4_i10];
    }

    c4_e_st.site = &c4_d_emlrtRSI;
    c4_h_obj->CollisionsInternal = c4_CollisionSet_CollisionSet(chartInstance,
      &c4_e_st, &c4_h_obj->_pobj0, 0.0);
    c4_e_obj->Base.Index = 0.0;
    c4_d_st.site = &c4_eb_emlrtRSI;
    c4_e_obj->VisualizationInfo = c4_VisualizationInfo_VisualizationInfo
      (chartInstance, &c4_d_st);
    c4_d_st.site = &c4_cb_emlrtRSI;
    c4_j_obj = c4_e_obj;
    c4_j_obj->VisualizationInfo.IsMaxReachUpToDate = false;
    c4_d_st.site = &c4_db_emlrtRSI;
    c4_k_obj = c4_e_obj;
    for (c4_i11 = 0; c4_i11 < 3; c4_i11++) {
      c4_k_obj->Gravity[c4_i11] = 0.0;
    }

    c4_d_st.site = &c4_fb_emlrtRSI;
    c4_RigidBodyTree_clearAllBodies(chartInstance, &c4_d_st, c4_e_obj,
      &c4_e_obj->_pobj0[0]);
    c4_c_st.site = &c4_y_emlrtRSI;
    c4_b_obj->TreeInternal.Base.CollisionsInternal =
      c4_CollisionSet_CollisionSet(chartInstance, &c4_c_st, &c4_b_obj->_pobj0,
      10.0);
    chartInstance->c4_robot_not_empty = true;
    c4_b_st.site = &c4_f_emlrtRSI;
    c4_body = c4_rigidBody_rigidBody(chartInstance, &c4_b_st,
      &chartInstance->c4_gobj_1[0]);
    c4_b_st.site = &c4_g_emlrtRSI;
    c4_l_obj = &c4_c_joint;
    c4_m_obj = c4_l_obj;
    c4_m_obj->InTree = false;
    c4_c_st.site = &c4_gb_emlrtRSI;
    c4_d_this = c4_m_obj;
    c4_m_obj = c4_d_this;
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_jointname_data[c4_i12] = c4_jname[c4_i12];
    }

    c4_i13 = c4_m_obj->NameInternal->size[0] * c4_m_obj->NameInternal->size[1];
    c4_m_obj->NameInternal->size[0] = 1;
    c4_m_obj->NameInternal->size[1] = 6;
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_m_obj->NameInternal,
      c4_i13, &c4_e_emlrtRTEI);
    for (c4_i14 = 0; c4_i14 < 6; c4_i14++) {
      c4_m_obj->NameInternal->data[c4_i14] = c4_jointname_data[c4_i14];
    }

    c4_jointtype_size[0] = 1;
    c4_jointtype_size[1] = 8;
    for (c4_i15 = 0; c4_i15 < 8; c4_i15++) {
      c4_jointtype_data[c4_i15] = c4_b[c4_i15];
    }

    c4_i16 = c4_m_obj->Type->size[0] * c4_m_obj->Type->size[1];
    c4_m_obj->Type->size[0] = 1;
    c4_m_obj->Type->size[1] = c4_jointtype_size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_m_obj->Type, c4_i16,
      &c4_g_emlrtRTEI);
    c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
    for (c4_i17 = 0; c4_i17 <= c4_loop_ub; c4_i17++) {
      c4_m_obj->Type->data[c4_i17] = c4_jointtype_data[c4_i17];
    }

    c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_switch_expression, 2,
                      &c4_h_emlrtRTEI);
    c4_i18 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
    c4_switch_expression->size[0] = 1;
    c4_switch_expression->size[1] = c4_m_obj->Type->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_switch_expression,
      c4_i18, &c4_h_emlrtRTEI);
    c4_b_loop_ub = c4_m_obj->Type->size[0] * c4_m_obj->Type->size[1] - 1;
    for (c4_i19 = 0; c4_i19 <= c4_b_loop_ub; c4_i19++) {
      c4_switch_expression->data[c4_i19] = c4_m_obj->Type->data[c4_i19];
    }

    c4_bool = false;
    c4_remainingDimsA = c4_switch_expression->size[1];
    if (c4_remainingDimsA == 8) {
      c4_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_kstr - 1 < 8) {
          c4_b_kstr = c4_kstr - 1;
          if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv[c4_b_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_kstr++;
          }
        } else {
          c4_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_bool) {
      c4_result = true;
    } else {
      c4_result = false;
    }

    if (c4_result) {
      c4_index = 0.0;
    } else {
      c4_b_bool = false;
      c4_b_remainingDimsA = c4_switch_expression->size[1];
      if (c4_b_remainingDimsA == 9) {
        c4_c_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_c_kstr - 1 < 9) {
            c4_d_kstr = c4_c_kstr - 1;
            if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_c_kstr++;
            }
          } else {
            c4_b_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_b_bool) {
        c4_b_result = true;
      } else {
        c4_b_result = false;
      }

      if (c4_b_result) {
        c4_index = 1.0;
      } else {
        c4_index = -1.0;
      }
    }

    switch ((int32_T)c4_index) {
     case 0:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i21 = 0; c4_i21 < 6; c4_i21++) {
        c4_msubspace_data[c4_i21] = c4_dv[c4_i21];
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
        c4_poslim_data[c4_i24] = -3.1415926535897931 + 6.2831853071795862 *
          (real_T)c4_i24;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_m_obj->VelocityNumber = 1.0;
      c4_m_obj->PositionNumber = 1.0;
      for (c4_i27 = 0; c4_i27 < 3; c4_i27++) {
        c4_m_obj->JointAxisInternal[c4_i27] = c4_dv2[c4_i27];
      }
      break;

     case 1:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i22 = 0; c4_i22 < 6; c4_i22++) {
        c4_msubspace_data[c4_i22] = c4_dv1[c4_i22];
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
        c4_poslim_data[c4_i25] = -0.5 + (real_T)c4_i25;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_m_obj->VelocityNumber = 1.0;
      c4_m_obj->PositionNumber = 1.0;
      for (c4_i28 = 0; c4_i28 < 3; c4_i28++) {
        c4_m_obj->JointAxisInternal[c4_i28] = c4_dv2[c4_i28];
      }
      break;

     default:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i20 = 0; c4_i20 < 6; c4_i20++) {
        c4_msubspace_data[c4_i20] = 0.0;
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
        c4_poslim_data[c4_i23] = 0.0;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_m_obj->VelocityNumber = 0.0;
      c4_m_obj->PositionNumber = 0.0;
      for (c4_i26 = 0; c4_i26 < 3; c4_i26++) {
        c4_m_obj->JointAxisInternal[c4_i26] = 0.0;
      }
      break;
    }

    c4_i29 = c4_m_obj->MotionSubspace->size[0] * c4_m_obj->MotionSubspace->size
      [1];
    c4_m_obj->MotionSubspace->size[0] = 6;
    c4_m_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
      c4_m_obj->MotionSubspace, c4_i29, &c4_r_emlrtRTEI);
    c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
    for (c4_i30 = 0; c4_i30 <= c4_c_loop_ub; c4_i30++) {
      c4_m_obj->MotionSubspace->data[c4_i30] = c4_msubspace_data[c4_i30];
    }

    c4_i31 = c4_m_obj->PositionLimitsInternal->size[0] *
      c4_m_obj->PositionLimitsInternal->size[1];
    c4_m_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
    c4_m_obj->PositionLimitsInternal->size[1] = 2;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
      c4_m_obj->PositionLimitsInternal, c4_i31, &c4_s_emlrtRTEI);
    c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
    for (c4_i32 = 0; c4_i32 <= c4_d_loop_ub; c4_i32++) {
      c4_m_obj->PositionLimitsInternal->data[c4_i32] = c4_poslim_data[c4_i32];
    }

    c4_i33 = c4_m_obj->HomePositionInternal->size[0];
    c4_m_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
    c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
      c4_m_obj->HomePositionInternal, c4_i33, &c4_t_emlrtRTEI);
    c4_e_loop_ub = c4_homepos_size[0] - 1;
    for (c4_i34 = 0; c4_i34 <= c4_e_loop_ub; c4_i34++) {
      c4_m_obj->HomePositionInternal->data[c4_i34] = c4_homepos_data[c4_i34];
    }

    c4_b_st.site = &c4_h_emlrtRSI;
    c4_n_obj = &c4_c_joint;
    for (c4_i35 = 0; c4_i35 < 16; c4_i35++) {
      c4_n_obj->JointToParentTransform[c4_i35] = c4_dv3[c4_i35];
    }

    for (c4_i36 = 0; c4_i36 < 16; c4_i36++) {
      c4_c_I[c4_i36] = 0.0;
    }

    for (c4_e_k = 0; c4_e_k < 4; c4_e_k++) {
      c4_f_k = c4_e_k;
      c4_c_I[c4_f_k + (c4_f_k << 2)] = 1.0;
    }

    for (c4_i37 = 0; c4_i37 < 16; c4_i37++) {
      c4_n_obj->ChildToJointTransform[c4_i37] = c4_c_I[c4_i37];
    }

    c4_b_st.site = &c4_i_emlrtRSI;
    c4_rigidBodyJoint_set_JointAxis(chartInstance, &c4_b_st, &c4_c_joint);
    c4_b_st.site = &c4_q_emlrtRSI;
    c4_rigidBody_set_Joint(chartInstance, &c4_b_st, c4_body, &c4_c_joint,
      &chartInstance->c4_gobj_3[0]);
    c4_b_st.site = &c4_r_emlrtRSI;
    c4_rigidBodyTree_addBody(chartInstance, &c4_b_st, &chartInstance->c4_robot,
      c4_body, &chartInstance->c4_gobj_2[0], &chartInstance->c4_gobj_3[1],
      &chartInstance->c4_gobj_4[0]);
    c4_b_st.site = &c4_j_emlrtRSI;
    c4_b_body = c4_b_rigidBody_rigidBody(chartInstance, &c4_b_st,
      &chartInstance->c4_gobj_1[1]);
    c4_b_st.site = &c4_k_emlrtRSI;
    c4_o_obj = &c4_b_joint;
    c4_p_obj = c4_o_obj;
    c4_p_obj->InTree = false;
    c4_c_st.site = &c4_gb_emlrtRSI;
    c4_e_this = c4_p_obj;
    c4_p_obj = c4_e_this;
    for (c4_i38 = 0; c4_i38 < 6; c4_i38++) {
      c4_jointname_data[c4_i38] = c4_b_jname[c4_i38];
    }

    c4_i39 = c4_p_obj->NameInternal->size[0] * c4_p_obj->NameInternal->size[1];
    c4_p_obj->NameInternal->size[0] = 1;
    c4_p_obj->NameInternal->size[1] = 6;
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_p_obj->NameInternal,
      c4_i39, &c4_e_emlrtRTEI);
    for (c4_i40 = 0; c4_i40 < 6; c4_i40++) {
      c4_p_obj->NameInternal->data[c4_i40] = c4_jointname_data[c4_i40];
    }

    c4_jointtype_size[0] = 1;
    c4_jointtype_size[1] = 8;
    for (c4_i41 = 0; c4_i41 < 8; c4_i41++) {
      c4_jointtype_data[c4_i41] = c4_b[c4_i41];
    }

    c4_i42 = c4_p_obj->Type->size[0] * c4_p_obj->Type->size[1];
    c4_p_obj->Type->size[0] = 1;
    c4_p_obj->Type->size[1] = c4_jointtype_size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_p_obj->Type, c4_i42,
      &c4_g_emlrtRTEI);
    c4_f_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
    for (c4_i43 = 0; c4_i43 <= c4_f_loop_ub; c4_i43++) {
      c4_p_obj->Type->data[c4_i43] = c4_jointtype_data[c4_i43];
    }

    c4_i44 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
    c4_switch_expression->size[0] = 1;
    c4_switch_expression->size[1] = c4_p_obj->Type->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_switch_expression,
      c4_i44, &c4_h_emlrtRTEI);
    c4_g_loop_ub = c4_p_obj->Type->size[0] * c4_p_obj->Type->size[1] - 1;
    for (c4_i45 = 0; c4_i45 <= c4_g_loop_ub; c4_i45++) {
      c4_switch_expression->data[c4_i45] = c4_p_obj->Type->data[c4_i45];
    }

    c4_c_bool = false;
    c4_c_remainingDimsA = c4_switch_expression->size[1];
    if (c4_c_remainingDimsA == 8) {
      c4_e_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_e_kstr - 1 < 8) {
          c4_f_kstr = c4_e_kstr - 1;
          if (c4_switch_expression->data[c4_f_kstr] != c4_b_cv[c4_f_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_e_kstr++;
          }
        } else {
          c4_c_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_c_bool) {
      c4_c_result = true;
    } else {
      c4_c_result = false;
    }

    if (c4_c_result) {
      c4_b_index = 0.0;
    } else {
      c4_d_bool = false;
      c4_d_remainingDimsA = c4_switch_expression->size[1];
      if (c4_d_remainingDimsA == 9) {
        c4_g_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_g_kstr - 1 < 9) {
            c4_h_kstr = c4_g_kstr - 1;
            if (c4_switch_expression->data[c4_h_kstr] != c4_cv[c4_h_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_g_kstr++;
            }
          } else {
            c4_d_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_d_bool) {
        c4_d_result = true;
      } else {
        c4_d_result = false;
      }

      if (c4_d_result) {
        c4_b_index = 1.0;
      } else {
        c4_b_index = -1.0;
      }
    }

    c4_emxFree_char_T(chartInstance, &c4_switch_expression);
    switch ((int32_T)c4_b_index) {
     case 0:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i47 = 0; c4_i47 < 6; c4_i47++) {
        c4_msubspace_data[c4_i47] = c4_dv[c4_i47];
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i50 = 0; c4_i50 < 2; c4_i50++) {
        c4_poslim_data[c4_i50] = -3.1415926535897931 + 6.2831853071795862 *
          (real_T)c4_i50;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_p_obj->VelocityNumber = 1.0;
      c4_p_obj->PositionNumber = 1.0;
      for (c4_i53 = 0; c4_i53 < 3; c4_i53++) {
        c4_p_obj->JointAxisInternal[c4_i53] = c4_dv2[c4_i53];
      }
      break;

     case 1:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i48 = 0; c4_i48 < 6; c4_i48++) {
        c4_msubspace_data[c4_i48] = c4_dv1[c4_i48];
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i51 = 0; c4_i51 < 2; c4_i51++) {
        c4_poslim_data[c4_i51] = -0.5 + (real_T)c4_i51;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_p_obj->VelocityNumber = 1.0;
      c4_p_obj->PositionNumber = 1.0;
      for (c4_i54 = 0; c4_i54 < 3; c4_i54++) {
        c4_p_obj->JointAxisInternal[c4_i54] = c4_dv2[c4_i54];
      }
      break;

     default:
      c4_msubspace_size[0] = 6;
      c4_msubspace_size[1] = 1;
      for (c4_i46 = 0; c4_i46 < 6; c4_i46++) {
        c4_msubspace_data[c4_i46] = 0.0;
      }

      c4_poslim_size[0] = 1;
      c4_poslim_size[1] = 2;
      for (c4_i49 = 0; c4_i49 < 2; c4_i49++) {
        c4_poslim_data[c4_i49] = 0.0;
      }

      c4_homepos_size[0] = 1;
      c4_homepos_data[0] = 0.0;
      c4_p_obj->VelocityNumber = 0.0;
      c4_p_obj->PositionNumber = 0.0;
      for (c4_i52 = 0; c4_i52 < 3; c4_i52++) {
        c4_p_obj->JointAxisInternal[c4_i52] = 0.0;
      }
      break;
    }

    c4_i55 = c4_p_obj->MotionSubspace->size[0] * c4_p_obj->MotionSubspace->size
      [1];
    c4_p_obj->MotionSubspace->size[0] = 6;
    c4_p_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
      c4_p_obj->MotionSubspace, c4_i55, &c4_r_emlrtRTEI);
    c4_h_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
    for (c4_i56 = 0; c4_i56 <= c4_h_loop_ub; c4_i56++) {
      c4_p_obj->MotionSubspace->data[c4_i56] = c4_msubspace_data[c4_i56];
    }

    c4_i57 = c4_p_obj->PositionLimitsInternal->size[0] *
      c4_p_obj->PositionLimitsInternal->size[1];
    c4_p_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
    c4_p_obj->PositionLimitsInternal->size[1] = 2;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
      c4_p_obj->PositionLimitsInternal, c4_i57, &c4_s_emlrtRTEI);
    c4_i_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
    for (c4_i58 = 0; c4_i58 <= c4_i_loop_ub; c4_i58++) {
      c4_p_obj->PositionLimitsInternal->data[c4_i58] = c4_poslim_data[c4_i58];
    }

    c4_i59 = c4_p_obj->HomePositionInternal->size[0];
    c4_p_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
    c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
      c4_p_obj->HomePositionInternal, c4_i59, &c4_t_emlrtRTEI);
    c4_j_loop_ub = c4_homepos_size[0] - 1;
    for (c4_i60 = 0; c4_i60 <= c4_j_loop_ub; c4_i60++) {
      c4_p_obj->HomePositionInternal->data[c4_i60] = c4_homepos_data[c4_i60];
    }

    c4_c_L1[0] = c4_b_L1;
    c4_c_L1[1] = 0.0;
    c4_c_L1[2] = 0.0;
    c4_trvec2tform(chartInstance, c4_c_L1, c4_c_I);
    c4_b_st.site = &c4_l_emlrtRSI;
    c4_rigidBodyJoint_setFixedTransform(chartInstance, &c4_b_st, &c4_b_joint,
      c4_c_I);
    c4_b_st.site = &c4_m_emlrtRSI;
    c4_rigidBodyJoint_set_JointAxis(chartInstance, &c4_b_st, &c4_b_joint);
    c4_b_st.site = &c4_s_emlrtRSI;
    c4_rigidBody_set_Joint(chartInstance, &c4_b_st, c4_b_body, &c4_b_joint,
      &chartInstance->c4_gobj_3[2]);
    c4_b_st.site = &c4_t_emlrtRSI;
    c4_b_rigidBodyTree_addBody(chartInstance, &c4_b_st, &chartInstance->c4_robot,
      c4_b_body, &chartInstance->c4_gobj_2[1], &chartInstance->c4_gobj_3[3],
      &chartInstance->c4_gobj_4[1]);
    c4_b_st.site = &c4_n_emlrtRSI;
    c4_c_body = c4_c_rigidBody_rigidBody(chartInstance, &c4_b_st,
      &chartInstance->c4_gobj_1[2]);
    c4_b_st.site = &c4_o_emlrtRSI;
    c4_c_rigidBodyJoint_rigidBodyJoint(chartInstance, &c4_b_st, &c4_joint);
    c4_c_L2[0] = c4_b_L2;
    c4_c_L2[1] = 0.0;
    c4_c_L2[2] = 0.0;
    c4_trvec2tform(chartInstance, c4_c_L2, c4_c_I);
    c4_b_st.site = &c4_p_emlrtRSI;
    c4_rigidBodyJoint_setFixedTransform(chartInstance, &c4_b_st, &c4_joint,
      c4_c_I);
    c4_b_st.site = &c4_u_emlrtRSI;
    c4_rigidBody_set_Joint(chartInstance, &c4_b_st, c4_c_body, &c4_joint,
      &chartInstance->c4_gobj_3[4]);
    c4_b_st.site = &c4_v_emlrtRSI;
    c4_c_rigidBodyTree_addBody(chartInstance, &c4_b_st, &chartInstance->c4_robot,
      c4_c_body, &chartInstance->c4_gobj_2[2], &chartInstance->c4_gobj_3[5],
      &chartInstance->c4_gobj_4[2]);
  }

  *chartInstance->c4_y = 1.0;
  c4_do_animation_call_c4_inverse_test(chartInstance);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 4U, *chartInstance->c4_y);
  c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_c_joint);
  c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_b_joint);
  c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_joint);
}

static void mdl_start_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    20U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1278);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 184, 201, -1,
                    1257);
}

static void mdl_cleanup_runtime_resources_c4_inverse_test
  (SFc4_inverse_testInstanceStruct *chartInstance)
{
  c4_emxFreeStruct_rigidBodyTree(chartInstance, &chartInstance->c4_robot);
  c4_emxFreeMatrix_rigidBody(chartInstance, chartInstance->c4_gobj_1);
  c4_b_emxFreeMatrix_robotics_manip_in(chartInstance, chartInstance->c4_gobj_2);
  c4_emxFreeMatrix_rigidBodyJoint(chartInstance, chartInstance->c4_gobj_3);
  c4_emxFreeMatrix_robotics_manip_in(chartInstance, chartInstance->c4_gobj_4);
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void initSimStructsc4_inverse_test(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_inverse_test_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static c4_rigidBodyJoint *c4_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj)
{
  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_jname[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBodyJoint *c4_b_obj;
  c4_rigidBodyJoint *c4_this;
  emlrtStack c4_st;
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[8];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_obj = c4_obj;
  c4_b_obj->InTree = false;
  c4_st.site = &c4_gb_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  for (c4_i = 0; c4_i < 8; c4_i++) {
    c4_jointname_data[c4_i] = c4_jname[c4_i];
  }

  c4_i1 = c4_b_obj->NameInternal->size[0] * c4_b_obj->NameInternal->size[1];
  c4_b_obj->NameInternal->size[0] = 1;
  c4_b_obj->NameInternal->size[1] = 8;
  c4_st.site = &c4_ue_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->NameInternal,
    c4_i1, &c4_e_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 8; c4_i2++) {
    c4_b_obj->NameInternal->data[c4_i2] = c4_jointname_data[c4_i2];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    c4_jointtype_data[c4_i3] = c4_b_cv[c4_i3];
  }

  c4_i4 = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1];
  c4_b_obj->Type->size[0] = 1;
  c4_b_obj->Type->size[1] = c4_jointtype_size[1];
  c4_st.site = &c4_te_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->Type, c4_i4,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
    c4_b_obj->Type->data[c4_i5] = c4_jointtype_data[c4_i5];
  }

  c4_emxInit_char_T(chartInstance, c4_sp, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i6 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_b_obj->Type->size[1];
  c4_st.site = &c4_se_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_switch_expression, c4_i6,
    &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_b_loop_ub; c4_i7++) {
    c4_switch_expression->data[c4_i7] = c4_b_obj->Type->data[c4_i7];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i9 = 0; c4_i9 < 6; c4_i9++) {
      c4_msubspace_data[c4_i9] = c4_dv[c4_i9];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_poslim_data[c4_i12] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i12;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i15 = 0; c4_i15 < 3; c4_i15++) {
      c4_b_obj->JointAxisInternal[c4_i15] = c4_dv2[c4_i15];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i10 = 0; c4_i10 < 6; c4_i10++) {
      c4_msubspace_data[c4_i10] = c4_dv1[c4_i10];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_poslim_data[c4_i13] = -0.5 + (real_T)c4_i13;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i16 = 0; c4_i16 < 3; c4_i16++) {
      c4_b_obj->JointAxisInternal[c4_i16] = c4_dv2[c4_i16];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i8 = 0; c4_i8 < 6; c4_i8++) {
      c4_msubspace_data[c4_i8] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_poslim_data[c4_i11] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 0.0;
    c4_b_obj->PositionNumber = 0.0;
    for (c4_i14 = 0; c4_i14 < 3; c4_i14++) {
      c4_b_obj->JointAxisInternal[c4_i14] = 0.0;
    }
    break;
  }

  c4_i17 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size[1];
  c4_b_obj->MotionSubspace->size[0] = 6;
  c4_b_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_st.site = &c4_xe_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_obj->MotionSubspace,
    c4_i17, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i18 = 0; c4_i18 <= c4_c_loop_ub; c4_i18++) {
    c4_b_obj->MotionSubspace->data[c4_i18] = c4_msubspace_data[c4_i18];
  }

  c4_i19 = c4_b_obj->PositionLimitsInternal->size[0] *
    c4_b_obj->PositionLimitsInternal->size[1];
  c4_b_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_b_obj->PositionLimitsInternal->size[1] = 2;
  c4_st.site = &c4_we_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
    c4_b_obj->PositionLimitsInternal, c4_i19, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_d_loop_ub; c4_i20++) {
    c4_b_obj->PositionLimitsInternal->data[c4_i20] = c4_poslim_data[c4_i20];
  }

  c4_i21 = c4_b_obj->HomePositionInternal->size[0];
  c4_b_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, c4_sp,
    c4_b_obj->HomePositionInternal, c4_i21, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_e_loop_ub; c4_i22++) {
    c4_b_obj->HomePositionInternal->data[c4_i22] = c4_homepos_data[c4_i22];
  }

  return c4_b_obj;
}

static c4_robotics_manip_internal_CollisionSet *c4_CollisionSet_CollisionSet
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_CollisionSet *c4_obj, real_T c4_maxElements)
{
  static real_T c4_F[36] = { 1.0, 1.0, 2.0, 2.0, 3.0, 3.0, 4.0, 4.0, 5.0, 5.0,
    1.0, 2.0, 6.0, 5.0, 7.0, 6.0, 8.0, 7.0, 5.0, 8.0, 7.0, 8.0, 2.0, 3.0, 2.0,
    6.0, 3.0, 7.0, 4.0, 8.0, 1.0, 5.0, 6.0, 7.0, 4.0, 4.0 };

  static real_T c4_quat[4] = { 1.0, 0.0, 0.0, 0.0 };

  void* c4_geometryInternal;
  c4_collisionBox c4_lobj_0;
  c4_collisionBox *c4_b_this;
  c4_collisionBox *c4_c_obj;
  c4_collisionBox *c4_collisionPrimitive;
  c4_collisionBox *c4_d_obj;
  c4_collisionBox *c4_e_obj;
  c4_collisionBox *c4_f_obj;
  c4_collisionBox *c4_g_obj;
  c4_collisionBox *c4_h_obj;
  c4_collisionBox *c4_i_obj;
  c4_emxArray_unnamed_struct *c4_r;
  c4_robotics_manip_internal_CollisionGeometry *c4_c_this;
  c4_robotics_manip_internal_CollisionGeometry *c4_defaultGeometry;
  c4_robotics_manip_internal_CollisionGeometry *c4_j_obj;
  c4_robotics_manip_internal_CollisionGeometry *c4_k_obj;
  c4_robotics_manip_internal_CollisionGeometry *c4_l_obj;
  c4_robotics_manip_internal_CollisionGeometry *c4_newObj;
  c4_robotics_manip_internal_CollisionSet *c4_b_obj;
  c4_robotics_manip_internal_CollisionSet *c4_this;
  real_T c4_c_i;
  real_T c4_d;
  real_T c4_d1;
  int32_T c4_iv[2];
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  c4_emxInit_unnamed_struct(chartInstance, c4_sp, &c4_r, 2, &c4_v_emlrtRTEI);
  c4_b_obj = c4_obj;
  c4_b_obj->Size = 0.0;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_b_obj->MaxElements = c4_maxElements;
  c4_i = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = 1;
  c4_d = emlrtNonNegativeCheckR2012b(c4_b_obj->MaxElements, &c4_b_emlrtDCI,
    c4_sp);
  c4_r->size[1] = (int32_T)emlrtIntegerCheckR2012b(c4_d, &c4_emlrtDCI, c4_sp);
  c4_emxEnsureCapacity_unnamed_struc(chartInstance, c4_sp, c4_r, c4_i,
    &c4_v_emlrtRTEI);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_iv[c4_i1] = c4_r->size[c4_i1];
  }

  c4_emxFree_unnamed_struct(chartInstance, &c4_r);
  c4_i2 = c4_b_obj->CollisionGeometries->size[0] * c4_b_obj->
    CollisionGeometries->size[1];
  c4_b_obj->CollisionGeometries->size[0] = c4_iv[0];
  c4_b_obj->CollisionGeometries->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_unnamed_struc(chartInstance, c4_sp,
    c4_b_obj->CollisionGeometries, c4_i2, &c4_w_emlrtRTEI);
  c4_c_obj = &c4_lobj_0;
  c4_d_obj = c4_c_obj;
  c4_e_obj = c4_d_obj;
  c4_d_obj = c4_e_obj;
  c4_f_obj = c4_d_obj;
  c4_d_obj = c4_f_obj;
  c4_b_this = c4_d_obj;
  c4_d_obj = c4_b_this;
  c4_g_obj = c4_d_obj;
  c4_h_obj = c4_g_obj;
  for (c4_i3 = 0; c4_i3 < 3; c4_i3++) {
    c4_h_obj->Position[c4_i3] = 0.0;
  }

  for (c4_i4 = 0; c4_i4 < 4; c4_i4++) {
    c4_h_obj->Quaternion[c4_i4] = c4_quat[c4_i4];
  }

  for (c4_i5 = 0; c4_i5 < 16; c4_i5++) {
    c4_h_obj->PoseInternal[c4_i5] = c4_dv3[c4_i5];
  }

  c4_d_obj->XInternal = 0.0;
  c4_d_obj->YInternal = 0.0;
  c4_d_obj->ZInternal = 0.0;
  c4_i_obj = c4_d_obj;
  c4_geometryInternal = collisioncodegen_makeBox(0.0, 0.0, 0.0);
  c4_i_obj->GeometryInternal = c4_geometryInternal;
  for (c4_i6 = 0; c4_i6 < 24; c4_i6++) {
    c4_i_obj->VisualMeshVertices[c4_i6] = 0.0;
  }

  for (c4_i7 = 0; c4_i7 < 36; c4_i7++) {
    c4_i_obj->VisualMeshFaces[c4_i7] = c4_F[c4_i7];
  }

  c4_i_obj->EstimatedMaxReach = 0.0;
  c4_j_obj = &c4_b_obj->_pobj0;
  c4_collisionPrimitive = c4_d_obj;
  c4_defaultGeometry = c4_j_obj;
  c4_k_obj = c4_defaultGeometry;
  c4_defaultGeometry = c4_k_obj;
  c4_c_this = c4_defaultGeometry;
  c4_defaultGeometry = c4_c_this;
  c4_defaultGeometry->CollisionPrimitive =
    c4_collisionPrimitive->GeometryInternal;
  for (c4_i8 = 0; c4_i8 < 16; c4_i8++) {
    c4_defaultGeometry->LocalPose[c4_i8] = c4_dv3[c4_i8];
  }

  for (c4_i9 = 0; c4_i9 < 16; c4_i9++) {
    c4_defaultGeometry->WorldPose[c4_i9] = c4_dv3[c4_i9];
  }

  c4_d1 = c4_b_obj->MaxElements;
  c4_i10 = (int32_T)c4_d1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d1, mxDOUBLE_CLASS, c4_i10,
    &c4_gc_emlrtRTEI, c4_sp);
  for (c4_b_i = 0; c4_b_i < c4_i10; c4_b_i++) {
    c4_c_i = (real_T)c4_b_i + 1.0;
    c4_l_obj = c4_defaultGeometry;
    c4_newObj = c4_l_obj;
    c4_i11 = c4_b_obj->CollisionGeometries->size[1] - 1;
    c4_i12 = (int32_T)c4_c_i - 1;
    c4_b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(c4_i12, 0,
      c4_i11, &c4_emlrtBCI, c4_sp)] = c4_newObj;
  }

  return c4_b_obj;
}

static void c4_check_forloop_overflow_error(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp)
{
  static char_T c4_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c4_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  (void)chartInstance;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c4_sp, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14, sf_mex_call
              (c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c4_sp, NULL,
    "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
}

static c4_robotics_manip_internal_VisualizationInfo
  c4_VisualizationInfo_VisualizationInfo(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp)
{
  static char_T c4_b_cv[62] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
    'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D',
    'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
    'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

  static char_T c4_b_cv1[12] = { 'D', 'O', '_', 'N', 'O', 'T', '_', 'E', 'D',
    'I', 'T', '_' };

  c4_robotics_manip_internal_VisualizationInfo c4_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_idx[5];
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_x;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_k;
  char_T c4_s[5];
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_ub_emlrtRSI;
  c4_b_st.site = &c4_vb_emlrtRSI;
  c4_c_st.site = &c4_wb_emlrtRSI;
  c4_rand(chartInstance, &c4_c_st, c4_idx);
  for (c4_k = 0; c4_k < 5; c4_k++) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_idx[(int32_T)c4_b_k - 1] * 62.0;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarFloor(c4_b_x);
    c4_idx[(int32_T)c4_b_k - 1] = 1.0 + c4_b_x;
  }

  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_i2 = (int32_T)emlrtIntegerCheckR2012b(c4_idx[c4_i], &c4_c_emlrtDCI,
      &c4_st);
    c4_s[c4_i] = c4_b_cv[emlrtDynamicBoundsCheckR2012b(c4_i2, 1, 62,
      &c4_b_emlrtBCI, &c4_st) - 1];
  }

  for (c4_i1 = 0; c4_i1 < 12; c4_i1++) {
    c4_obj.ShowTag[c4_i1] = c4_b_cv1[c4_i1];
  }

  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    c4_obj.ShowTag[c4_i3 + 12] = c4_s[c4_i3];
  }

  return c4_obj;
}

static void c4_rand(SFc4_inverse_testInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_r[5])
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_k;
  real_T c4_b_mti;
  real_T c4_d;
  real_T c4_d1;
  int32_T c4_i;
  int32_T c4_k;
  int32_T c4_mti;
  uint32_T c4_b_r;
  uint32_T c4_u;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_xb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  if (!chartInstance->c4_method_not_empty) {
    chartInstance->c4_method = 7U;
    chartInstance->c4_method_not_empty = true;
  }

  c4_b_st.site = &c4_yb_emlrtRSI;
  if (!chartInstance->c4_c_state_not_empty) {
    for (c4_i = 0; c4_i < 625; c4_i++) {
      chartInstance->c4_c_state[c4_i] = 0U;
    }

    c4_b_r = 5489U;
    chartInstance->c4_c_state[0] = 5489U;
    for (c4_mti = 0; c4_mti < 623; c4_mti++) {
      c4_b_mti = (real_T)c4_mti + 2.0;
      c4_d1 = muDoubleScalarRound(c4_b_mti - 1.0);
      if (c4_d1 < 4.294967296E+9) {
        if (c4_d1 >= 0.0) {
          c4_u = (uint32_T)c4_d1;
        } else {
          c4_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c4_d1 >= 4.294967296E+9) {
        c4_u = MAX_uint32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c4_u = 0U;
      }

      c4_b_r = (c4_b_r ^ c4_b_r >> 30U) * 1812433253U + c4_u;
      chartInstance->c4_c_state[(int32_T)c4_b_mti - 1] = c4_b_r;
    }

    chartInstance->c4_c_state[624] = 624U;
    chartInstance->c4_c_state_not_empty = true;
  }

  for (c4_k = 0; c4_k < 5; c4_k++) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_c_st.site = &c4_ac_emlrtRSI;
    c4_d = c4_b_eml_rand_mt19937ar(chartInstance, &c4_c_st,
      chartInstance->c4_c_state);
    c4_r[(int32_T)c4_b_k - 1] = c4_d;
  }
}

static void c4_eml_rand_mt19937ar(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_d_state[625], uint32_T c4_e_state[625],
  real_T *c4_r)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 625; c4_i++) {
    c4_e_state[c4_i] = c4_d_state[c4_i];
  }

  *c4_r = c4_b_eml_rand_mt19937ar(chartInstance, c4_sp, c4_e_state);
}

static void c4_RigidBodyTree_clearAllBodies(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree *c4_obj,
  c4_robotics_manip_internal_RigidBody *c4_iobj_0)
{
  static real_T c4_b_dv[6] = { 0.0, 0.0, 0.0, -1.0, -1.0, -1.0 };

  static char_T c4_b_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03', '_', 'j', 'n', 't' };

  static char_T c4_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02', '_', 'j', 'n', 't' };

  static char_T c4_b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03' };

  static char_T c4_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02' };

  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBodyJoint *c4_c_this;
  c4_rigidBodyJoint *c4_e_this;
  c4_rigidBodyJoint *c4_i_obj;
  c4_rigidBodyJoint *c4_j_obj;
  c4_rigidBodyJoint *c4_o_obj;
  c4_rigidBodyJoint *c4_p_obj;
  c4_robotics_manip_internal_RigidBody *c4_b_obj;
  c4_robotics_manip_internal_RigidBody *c4_b_this;
  c4_robotics_manip_internal_RigidBody *c4_c_obj;
  c4_robotics_manip_internal_RigidBody *c4_d_obj;
  c4_robotics_manip_internal_RigidBody *c4_d_this;
  c4_robotics_manip_internal_RigidBody *c4_e_obj;
  c4_robotics_manip_internal_RigidBody *c4_f_obj;
  c4_robotics_manip_internal_RigidBody *c4_g_obj;
  c4_robotics_manip_internal_RigidBody *c4_h_obj;
  c4_robotics_manip_internal_RigidBody *c4_k_obj;
  c4_robotics_manip_internal_RigidBody *c4_l_obj;
  c4_robotics_manip_internal_RigidBody *c4_m_obj;
  c4_robotics_manip_internal_RigidBody *c4_n_obj;
  c4_robotics_manip_internal_RigidBody *c4_q_obj;
  c4_robotics_manip_internal_RigidBody *c4_this;
  c4_robotics_manip_internal_RigidBodyTree *c4_r_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_b_I[36];
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_homepos_data[6];
  real_T c4_b_index;
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_d_remainingDimsA;
  int32_T c4_e_k;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_k;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_g_k;
  int32_T c4_g_kstr;
  int32_T c4_g_loop_ub;
  int32_T c4_h_k;
  int32_T c4_h_kstr;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i71;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i75;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_k;
  int32_T c4_i_loop_ub;
  int32_T c4_j_k;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_k_k;
  int32_T c4_kstr;
  int32_T c4_l_k;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[14];
  char_T c4_bn_data[10];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_c_result;
  boolean_T c4_d_bool;
  boolean_T c4_d_result;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_cc_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_obj = &c4_iobj_0[0];
  c4_c_obj = c4_b_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_c_obj = c4_d_obj;
  c4_this = c4_c_obj;
  c4_c_obj = c4_this;
  for (c4_i = 0; c4_i < 10; c4_i++) {
    c4_bn_data[c4_i] = c4_cv1[c4_i];
  }

  c4_i1 = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size[1];
  c4_c_obj->NameInternal->size[0] = 1;
  c4_c_obj->NameInternal->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_c_obj->NameInternal,
    c4_i1, &c4_c_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 10; c4_i2++) {
    c4_c_obj->NameInternal->data[c4_i2] = c4_bn_data[c4_i2];
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_c_obj->JointInternal = c4_b_rigidBodyJoint_rigidBodyJoint(chartInstance,
    &c4_b_st, &c4_c_obj->_pobj1);
  c4_c_obj->Index = -1.0;
  c4_c_obj->ParentIndex = -1.0;
  c4_c_obj->MassInternal = 1.0;
  for (c4_i3 = 0; c4_i3 < 3; c4_i3++) {
    c4_c_obj->CenterOfMassInternal[c4_i3] = 0.0;
  }

  for (c4_i4 = 0; c4_i4 < 9; c4_i4++) {
    c4_I[c4_i4] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i5 = 0; c4_i5 < 9; c4_i5++) {
    c4_c_obj->InertiaInternal[c4_i5] = c4_I[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 36; c4_i6++) {
    c4_b_I[c4_i6] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i7 = 0; c4_i7 < 36; c4_i7++) {
    c4_c_obj->SpatialInertia[c4_i7] = c4_b_I[c4_i7];
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_c_obj->CollisionsInternal = c4_CollisionSet_CollisionSet(chartInstance,
    &c4_b_st, &c4_c_obj->_pobj0, 0.0);
  c4_obj->Bodies[0] = c4_c_obj;
  c4_e_obj = c4_obj->Bodies[0];
  for (c4_i8 = 0; c4_i8 < 3; c4_i8++) {
    c4_e_obj->ChildrenIndices[c4_i8] = 0.0;
  }

  c4_st.site = &c4_cc_emlrtRSI;
  c4_f_obj = &c4_iobj_0[1];
  c4_g_obj = c4_f_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_h_obj = c4_g_obj;
  c4_g_obj = c4_h_obj;
  c4_b_this = c4_g_obj;
  c4_g_obj = c4_b_this;
  for (c4_i9 = 0; c4_i9 < 10; c4_i9++) {
    c4_bn_data[c4_i9] = c4_bname[c4_i9];
  }

  c4_i10 = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size[1];
  c4_g_obj->NameInternal->size[0] = 1;
  c4_g_obj->NameInternal->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_g_obj->NameInternal,
    c4_i10, &c4_c_emlrtRTEI);
  for (c4_i11 = 0; c4_i11 < 10; c4_i11++) {
    c4_g_obj->NameInternal->data[c4_i11] = c4_bn_data[c4_i11];
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_i_obj = &c4_g_obj->_pobj1;
  c4_j_obj = c4_i_obj;
  c4_j_obj->InTree = false;
  c4_c_this = c4_j_obj;
  c4_j_obj = c4_c_this;
  for (c4_i12 = 0; c4_i12 < 14; c4_i12++) {
    c4_jointname_data[c4_i12] = c4_jname[c4_i12];
  }

  c4_i13 = c4_j_obj->NameInternal->size[0] * c4_j_obj->NameInternal->size[1];
  c4_j_obj->NameInternal->size[0] = 1;
  c4_j_obj->NameInternal->size[1] = 14;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_j_obj->NameInternal,
    c4_i13, &c4_e_emlrtRTEI);
  for (c4_i14 = 0; c4_i14 < 14; c4_i14++) {
    c4_j_obj->NameInternal->data[c4_i14] = c4_jointname_data[c4_i14];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i15 = 0; c4_i15 < 5; c4_i15++) {
    c4_jointtype_data[c4_i15] = c4_b_cv[c4_i15];
  }

  c4_i16 = c4_j_obj->Type->size[0] * c4_j_obj->Type->size[1];
  c4_j_obj->Type->size[0] = 1;
  c4_j_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_j_obj->Type, c4_i16,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i17 = 0; c4_i17 <= c4_loop_ub; c4_i17++) {
    c4_j_obj->Type->data[c4_i17] = c4_jointtype_data[c4_i17];
  }

  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i18 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_j_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_switch_expression,
    c4_i18, &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_j_obj->Type->size[0] * c4_j_obj->Type->size[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_b_loop_ub; c4_i19++) {
    c4_switch_expression->data[c4_i19] = c4_j_obj->Type->data[c4_i19];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i21 = 0; c4_i21 < 6; c4_i21++) {
      c4_msubspace_data[c4_i21] = c4_dv[c4_i21];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
      c4_poslim_data[c4_i24] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i24;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_j_obj->VelocityNumber = 1.0;
    c4_j_obj->PositionNumber = 1.0;
    for (c4_i27 = 0; c4_i27 < 3; c4_i27++) {
      c4_j_obj->JointAxisInternal[c4_i27] = c4_dv2[c4_i27];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i22 = 0; c4_i22 < 6; c4_i22++) {
      c4_msubspace_data[c4_i22] = c4_dv1[c4_i22];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
      c4_poslim_data[c4_i25] = -0.5 + (real_T)c4_i25;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_j_obj->VelocityNumber = 1.0;
    c4_j_obj->PositionNumber = 1.0;
    for (c4_i28 = 0; c4_i28 < 3; c4_i28++) {
      c4_j_obj->JointAxisInternal[c4_i28] = c4_dv2[c4_i28];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i20 = 0; c4_i20 < 6; c4_i20++) {
      c4_msubspace_data[c4_i20] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_poslim_data[c4_i23] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_j_obj->VelocityNumber = 0.0;
    c4_j_obj->PositionNumber = 0.0;
    for (c4_i26 = 0; c4_i26 < 3; c4_i26++) {
      c4_j_obj->JointAxisInternal[c4_i26] = 0.0;
    }
    break;
  }

  c4_i29 = c4_j_obj->MotionSubspace->size[0] * c4_j_obj->MotionSubspace->size[1];
  c4_j_obj->MotionSubspace->size[0] = 6;
  c4_j_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_j_obj->MotionSubspace,
    c4_i29, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i30 = 0; c4_i30 <= c4_c_loop_ub; c4_i30++) {
    c4_j_obj->MotionSubspace->data[c4_i30] = c4_msubspace_data[c4_i30];
  }

  c4_i31 = c4_j_obj->PositionLimitsInternal->size[0] *
    c4_j_obj->PositionLimitsInternal->size[1];
  c4_j_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_j_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
    c4_j_obj->PositionLimitsInternal, c4_i31, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i32 = 0; c4_i32 <= c4_d_loop_ub; c4_i32++) {
    c4_j_obj->PositionLimitsInternal->data[c4_i32] = c4_poslim_data[c4_i32];
  }

  c4_i33 = c4_j_obj->HomePositionInternal->size[0];
  c4_j_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
    c4_j_obj->HomePositionInternal, c4_i33, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i34 = 0; c4_i34 <= c4_e_loop_ub; c4_i34++) {
    c4_j_obj->HomePositionInternal->data[c4_i34] = c4_homepos_data[c4_i34];
  }

  c4_g_obj->JointInternal = c4_j_obj;
  c4_g_obj->Index = -1.0;
  c4_g_obj->ParentIndex = -1.0;
  c4_g_obj->MassInternal = 1.0;
  for (c4_i35 = 0; c4_i35 < 3; c4_i35++) {
    c4_g_obj->CenterOfMassInternal[c4_i35] = 0.0;
  }

  for (c4_i36 = 0; c4_i36 < 9; c4_i36++) {
    c4_I[c4_i36] = 0.0;
  }

  for (c4_e_k = 0; c4_e_k < 3; c4_e_k++) {
    c4_f_k = c4_e_k;
    c4_I[c4_f_k + 3 * c4_f_k] = 1.0;
  }

  for (c4_i37 = 0; c4_i37 < 9; c4_i37++) {
    c4_g_obj->InertiaInternal[c4_i37] = c4_I[c4_i37];
  }

  for (c4_i38 = 0; c4_i38 < 36; c4_i38++) {
    c4_b_I[c4_i38] = 0.0;
  }

  for (c4_g_k = 0; c4_g_k < 6; c4_g_k++) {
    c4_h_k = c4_g_k;
    c4_b_I[c4_h_k + 6 * c4_h_k] = 1.0;
  }

  for (c4_i39 = 0; c4_i39 < 36; c4_i39++) {
    c4_g_obj->SpatialInertia[c4_i39] = c4_b_I[c4_i39];
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_g_obj->CollisionsInternal = c4_CollisionSet_CollisionSet(chartInstance,
    &c4_b_st, &c4_g_obj->_pobj0, 0.0);
  c4_obj->Bodies[1] = c4_g_obj;
  c4_k_obj = c4_obj->Bodies[1];
  for (c4_i40 = 0; c4_i40 < 3; c4_i40++) {
    c4_k_obj->ChildrenIndices[c4_i40] = 0.0;
  }

  c4_st.site = &c4_cc_emlrtRSI;
  c4_l_obj = &c4_iobj_0[2];
  c4_m_obj = c4_l_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_n_obj = c4_m_obj;
  c4_m_obj = c4_n_obj;
  c4_d_this = c4_m_obj;
  c4_m_obj = c4_d_this;
  for (c4_i41 = 0; c4_i41 < 10; c4_i41++) {
    c4_bn_data[c4_i41] = c4_b_bname[c4_i41];
  }

  c4_i42 = c4_m_obj->NameInternal->size[0] * c4_m_obj->NameInternal->size[1];
  c4_m_obj->NameInternal->size[0] = 1;
  c4_m_obj->NameInternal->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_m_obj->NameInternal,
    c4_i42, &c4_c_emlrtRTEI);
  for (c4_i43 = 0; c4_i43 < 10; c4_i43++) {
    c4_m_obj->NameInternal->data[c4_i43] = c4_bn_data[c4_i43];
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_o_obj = &c4_m_obj->_pobj1;
  c4_p_obj = c4_o_obj;
  c4_p_obj->InTree = false;
  c4_e_this = c4_p_obj;
  c4_p_obj = c4_e_this;
  for (c4_i44 = 0; c4_i44 < 14; c4_i44++) {
    c4_jointname_data[c4_i44] = c4_b_jname[c4_i44];
  }

  c4_i45 = c4_p_obj->NameInternal->size[0] * c4_p_obj->NameInternal->size[1];
  c4_p_obj->NameInternal->size[0] = 1;
  c4_p_obj->NameInternal->size[1] = 14;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_p_obj->NameInternal,
    c4_i45, &c4_e_emlrtRTEI);
  for (c4_i46 = 0; c4_i46 < 14; c4_i46++) {
    c4_p_obj->NameInternal->data[c4_i46] = c4_jointname_data[c4_i46];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i47 = 0; c4_i47 < 5; c4_i47++) {
    c4_jointtype_data[c4_i47] = c4_b_cv[c4_i47];
  }

  c4_i48 = c4_p_obj->Type->size[0] * c4_p_obj->Type->size[1];
  c4_p_obj->Type->size[0] = 1;
  c4_p_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_p_obj->Type, c4_i48,
    &c4_g_emlrtRTEI);
  c4_f_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i49 = 0; c4_i49 <= c4_f_loop_ub; c4_i49++) {
    c4_p_obj->Type->data[c4_i49] = c4_jointtype_data[c4_i49];
  }

  c4_i50 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_p_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_switch_expression,
    c4_i50, &c4_h_emlrtRTEI);
  c4_g_loop_ub = c4_p_obj->Type->size[0] * c4_p_obj->Type->size[1] - 1;
  for (c4_i51 = 0; c4_i51 <= c4_g_loop_ub; c4_i51++) {
    c4_switch_expression->data[c4_i51] = c4_p_obj->Type->data[c4_i51];
  }

  c4_c_bool = false;
  c4_c_remainingDimsA = c4_switch_expression->size[1];
  if (c4_c_remainingDimsA == 8) {
    c4_e_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_e_kstr - 1 < 8) {
        c4_f_kstr = c4_e_kstr - 1;
        if (c4_switch_expression->data[c4_f_kstr] != c4_b_cv1[c4_f_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_e_kstr++;
        }
      } else {
        c4_c_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_c_bool) {
    c4_c_result = true;
  } else {
    c4_c_result = false;
  }

  if (c4_c_result) {
    c4_b_index = 0.0;
  } else {
    c4_d_bool = false;
    c4_d_remainingDimsA = c4_switch_expression->size[1];
    if (c4_d_remainingDimsA == 9) {
      c4_g_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_g_kstr - 1 < 9) {
          c4_h_kstr = c4_g_kstr - 1;
          if (c4_switch_expression->data[c4_h_kstr] != c4_cv[c4_h_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_g_kstr++;
          }
        } else {
          c4_d_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_d_bool) {
      c4_d_result = true;
    } else {
      c4_d_result = false;
    }

    if (c4_d_result) {
      c4_b_index = 1.0;
    } else {
      c4_b_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_b_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i53 = 0; c4_i53 < 6; c4_i53++) {
      c4_msubspace_data[c4_i53] = c4_dv[c4_i53];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i56 = 0; c4_i56 < 2; c4_i56++) {
      c4_poslim_data[c4_i56] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i56;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_p_obj->VelocityNumber = 1.0;
    c4_p_obj->PositionNumber = 1.0;
    for (c4_i59 = 0; c4_i59 < 3; c4_i59++) {
      c4_p_obj->JointAxisInternal[c4_i59] = c4_dv2[c4_i59];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i54 = 0; c4_i54 < 6; c4_i54++) {
      c4_msubspace_data[c4_i54] = c4_dv1[c4_i54];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i57 = 0; c4_i57 < 2; c4_i57++) {
      c4_poslim_data[c4_i57] = -0.5 + (real_T)c4_i57;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_p_obj->VelocityNumber = 1.0;
    c4_p_obj->PositionNumber = 1.0;
    for (c4_i60 = 0; c4_i60 < 3; c4_i60++) {
      c4_p_obj->JointAxisInternal[c4_i60] = c4_dv2[c4_i60];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i52 = 0; c4_i52 < 6; c4_i52++) {
      c4_msubspace_data[c4_i52] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i55 = 0; c4_i55 < 2; c4_i55++) {
      c4_poslim_data[c4_i55] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_p_obj->VelocityNumber = 0.0;
    c4_p_obj->PositionNumber = 0.0;
    for (c4_i58 = 0; c4_i58 < 3; c4_i58++) {
      c4_p_obj->JointAxisInternal[c4_i58] = 0.0;
    }
    break;
  }

  c4_i61 = c4_p_obj->MotionSubspace->size[0] * c4_p_obj->MotionSubspace->size[1];
  c4_p_obj->MotionSubspace->size[0] = 6;
  c4_p_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_p_obj->MotionSubspace,
    c4_i61, &c4_r_emlrtRTEI);
  c4_h_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i62 = 0; c4_i62 <= c4_h_loop_ub; c4_i62++) {
    c4_p_obj->MotionSubspace->data[c4_i62] = c4_msubspace_data[c4_i62];
  }

  c4_i63 = c4_p_obj->PositionLimitsInternal->size[0] *
    c4_p_obj->PositionLimitsInternal->size[1];
  c4_p_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_p_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
    c4_p_obj->PositionLimitsInternal, c4_i63, &c4_s_emlrtRTEI);
  c4_i_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i64 = 0; c4_i64 <= c4_i_loop_ub; c4_i64++) {
    c4_p_obj->PositionLimitsInternal->data[c4_i64] = c4_poslim_data[c4_i64];
  }

  c4_i65 = c4_p_obj->HomePositionInternal->size[0];
  c4_p_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
    c4_p_obj->HomePositionInternal, c4_i65, &c4_t_emlrtRTEI);
  c4_j_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i66 = 0; c4_i66 <= c4_j_loop_ub; c4_i66++) {
    c4_p_obj->HomePositionInternal->data[c4_i66] = c4_homepos_data[c4_i66];
  }

  c4_m_obj->JointInternal = c4_p_obj;
  c4_m_obj->Index = -1.0;
  c4_m_obj->ParentIndex = -1.0;
  c4_m_obj->MassInternal = 1.0;
  for (c4_i67 = 0; c4_i67 < 3; c4_i67++) {
    c4_m_obj->CenterOfMassInternal[c4_i67] = 0.0;
  }

  for (c4_i68 = 0; c4_i68 < 9; c4_i68++) {
    c4_I[c4_i68] = 0.0;
  }

  for (c4_i_k = 0; c4_i_k < 3; c4_i_k++) {
    c4_j_k = c4_i_k;
    c4_I[c4_j_k + 3 * c4_j_k] = 1.0;
  }

  for (c4_i69 = 0; c4_i69 < 9; c4_i69++) {
    c4_m_obj->InertiaInternal[c4_i69] = c4_I[c4_i69];
  }

  for (c4_i70 = 0; c4_i70 < 36; c4_i70++) {
    c4_b_I[c4_i70] = 0.0;
  }

  for (c4_k_k = 0; c4_k_k < 6; c4_k_k++) {
    c4_l_k = c4_k_k;
    c4_b_I[c4_l_k + 6 * c4_l_k] = 1.0;
  }

  for (c4_i71 = 0; c4_i71 < 36; c4_i71++) {
    c4_m_obj->SpatialInertia[c4_i71] = c4_b_I[c4_i71];
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_m_obj->CollisionsInternal = c4_CollisionSet_CollisionSet(chartInstance,
    &c4_b_st, &c4_m_obj->_pobj0, 0.0);
  c4_obj->Bodies[2] = c4_m_obj;
  c4_q_obj = c4_obj->Bodies[2];
  for (c4_i72 = 0; c4_i72 < 3; c4_i72++) {
    c4_q_obj->ChildrenIndices[c4_i72] = 0.0;
  }

  c4_obj->NumBodies = 0.0;
  c4_obj->NumNonFixedBodies = 0.0;
  c4_obj->PositionNumber = 0.0;
  c4_obj->VelocityNumber = 0.0;
  for (c4_i73 = 0; c4_i73 < 3; c4_i73++) {
    c4_obj->Base.ChildrenIndices[c4_i73] = 0.0;
  }

  c4_st.site = &c4_ec_emlrtRSI;
  c4_obj->VisualizationInfo = c4_VisualizationInfo_VisualizationInfo
    (chartInstance, &c4_st);
  for (c4_i74 = 0; c4_i74 < 6; c4_i74++) {
    c4_obj->PositionDoFMap[c4_i74] = c4_b_dv[c4_i74];
  }

  for (c4_i75 = 0; c4_i75 < 6; c4_i75++) {
    c4_obj->VelocityDoFMap[c4_i75] = c4_b_dv[c4_i75];
  }

  c4_st.site = &c4_dc_emlrtRSI;
  c4_r_obj = c4_obj;
  c4_r_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static c4_rigidBodyJoint *c4_b_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj)
{
  static char_T c4_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x01', '_', 'j', 'n', 't' };

  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBodyJoint *c4_b_obj;
  c4_rigidBodyJoint *c4_this;
  emlrtStack c4_st;
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[14];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_obj = c4_obj;
  c4_b_obj->InTree = false;
  c4_st.site = &c4_gb_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  for (c4_i = 0; c4_i < 14; c4_i++) {
    c4_jointname_data[c4_i] = c4_jname[c4_i];
  }

  c4_i1 = c4_b_obj->NameInternal->size[0] * c4_b_obj->NameInternal->size[1];
  c4_b_obj->NameInternal->size[0] = 1;
  c4_b_obj->NameInternal->size[1] = 14;
  c4_st.site = &c4_ue_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->NameInternal,
    c4_i1, &c4_e_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 14; c4_i2++) {
    c4_b_obj->NameInternal->data[c4_i2] = c4_jointname_data[c4_i2];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    c4_jointtype_data[c4_i3] = c4_b_cv[c4_i3];
  }

  c4_i4 = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1];
  c4_b_obj->Type->size[0] = 1;
  c4_b_obj->Type->size[1] = c4_jointtype_size[1];
  c4_st.site = &c4_te_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->Type, c4_i4,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
    c4_b_obj->Type->data[c4_i5] = c4_jointtype_data[c4_i5];
  }

  c4_emxInit_char_T(chartInstance, c4_sp, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i6 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_b_obj->Type->size[1];
  c4_st.site = &c4_se_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_switch_expression, c4_i6,
    &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_b_loop_ub; c4_i7++) {
    c4_switch_expression->data[c4_i7] = c4_b_obj->Type->data[c4_i7];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i9 = 0; c4_i9 < 6; c4_i9++) {
      c4_msubspace_data[c4_i9] = c4_dv[c4_i9];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_poslim_data[c4_i12] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i12;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i15 = 0; c4_i15 < 3; c4_i15++) {
      c4_b_obj->JointAxisInternal[c4_i15] = c4_dv2[c4_i15];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i10 = 0; c4_i10 < 6; c4_i10++) {
      c4_msubspace_data[c4_i10] = c4_dv1[c4_i10];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_poslim_data[c4_i13] = -0.5 + (real_T)c4_i13;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i16 = 0; c4_i16 < 3; c4_i16++) {
      c4_b_obj->JointAxisInternal[c4_i16] = c4_dv2[c4_i16];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i8 = 0; c4_i8 < 6; c4_i8++) {
      c4_msubspace_data[c4_i8] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_poslim_data[c4_i11] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 0.0;
    c4_b_obj->PositionNumber = 0.0;
    for (c4_i14 = 0; c4_i14 < 3; c4_i14++) {
      c4_b_obj->JointAxisInternal[c4_i14] = 0.0;
    }
    break;
  }

  c4_i17 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size[1];
  c4_b_obj->MotionSubspace->size[0] = 6;
  c4_b_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_st.site = &c4_xe_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_obj->MotionSubspace,
    c4_i17, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i18 = 0; c4_i18 <= c4_c_loop_ub; c4_i18++) {
    c4_b_obj->MotionSubspace->data[c4_i18] = c4_msubspace_data[c4_i18];
  }

  c4_i19 = c4_b_obj->PositionLimitsInternal->size[0] *
    c4_b_obj->PositionLimitsInternal->size[1];
  c4_b_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_b_obj->PositionLimitsInternal->size[1] = 2;
  c4_st.site = &c4_we_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
    c4_b_obj->PositionLimitsInternal, c4_i19, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_d_loop_ub; c4_i20++) {
    c4_b_obj->PositionLimitsInternal->data[c4_i20] = c4_poslim_data[c4_i20];
  }

  c4_i21 = c4_b_obj->HomePositionInternal->size[0];
  c4_b_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, c4_sp,
    c4_b_obj->HomePositionInternal, c4_i21, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_e_loop_ub; c4_i22++) {
    c4_b_obj->HomePositionInternal->data[c4_i22] = c4_homepos_data[c4_i22];
  }

  return c4_b_obj;
}

static c4_rigidBody *c4_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj)
{
  static char_T c4_jname[9] = { 'l', 'i', 'n', 'k', '1', '_', 'j', 'n', 't' };

  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_bname[5] = { 'l', 'i', 'n', 'k', '1' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBody *c4_b_obj;
  c4_rigidBody *c4_c_obj;
  c4_rigidBody *c4_this;
  c4_rigidBodyJoint *c4_c_this;
  c4_rigidBodyJoint *c4_f_obj;
  c4_rigidBodyJoint *c4_g_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_b_default;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_treeInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_bodyInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_default;
  c4_robotics_manip_internal_RigidBody_1 *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_I[36];
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[9];
  char_T c4_bn_data[5];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_fc_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_obj = c4_c_obj;
  c4_b_st.site = &c4_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_st.site = &c4_hc_emlrtRSI;
  c4_b_st.site = &c4_gc_emlrtRSI;
  c4_d_obj = &c4_b_obj->_pobj1;
  c4_default = c4_d_obj;
  c4_c_st.site = &c4_b_emlrtRSI;
  c4_e_obj = c4_default;
  c4_default = c4_e_obj;
  c4_b_this = c4_default;
  c4_default = c4_b_this;
  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_bn_data[c4_i] = c4_bname[c4_i];
  }

  c4_i1 = c4_default->NameInternal->size[0] * c4_default->NameInternal->size[1];
  c4_default->NameInternal->size[0] = 1;
  c4_default->NameInternal->size[1] = 5;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_default->NameInternal,
    c4_i1, &c4_c_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 5; c4_i2++) {
    c4_default->NameInternal->data[c4_i2] = c4_bn_data[c4_i2];
  }

  c4_c_st.site = &c4_c_emlrtRSI;
  c4_f_obj = &c4_default->_pobj0;
  c4_g_obj = c4_f_obj;
  c4_g_obj->InTree = false;
  c4_c_this = c4_g_obj;
  c4_g_obj = c4_c_this;
  for (c4_i3 = 0; c4_i3 < 9; c4_i3++) {
    c4_jointname_data[c4_i3] = c4_jname[c4_i3];
  }

  c4_i4 = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size[1];
  c4_g_obj->NameInternal->size[0] = 1;
  c4_g_obj->NameInternal->size[1] = 9;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->NameInternal,
    c4_i4, &c4_e_emlrtRTEI);
  for (c4_i5 = 0; c4_i5 < 9; c4_i5++) {
    c4_g_obj->NameInternal->data[c4_i5] = c4_jointname_data[c4_i5];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i6 = 0; c4_i6 < 5; c4_i6++) {
    c4_jointtype_data[c4_i6] = c4_b_cv[c4_i6];
  }

  c4_i7 = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1];
  c4_g_obj->Type->size[0] = 1;
  c4_g_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->Type, c4_i7,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_loop_ub; c4_i8++) {
    c4_g_obj->Type->data[c4_i8] = c4_jointtype_data[c4_i8];
  }

  c4_emxInit_char_T(chartInstance, &c4_c_st, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i9 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_g_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_switch_expression,
    c4_i9, &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_b_loop_ub; c4_i10++) {
    c4_switch_expression->data[c4_i10] = c4_g_obj->Type->data[c4_i10];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_msubspace_data[c4_i12] = c4_dv[c4_i12];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_poslim_data[c4_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i15;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i18 = 0; c4_i18 < 3; c4_i18++) {
      c4_g_obj->JointAxisInternal[c4_i18] = c4_dv2[c4_i18];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i13 = 0; c4_i13 < 6; c4_i13++) {
      c4_msubspace_data[c4_i13] = c4_dv1[c4_i13];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_poslim_data[c4_i16] = -0.5 + (real_T)c4_i16;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i19 = 0; c4_i19 < 3; c4_i19++) {
      c4_g_obj->JointAxisInternal[c4_i19] = c4_dv2[c4_i19];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
      c4_msubspace_data[c4_i11] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_poslim_data[c4_i14] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 0.0;
    c4_g_obj->PositionNumber = 0.0;
    for (c4_i17 = 0; c4_i17 < 3; c4_i17++) {
      c4_g_obj->JointAxisInternal[c4_i17] = 0.0;
    }
    break;
  }

  c4_i20 = c4_g_obj->MotionSubspace->size[0] * c4_g_obj->MotionSubspace->size[1];
  c4_g_obj->MotionSubspace->size[0] = 6;
  c4_g_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_g_obj->MotionSubspace,
    c4_i20, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_c_loop_ub; c4_i21++) {
    c4_g_obj->MotionSubspace->data[c4_i21] = c4_msubspace_data[c4_i21];
  }

  c4_i22 = c4_g_obj->PositionLimitsInternal->size[0] *
    c4_g_obj->PositionLimitsInternal->size[1];
  c4_g_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_g_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st,
    c4_g_obj->PositionLimitsInternal, c4_i22, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_d_loop_ub; c4_i23++) {
    c4_g_obj->PositionLimitsInternal->data[c4_i23] = c4_poslim_data[c4_i23];
  }

  c4_i24 = c4_g_obj->HomePositionInternal->size[0];
  c4_g_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_c_st,
    c4_g_obj->HomePositionInternal, c4_i24, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i25 = 0; c4_i25 <= c4_e_loop_ub; c4_i25++) {
    c4_g_obj->HomePositionInternal->data[c4_i25] = c4_homepos_data[c4_i25];
  }

  c4_default->JointInternal = c4_g_obj;
  c4_default->Index = -1.0;
  c4_default->ParentIndex = -1.0;
  c4_default->MassInternal = 1.0;
  for (c4_i26 = 0; c4_i26 < 3; c4_i26++) {
    c4_default->CenterOfMassInternal[c4_i26] = 0.0;
  }

  for (c4_i27 = 0; c4_i27 < 9; c4_i27++) {
    c4_I[c4_i27] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i28 = 0; c4_i28 < 9; c4_i28++) {
    c4_default->InertiaInternal[c4_i28] = c4_I[c4_i28];
  }

  for (c4_i29 = 0; c4_i29 < 36; c4_i29++) {
    c4_b_I[c4_i29] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i30 = 0; c4_i30 < 36; c4_i30++) {
    c4_default->SpatialInertia[c4_i30] = c4_b_I[c4_i30];
  }

  c4_c_st.site = &c4_d_emlrtRSI;
  c4_CollisionSet_CollisionSet(chartInstance, &c4_c_st,
    &c4_default->CollisionsInternal, 0.0);
  c4_bodyInternal = c4_default;
  c4_st.site = &c4_jc_emlrtRSI;
  c4_b_st.site = &c4_ic_emlrtRSI;
  c4_b_default = c4_RigidBodyTree_RigidBodyTree(chartInstance, &c4_b_st,
    &c4_b_obj->_pobj0);
  c4_treeInternal = c4_b_default;
  c4_b_obj->BodyInternal = c4_bodyInternal;
  c4_b_obj->TreeInternal = c4_treeInternal;
  return c4_b_obj;
}

static c4_robotics_manip_internal_RigidBodyTree_1
  *c4_RigidBodyTree_RigidBodyTree(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBodyTree_1 *c4_obj)
{
  static char_T c4_bname[4] = { 'b', 'a', 's', 'e' };

  c4_robotics_manip_internal_RigidBodyTree_1 *c4_b_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_c_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_g_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_h_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_i_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_m_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_c_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_e_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_f_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_iobj_0;
  c4_robotics_manip_internal_RigidBody_1 *c4_j_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_k_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_l_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_I[36];
  real_T c4_I[9];
  int32_T c4_b_k;
  int32_T c4_c_k;
  int32_T c4_d_k;
  int32_T c4_e_k;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  char_T c4_b_bn_data[10];
  char_T c4_bn_data[4];
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_ab_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_obj = c4_c_obj;
  c4_b_st.site = &c4_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_st.site = &c4_bb_emlrtRSI;
  c4_d_obj = &c4_b_obj->Base;
  c4_e_obj = c4_d_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_e_obj = c4_f_obj;
  c4_c_st.site = &c4_emlrtRSI;
  c4_b_this = c4_e_obj;
  c4_e_obj = c4_b_this;
  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_bn_data[c4_i] = c4_bname[c4_i];
  }

  c4_i1 = c4_e_obj->NameInternal->size[0] * c4_e_obj->NameInternal->size[1];
  c4_e_obj->NameInternal->size[0] = 1;
  c4_e_obj->NameInternal->size[1] = 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_e_obj->NameInternal,
    c4_i1, &c4_c_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
    c4_e_obj->NameInternal->data[c4_i2] = c4_bn_data[c4_i2];
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_e_obj->JointInternal = c4_rigidBodyJoint_rigidBodyJoint(chartInstance,
    &c4_b_st, &c4_e_obj->_pobj0);
  c4_e_obj->Index = -1.0;
  c4_e_obj->ParentIndex = -1.0;
  c4_e_obj->MassInternal = 1.0;
  for (c4_i3 = 0; c4_i3 < 3; c4_i3++) {
    c4_e_obj->CenterOfMassInternal[c4_i3] = 0.0;
  }

  for (c4_i4 = 0; c4_i4 < 9; c4_i4++) {
    c4_I[c4_i4] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i5 = 0; c4_i5 < 9; c4_i5++) {
    c4_e_obj->InertiaInternal[c4_i5] = c4_I[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 36; c4_i6++) {
    c4_b_I[c4_i6] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i7 = 0; c4_i7 < 36; c4_i7++) {
    c4_e_obj->SpatialInertia[c4_i7] = c4_b_I[c4_i7];
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_CollisionSet_CollisionSet(chartInstance, &c4_b_st,
    &c4_e_obj->CollisionsInternal, 0.0);
  c4_b_obj->Base.Index = 0.0;
  c4_st.site = &c4_eb_emlrtRSI;
  c4_b_obj->VisualizationInfo = c4_VisualizationInfo_VisualizationInfo
    (chartInstance, &c4_st);
  c4_st.site = &c4_cb_emlrtRSI;
  c4_g_obj = c4_b_obj;
  c4_g_obj->VisualizationInfo.IsMaxReachUpToDate = false;
  c4_st.site = &c4_db_emlrtRSI;
  c4_h_obj = c4_b_obj;
  for (c4_i8 = 0; c4_i8 < 3; c4_i8++) {
    c4_h_obj->Gravity[c4_i8] = 0.0;
  }

  c4_st.site = &c4_fb_emlrtRSI;
  c4_i_obj = c4_b_obj;
  c4_iobj_0 = &c4_b_obj->_pobj0;
  c4_b_st.site = &c4_cc_emlrtRSI;
  c4_j_obj = c4_iobj_0;
  c4_k_obj = c4_j_obj;
  c4_c_st.site = &c4_b_emlrtRSI;
  c4_l_obj = c4_k_obj;
  c4_k_obj = c4_l_obj;
  c4_c_this = c4_k_obj;
  c4_k_obj = c4_c_this;
  for (c4_i9 = 0; c4_i9 < 10; c4_i9++) {
    c4_b_bn_data[c4_i9] = c4_cv1[c4_i9];
  }

  c4_i10 = c4_k_obj->NameInternal->size[0] * c4_k_obj->NameInternal->size[1];
  c4_k_obj->NameInternal->size[0] = 1;
  c4_k_obj->NameInternal->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_k_obj->NameInternal,
    c4_i10, &c4_c_emlrtRTEI);
  for (c4_i11 = 0; c4_i11 < 10; c4_i11++) {
    c4_k_obj->NameInternal->data[c4_i11] = c4_b_bn_data[c4_i11];
  }

  c4_c_st.site = &c4_c_emlrtRSI;
  c4_k_obj->JointInternal = c4_b_rigidBodyJoint_rigidBodyJoint(chartInstance,
    &c4_c_st, &c4_k_obj->_pobj0);
  c4_k_obj->Index = -1.0;
  c4_k_obj->ParentIndex = -1.0;
  c4_k_obj->MassInternal = 1.0;
  for (c4_i12 = 0; c4_i12 < 3; c4_i12++) {
    c4_k_obj->CenterOfMassInternal[c4_i12] = 0.0;
  }

  for (c4_i13 = 0; c4_i13 < 9; c4_i13++) {
    c4_I[c4_i13] = 0.0;
  }

  for (c4_e_k = 0; c4_e_k < 3; c4_e_k++) {
    c4_f_k = c4_e_k;
    c4_I[c4_f_k + 3 * c4_f_k] = 1.0;
  }

  for (c4_i14 = 0; c4_i14 < 9; c4_i14++) {
    c4_k_obj->InertiaInternal[c4_i14] = c4_I[c4_i14];
  }

  for (c4_i15 = 0; c4_i15 < 36; c4_i15++) {
    c4_b_I[c4_i15] = 0.0;
  }

  for (c4_g_k = 0; c4_g_k < 6; c4_g_k++) {
    c4_h_k = c4_g_k;
    c4_b_I[c4_h_k + 6 * c4_h_k] = 1.0;
  }

  for (c4_i16 = 0; c4_i16 < 36; c4_i16++) {
    c4_k_obj->SpatialInertia[c4_i16] = c4_b_I[c4_i16];
  }

  c4_c_st.site = &c4_d_emlrtRSI;
  c4_CollisionSet_CollisionSet(chartInstance, &c4_c_st,
    &c4_k_obj->CollisionsInternal, 0.0);
  c4_i_obj->Bodies[0] = c4_k_obj;
  c4_i_obj->Bodies[0]->ChildrenIndices = 0.0;
  c4_i_obj->NumBodies = 0.0;
  c4_i_obj->NumNonFixedBodies = 0.0;
  c4_i_obj->PositionNumber = 0.0;
  c4_i_obj->VelocityNumber = 0.0;
  c4_i_obj->Base.ChildrenIndices = 0.0;
  c4_b_st.site = &c4_ec_emlrtRSI;
  c4_i_obj->VisualizationInfo = c4_VisualizationInfo_VisualizationInfo
    (chartInstance, &c4_b_st);
  for (c4_i17 = 0; c4_i17 < 2; c4_i17++) {
    c4_i_obj->PositionDoFMap[c4_i17] = 0.0 - (real_T)c4_i17;
  }

  for (c4_i18 = 0; c4_i18 < 2; c4_i18++) {
    c4_i_obj->VelocityDoFMap[c4_i18] = 0.0 - (real_T)c4_i18;
  }

  c4_b_st.site = &c4_dc_emlrtRSI;
  c4_m_obj = c4_i_obj;
  c4_m_obj->VisualizationInfo.IsMaxReachUpToDate = false;
  return c4_b_obj;
}

static void c4_rigidBodyJoint_set_JointAxis(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj)
{
  static char_T c4_b_cv1[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n',
    't', ':', 'J', 'o', 'i', 'n', 't', 'A', 'x', 'i', 's', 'N', 'o', 't', 'S',
    'e', 't', 't', 'a', 'b', 'l', 'e' };

  static char_T c4_b_cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c4_emxArray_char_T *c4_a;
  c4_rigidBodyJoint *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  real_T c4_index;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_kstr;
  int32_T c4_exitg1;
  int32_T c4_f_kstr;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_b_bool;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_a, 2, &c4_x_emlrtRTEI);
  c4_i = c4_a->size[0] * c4_a->size[1];
  c4_a->size[0] = 1;
  c4_a->size[1] = c4_obj->Type->size[1];
  c4_st.site = &c4_ve_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_a, c4_i, &c4_x_emlrtRTEI);
  c4_loop_ub = c4_obj->Type->size[0] * c4_obj->Type->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_a->data[c4_i1] = c4_obj->Type->data[c4_i1];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_a->size[1];
  if (c4_remainingDimsA == 9) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 9) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_a->data[c4_b_kstr] != c4_cv[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (!c4_bool) {
    c4_i2 = c4_a->size[0] * c4_a->size[1];
    c4_a->size[0] = 1;
    c4_a->size[1] = c4_obj->Type->size[1];
    c4_st.site = &c4_ve_emlrtRSI;
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_a, c4_i2,
      &c4_y_emlrtRTEI);
    c4_b_loop_ub = c4_obj->Type->size[0] * c4_obj->Type->size[1] - 1;
    for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
      c4_a->data[c4_i5] = c4_obj->Type->data[c4_i5];
    }

    c4_b_bool = false;
    c4_b_remainingDimsA = c4_a->size[1];
    if (c4_b_remainingDimsA == 8) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 8) {
          c4_e_kstr = c4_c_kstr - 1;
          if (c4_a->data[c4_e_kstr] != c4_b_cv[c4_e_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (!c4_b_bool) {
      c4_st.site = &c4_kc_emlrtRSI;
      c4_i7 = c4_a->size[0] * c4_a->size[1];
      c4_a->size[0] = 1;
      c4_a->size[1] = c4_obj->Type->size[1];
      c4_b_st.site = &c4_kc_emlrtRSI;
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_a, c4_i7,
        &c4_bb_emlrtRTEI);
      c4_d_loop_ub = c4_obj->Type->size[0] * c4_obj->Type->size[1] - 1;
      for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
        c4_a->data[c4_i8] = c4_obj->Type->data[c4_i8];
      }

      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        46), false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        46), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_a->data, 10, 0U, 1U, 0U, 2,
        c4_a->size[0], c4_a->size[1]), false);
      sf_mex_call(&c4_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
    }
  }

  for (c4_i3 = 0; c4_i3 < 3; c4_i3++) {
    c4_obj->JointAxisInternal[c4_i3] = c4_dv2[c4_i3];
  }

  c4_st.site = &c4_lc_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_i4 = c4_a->size[0] * c4_a->size[1];
  c4_a->size[0] = 1;
  c4_a->size[1] = c4_b_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_a, c4_i4,
    &c4_ab_emlrtRTEI);
  c4_c_loop_ub = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1] - 1;
  for (c4_i6 = 0; c4_i6 <= c4_c_loop_ub; c4_i6++) {
    c4_a->data[c4_i6] = c4_b_obj->Type->data[c4_i6];
  }

  c4_c_bool = false;
  c4_c_remainingDimsA = c4_a->size[1];
  if (c4_c_remainingDimsA == 8) {
    c4_d_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_d_kstr - 1 < 8) {
        c4_f_kstr = c4_d_kstr - 1;
        if (c4_a->data[c4_f_kstr] != c4_b_cv[c4_f_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_d_kstr++;
        }
      } else {
        c4_c_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  c4_emxFree_char_T(chartInstance, &c4_a);
  if (c4_c_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_index = -1.0;
  }

  switch ((int32_T)c4_index) {
   case 0:
    c4_i10 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size
      [1];
    c4_b_obj->MotionSubspace->size[0] = 6;
    c4_b_obj->MotionSubspace->size[1] = 1;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_obj->MotionSubspace,
      c4_i10, &c4_db_emlrtRTEI);
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_b_obj->MotionSubspace->data[c4_i12] = c4_dv[c4_i12];
    }
    break;

   default:
    c4_i9 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size[1];
    c4_b_obj->MotionSubspace->size[0] = 6;
    c4_b_obj->MotionSubspace->size[1] = 1;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_obj->MotionSubspace,
      c4_i9, &c4_cb_emlrtRTEI);
    for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
      c4_b_obj->MotionSubspace->data[c4_i11] = c4_dv1[c4_i11];
    }
    break;
  }
}

static void c4_rigidBody_set_Joint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj,
  c4_rigidBodyJoint *c4_value, c4_rigidBodyJoint *c4_iobj_0)
{
  static char_T c4_b_cv[53] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'B', 'o', 'd', 'y', 'A', 'l', 'r', 'e', 'a', 'd',
    'y', 'A', 'd', 'd', 'e', 'd', 'T', 'o', 'R', 'o', 'b', 'o', 't' };

  static char_T c4_b_cv3[12] = { 'r', 'e', 'p', 'l', 'a', 'c', 'e', 'J', 'o',
    'i', 'n', 't' };

  static char_T c4_b_cv1[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  c4_rigidBodyJoint *c4_b_iobj_0;
  c4_rigidBodyJoint *c4_jnt;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_st.site = &c4_mc_emlrtRSI;
  c4_b_obj = c4_obj->BodyInternal;
  c4_jnt = c4_value;
  c4_b_iobj_0 = c4_iobj_0;
  if (c4_b_obj->Index == 0.0) {
    c4_b_st.site = &c4_nc_emlrtRSI;
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_d_y, 14, c4_f_y)));
  }

  if (c4_b_obj->Index > 0.0) {
    c4_b_st.site = &c4_oc_emlrtRSI;
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 53),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 53),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 12),
                  false);
    sf_mex_call(&c4_b_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 3U, 14, c4_e_y, 14, c4_g_y, 14, c4_h_y)));
  }

  c4_b_st.site = &c4_pc_emlrtRSI;
  c4_b_obj->JointInternal = c4_rigidBodyJoint_copy(chartInstance, &c4_b_st,
    c4_jnt, c4_b_iobj_0);
}

static c4_rigidBodyJoint *c4_rigidBodyJoint_copy(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj,
  c4_rigidBodyJoint *c4_iobj_0)
{
  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'j', 'n', 'a', 'm', 'e' };

  static char_T c4_b_cv2[4] = { 'N', 'a', 'm', 'e' };

  c4_emxArray_char_T *c4_jname;
  c4_emxArray_char_T *c4_jtype;
  c4_emxArray_real_T *c4_g_obj;
  c4_emxArray_real_T *c4_i_obj;
  c4_emxArray_real_T *c4_k_obj;
  c4_rigidBodyJoint *c4_b_iobj_0;
  c4_rigidBodyJoint *c4_b_obj;
  c4_rigidBodyJoint *c4_c_obj;
  c4_rigidBodyJoint *c4_d_obj;
  c4_rigidBodyJoint *c4_e_obj;
  c4_rigidBodyJoint *c4_f_obj;
  c4_rigidBodyJoint *c4_h_obj;
  c4_rigidBodyJoint *c4_newjoint;
  c4_rigidBodyJoint *c4_this;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_msubspace_data[36];
  real_T c4_l_obj[16];
  real_T c4_m_obj[16];
  real_T c4_poslim_data[12];
  real_T c4_homepos_data[6];
  real_T c4_j_obj[3];
  real_T c4_index;
  int32_T c4_b_jointtype_size[2];
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k_loop_ub;
  int32_T c4_kstr;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_o_loop_ub;
  int32_T c4_p_loop_ub;
  int32_T c4_q_loop_ub;
  int32_T c4_r_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_b_jointtype_data[20];
  char_T c4_jointtype_data[9];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_jtype, 2, &c4_eb_emlrtRTEI);
  c4_st.site = &c4_qc_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_b_iobj_0 = c4_iobj_0;
  c4_i = c4_jtype->size[0] * c4_jtype->size[1];
  c4_jtype->size[0] = 1;
  c4_jtype->size[1] = c4_b_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_jtype, c4_i,
    &c4_eb_emlrtRTEI);
  c4_loop_ub = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_jtype->data[c4_i1] = c4_b_obj->Type->data[c4_i1];
  }

  c4_emxInit_char_T(chartInstance, &c4_st, &c4_jname, 2, &c4_fb_emlrtRTEI);
  c4_b_st.site = &c4_rc_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_i2 = c4_jname->size[0] * c4_jname->size[1];
  c4_jname->size[0] = 1;
  c4_jname->size[1] = c4_c_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_jname, c4_i2,
    &c4_fb_emlrtRTEI);
  c4_b_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size
    [1] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_jname->data[c4_i3] = c4_c_obj->NameInternal->data[c4_i3];
  }

  c4_b_st.site = &c4_sc_emlrtRSI;
  c4_d_obj = c4_b_iobj_0;
  c4_newjoint = c4_d_obj;
  c4_newjoint->InTree = false;
  c4_c_st.site = &c4_gb_emlrtRSI;
  c4_this = c4_newjoint;
  c4_newjoint = c4_this;
  c4_c_st.site = &c4_vc_emlrtRSI;
  c4_d_st.site = &c4_xc_emlrtRSI;
  c4_b = (c4_jname->size[1] == 0);
  if (c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_d_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_i4 = c4_newjoint->NameInternal->size[0] * c4_newjoint->NameInternal->size[1];
  c4_newjoint->NameInternal->size[0] = 1;
  c4_newjoint->NameInternal->size[1] = c4_jname->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_newjoint->NameInternal,
    c4_i4, &c4_e_emlrtRTEI);
  c4_c_loop_ub = c4_jname->size[0] * c4_jname->size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_newjoint->NameInternal->data[c4_i5] = c4_jname->data[c4_i5];
  }

  c4_emxFree_char_T(chartInstance, &c4_jname);
  c4_c_st.site = &c4_wc_emlrtRSI;
  c4_validatestring(chartInstance, &c4_c_st, c4_jtype, c4_jointtype_data,
                    c4_jointtype_size);
  emlrtDimSizeGeqCheckR2012b(20, c4_jointtype_size[1], &c4_emlrtECI, &c4_b_st);
  c4_b_jointtype_size[0] = 1;
  c4_b_jointtype_size[1] = c4_jointtype_size[1];
  c4_d_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i6 = 0; c4_i6 <= c4_d_loop_ub; c4_i6++) {
    c4_b_jointtype_data[c4_i6] = c4_jointtype_data[c4_i6];
  }

  c4_i7 = c4_newjoint->Type->size[0] * c4_newjoint->Type->size[1];
  c4_newjoint->Type->size[0] = 1;
  c4_newjoint->Type->size[1] = c4_b_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_newjoint->Type, c4_i7,
    &c4_g_emlrtRTEI);
  c4_e_loop_ub = c4_b_jointtype_size[0] * c4_b_jointtype_size[1] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_e_loop_ub; c4_i8++) {
    c4_newjoint->Type->data[c4_i8] = c4_b_jointtype_data[c4_i8];
  }

  c4_i9 = c4_jtype->size[0] * c4_jtype->size[1];
  c4_jtype->size[0] = 1;
  c4_jtype->size[1] = c4_newjoint->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_jtype, c4_i9,
    &c4_h_emlrtRTEI);
  c4_f_loop_ub = c4_newjoint->Type->size[0] * c4_newjoint->Type->size[1] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_f_loop_ub; c4_i10++) {
    c4_jtype->data[c4_i10] = c4_newjoint->Type->data[c4_i10];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_jtype->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_jtype->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_jtype->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_jtype->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_msubspace_data[c4_i12] = c4_dv[c4_i12];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_poslim_data[c4_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i15;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_newjoint->VelocityNumber = 1.0;
    c4_newjoint->PositionNumber = 1.0;
    for (c4_i18 = 0; c4_i18 < 3; c4_i18++) {
      c4_newjoint->JointAxisInternal[c4_i18] = c4_dv2[c4_i18];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i13 = 0; c4_i13 < 6; c4_i13++) {
      c4_msubspace_data[c4_i13] = c4_dv1[c4_i13];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_poslim_data[c4_i16] = -0.5 + (real_T)c4_i16;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_newjoint->VelocityNumber = 1.0;
    c4_newjoint->PositionNumber = 1.0;
    for (c4_i19 = 0; c4_i19 < 3; c4_i19++) {
      c4_newjoint->JointAxisInternal[c4_i19] = c4_dv2[c4_i19];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
      c4_msubspace_data[c4_i11] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_poslim_data[c4_i14] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_newjoint->VelocityNumber = 0.0;
    c4_newjoint->PositionNumber = 0.0;
    for (c4_i17 = 0; c4_i17 < 3; c4_i17++) {
      c4_newjoint->JointAxisInternal[c4_i17] = 0.0;
    }
    break;
  }

  c4_i20 = c4_newjoint->MotionSubspace->size[0] * c4_newjoint->
    MotionSubspace->size[1];
  c4_newjoint->MotionSubspace->size[0] = 6;
  c4_newjoint->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
    c4_newjoint->MotionSubspace, c4_i20, &c4_r_emlrtRTEI);
  c4_g_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_g_loop_ub; c4_i21++) {
    c4_newjoint->MotionSubspace->data[c4_i21] = c4_msubspace_data[c4_i21];
  }

  c4_i22 = c4_newjoint->PositionLimitsInternal->size[0] *
    c4_newjoint->PositionLimitsInternal->size[1];
  c4_newjoint->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_newjoint->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
    c4_newjoint->PositionLimitsInternal, c4_i22, &c4_s_emlrtRTEI);
  c4_h_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_h_loop_ub; c4_i23++) {
    c4_newjoint->PositionLimitsInternal->data[c4_i23] = c4_poslim_data[c4_i23];
  }

  c4_i24 = c4_newjoint->HomePositionInternal->size[0];
  c4_newjoint->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
    c4_newjoint->HomePositionInternal, c4_i24, &c4_t_emlrtRTEI);
  c4_i_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i25 = 0; c4_i25 <= c4_i_loop_ub; c4_i25++) {
    c4_newjoint->HomePositionInternal->data[c4_i25] = c4_homepos_data[c4_i25];
  }

  c4_b_st.site = &c4_tc_emlrtRSI;
  c4_e_obj = c4_b_obj;
  c4_i26 = c4_jtype->size[0] * c4_jtype->size[1];
  c4_jtype->size[0] = 1;
  c4_jtype->size[1] = c4_e_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_jtype, c4_i26,
    &c4_gb_emlrtRTEI);
  c4_j_loop_ub = c4_e_obj->NameInternal->size[0] * c4_e_obj->NameInternal->size
    [1] - 1;
  for (c4_i27 = 0; c4_i27 <= c4_j_loop_ub; c4_i27++) {
    c4_jtype->data[c4_i27] = c4_e_obj->NameInternal->data[c4_i27];
  }

  c4_b1 = (c4_jtype->size[1] == 0);
  if (!c4_b1) {
    c4_b_st.site = &c4_uc_emlrtRSI;
    c4_f_obj = c4_b_obj;
    c4_i28 = c4_jtype->size[0] * c4_jtype->size[1];
    c4_jtype->size[0] = 1;
    c4_jtype->size[1] = c4_f_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_jtype, c4_i28,
      &c4_ib_emlrtRTEI);
    c4_k_loop_ub = c4_f_obj->NameInternal->size[0] * c4_f_obj->
      NameInternal->size[1] - 1;
    for (c4_i31 = 0; c4_i31 <= c4_k_loop_ub; c4_i31++) {
      c4_jtype->data[c4_i31] = c4_f_obj->NameInternal->data[c4_i31];
    }

    c4_b_st.site = &c4_uc_emlrtRSI;
    c4_h_obj = c4_newjoint;
    c4_c_st.site = &c4_kd_emlrtRSI;
    c4_d_st.site = &c4_xc_emlrtRSI;
    c4_b2 = (c4_jtype->size[1] == 0);
    if (c4_b2) {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 38),
                    false);
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                    false);
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        4), false);
      sf_mex_call(&c4_d_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                  sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
    }

    if (!c4_h_obj->InTree) {
      c4_i35 = c4_h_obj->NameInternal->size[0] * c4_h_obj->NameInternal->size[1];
      c4_h_obj->NameInternal->size[0] = 1;
      c4_h_obj->NameInternal->size[1] = c4_jtype->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st,
        c4_h_obj->NameInternal, c4_i35, &c4_mb_emlrtRTEI);
      c4_n_loop_ub = c4_jtype->size[0] * c4_jtype->size[1] - 1;
      for (c4_i37 = 0; c4_i37 <= c4_n_loop_ub; c4_i37++) {
        c4_h_obj->NameInternal->data[c4_i37] = c4_jtype->data[c4_i37];
      }
    } else {
      c4_c_st.site = &c4_ld_emlrtRSI;
      c4_d_st.site = &c4_md_emlrtRSI;
      c4_warning(chartInstance, &c4_d_st);
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_jtype);
  c4_emxInit_real_T1(chartInstance, &c4_st, &c4_g_obj, 1, &c4_jb_emlrtRTEI);
  c4_i29 = c4_b_obj->PositionLimitsInternal->size[0] *
    c4_b_obj->PositionLimitsInternal->size[1];
  c4_i30 = c4_newjoint->PositionLimitsInternal->size[0] *
    c4_newjoint->PositionLimitsInternal->size[1];
  c4_newjoint->PositionLimitsInternal->size[0] =
    c4_b_obj->PositionLimitsInternal->size[0];
  c4_newjoint->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
    c4_newjoint->PositionLimitsInternal, c4_i30, &c4_hb_emlrtRTEI);
  c4_i32 = c4_g_obj->size[0];
  c4_g_obj->size[0] = c4_i29;
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_g_obj, c4_i32,
    &c4_jb_emlrtRTEI);
  c4_l_loop_ub = c4_i29 - 1;
  for (c4_i33 = 0; c4_i33 <= c4_l_loop_ub; c4_i33++) {
    c4_g_obj->data[c4_i33] = c4_b_obj->PositionLimitsInternal->data[c4_i33];
  }

  c4_m_loop_ub = c4_g_obj->size[0] - 1;
  for (c4_i34 = 0; c4_i34 <= c4_m_loop_ub; c4_i34++) {
    c4_newjoint->PositionLimitsInternal->data[c4_i34] = c4_g_obj->data[c4_i34];
  }

  c4_emxFree_real_T(chartInstance, &c4_g_obj);
  c4_emxInit_real_T1(chartInstance, &c4_st, &c4_i_obj, 1, &c4_kb_emlrtRTEI);
  c4_i36 = c4_i_obj->size[0];
  c4_i_obj->size[0] = c4_b_obj->HomePositionInternal->size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_i_obj, c4_i36,
    &c4_kb_emlrtRTEI);
  c4_o_loop_ub = c4_b_obj->HomePositionInternal->size[0] - 1;
  for (c4_i38 = 0; c4_i38 <= c4_o_loop_ub; c4_i38++) {
    c4_i_obj->data[c4_i38] = c4_b_obj->HomePositionInternal->data[c4_i38];
  }

  c4_i39 = c4_newjoint->HomePositionInternal->size[0];
  c4_newjoint->HomePositionInternal->size[0] = c4_i_obj->size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st,
    c4_newjoint->HomePositionInternal, c4_i39, &c4_lb_emlrtRTEI);
  c4_p_loop_ub = c4_i_obj->size[0] - 1;
  for (c4_i40 = 0; c4_i40 <= c4_p_loop_ub; c4_i40++) {
    c4_newjoint->HomePositionInternal->data[c4_i40] = c4_i_obj->data[c4_i40];
  }

  c4_emxFree_real_T(chartInstance, &c4_i_obj);
  for (c4_i41 = 0; c4_i41 < 3; c4_i41++) {
    c4_j_obj[c4_i41] = c4_b_obj->JointAxisInternal[c4_i41];
  }

  for (c4_i42 = 0; c4_i42 < 3; c4_i42++) {
    c4_newjoint->JointAxisInternal[c4_i42] = c4_j_obj[c4_i42];
  }

  c4_emxInit_real_T1(chartInstance, &c4_st, &c4_k_obj, 1, &c4_ob_emlrtRTEI);
  c4_i43 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size[1];
  c4_i44 = c4_newjoint->MotionSubspace->size[0] * c4_newjoint->
    MotionSubspace->size[1];
  c4_newjoint->MotionSubspace->size[0] = 6;
  c4_newjoint->MotionSubspace->size[1] = c4_b_obj->MotionSubspace->size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_newjoint->MotionSubspace,
    c4_i44, &c4_nb_emlrtRTEI);
  c4_i45 = c4_k_obj->size[0];
  c4_k_obj->size[0] = c4_i43;
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_k_obj, c4_i45,
    &c4_ob_emlrtRTEI);
  c4_q_loop_ub = c4_i43 - 1;
  for (c4_i46 = 0; c4_i46 <= c4_q_loop_ub; c4_i46++) {
    c4_k_obj->data[c4_i46] = c4_b_obj->MotionSubspace->data[c4_i46];
  }

  c4_r_loop_ub = c4_k_obj->size[0] - 1;
  for (c4_i47 = 0; c4_i47 <= c4_r_loop_ub; c4_i47++) {
    c4_newjoint->MotionSubspace->data[c4_i47] = c4_k_obj->data[c4_i47];
  }

  c4_emxFree_real_T(chartInstance, &c4_k_obj);
  for (c4_i48 = 0; c4_i48 < 16; c4_i48++) {
    c4_l_obj[c4_i48] = c4_b_obj->JointToParentTransform[c4_i48];
  }

  for (c4_i49 = 0; c4_i49 < 16; c4_i49++) {
    c4_newjoint->JointToParentTransform[c4_i49] = c4_l_obj[c4_i49];
  }

  for (c4_i50 = 0; c4_i50 < 16; c4_i50++) {
    c4_m_obj[c4_i50] = c4_b_obj->ChildToJointTransform[c4_i50];
  }

  for (c4_i51 = 0; c4_i51 < 16; c4_i51++) {
    c4_newjoint->ChildToJointTransform[c4_i51] = c4_m_obj[c4_i51];
  }

  return c4_newjoint;
}

static void c4_validatestring(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_str, char_T c4_out_data[],
  int32_T c4_out_size[2])
{
  static char_T c4_b_cv5[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't',
    'r', 'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c4_b_cv1[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't',
    'r', 'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't',
    'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c4_b_cv3[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i',
    'g', 'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n',
    'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n',
    'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T c4_b_cv[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  static char_T c4_b_cv4[32] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e',
    '\'', ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',',
    ' ', '\'', 'f', 'i', 'x', 'e', 'd', '\'' };

  static char_T c4_b_cv8[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv2[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T c4_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_b_cv6[3] = { ',', ' ', '\'' };

  static char_T c4_b_cv7[2] = { '\'', ',' };

  c4_emxArray_char_T *c4_b_str;
  c4_emxArray_char_T *c4_inputstr;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_gb_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_ib_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_jb_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_kb_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_mb_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_nb_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  real_T c4_b_cmpLen;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_cmpLen;
  real_T c4_d_x;
  real_T c4_lenstr;
  real_T c4_nmatched;
  real_T c4_x;
  int32_T c4_partial_match_size[2];
  int32_T c4_a;
  int32_T c4_b_a;
  int32_T c4_b_b;
  int32_T c4_b_cmpLenInt;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_minnanb;
  int32_T c4_b_na;
  int32_T c4_b_ns;
  int32_T c4_c_a;
  int32_T c4_c_b;
  int32_T c4_c_cmpLen;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_cmpLenInt;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_cmpLen;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_b;
  int32_T c4_e_cmpLen;
  int32_T c4_exitg1;
  int32_T c4_f_b;
  int32_T c4_f_cmpLen;
  int32_T c4_g_b;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_len;
  int32_T c4_loop_ub;
  int32_T c4_minnanb;
  int32_T c4_na;
  int32_T c4_ns;
  char_T c4_partial_match_data[9];
  char_T c4_b_s;
  char_T c4_c_s;
  char_T c4_d_s;
  char_T c4_db_y;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_f_x;
  char_T c4_g_s;
  char_T c4_g_x;
  char_T c4_h_s;
  char_T c4_h_x;
  char_T c4_hb_y;
  char_T c4_i_s;
  char_T c4_i_x;
  char_T c4_j_s;
  char_T c4_j_x;
  char_T c4_k_s;
  char_T c4_k_x;
  char_T c4_l_s;
  char_T c4_l_x;
  char_T c4_lb_y;
  char_T c4_m_s;
  char_T c4_n_s;
  char_T c4_o_s;
  char_T c4_p_s;
  char_T c4_s;
  char_T c4_y_y;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_e_u;
  int8_T c4_f_u;
  int8_T c4_g_u;
  int8_T c4_h_u;
  int8_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b10;
  boolean_T c4_b11;
  boolean_T c4_b12;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b7;
  boolean_T c4_b8;
  boolean_T c4_b9;
  boolean_T c4_b_bool;
  boolean_T c4_b_guard1 = false;
  boolean_T c4_b_overflow;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_f_p;
  boolean_T c4_g_p;
  boolean_T c4_guard1 = false;
  boolean_T c4_guard2 = false;
  boolean_T c4_guard3 = false;
  boolean_T c4_guard4 = false;
  boolean_T c4_h_p;
  boolean_T c4_matched;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_st.site = &c4_yc_emlrtRSI;
  c4_b_st.site = &c4_ad_emlrtRSI;
  c4_partial_match_size[0] = 1;
  c4_partial_match_size[1] = 0;
  c4_len = c4_str->size[1];
  c4_lenstr = (real_T)c4_len;
  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_b_str, 2, &c4_pb_emlrtRTEI);
  c4_guard1 = false;
  c4_guard2 = false;
  c4_guard3 = false;
  c4_guard4 = false;
  if (c4_lenstr <= 8.0) {
    c4_c_st.site = &c4_bd_emlrtRSI;
    c4_cmpLen = c4_lenstr;
    c4_x = c4_cmpLen;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarFloor(c4_b_x);
    c4_cmpLenInt = (int32_T)c4_b_x;
    c4_d_st.site = &c4_cd_emlrtRSI;
    c4_c_cmpLen = c4_cmpLenInt;
    c4_e_st.site = &c4_dd_emlrtRSI;
    c4_d_cmpLen = c4_c_cmpLen;
    c4_bool = false;
    c4_na = c4_str->size[1];
    c4_a = c4_na;
    if (c4_a < 8) {
      c4_minnanb = c4_a;
    } else {
      c4_minnanb = 8;
    }

    c4_b_guard1 = false;
    if (c4_d_cmpLen <= c4_minnanb) {
      c4_c_a = c4_minnanb;
      c4_b_b = c4_d_cmpLen;
      if (c4_c_a < c4_b_b) {
        c4_ns = c4_c_a;
      } else {
        c4_ns = c4_b_b;
      }

      c4_b_guard1 = true;
    } else {
      if (c4_na == 8) {
        c4_ns = 8;
        c4_b_guard1 = true;
      }
    }

    if (c4_b_guard1) {
      c4_f_st.site = &c4_ed_emlrtRSI;
      c4_c_b = c4_ns;
      c4_d_b = c4_c_b;
      if (1 > c4_d_b) {
        c4_overflow = false;
      } else {
        c4_overflow = (c4_d_b > 2147483646);
      }

      if (c4_overflow) {
        c4_g_st.site = &c4_rb_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_g_st);
      }

      c4_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_kstr - 1 <= c4_ns - 1) {
          c4_b_kstr = c4_kstr - 1;
          c4_f_st.site = &c4_fd_emlrtRSI;
          c4_s = c4_str->data[c4_b_kstr];
          c4_b_s = c4_s;
          c4_b5 = ((real_T)(uint8_T)c4_b_s <= 127.0);
          c4_p = c4_b5;
          if (!c4_p) {
            c4_k_y = NULL;
            sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_m_y = NULL;
            sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_u = MAX_int8_T;
            c4_n_y = NULL;
            sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_f_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_k_y,
                        14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                          c4_n_y)));
          }

          c4_f_st.site = &c4_gd_emlrtRSI;
          c4_e_s = c4_b_cv8[c4_b_kstr];
          c4_f_s = c4_e_s;
          c4_b7 = ((real_T)(uint8_T)c4_f_s <= 127.0);
          c4_c_p = c4_b7;
          if (!c4_c_p) {
            c4_p_y = NULL;
            sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_r_y = NULL;
            sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_c_u = MAX_int8_T;
            c4_t_y = NULL;
            sf_mex_assign(&c4_t_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_f_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_p_y,
                        14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_r_y, 14,
                          c4_t_y)));
          }

          c4_f_st.site = &c4_hd_emlrtRSI;
          c4_e_x = c4_str->data[c4_b_kstr];
          c4_g_st.site = &c4_id_emlrtRSI;
          c4_f_x = c4_e_x;
          c4_h_st.site = &c4_jd_emlrtRSI;
          c4_i_s = c4_f_x;
          c4_j_s = c4_i_s;
          c4_b9 = ((real_T)(uint8_T)c4_j_s <= 127.0);
          c4_e_p = c4_b9;
          if (!c4_e_p) {
            c4_x_y = NULL;
            sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_ab_y = NULL;
            sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_e_u = MAX_int8_T;
            c4_bb_y = NULL;
            sf_mex_assign(&c4_bb_y, sf_mex_create("y", &c4_e_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_h_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_x_y,
                        14, sf_mex_call(&c4_h_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_h_st, NULL, "message", 1U, 2U, 14, c4_ab_y, 14,
                          c4_bb_y)));
          }

          c4_y_y = c4_cv6[(uint8_T)c4_f_x & 127];
          c4_f_st.site = &c4_hd_emlrtRSI;
          c4_i_x = c4_b_cv8[c4_b_kstr];
          c4_g_st.site = &c4_id_emlrtRSI;
          c4_j_x = c4_i_x;
          c4_h_st.site = &c4_jd_emlrtRSI;
          c4_m_s = c4_j_x;
          c4_n_s = c4_m_s;
          c4_b11 = ((real_T)(uint8_T)c4_n_s <= 127.0);
          c4_g_p = c4_b11;
          if (!c4_g_p) {
            c4_gb_y = NULL;
            sf_mex_assign(&c4_gb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_ib_y = NULL;
            sf_mex_assign(&c4_ib_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_g_u = MAX_int8_T;
            c4_jb_y = NULL;
            sf_mex_assign(&c4_jb_y, sf_mex_create("y", &c4_g_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_h_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_gb_y,
                        14, sf_mex_call(&c4_h_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_h_st, NULL, "message", 1U, 2U, 14, c4_ib_y, 14,
                          c4_jb_y)));
          }

          c4_hb_y = c4_cv6[(uint8_T)c4_j_x & 127];
          if (c4_y_y != c4_hb_y) {
            c4_exitg1 = 1;
          } else {
            c4_kstr++;
          }
        } else {
          c4_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_bool) {
      if (c4_lenstr == 8.0) {
        c4_nmatched = 1.0;
        c4_partial_match_size[0] = 1;
        c4_partial_match_size[1] = 8;
        for (c4_i7 = 0; c4_i7 < 8; c4_i7++) {
          c4_partial_match_data[c4_i7] = c4_b_vstr[c4_i7];
        }
      } else {
        c4_partial_match_size[0] = 1;
        c4_partial_match_size[1] = 8;
        for (c4_i6 = 0; c4_i6 < 8; c4_i6++) {
          c4_partial_match_data[c4_i6] = c4_b_vstr[c4_i6];
        }

        c4_matched = true;
        c4_nmatched = 1.0;
        c4_guard3 = true;
      }
    } else {
      c4_guard4 = true;
    }
  } else {
    c4_guard4 = true;
  }

  if (c4_guard4) {
    c4_matched = false;
    c4_nmatched = 0.0;
    c4_guard3 = true;
  }

  if (c4_guard3) {
    if (c4_lenstr <= 9.0) {
      c4_c_st.site = &c4_bd_emlrtRSI;
      c4_b_cmpLen = c4_lenstr;
      c4_c_x = c4_b_cmpLen;
      c4_d_x = c4_c_x;
      c4_d_x = muDoubleScalarFloor(c4_d_x);
      c4_b_cmpLenInt = (int32_T)c4_d_x;
      c4_d_st.site = &c4_cd_emlrtRSI;
      c4_e_cmpLen = c4_b_cmpLenInt;
      c4_e_st.site = &c4_dd_emlrtRSI;
      c4_f_cmpLen = c4_e_cmpLen;
      c4_b_bool = false;
      c4_b_na = c4_str->size[1];
      c4_b_a = c4_b_na;
      if (c4_b_a < 9) {
        c4_b_minnanb = c4_b_a;
      } else {
        c4_b_minnanb = 9;
      }

      c4_b_guard1 = false;
      if (c4_f_cmpLen <= c4_b_minnanb) {
        c4_d_a = c4_b_minnanb;
        c4_e_b = c4_f_cmpLen;
        if (c4_d_a < c4_e_b) {
          c4_b_ns = c4_d_a;
        } else {
          c4_b_ns = c4_e_b;
        }

        c4_b_guard1 = true;
      } else {
        if (c4_b_na == 9) {
          c4_b_ns = 9;
          c4_b_guard1 = true;
        }
      }

      if (c4_b_guard1) {
        c4_f_st.site = &c4_ed_emlrtRSI;
        c4_f_b = c4_b_ns;
        c4_g_b = c4_f_b;
        if (1 > c4_g_b) {
          c4_b_overflow = false;
        } else {
          c4_b_overflow = (c4_g_b > 2147483646);
        }

        if (c4_b_overflow) {
          c4_g_st.site = &c4_rb_emlrtRSI;
          c4_check_forloop_overflow_error(chartInstance, &c4_g_st);
        }

        c4_c_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_c_kstr - 1 <= c4_b_ns - 1) {
            c4_d_kstr = c4_c_kstr - 1;
            c4_f_st.site = &c4_fd_emlrtRSI;
            c4_c_s = c4_str->data[c4_d_kstr];
            c4_d_s = c4_c_s;
            c4_b6 = ((real_T)(uint8_T)c4_d_s <= 127.0);
            c4_b_p = c4_b6;
            if (!c4_b_p) {
              c4_o_y = NULL;
              sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_q_y = NULL;
              sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_b_u = MAX_int8_T;
              c4_s_y = NULL;
              sf_mex_assign(&c4_s_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U,
                0), false);
              sf_mex_call(&c4_f_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_o_y,
                          14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_q_y,
                                14, c4_s_y)));
            }

            c4_f_st.site = &c4_gd_emlrtRSI;
            c4_g_s = c4_cv[c4_d_kstr];
            c4_h_s = c4_g_s;
            c4_b8 = ((real_T)(uint8_T)c4_h_s <= 127.0);
            c4_d_p = c4_b8;
            if (!c4_d_p) {
              c4_u_y = NULL;
              sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_v_y = NULL;
              sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_d_u = MAX_int8_T;
              c4_w_y = NULL;
              sf_mex_assign(&c4_w_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U,
                0), false);
              sf_mex_call(&c4_f_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_u_y,
                          14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_v_y,
                                14, c4_w_y)));
            }

            c4_f_st.site = &c4_hd_emlrtRSI;
            c4_g_x = c4_str->data[c4_d_kstr];
            c4_g_st.site = &c4_id_emlrtRSI;
            c4_h_x = c4_g_x;
            c4_h_st.site = &c4_jd_emlrtRSI;
            c4_k_s = c4_h_x;
            c4_l_s = c4_k_s;
            c4_b10 = ((real_T)(uint8_T)c4_l_s <= 127.0);
            c4_f_p = c4_b10;
            if (!c4_f_p) {
              c4_cb_y = NULL;
              sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_eb_y = NULL;
              sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_f_u = MAX_int8_T;
              c4_fb_y = NULL;
              sf_mex_assign(&c4_fb_y, sf_mex_create("y", &c4_f_u, 2, 0U, 0U, 0U,
                0), false);
              sf_mex_call(&c4_h_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_cb_y,
                          14, sf_mex_call(&c4_h_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c4_h_st, NULL, "message", 1U, 2U, 14, c4_eb_y,
                                14, c4_fb_y)));
            }

            c4_db_y = c4_cv6[(uint8_T)c4_h_x & 127];
            c4_f_st.site = &c4_hd_emlrtRSI;
            c4_k_x = c4_cv[c4_d_kstr];
            c4_g_st.site = &c4_id_emlrtRSI;
            c4_l_x = c4_k_x;
            c4_h_st.site = &c4_jd_emlrtRSI;
            c4_o_s = c4_l_x;
            c4_p_s = c4_o_s;
            c4_b12 = ((real_T)(uint8_T)c4_p_s <= 127.0);
            c4_h_p = c4_b12;
            if (!c4_h_p) {
              c4_kb_y = NULL;
              sf_mex_assign(&c4_kb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_mb_y = NULL;
              sf_mex_assign(&c4_mb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U,
                2, 1, 31), false);
              c4_h_u = MAX_int8_T;
              c4_nb_y = NULL;
              sf_mex_assign(&c4_nb_y, sf_mex_create("y", &c4_h_u, 2, 0U, 0U, 0U,
                0), false);
              sf_mex_call(&c4_h_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_kb_y,
                          14, sf_mex_call(&c4_h_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c4_h_st, NULL, "message", 1U, 2U, 14, c4_mb_y,
                                14, c4_nb_y)));
            }

            c4_lb_y = c4_cv6[(uint8_T)c4_l_x & 127];
            if (c4_db_y != c4_lb_y) {
              c4_exitg1 = 1;
            } else {
              c4_c_kstr++;
            }
          } else {
            c4_b_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_b_bool) {
        if (c4_lenstr == 9.0) {
          c4_nmatched = 1.0;
          c4_partial_match_size[0] = 1;
          c4_partial_match_size[1] = 9;
          for (c4_i12 = 0; c4_i12 < 9; c4_i12++) {
            c4_partial_match_data[c4_i12] = c4_cv[c4_i12];
          }
        } else {
          if (!c4_matched) {
            c4_partial_match_size[0] = 1;
            c4_partial_match_size[1] = 9;
            for (c4_i11 = 0; c4_i11 < 9; c4_i11++) {
              c4_partial_match_data[c4_i11] = c4_cv[c4_i11];
            }
          }

          c4_matched = true;
          c4_nmatched++;
          c4_guard2 = true;
        }
      } else {
        c4_guard2 = true;
      }
    } else {
      c4_guard2 = true;
    }
  }

  if (c4_guard2) {
    if (c4_lenstr <= 5.0) {
      c4_i = c4_b_str->size[0] * c4_b_str->size[1];
      c4_b_str->size[0] = 1;
      c4_b_str->size[1] = c4_str->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_b_str, c4_i,
        &c4_pb_emlrtRTEI);
      c4_loop_ub = c4_str->size[0] * c4_str->size[1] - 1;
      for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
        c4_b_str->data[c4_i1] = c4_str->data[c4_i1];
      }

      c4_c_st.site = &c4_bd_emlrtRSI;
      if (c4_strcmp(chartInstance, &c4_c_st, c4_b_str, c4_lenstr)) {
        if (c4_lenstr == 5.0) {
          c4_nmatched = 1.0;
          c4_partial_match_size[0] = 1;
          c4_partial_match_size[1] = 5;
          for (c4_i4 = 0; c4_i4 < 5; c4_i4++) {
            c4_partial_match_data[c4_i4] = c4_vstr[c4_i4];
          }
        } else {
          if (!c4_matched) {
            c4_partial_match_size[0] = 1;
            c4_partial_match_size[1] = 5;
            for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
              c4_partial_match_data[c4_i3] = c4_vstr[c4_i3];
            }
          }

          c4_nmatched++;
          c4_guard1 = true;
        }
      } else {
        c4_guard1 = true;
      }
    } else {
      c4_guard1 = true;
    }
  }

  if (c4_guard1 && (c4_nmatched == 0.0)) {
    c4_partial_match_size[0] = 1;
    c4_partial_match_size[1] = 0;
  }

  c4_emxFree_char_T(chartInstance, &c4_b_str);
  c4_emxInit_char_T(chartInstance, &c4_st, &c4_inputstr, 2, &c4_ub_emlrtRTEI);
  c4_guard1 = false;
  if (c4_nmatched == 0.0) {
    c4_guard1 = true;
  } else {
    c4_b = (c4_partial_match_size[1] == 0);
    c4_b1 = (c4_str->size[1] == 0);
    if ((int32_T)c4_b1 != (int32_T)c4_b) {
      c4_guard1 = true;
    } else if (c4_nmatched > 1.0) {
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
        43), false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        49), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        32), false);
      c4_i5 = c4_inputstr->size[0] * c4_inputstr->size[1];
      c4_inputstr->size[0] = 1;
      c4_inputstr->size[1] = c4_str->size[1] + 5;
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_inputstr, c4_i5,
        &c4_tb_emlrtRTEI);
      for (c4_i8 = 0; c4_i8 < 3; c4_i8++) {
        c4_inputstr->data[c4_i8] = c4_b_cv6[c4_i8];
      }

      c4_c_loop_ub = c4_str->size[1] - 1;
      for (c4_i10 = 0; c4_i10 <= c4_c_loop_ub; c4_i10++) {
        c4_inputstr->data[c4_i10 + 3] = c4_str->data[c4_i10];
      }

      for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
        c4_inputstr->data[(c4_i13 + c4_str->size[1]) + 3] = c4_b_cv7[c4_i13];
      }

      c4_j_y = NULL;
      sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_inputstr->data, 10, 0U, 1U,
        0U, 2, c4_inputstr->size[0], c4_inputstr->size[1]), false);
      sf_mex_call(&c4_st, &c4_g_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 4U, 14, c4_c_y, 14, c4_d_y, 14, c4_f_y, 14,
         c4_j_y)));
    } else {
      c4_out_size[0] = 1;
      c4_out_size[1] = c4_partial_match_size[1];
      c4_b_loop_ub = c4_partial_match_size[0] * c4_partial_match_size[1] - 1;
      for (c4_i2 = 0; c4_i2 <= c4_b_loop_ub; c4_i2++) {
        c4_out_data[c4_i2] = c4_partial_match_data[c4_i2];
      }
    }
  }

  if (c4_guard1) {
    c4_out_size[0] = 1;
    c4_out_size[1] = 0;
    if (c4_nmatched == 0.0) {
      c4_b3 = true;
    } else {
      c4_b2 = (c4_partial_match_size[1] == 0);
      c4_b4 = (c4_str->size[1] == 0);
      if ((int32_T)c4_b4 != (int32_T)c4_b2) {
        c4_b3 = true;
      } else {
        c4_b3 = false;
      }
    }

    if (c4_b3) {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        46), false);
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1,
        52), false);
      c4_h_y = NULL;
      sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c4_i_y = NULL;
      sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        32), false);
      c4_i9 = c4_inputstr->size[0] * c4_inputstr->size[1];
      c4_inputstr->size[0] = 1;
      c4_inputstr->size[1] = c4_str->size[1] + 5;
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_inputstr, c4_i9,
        &c4_tb_emlrtRTEI);
      for (c4_i14 = 0; c4_i14 < 3; c4_i14++) {
        c4_inputstr->data[c4_i14] = c4_b_cv6[c4_i14];
      }

      c4_d_loop_ub = c4_str->size[1] - 1;
      for (c4_i15 = 0; c4_i15 <= c4_d_loop_ub; c4_i15++) {
        c4_inputstr->data[c4_i15 + 3] = c4_str->data[c4_i15];
      }

      for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
        c4_inputstr->data[(c4_i16 + c4_str->size[1]) + 3] = c4_b_cv7[c4_i16];
      }

      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_inputstr->data, 10, 0U, 1U,
        0U, 2, c4_inputstr->size[0], c4_inputstr->size[1]), false);
      sf_mex_call(&c4_st, &c4_f_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 4U, 14, c4_g_y, 14, c4_h_y, 14, c4_i_y, 14,
         c4_l_y)));
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_inputstr);
}

static boolean_T c4_strcmp(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, real_T c4_cmpLen)
{
  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  real_T c4_b_x;
  real_T c4_x;
  int32_T c4_b;
  int32_T c4_b_a;
  int32_T c4_b_b;
  int32_T c4_b_cmpLen;
  int32_T c4_b_kstr;
  int32_T c4_c_a;
  int32_T c4_c_b;
  int32_T c4_c_cmpLen;
  int32_T c4_cmpLenInt;
  int32_T c4_exitg1;
  int32_T c4_kstr;
  int32_T c4_minnanb;
  int32_T c4_na;
  int32_T c4_ns;
  char_T c4_b_s;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_f_x;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_i_y;
  char_T c4_m_y;
  char_T c4_s;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_guard1 = false;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_x = c4_cmpLen;
  c4_b_x = c4_x;
  c4_b_x = muDoubleScalarFloor(c4_b_x);
  c4_cmpLenInt = (int32_T)c4_b_x;
  c4_st.site = &c4_cd_emlrtRSI;
  c4_b_cmpLen = c4_cmpLenInt;
  c4_b_st.site = &c4_dd_emlrtRSI;
  c4_c_cmpLen = c4_b_cmpLen;
  c4_bool = false;
  c4_na = c4_a->size[1];
  c4_b_a = c4_na;
  if (c4_b_a < 5) {
    c4_minnanb = c4_b_a;
  } else {
    c4_minnanb = 5;
  }

  c4_guard1 = false;
  if (c4_c_cmpLen <= c4_minnanb) {
    c4_c_a = c4_minnanb;
    c4_b = c4_c_cmpLen;
    if (c4_c_a < c4_b) {
      c4_ns = c4_c_a;
    } else {
      c4_ns = c4_b;
    }

    c4_guard1 = true;
  } else {
    if (c4_na == 5) {
      c4_ns = 5;
      c4_guard1 = true;
    }
  }

  if (c4_guard1) {
    c4_c_st.site = &c4_ed_emlrtRSI;
    c4_b_b = c4_ns;
    c4_c_b = c4_b_b;
    if (1 > c4_c_b) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_c_b > 2147483646);
    }

    if (c4_overflow) {
      c4_d_st.site = &c4_rb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
    }

    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 <= c4_ns - 1) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_fd_emlrtRSI;
        c4_s = c4_a->data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_d_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_d_b;
        if (!c4_p) {
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14,
                        c4_d_y)));
        }

        c4_c_st.site = &c4_gd_emlrtRSI;
        c4_c_s = c4_b_cv[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14,
                        c4_g_y)));
        }

        c4_c_st.site = &c4_hd_emlrtRSI;
        c4_c_x = c4_a->data[c4_b_kstr];
        c4_d_st.site = &c4_id_emlrtRSI;
        c4_d_x = c4_c_x;
        c4_e_st.site = &c4_jd_emlrtRSI;
        c4_e_s = c4_d_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_h_y = NULL;
          sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_j_y, 14,
                        c4_k_y)));
        }

        c4_i_y = c4_cv6[(uint8_T)c4_d_x & 127];
        c4_c_st.site = &c4_hd_emlrtRSI;
        c4_e_x = c4_b_cv[c4_b_kstr];
        c4_d_st.site = &c4_id_emlrtRSI;
        c4_f_x = c4_e_x;
        c4_e_st.site = &c4_jd_emlrtRSI;
        c4_g_s = c4_f_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_l_y = NULL;
          sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_o_y = NULL;
          sf_mex_assign(&c4_o_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_l_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_n_y, 14,
                        c4_o_y)));
        }

        c4_m_y = c4_cv6[(uint8_T)c4_f_x & 127];
        if (c4_i_y != c4_m_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static void c4_warning(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp)
{
  static char_T c4_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n',
    't', ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c4_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 38),
                false);
  c4_st.site = &c4_nd_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_b_y, c4_feval(chartInstance, &c4_st,
              c4_c_y, c4_d_y));
}

static void c4_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2)
{
  static char_T c4_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv3[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv4[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv5[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv7[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv8[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv9[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv[4] = { 'b', 'a', 's', 'e' };

  static char_T c4_b_cv1[4] = { 'b', 'a', 's', 'e' };

  c4_emxArray_char_T *c4_bname;
  c4_rigidBodyJoint *c4_b_iobj_1;
  c4_rigidBodyJoint *c4_b_jnt;
  c4_rigidBodyJoint *c4_c_jnt;
  c4_rigidBodyJoint *c4_d_jnt;
  c4_rigidBodyJoint *c4_e_jnt;
  c4_rigidBodyJoint *c4_f_jnt;
  c4_rigidBodyJoint *c4_g_jnt;
  c4_rigidBodyJoint *c4_j_obj;
  c4_rigidBodyJoint *c4_jnt;
  c4_rigidBodyJoint *c4_l_obj;
  c4_robotics_manip_internal_CollisionSet *c4_b_iobj_0;
  c4_robotics_manip_internal_RigidBody *c4_b_iobj_2;
  c4_robotics_manip_internal_RigidBody *c4_body;
  c4_robotics_manip_internal_RigidBody *c4_g_obj;
  c4_robotics_manip_internal_RigidBody *c4_i_obj;
  c4_robotics_manip_internal_RigidBody *c4_m_obj;
  c4_robotics_manip_internal_RigidBody *c4_n_obj;
  c4_robotics_manip_internal_RigidBody *c4_o_obj;
  c4_robotics_manip_internal_RigidBody *c4_p_obj;
  c4_robotics_manip_internal_RigidBody *c4_parent;
  c4_robotics_manip_internal_RigidBody *c4_q_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_b_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_e_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_f_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_r_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_bodyin;
  c4_robotics_manip_internal_RigidBody_1 *c4_c_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_h_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_k_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_db_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_bid;
  real_T c4_bid2;
  real_T c4_c_i;
  real_T c4_d;
  real_T c4_index;
  real_T c4_pid;
  int32_T c4_b_body;
  int32_T c4_b_i;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_body;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_body;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_body;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_b_bool;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_exitg2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_bname, 2, &c4_xb_emlrtRTEI);
  c4_st.site = &c4_od_emlrtRSI;
  c4_b_obj = &c4_obj->TreeInternal;
  c4_b_bodyin = c4_bodyin->BodyInternal;
  c4_b_iobj_0 = c4_iobj_0;
  c4_b_iobj_1 = c4_iobj_1;
  c4_b_iobj_2 = c4_iobj_2;
  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_c_obj = c4_b_bodyin;
  c4_i = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i,
    &c4_vb_emlrtRTEI);
  c4_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size[1]
    - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_bname->data[c4_i1] = c4_c_obj->NameInternal->data[c4_i1];
  }

  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_bid = c4_RigidBodyTree_findBodyIndexByName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid > -1.0) {
    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_d_obj = c4_b_bodyin;
    c4_i2 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_d_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i2,
      &c4_vb_emlrtRTEI);
    c4_b_loop_ub = c4_d_obj->NameInternal->size[0] * c4_d_obj->
      NameInternal->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
      c4_bname->data[c4_i3] = c4_d_obj->NameInternal->data[c4_i3];
    }

    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_b_st.site = &c4_rd_emlrtRSI;
  c4_e_obj = c4_b_obj;
  c4_c_st.site = &c4_fe_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_pid = -1.0;
  c4_d_st.site = &c4_de_emlrtRSI;
  c4_g_obj = &c4_f_obj->Base;
  c4_i4 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_g_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i4,
    &c4_vb_emlrtRTEI);
  c4_c_loop_ub = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size
    [1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_bname->data[c4_i5] = c4_g_obj->NameInternal->data[c4_i5];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_bname->size[1];
  if (c4_remainingDimsA == 4) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 4) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_bname->data[c4_b_kstr] != c4_b_cv[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_pid = 0.0;
  } else {
    c4_d = c4_f_obj->NumBodies;
    c4_i6 = (int32_T)c4_d;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i6,
      &c4_hc_emlrtRTEI, &c4_c_st);
    c4_b_i = 0;
    c4_exitg2 = false;
    while ((!c4_exitg2) && (c4_b_i <= c4_i6 - 1)) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_d_st.site = &c4_ee_emlrtRSI;
      c4_i7 = (int32_T)c4_c_i - 1;
      c4_i_obj = c4_f_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i7, 0, 2,
        &c4_h_emlrtBCI, &c4_d_st)];
      c4_i8 = c4_bname->size[0] * c4_bname->size[1];
      c4_bname->size[0] = 1;
      c4_bname->size[1] = c4_i_obj->NameInternal->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i8,
        &c4_vb_emlrtRTEI);
      c4_d_loop_ub = c4_i_obj->NameInternal->size[0] * c4_i_obj->
        NameInternal->size[1] - 1;
      for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
        c4_bname->data[c4_i10] = c4_i_obj->NameInternal->data[c4_i10];
      }

      c4_b_bool = false;
      c4_b_remainingDimsA = c4_bname->size[1];
      if (c4_b_remainingDimsA == 4) {
        c4_c_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_c_kstr - 1 < 4) {
            c4_d_kstr = c4_c_kstr - 1;
            if (c4_bname->data[c4_d_kstr] != c4_b_cv[c4_d_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_c_kstr++;
            }
          } else {
            c4_b_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_b_bool) {
        c4_pid = c4_c_i;
        c4_exitg2 = true;
      } else {
        c4_b_i++;
      }
    }
  }

  if (c4_pid == -1.0) {
    c4_c_st.site = &c4_ge_emlrtRSI;
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_h_y)));
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_h_obj = c4_b_bodyin;
  if (c4_h_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14, c4_j_y)));
  }

  c4_jnt = c4_h_obj->JointInternal;
  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_j_obj = c4_jnt;
  c4_i9 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_j_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i9,
    &c4_ib_emlrtRTEI);
  c4_e_loop_ub = c4_j_obj->NameInternal->size[0] * c4_j_obj->NameInternal->size
    [1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_bname->data[c4_i11] = c4_j_obj->NameInternal->data[c4_i11];
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_bid2 = c4_RigidBodyTree_findBodyIndexByJointName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid2 > 0.0) {
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_k_obj = c4_b_bodyin;
    if (c4_k_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_m_y = NULL;
      sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_l_y, 14, c4_m_y)));
    }

    c4_b_jnt = c4_k_obj->JointInternal;
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_l_obj = c4_b_jnt;
    c4_i14 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_l_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i14,
      &c4_ib_emlrtRTEI);
    c4_f_loop_ub = c4_l_obj->NameInternal->size[0] * c4_l_obj->
      NameInternal->size[1] - 1;
    for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
      c4_bname->data[c4_i16] = c4_l_obj->NameInternal->data[c4_i16];
    }

    c4_b_st.site = &c4_td_emlrtRSI;
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_o_y, 14, c4_p_y)));
  }

  c4_index = c4_b_obj->NumBodies + 1.0;
  c4_b_st.site = &c4_be_emlrtRSI;
  c4_body = c4_RigidBody_copy(chartInstance, &c4_b_st, c4_b_bodyin, c4_b_iobj_0,
    c4_b_iobj_1, c4_b_iobj_2);
  for (c4_i12 = 0; c4_i12 < 3; c4_i12++) {
    c4_body->ChildrenIndices[c4_i12] = 0.0;
  }

  c4_i13 = (int32_T)emlrtIntegerCheckR2012b(c4_index, &c4_d_emlrtDCI, &c4_st) -
    1;
  c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i13, 0, 2, &c4_g_emlrtBCI,
    &c4_st)] = c4_body;
  c4_body->Index = c4_index;
  c4_body->ParentIndex = c4_pid;
  if (c4_pid > 0.0) {
    c4_i15 = (int32_T)c4_pid - 1;
    c4_parent = c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i15, 0, 2,
      &c4_i_emlrtBCI, &c4_st)];
  } else {
    c4_parent = &c4_b_obj->Base;
  }

  c4_i17 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_i_emlrtDCI,
    &c4_st);
  c4_parent->ChildrenIndices[emlrtDynamicBoundsCheckR2012b(c4_i17, 1, 3,
    &c4_j_emlrtBCI, &c4_st) - 1] = 1.0;
  c4_body->JointInternal->InTree = true;
  c4_b_obj->NumBodies++;
  c4_b_st.site = &c4_ud_emlrtRSI;
  c4_m_obj = c4_body;
  if (c4_m_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_q_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_r_y, 14, c4_s_y)));
  }

  c4_c_jnt = c4_m_obj->JointInternal;
  c4_i18 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_jnt->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_bname, c4_i18,
    &c4_wb_emlrtRTEI);
  c4_g_loop_ub = c4_c_jnt->Type->size[0] * c4_c_jnt->Type->size[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
    c4_bname->data[c4_i19] = c4_c_jnt->Type->data[c4_i19];
  }

  c4_c_bool = false;
  c4_c_remainingDimsA = c4_bname->size[1];
  if (c4_c_remainingDimsA == 5) {
    c4_e_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_e_kstr - 1 < 5) {
        c4_f_kstr = c4_e_kstr - 1;
        if (c4_bname->data[c4_f_kstr] != c4_b_cv5[c4_f_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_e_kstr++;
        }
      } else {
        c4_c_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  c4_emxFree_char_T(chartInstance, &c4_bname);
  if (!c4_c_bool) {
    c4_b_obj->NumNonFixedBodies++;
    c4_b_st.site = &c4_vd_emlrtRSI;
    c4_n_obj = c4_body;
    if (c4_n_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_t_y = NULL;
      sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_u_y = NULL;
      sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_v_y = NULL;
      sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_t_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_u_y, 14, c4_v_y)));
    }

    c4_d_jnt = c4_n_obj->JointInternal;
    c4_i24 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_e_emlrtDCI,
      &c4_st);
    c4_d_body = emlrtDynamicBoundsCheckR2012b(c4_i24, 1, 3, &c4_c_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->PositionDoFMap[c4_d_body] = c4_b_obj->PositionNumber + 1.0;
    c4_b_obj->PositionDoFMap[3 + c4_d_body] = c4_b_obj->PositionNumber +
      c4_d_jnt->PositionNumber;
    c4_b_st.site = &c4_wd_emlrtRSI;
    c4_p_obj = c4_body;
    if (c4_p_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_x_y = NULL;
      sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_ab_y = NULL;
      sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
        51), false);
      c4_cb_y = NULL;
      sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_x_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_ab_y, 14, c4_cb_y)));
    }

    c4_f_jnt = c4_p_obj->JointInternal;
    c4_i25 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_f_emlrtDCI,
      &c4_st);
    c4_e_body = emlrtDynamicBoundsCheckR2012b(c4_i25, 1, 3, &c4_d_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->VelocityDoFMap[c4_e_body] = c4_b_obj->VelocityNumber + 1.0;
    c4_b_obj->VelocityDoFMap[3 + c4_e_body] = c4_b_obj->VelocityNumber +
      c4_f_jnt->VelocityNumber;
  } else {
    c4_i20 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_g_emlrtDCI,
      &c4_st);
    c4_b_body = emlrtDynamicBoundsCheckR2012b(c4_i20, 1, 3, &c4_e_emlrtBCI,
      &c4_st) - 1;
    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_b_obj->PositionDoFMap[c4_b_body + 3 * c4_i21] = 0.0 - (real_T)c4_i21;
    }

    c4_i22 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_h_emlrtDCI,
      &c4_st);
    c4_c_body = emlrtDynamicBoundsCheckR2012b(c4_i22, 1, 3, &c4_f_emlrtBCI,
      &c4_st) - 1;
    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_b_obj->VelocityDoFMap[c4_c_body + 3 * c4_i23] = 0.0 - (real_T)c4_i23;
    }
  }

  c4_b_st.site = &c4_xd_emlrtRSI;
  c4_o_obj = c4_body;
  if (c4_o_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_y_y = NULL;
    sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_bb_y = NULL;
    sf_mex_assign(&c4_bb_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_w_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_y_y, 14, c4_bb_y)));
  }

  c4_e_jnt = c4_o_obj->JointInternal;
  c4_b_obj->PositionNumber += c4_e_jnt->PositionNumber;
  c4_b_st.site = &c4_yd_emlrtRSI;
  c4_q_obj = c4_body;
  if (c4_q_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_db_y = NULL;
    sf_mex_assign(&c4_db_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_eb_y = NULL;
    sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_fb_y = NULL;
    sf_mex_assign(&c4_fb_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_db_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_eb_y, 14, c4_fb_y)));
  }

  c4_g_jnt = c4_q_obj->JointInternal;
  c4_b_obj->VelocityNumber += c4_g_jnt->VelocityNumber;
  c4_b_st.site = &c4_ae_emlrtRSI;
  c4_r_obj = c4_b_obj;
  c4_r_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static real_T c4_RigidBodyTree_findBodyIndexByName
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBodyTree *c4_obj, c4_emxArray_char_T
   *c4_bodyname)
{
  static char_T c4_b_cv[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  static char_T c4_b_cv1[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  c4_emxArray_char_T *c4_b_bodyname;
  c4_emxArray_char_T *c4_bname;
  c4_emxArray_char_T *c4_c_bodyname;
  c4_robotics_manip_internal_RigidBody *c4_b_obj;
  c4_robotics_manip_internal_RigidBody *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  real_T c4_bid;
  real_T c4_c_i;
  real_T c4_d;
  int32_T c4_b_i;
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_exitg1;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_bid = -1.0;
  c4_st.site = &c4_ce_emlrtRSI;
  c4_b_st.site = &c4_xc_emlrtRSI;
  c4_b = (c4_bodyname->size[1] == 0);
  if (c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c4_b_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_bname, 2, &c4_bc_emlrtRTEI);
  c4_st.site = &c4_de_emlrtRSI;
  c4_b_obj = &c4_obj->Base;
  c4_i = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_b_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_bname, c4_i,
    &c4_vb_emlrtRTEI);
  c4_loop_ub = c4_b_obj->NameInternal->size[0] * c4_b_obj->NameInternal->size[1]
    - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_bname->data[c4_i1] = c4_b_obj->NameInternal->data[c4_i1];
  }

  c4_emxInit_char_T(chartInstance, &c4_st, &c4_b_bodyname, 2, &c4_yb_emlrtRTEI);
  c4_i2 = c4_b_bodyname->size[0] * c4_b_bodyname->size[1];
  c4_b_bodyname->size[0] = 1;
  c4_b_bodyname->size[1] = c4_bodyname->size[1];
  c4_st.site = &c4_de_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_bodyname, c4_i2,
    &c4_yb_emlrtRTEI);
  c4_b_loop_ub = c4_bodyname->size[0] * c4_bodyname->size[1] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_bodyname->data[c4_i3] = c4_bodyname->data[c4_i3];
  }

  c4_st.site = &c4_de_emlrtRSI;
  if (c4_b_strcmp(chartInstance, &c4_st, c4_bname, c4_b_bodyname)) {
    c4_bid = 0.0;
  } else {
    c4_d = c4_obj->NumBodies;
    c4_i4 = (int32_T)c4_d;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i4,
      &c4_hc_emlrtRTEI, c4_sp);
    c4_b_i = 0;
    c4_emxInit_char_T(chartInstance, c4_sp, &c4_c_bodyname, 2, &c4_ac_emlrtRTEI);
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_b_i <= c4_i4 - 1)) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_st.site = &c4_ee_emlrtRSI;
      c4_i5 = (int32_T)c4_c_i - 1;
      c4_c_obj = c4_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i5, 0, 2,
        &c4_h_emlrtBCI, &c4_st)];
      c4_i6 = c4_bname->size[0] * c4_bname->size[1];
      c4_bname->size[0] = 1;
      c4_bname->size[1] = c4_c_obj->NameInternal->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_bname, c4_i6,
        &c4_vb_emlrtRTEI);
      c4_c_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->
        NameInternal->size[1] - 1;
      for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
        c4_bname->data[c4_i7] = c4_c_obj->NameInternal->data[c4_i7];
      }

      c4_i8 = c4_c_bodyname->size[0] * c4_c_bodyname->size[1];
      c4_c_bodyname->size[0] = 1;
      c4_c_bodyname->size[1] = c4_bodyname->size[1];
      c4_st.site = &c4_ee_emlrtRSI;
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_c_bodyname, c4_i8,
        &c4_ac_emlrtRTEI);
      c4_d_loop_ub = c4_bodyname->size[0] * c4_bodyname->size[1] - 1;
      for (c4_i9 = 0; c4_i9 <= c4_d_loop_ub; c4_i9++) {
        c4_c_bodyname->data[c4_i9] = c4_bodyname->data[c4_i9];
      }

      c4_st.site = &c4_ee_emlrtRSI;
      if (c4_b_strcmp(chartInstance, &c4_st, c4_bname, c4_c_bodyname)) {
        c4_bid = c4_c_i;
        c4_exitg1 = true;
      } else {
        c4_b_i++;
      }
    }

    c4_emxFree_char_T(chartInstance, &c4_c_bodyname);
  }

  c4_emxFree_char_T(chartInstance, &c4_b_bodyname);
  c4_emxFree_char_T(chartInstance, &c4_bname);
  return c4_bid;
}

static boolean_T c4_b_strcmp(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, c4_emxArray_char_T *c4_b)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  int32_T c4_b_kstr;
  int32_T c4_b_nb;
  int32_T c4_c_b;
  int32_T c4_d_b;
  int32_T c4_exitg1;
  int32_T c4_kstr;
  int32_T c4_nb;
  int32_T c4_ns;
  int32_T c4_remainingDimsA;
  int32_T c4_remainingDimsB;
  boolean_T c4_b1;
  boolean_T c4_b_b;
  boolean_T c4_bool;
  boolean_T c4_guard1 = false;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_cd_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_b_st.site = &c4_dd_emlrtRSI;
  c4_bool = false;
  c4_nb = c4_b->size[1];
  c4_b_b = (c4_a->size[1] == 0);
  c4_guard1 = false;
  if (c4_b_b) {
    c4_b1 = (c4_b->size[1] == 0);
    if (c4_b1) {
      c4_bool = true;
    } else {
      c4_guard1 = true;
    }
  } else {
    c4_guard1 = true;
  }

  if (c4_guard1) {
    c4_remainingDimsA = c4_a->size[1];
    c4_remainingDimsB = c4_b->size[1];
    if (c4_remainingDimsA != c4_remainingDimsB) {
    } else {
      c4_b_nb = c4_nb;
      c4_ns = c4_b_nb;
      c4_c_st.site = &c4_ed_emlrtRSI;
      c4_c_b = c4_ns;
      c4_d_b = c4_c_b;
      if (1 > c4_d_b) {
        c4_overflow = false;
      } else {
        c4_overflow = (c4_d_b > 2147483646);
      }

      if (c4_overflow) {
        c4_d_st.site = &c4_rb_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
      }

      c4_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_kstr - 1 <= c4_ns - 1) {
          c4_b_kstr = c4_kstr - 1;
          if (c4_a->data[c4_b_kstr] != c4_b->data[c4_b_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_kstr++;
          }
        } else {
          c4_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }
  }

  return c4_bool;
}

static real_T c4_RigidBodyTree_findBodyIndexByJointName
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBodyTree *c4_obj, c4_emxArray_char_T
   *c4_jointname)
{
  static char_T c4_b_cv[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c4_b_cv1[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  static char_T c4_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  c4_emxArray_char_T *c4_b_jointname;
  c4_emxArray_char_T *c4_nm;
  c4_rigidBodyJoint *c4_c_obj;
  c4_rigidBodyJoint *c4_jnt;
  c4_robotics_manip_internal_RigidBody *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_bid;
  real_T c4_c_i;
  real_T c4_d;
  int32_T c4_b_i;
  int32_T c4_b_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_exitg1;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_bid = -1.0;
  c4_st.site = &c4_ie_emlrtRSI;
  c4_b_st.site = &c4_xc_emlrtRSI;
  c4_b = (c4_jointname->size[1] == 0);
  if (c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_b_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_d = c4_obj->NumBodies;
  c4_i = (int32_T)c4_d;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i,
    &c4_ic_emlrtRTEI, c4_sp);
  c4_b_i = 0;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_nm, 2, &c4_dc_emlrtRTEI);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_b_jointname, 2, &c4_cc_emlrtRTEI);
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_b_i <= c4_i - 1)) {
    c4_c_i = (real_T)c4_b_i + 1.0;
    c4_st.site = &c4_je_emlrtRSI;
    c4_i1 = (int32_T)c4_c_i - 1;
    c4_b_obj = c4_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i1, 0, 2,
      &c4_k_emlrtBCI, &c4_st)];
    if (c4_b_obj->Index == 0.0) {
      c4_b_st.site = &c4_he_emlrtRSI;
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                  sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_b_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
    }

    c4_jnt = c4_b_obj->JointInternal;
    c4_st.site = &c4_je_emlrtRSI;
    c4_c_obj = c4_jnt;
    c4_i2 = c4_nm->size[0] * c4_nm->size[1];
    c4_nm->size[0] = 1;
    c4_nm->size[1] = c4_c_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_nm, c4_i2,
      &c4_ib_emlrtRTEI);
    c4_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size
      [1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
      c4_nm->data[c4_i3] = c4_c_obj->NameInternal->data[c4_i3];
    }

    c4_i4 = c4_b_jointname->size[0] * c4_b_jointname->size[1];
    c4_b_jointname->size[0] = 1;
    c4_b_jointname->size[1] = c4_jointname->size[1];
    c4_st.site = &c4_je_emlrtRSI;
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_jointname, c4_i4,
      &c4_cc_emlrtRTEI);
    c4_b_loop_ub = c4_jointname->size[0] * c4_jointname->size[1] - 1;
    for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
      c4_b_jointname->data[c4_i5] = c4_jointname->data[c4_i5];
    }

    c4_st.site = &c4_je_emlrtRSI;
    if (c4_b_strcmp(chartInstance, &c4_st, c4_nm, c4_b_jointname)) {
      c4_bid = c4_c_i;
      c4_exitg1 = true;
    } else {
      c4_b_i++;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_b_jointname);
  c4_emxFree_char_T(chartInstance, &c4_nm);
  return c4_bid;
}

static c4_robotics_manip_internal_RigidBody *c4_RigidBody_copy
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_robotics_manip_internal_RigidBody_1 *c4_obj,
   c4_robotics_manip_internal_CollisionSet *c4_iobj_0, c4_rigidBodyJoint
   *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2)
{
  static char_T c4_b_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c4_b_cv5[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv1[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T c4_b_cv3[5] = { 'j', 'n', 'a', 'm', 'e' };

  static char_T c4_b_cv4[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_b_cv2[4] = { '_', 'j', 'n', 't' };

  c4_emxArray_char_T *c4_input1;
  c4_emxArray_char_T *c4_jname;
  c4_rigidBodyJoint *c4_b_this;
  c4_rigidBodyJoint *c4_d_obj;
  c4_rigidBodyJoint *c4_e_obj;
  c4_robotics_manip_internal_CollisionGeometry *c4_b_newObj;
  c4_robotics_manip_internal_CollisionGeometry *c4_j_obj;
  c4_robotics_manip_internal_CollisionSet *c4_b_iobj_0;
  c4_robotics_manip_internal_CollisionSet *c4_i_obj;
  c4_robotics_manip_internal_CollisionSet *c4_newObj;
  c4_robotics_manip_internal_RigidBody *c4_b_obj;
  c4_robotics_manip_internal_RigidBody *c4_c_obj;
  c4_robotics_manip_internal_RigidBody *c4_newbody;
  c4_robotics_manip_internal_RigidBody *c4_this;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_b_I[36];
  real_T c4_h_obj[36];
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_g_obj[9];
  real_T c4_homepos_data[6];
  real_T c4_f_obj[3];
  real_T c4_c_i;
  real_T c4_d;
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_i;
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_input1, 2, &c4_ec_emlrtRTEI);
  c4_st.site = &c4_ke_emlrtRSI;
  c4_b_obj = c4_iobj_2;
  c4_i = c4_input1->size[0] * c4_input1->size[1];
  c4_input1->size[0] = 1;
  c4_input1->size[1] = c4_obj->NameInternal->size[1];
  c4_b_st.site = &c4_ke_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_input1, c4_i,
    &c4_ec_emlrtRTEI);
  c4_loop_ub = c4_obj->NameInternal->size[0] * c4_obj->NameInternal->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_input1->data[c4_i1] = c4_obj->NameInternal->data[c4_i1];
  }

  c4_newbody = c4_b_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_c_obj = c4_newbody;
  c4_newbody = c4_c_obj;
  c4_c_st.site = &c4_emlrtRSI;
  c4_this = c4_newbody;
  c4_newbody = c4_this;
  c4_b_st.site = &c4_ne_emlrtRSI;
  c4_c_st.site = &c4_xc_emlrtRSI;
  c4_b = (c4_input1->size[1] == 0);
  if (c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_i2 = c4_newbody->NameInternal->size[0] * c4_newbody->NameInternal->size[1];
  c4_newbody->NameInternal->size[0] = 1;
  c4_newbody->NameInternal->size[1] = c4_input1->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_newbody->NameInternal,
    c4_i2, &c4_c_emlrtRTEI);
  c4_b_loop_ub = c4_input1->size[0] * c4_input1->size[1] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_newbody->NameInternal->data[c4_i3] = c4_input1->data[c4_i3];
  }

  c4_emxInit_char_T(chartInstance, &c4_st, &c4_jname, 2, &c4_fc_emlrtRTEI);
  c4_i4 = c4_jname->size[0] * c4_jname->size[1];
  c4_jname->size[0] = 1;
  c4_jname->size[1] = c4_input1->size[1] + 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_jname, c4_i4,
    &c4_fc_emlrtRTEI);
  c4_c_loop_ub = c4_input1->size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_jname->data[c4_i5] = c4_input1->data[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 4; c4_i6++) {
    c4_jname->data[c4_i6 + c4_input1->size[1]] = c4_b_cv2[c4_i6];
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_d_obj = &c4_newbody->_pobj1;
  c4_e_obj = c4_d_obj;
  c4_e_obj->InTree = false;
  c4_c_st.site = &c4_gb_emlrtRSI;
  c4_b_this = c4_e_obj;
  c4_e_obj = c4_b_this;
  c4_c_st.site = &c4_vc_emlrtRSI;
  c4_d_st.site = &c4_xc_emlrtRSI;
  c4_b1 = (c4_jname->size[1] == 0);
  if (c4_b1) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_d_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }

  c4_i7 = c4_e_obj->NameInternal->size[0] * c4_e_obj->NameInternal->size[1];
  c4_e_obj->NameInternal->size[0] = 1;
  c4_e_obj->NameInternal->size[1] = c4_jname->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_e_obj->NameInternal,
    c4_i7, &c4_e_emlrtRTEI);
  c4_d_loop_ub = c4_jname->size[0] * c4_jname->size[1] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_d_loop_ub; c4_i8++) {
    c4_e_obj->NameInternal->data[c4_i8] = c4_jname->data[c4_i8];
  }

  c4_emxFree_char_T(chartInstance, &c4_jname);
  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i9 = 0; c4_i9 < 5; c4_i9++) {
    c4_jointtype_data[c4_i9] = c4_b_cv4[c4_i9];
  }

  c4_i10 = c4_e_obj->Type->size[0] * c4_e_obj->Type->size[1];
  c4_e_obj->Type->size[0] = 1;
  c4_e_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_e_obj->Type, c4_i10,
    &c4_g_emlrtRTEI);
  c4_e_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_e_obj->Type->data[c4_i11] = c4_jointtype_data[c4_i11];
  }

  c4_i12 = c4_input1->size[0] * c4_input1->size[1];
  c4_input1->size[0] = 1;
  c4_input1->size[1] = c4_e_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_input1, c4_i12,
    &c4_h_emlrtRTEI);
  c4_f_loop_ub = c4_e_obj->Type->size[0] * c4_e_obj->Type->size[1] - 1;
  for (c4_i13 = 0; c4_i13 <= c4_f_loop_ub; c4_i13++) {
    c4_input1->data[c4_i13] = c4_e_obj->Type->data[c4_i13];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_input1->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_input1->data[c4_b_kstr] != c4_b_cv5[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_input1->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_input1->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_input1);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i15 = 0; c4_i15 < 6; c4_i15++) {
      c4_msubspace_data[c4_i15] = c4_dv[c4_i15];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i18 = 0; c4_i18 < 2; c4_i18++) {
      c4_poslim_data[c4_i18] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i18;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_e_obj->VelocityNumber = 1.0;
    c4_e_obj->PositionNumber = 1.0;
    for (c4_i21 = 0; c4_i21 < 3; c4_i21++) {
      c4_e_obj->JointAxisInternal[c4_i21] = c4_dv2[c4_i21];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i16 = 0; c4_i16 < 6; c4_i16++) {
      c4_msubspace_data[c4_i16] = c4_dv1[c4_i16];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i19 = 0; c4_i19 < 2; c4_i19++) {
      c4_poslim_data[c4_i19] = -0.5 + (real_T)c4_i19;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_e_obj->VelocityNumber = 1.0;
    c4_e_obj->PositionNumber = 1.0;
    for (c4_i22 = 0; c4_i22 < 3; c4_i22++) {
      c4_e_obj->JointAxisInternal[c4_i22] = c4_dv2[c4_i22];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i14 = 0; c4_i14 < 6; c4_i14++) {
      c4_msubspace_data[c4_i14] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i17 = 0; c4_i17 < 2; c4_i17++) {
      c4_poslim_data[c4_i17] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_e_obj->VelocityNumber = 0.0;
    c4_e_obj->PositionNumber = 0.0;
    for (c4_i20 = 0; c4_i20 < 3; c4_i20++) {
      c4_e_obj->JointAxisInternal[c4_i20] = 0.0;
    }
    break;
  }

  c4_i23 = c4_e_obj->MotionSubspace->size[0] * c4_e_obj->MotionSubspace->size[1];
  c4_e_obj->MotionSubspace->size[0] = 6;
  c4_e_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_e_obj->MotionSubspace,
    c4_i23, &c4_r_emlrtRTEI);
  c4_g_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i24 = 0; c4_i24 <= c4_g_loop_ub; c4_i24++) {
    c4_e_obj->MotionSubspace->data[c4_i24] = c4_msubspace_data[c4_i24];
  }

  c4_i25 = c4_e_obj->PositionLimitsInternal->size[0] *
    c4_e_obj->PositionLimitsInternal->size[1];
  c4_e_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_e_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st,
    c4_e_obj->PositionLimitsInternal, c4_i25, &c4_s_emlrtRTEI);
  c4_h_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i26 = 0; c4_i26 <= c4_h_loop_ub; c4_i26++) {
    c4_e_obj->PositionLimitsInternal->data[c4_i26] = c4_poslim_data[c4_i26];
  }

  c4_i27 = c4_e_obj->HomePositionInternal->size[0];
  c4_e_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st,
    c4_e_obj->HomePositionInternal, c4_i27, &c4_t_emlrtRTEI);
  c4_i_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i28 = 0; c4_i28 <= c4_i_loop_ub; c4_i28++) {
    c4_e_obj->HomePositionInternal->data[c4_i28] = c4_homepos_data[c4_i28];
  }

  c4_newbody->JointInternal = c4_e_obj;
  c4_newbody->Index = -1.0;
  c4_newbody->ParentIndex = -1.0;
  c4_newbody->MassInternal = 1.0;
  for (c4_i29 = 0; c4_i29 < 3; c4_i29++) {
    c4_newbody->CenterOfMassInternal[c4_i29] = 0.0;
  }

  for (c4_i30 = 0; c4_i30 < 9; c4_i30++) {
    c4_I[c4_i30] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i31 = 0; c4_i31 < 9; c4_i31++) {
    c4_newbody->InertiaInternal[c4_i31] = c4_I[c4_i31];
  }

  for (c4_i32 = 0; c4_i32 < 36; c4_i32++) {
    c4_b_I[c4_i32] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i33 = 0; c4_i33 < 36; c4_i33++) {
    c4_newbody->SpatialInertia[c4_i33] = c4_b_I[c4_i33];
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_newbody->CollisionsInternal = c4_CollisionSet_CollisionSet(chartInstance,
    &c4_b_st, &c4_newbody->_pobj0, 0.0);
  c4_st.site = &c4_le_emlrtRSI;
  c4_newbody->JointInternal = c4_rigidBodyJoint_copy(chartInstance, &c4_st,
    c4_obj->JointInternal, c4_iobj_1);
  c4_newbody->MassInternal = c4_obj->MassInternal;
  for (c4_i34 = 0; c4_i34 < 3; c4_i34++) {
    c4_f_obj[c4_i34] = c4_obj->CenterOfMassInternal[c4_i34];
  }

  for (c4_i35 = 0; c4_i35 < 3; c4_i35++) {
    c4_newbody->CenterOfMassInternal[c4_i35] = c4_f_obj[c4_i35];
  }

  for (c4_i36 = 0; c4_i36 < 9; c4_i36++) {
    c4_g_obj[c4_i36] = c4_obj->InertiaInternal[c4_i36];
  }

  for (c4_i37 = 0; c4_i37 < 9; c4_i37++) {
    c4_newbody->InertiaInternal[c4_i37] = c4_g_obj[c4_i37];
  }

  for (c4_i38 = 0; c4_i38 < 36; c4_i38++) {
    c4_h_obj[c4_i38] = c4_obj->SpatialInertia[c4_i38];
  }

  for (c4_i39 = 0; c4_i39 < 36; c4_i39++) {
    c4_newbody->SpatialInertia[c4_i39] = c4_h_obj[c4_i39];
  }

  c4_st.site = &c4_me_emlrtRSI;
  c4_i_obj = &c4_obj->CollisionsInternal;
  c4_b_iobj_0 = c4_iobj_0;
  c4_b_st.site = &c4_oe_emlrtRSI;
  c4_newObj = c4_CollisionSet_CollisionSet(chartInstance, &c4_b_st, c4_b_iobj_0,
    c4_i_obj->MaxElements);
  c4_newObj->Size = c4_i_obj->Size;
  c4_d = c4_i_obj->Size;
  c4_i40 = (int32_T)c4_d;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i40,
    &c4_jc_emlrtRTEI, &c4_st);
  for (c4_b_i = 0; c4_b_i < c4_i40; c4_b_i++) {
    c4_c_i = (real_T)c4_b_i + 1.0;
    c4_b_st.site = &c4_pe_emlrtRSI;
    c4_i41 = c4_i_obj->CollisionGeometries->size[1] - 1;
    c4_i42 = (int32_T)c4_c_i - 1;
    c4_j_obj = c4_i_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b
      (c4_i42, 0, c4_i41, &c4_l_emlrtBCI, &c4_b_st)];
    c4_b_newObj = c4_j_obj;
    c4_i43 = c4_newObj->CollisionGeometries->size[1] - 1;
    c4_i44 = (int32_T)c4_c_i - 1;
    c4_newObj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(c4_i44, 0,
      c4_i43, &c4_m_emlrtBCI, &c4_st)] = c4_b_newObj;
  }

  c4_newbody->CollisionsInternal = c4_newObj;
  return c4_newbody;
}

static c4_rigidBody *c4_b_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj)
{
  static char_T c4_jname[9] = { 'l', 'i', 'n', 'k', '2', '_', 'j', 'n', 't' };

  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_bname[5] = { 'l', 'i', 'n', 'k', '2' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBody *c4_b_obj;
  c4_rigidBody *c4_c_obj;
  c4_rigidBody *c4_this;
  c4_rigidBodyJoint *c4_c_this;
  c4_rigidBodyJoint *c4_f_obj;
  c4_rigidBodyJoint *c4_g_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_b_default;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_treeInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_bodyInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_default;
  c4_robotics_manip_internal_RigidBody_1 *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_I[36];
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[9];
  char_T c4_bn_data[5];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_fc_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_obj = c4_c_obj;
  c4_b_st.site = &c4_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_st.site = &c4_hc_emlrtRSI;
  c4_b_st.site = &c4_gc_emlrtRSI;
  c4_d_obj = &c4_b_obj->_pobj1;
  c4_default = c4_d_obj;
  c4_c_st.site = &c4_b_emlrtRSI;
  c4_e_obj = c4_default;
  c4_default = c4_e_obj;
  c4_b_this = c4_default;
  c4_default = c4_b_this;
  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_bn_data[c4_i] = c4_bname[c4_i];
  }

  c4_i1 = c4_default->NameInternal->size[0] * c4_default->NameInternal->size[1];
  c4_default->NameInternal->size[0] = 1;
  c4_default->NameInternal->size[1] = 5;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_default->NameInternal,
    c4_i1, &c4_c_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 5; c4_i2++) {
    c4_default->NameInternal->data[c4_i2] = c4_bn_data[c4_i2];
  }

  c4_c_st.site = &c4_c_emlrtRSI;
  c4_f_obj = &c4_default->_pobj0;
  c4_g_obj = c4_f_obj;
  c4_g_obj->InTree = false;
  c4_c_this = c4_g_obj;
  c4_g_obj = c4_c_this;
  for (c4_i3 = 0; c4_i3 < 9; c4_i3++) {
    c4_jointname_data[c4_i3] = c4_jname[c4_i3];
  }

  c4_i4 = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size[1];
  c4_g_obj->NameInternal->size[0] = 1;
  c4_g_obj->NameInternal->size[1] = 9;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->NameInternal,
    c4_i4, &c4_e_emlrtRTEI);
  for (c4_i5 = 0; c4_i5 < 9; c4_i5++) {
    c4_g_obj->NameInternal->data[c4_i5] = c4_jointname_data[c4_i5];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i6 = 0; c4_i6 < 5; c4_i6++) {
    c4_jointtype_data[c4_i6] = c4_b_cv[c4_i6];
  }

  c4_i7 = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1];
  c4_g_obj->Type->size[0] = 1;
  c4_g_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->Type, c4_i7,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_loop_ub; c4_i8++) {
    c4_g_obj->Type->data[c4_i8] = c4_jointtype_data[c4_i8];
  }

  c4_emxInit_char_T(chartInstance, &c4_c_st, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i9 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_g_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_switch_expression,
    c4_i9, &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_b_loop_ub; c4_i10++) {
    c4_switch_expression->data[c4_i10] = c4_g_obj->Type->data[c4_i10];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_msubspace_data[c4_i12] = c4_dv[c4_i12];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_poslim_data[c4_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i15;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i18 = 0; c4_i18 < 3; c4_i18++) {
      c4_g_obj->JointAxisInternal[c4_i18] = c4_dv2[c4_i18];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i13 = 0; c4_i13 < 6; c4_i13++) {
      c4_msubspace_data[c4_i13] = c4_dv1[c4_i13];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_poslim_data[c4_i16] = -0.5 + (real_T)c4_i16;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i19 = 0; c4_i19 < 3; c4_i19++) {
      c4_g_obj->JointAxisInternal[c4_i19] = c4_dv2[c4_i19];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
      c4_msubspace_data[c4_i11] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_poslim_data[c4_i14] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 0.0;
    c4_g_obj->PositionNumber = 0.0;
    for (c4_i17 = 0; c4_i17 < 3; c4_i17++) {
      c4_g_obj->JointAxisInternal[c4_i17] = 0.0;
    }
    break;
  }

  c4_i20 = c4_g_obj->MotionSubspace->size[0] * c4_g_obj->MotionSubspace->size[1];
  c4_g_obj->MotionSubspace->size[0] = 6;
  c4_g_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_g_obj->MotionSubspace,
    c4_i20, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_c_loop_ub; c4_i21++) {
    c4_g_obj->MotionSubspace->data[c4_i21] = c4_msubspace_data[c4_i21];
  }

  c4_i22 = c4_g_obj->PositionLimitsInternal->size[0] *
    c4_g_obj->PositionLimitsInternal->size[1];
  c4_g_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_g_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st,
    c4_g_obj->PositionLimitsInternal, c4_i22, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_d_loop_ub; c4_i23++) {
    c4_g_obj->PositionLimitsInternal->data[c4_i23] = c4_poslim_data[c4_i23];
  }

  c4_i24 = c4_g_obj->HomePositionInternal->size[0];
  c4_g_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_c_st,
    c4_g_obj->HomePositionInternal, c4_i24, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i25 = 0; c4_i25 <= c4_e_loop_ub; c4_i25++) {
    c4_g_obj->HomePositionInternal->data[c4_i25] = c4_homepos_data[c4_i25];
  }

  c4_default->JointInternal = c4_g_obj;
  c4_default->Index = -1.0;
  c4_default->ParentIndex = -1.0;
  c4_default->MassInternal = 1.0;
  for (c4_i26 = 0; c4_i26 < 3; c4_i26++) {
    c4_default->CenterOfMassInternal[c4_i26] = 0.0;
  }

  for (c4_i27 = 0; c4_i27 < 9; c4_i27++) {
    c4_I[c4_i27] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i28 = 0; c4_i28 < 9; c4_i28++) {
    c4_default->InertiaInternal[c4_i28] = c4_I[c4_i28];
  }

  for (c4_i29 = 0; c4_i29 < 36; c4_i29++) {
    c4_b_I[c4_i29] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i30 = 0; c4_i30 < 36; c4_i30++) {
    c4_default->SpatialInertia[c4_i30] = c4_b_I[c4_i30];
  }

  c4_c_st.site = &c4_d_emlrtRSI;
  c4_CollisionSet_CollisionSet(chartInstance, &c4_c_st,
    &c4_default->CollisionsInternal, 0.0);
  c4_bodyInternal = c4_default;
  c4_st.site = &c4_jc_emlrtRSI;
  c4_b_st.site = &c4_ic_emlrtRSI;
  c4_b_default = c4_RigidBodyTree_RigidBodyTree(chartInstance, &c4_b_st,
    &c4_b_obj->_pobj0);
  c4_treeInternal = c4_b_default;
  c4_b_obj->BodyInternal = c4_bodyInternal;
  c4_b_obj->TreeInternal = c4_treeInternal;
  return c4_b_obj;
}

static void c4_trvec2tform(SFc4_inverse_testInstanceStruct *chartInstance,
  real_T c4_t[3], real_T c4_H[16])
{
  real_T c4_I[16];
  int32_T c4_b_jcol;
  int32_T c4_b_k;
  int32_T c4_c_k;
  int32_T c4_d_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_iacol;
  int32_T c4_ibmat;
  int32_T c4_jcol;
  int32_T c4_k;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 16; c4_i++) {
    c4_I[c4_i] = 0.0;
  }

  for (c4_k = 0; c4_k < 4; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + (c4_b_k << 2)] = 1.0;
  }

  for (c4_jcol = 0; c4_jcol < 4; c4_jcol++) {
    c4_b_jcol = c4_jcol;
    c4_iacol = (c4_b_jcol << 2) - 1;
    c4_ibmat = (c4_b_jcol << 2) - 1;
    for (c4_c_k = 0; c4_c_k < 4; c4_c_k++) {
      c4_d_k = c4_c_k + 1;
      c4_H[c4_ibmat + c4_d_k] = c4_I[c4_iacol + c4_d_k];
    }
  }

  for (c4_i1 = 0; c4_i1 < 3; c4_i1++) {
    c4_H[c4_i1 + 12] = c4_t[c4_i1];
  }
}

static void c4_rigidBodyJoint_setFixedTransform(SFc4_inverse_testInstanceStruct *
  chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_obj, real_T
  c4_input[16])
{
  static real_T c4_b_dv[4] = { 0.0, 0.0, 0.0, 1.0 };

  static char_T c4_b_cv6[61] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':',
    'r', 'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n',
    't', ':', 'L', 'a', 's', 't', 'R', 'o', 'w', 'O', 'f', 'H', 'o', 'm', 'o',
    'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r',
    'm', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c4_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c4_b_cv4[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c4_b_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'F', 'i', 'x', 'e', 'd', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', ':',
    'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c4_b_cv3[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e',
    't', 'F', 'i', 'x', 'e', 'd', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm',
    ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c4_b_cv2[5] = { 'i', 'n', 'p', 'u', 't' };

  static char_T c4_b_cv5[5] = { 'i', 'n', 'p', 'u', 't' };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  real_T c4_I[16];
  real_T c4_varargin_1[4];
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_k;
  real_T c4_x;
  real_T c4_x1;
  real_T c4_x2;
  int32_T c4_c_k;
  int32_T c4_e_k;
  int32_T c4_g_k;
  int32_T c4_h_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_e_b;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_f_p;
  boolean_T c4_p;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_st.site = &c4_qe_emlrtRSI;
  c4_b_st.site = &c4_xc_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 16)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_input[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muDoubleScalarIsNaN(c4_b_x);
    c4_b_p = !c4_b_b;
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_b_st, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_b_st.site = &c4_xc_emlrtRSI;
  c4_c_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 16)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_c_x = c4_input[(int32_T)c4_d_k - 1];
    c4_d_x = c4_c_x;
    c4_c_b = muDoubleScalarIsInf(c4_d_x);
    c4_b2 = !c4_c_b;
    c4_e_x = c4_c_x;
    c4_d_b = muDoubleScalarIsNaN(c4_e_x);
    c4_b3 = !c4_d_b;
    c4_e_b = (c4_b2 && c4_b3);
    if (c4_e_b) {
      c4_c_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_c_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_b_st, &c4_j_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }

  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 4; c4_i1++) {
    c4_varargin_1[c4_i1] = c4_input[c4_i + 3];
    c4_i += 4;
  }

  c4_d_p = false;
  c4_e_p = true;
  c4_e_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_e_k < 4)) {
    c4_f_k = (real_T)c4_e_k + 1.0;
    c4_x1 = c4_varargin_1[(int32_T)c4_f_k - 1];
    c4_x2 = c4_b_dv[(int32_T)c4_f_k - 1];
    c4_f_p = (c4_x1 == c4_x2);
    if (!c4_f_p) {
      c4_e_p = false;
      c4_exitg1 = true;
    } else {
      c4_e_k++;
    }
  }

  if (c4_e_p) {
    c4_d_p = true;
  }

  if (!c4_d_p) {
    c4_st.site = &c4_re_emlrtRSI;
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 61),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 61),
                  false);
    sf_mex_call(&c4_st, &c4_k_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_i_y)));
  }

  for (c4_i2 = 0; c4_i2 < 16; c4_i2++) {
    c4_obj->JointToParentTransform[c4_i2] = c4_input[c4_i2];
  }

  for (c4_i3 = 0; c4_i3 < 16; c4_i3++) {
    c4_I[c4_i3] = 0.0;
  }

  for (c4_g_k = 0; c4_g_k < 4; c4_g_k++) {
    c4_h_k = c4_g_k;
    c4_I[c4_h_k + (c4_h_k << 2)] = 1.0;
  }

  for (c4_i4 = 0; c4_i4 < 16; c4_i4++) {
    c4_obj->ChildToJointTransform[c4_i4] = c4_I[c4_i4];
  }
}

static void c4_b_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2)
{
  static char_T c4_b_cv[5] = { 'l', 'i', 'n', 'k', '1' };

  static char_T c4_b_cv1[5] = { 'l', 'i', 'n', 'k', '1' };

  static char_T c4_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv3[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv4[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv5[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv7[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv8[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv9[5] = { 'J', 'o', 'i', 'n', 't' };

  c4_emxArray_char_T *c4_bname;
  c4_rigidBodyJoint *c4_b_iobj_1;
  c4_rigidBodyJoint *c4_b_jnt;
  c4_rigidBodyJoint *c4_c_jnt;
  c4_rigidBodyJoint *c4_d_jnt;
  c4_rigidBodyJoint *c4_e_jnt;
  c4_rigidBodyJoint *c4_f_jnt;
  c4_rigidBodyJoint *c4_g_jnt;
  c4_rigidBodyJoint *c4_j_obj;
  c4_rigidBodyJoint *c4_jnt;
  c4_rigidBodyJoint *c4_l_obj;
  c4_robotics_manip_internal_CollisionSet *c4_b_iobj_0;
  c4_robotics_manip_internal_RigidBody *c4_b_iobj_2;
  c4_robotics_manip_internal_RigidBody *c4_body;
  c4_robotics_manip_internal_RigidBody *c4_g_obj;
  c4_robotics_manip_internal_RigidBody *c4_i_obj;
  c4_robotics_manip_internal_RigidBody *c4_m_obj;
  c4_robotics_manip_internal_RigidBody *c4_n_obj;
  c4_robotics_manip_internal_RigidBody *c4_o_obj;
  c4_robotics_manip_internal_RigidBody *c4_p_obj;
  c4_robotics_manip_internal_RigidBody *c4_parent;
  c4_robotics_manip_internal_RigidBody *c4_q_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_b_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_e_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_f_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_r_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_bodyin;
  c4_robotics_manip_internal_RigidBody_1 *c4_c_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_h_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_k_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_db_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_bid;
  real_T c4_bid2;
  real_T c4_c_i;
  real_T c4_d;
  real_T c4_index;
  real_T c4_pid;
  int32_T c4_b_body;
  int32_T c4_b_i;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_body;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_body;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_body;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_b_bool;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_exitg2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_bname, 2, &c4_xb_emlrtRTEI);
  c4_st.site = &c4_od_emlrtRSI;
  c4_b_obj = &c4_obj->TreeInternal;
  c4_b_bodyin = c4_bodyin->BodyInternal;
  c4_b_iobj_0 = c4_iobj_0;
  c4_b_iobj_1 = c4_iobj_1;
  c4_b_iobj_2 = c4_iobj_2;
  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_c_obj = c4_b_bodyin;
  c4_i = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i,
    &c4_vb_emlrtRTEI);
  c4_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size[1]
    - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_bname->data[c4_i1] = c4_c_obj->NameInternal->data[c4_i1];
  }

  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_bid = c4_RigidBodyTree_findBodyIndexByName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid > -1.0) {
    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_d_obj = c4_b_bodyin;
    c4_i2 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_d_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i2,
      &c4_vb_emlrtRTEI);
    c4_b_loop_ub = c4_d_obj->NameInternal->size[0] * c4_d_obj->
      NameInternal->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
      c4_bname->data[c4_i3] = c4_d_obj->NameInternal->data[c4_i3];
    }

    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_b_st.site = &c4_rd_emlrtRSI;
  c4_e_obj = c4_b_obj;
  c4_c_st.site = &c4_fe_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_pid = -1.0;
  c4_d_st.site = &c4_de_emlrtRSI;
  c4_g_obj = &c4_f_obj->Base;
  c4_i4 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_g_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i4,
    &c4_vb_emlrtRTEI);
  c4_c_loop_ub = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size
    [1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_bname->data[c4_i5] = c4_g_obj->NameInternal->data[c4_i5];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_bname->size[1];
  if (c4_remainingDimsA == 5) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 5) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_bname->data[c4_b_kstr] != c4_b_cv[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_pid = 0.0;
  } else {
    c4_d = c4_f_obj->NumBodies;
    c4_i6 = (int32_T)c4_d;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i6,
      &c4_hc_emlrtRTEI, &c4_c_st);
    c4_b_i = 0;
    c4_exitg2 = false;
    while ((!c4_exitg2) && (c4_b_i <= c4_i6 - 1)) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_d_st.site = &c4_ee_emlrtRSI;
      c4_i7 = (int32_T)c4_c_i - 1;
      c4_i_obj = c4_f_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i7, 0, 2,
        &c4_h_emlrtBCI, &c4_d_st)];
      c4_i8 = c4_bname->size[0] * c4_bname->size[1];
      c4_bname->size[0] = 1;
      c4_bname->size[1] = c4_i_obj->NameInternal->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i8,
        &c4_vb_emlrtRTEI);
      c4_d_loop_ub = c4_i_obj->NameInternal->size[0] * c4_i_obj->
        NameInternal->size[1] - 1;
      for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
        c4_bname->data[c4_i10] = c4_i_obj->NameInternal->data[c4_i10];
      }

      c4_b_bool = false;
      c4_b_remainingDimsA = c4_bname->size[1];
      if (c4_b_remainingDimsA == 5) {
        c4_c_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_c_kstr - 1 < 5) {
            c4_d_kstr = c4_c_kstr - 1;
            if (c4_bname->data[c4_d_kstr] != c4_b_cv[c4_d_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_c_kstr++;
            }
          } else {
            c4_b_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_b_bool) {
        c4_pid = c4_c_i;
        c4_exitg2 = true;
      } else {
        c4_b_i++;
      }
    }
  }

  if (c4_pid == -1.0) {
    c4_c_st.site = &c4_ge_emlrtRSI;
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_h_y)));
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_h_obj = c4_b_bodyin;
  if (c4_h_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14, c4_j_y)));
  }

  c4_jnt = c4_h_obj->JointInternal;
  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_j_obj = c4_jnt;
  c4_i9 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_j_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i9,
    &c4_ib_emlrtRTEI);
  c4_e_loop_ub = c4_j_obj->NameInternal->size[0] * c4_j_obj->NameInternal->size
    [1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_bname->data[c4_i11] = c4_j_obj->NameInternal->data[c4_i11];
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_bid2 = c4_RigidBodyTree_findBodyIndexByJointName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid2 > 0.0) {
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_k_obj = c4_b_bodyin;
    if (c4_k_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_m_y = NULL;
      sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_l_y, 14, c4_m_y)));
    }

    c4_b_jnt = c4_k_obj->JointInternal;
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_l_obj = c4_b_jnt;
    c4_i14 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_l_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i14,
      &c4_ib_emlrtRTEI);
    c4_f_loop_ub = c4_l_obj->NameInternal->size[0] * c4_l_obj->
      NameInternal->size[1] - 1;
    for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
      c4_bname->data[c4_i16] = c4_l_obj->NameInternal->data[c4_i16];
    }

    c4_b_st.site = &c4_td_emlrtRSI;
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_o_y, 14, c4_p_y)));
  }

  c4_index = c4_b_obj->NumBodies + 1.0;
  c4_b_st.site = &c4_be_emlrtRSI;
  c4_body = c4_RigidBody_copy(chartInstance, &c4_b_st, c4_b_bodyin, c4_b_iobj_0,
    c4_b_iobj_1, c4_b_iobj_2);
  for (c4_i12 = 0; c4_i12 < 3; c4_i12++) {
    c4_body->ChildrenIndices[c4_i12] = 0.0;
  }

  c4_i13 = (int32_T)emlrtIntegerCheckR2012b(c4_index, &c4_d_emlrtDCI, &c4_st) -
    1;
  c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i13, 0, 2, &c4_g_emlrtBCI,
    &c4_st)] = c4_body;
  c4_body->Index = c4_index;
  c4_body->ParentIndex = c4_pid;
  if (c4_pid > 0.0) {
    c4_i15 = (int32_T)c4_pid - 1;
    c4_parent = c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i15, 0, 2,
      &c4_i_emlrtBCI, &c4_st)];
  } else {
    c4_parent = &c4_b_obj->Base;
  }

  c4_i17 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_i_emlrtDCI,
    &c4_st);
  c4_parent->ChildrenIndices[emlrtDynamicBoundsCheckR2012b(c4_i17, 1, 3,
    &c4_j_emlrtBCI, &c4_st) - 1] = 1.0;
  c4_body->JointInternal->InTree = true;
  c4_b_obj->NumBodies++;
  c4_b_st.site = &c4_ud_emlrtRSI;
  c4_m_obj = c4_body;
  if (c4_m_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_q_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_r_y, 14, c4_s_y)));
  }

  c4_c_jnt = c4_m_obj->JointInternal;
  c4_i18 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_jnt->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_bname, c4_i18,
    &c4_wb_emlrtRTEI);
  c4_g_loop_ub = c4_c_jnt->Type->size[0] * c4_c_jnt->Type->size[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
    c4_bname->data[c4_i19] = c4_c_jnt->Type->data[c4_i19];
  }

  c4_c_bool = false;
  c4_c_remainingDimsA = c4_bname->size[1];
  if (c4_c_remainingDimsA == 5) {
    c4_e_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_e_kstr - 1 < 5) {
        c4_f_kstr = c4_e_kstr - 1;
        if (c4_bname->data[c4_f_kstr] != c4_b_cv5[c4_f_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_e_kstr++;
        }
      } else {
        c4_c_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  c4_emxFree_char_T(chartInstance, &c4_bname);
  if (!c4_c_bool) {
    c4_b_obj->NumNonFixedBodies++;
    c4_b_st.site = &c4_vd_emlrtRSI;
    c4_n_obj = c4_body;
    if (c4_n_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_t_y = NULL;
      sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_u_y = NULL;
      sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_v_y = NULL;
      sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_t_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_u_y, 14, c4_v_y)));
    }

    c4_d_jnt = c4_n_obj->JointInternal;
    c4_i24 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_e_emlrtDCI,
      &c4_st);
    c4_d_body = emlrtDynamicBoundsCheckR2012b(c4_i24, 1, 3, &c4_c_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->PositionDoFMap[c4_d_body] = c4_b_obj->PositionNumber + 1.0;
    c4_b_obj->PositionDoFMap[3 + c4_d_body] = c4_b_obj->PositionNumber +
      c4_d_jnt->PositionNumber;
    c4_b_st.site = &c4_wd_emlrtRSI;
    c4_p_obj = c4_body;
    if (c4_p_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_x_y = NULL;
      sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_ab_y = NULL;
      sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
        51), false);
      c4_cb_y = NULL;
      sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_x_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_ab_y, 14, c4_cb_y)));
    }

    c4_f_jnt = c4_p_obj->JointInternal;
    c4_i25 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_f_emlrtDCI,
      &c4_st);
    c4_e_body = emlrtDynamicBoundsCheckR2012b(c4_i25, 1, 3, &c4_d_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->VelocityDoFMap[c4_e_body] = c4_b_obj->VelocityNumber + 1.0;
    c4_b_obj->VelocityDoFMap[3 + c4_e_body] = c4_b_obj->VelocityNumber +
      c4_f_jnt->VelocityNumber;
  } else {
    c4_i20 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_g_emlrtDCI,
      &c4_st);
    c4_b_body = emlrtDynamicBoundsCheckR2012b(c4_i20, 1, 3, &c4_e_emlrtBCI,
      &c4_st) - 1;
    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_b_obj->PositionDoFMap[c4_b_body + 3 * c4_i21] = 0.0 - (real_T)c4_i21;
    }

    c4_i22 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_h_emlrtDCI,
      &c4_st);
    c4_c_body = emlrtDynamicBoundsCheckR2012b(c4_i22, 1, 3, &c4_f_emlrtBCI,
      &c4_st) - 1;
    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_b_obj->VelocityDoFMap[c4_c_body + 3 * c4_i23] = 0.0 - (real_T)c4_i23;
    }
  }

  c4_b_st.site = &c4_xd_emlrtRSI;
  c4_o_obj = c4_body;
  if (c4_o_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_y_y = NULL;
    sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_bb_y = NULL;
    sf_mex_assign(&c4_bb_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_w_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_y_y, 14, c4_bb_y)));
  }

  c4_e_jnt = c4_o_obj->JointInternal;
  c4_b_obj->PositionNumber += c4_e_jnt->PositionNumber;
  c4_b_st.site = &c4_yd_emlrtRSI;
  c4_q_obj = c4_body;
  if (c4_q_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_db_y = NULL;
    sf_mex_assign(&c4_db_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_eb_y = NULL;
    sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_fb_y = NULL;
    sf_mex_assign(&c4_fb_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_db_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_eb_y, 14, c4_fb_y)));
  }

  c4_g_jnt = c4_q_obj->JointInternal;
  c4_b_obj->VelocityNumber += c4_g_jnt->VelocityNumber;
  c4_b_st.site = &c4_ae_emlrtRSI;
  c4_r_obj = c4_b_obj;
  c4_r_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static c4_rigidBody *c4_c_rigidBody_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_obj)
{
  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_jname[8] = { 't', 'o', 'o', 'l', '_', 'j', 'n', 't' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_bname[4] = { 't', 'o', 'o', 'l' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBody *c4_b_obj;
  c4_rigidBody *c4_c_obj;
  c4_rigidBody *c4_this;
  c4_rigidBodyJoint *c4_c_this;
  c4_rigidBodyJoint *c4_f_obj;
  c4_rigidBodyJoint *c4_g_obj;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_b_default;
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_treeInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_this;
  c4_robotics_manip_internal_RigidBody_1 *c4_bodyInternal;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_default;
  c4_robotics_manip_internal_RigidBody_1 *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_b_I[36];
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_I[9];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_k;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_k;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_k;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[8];
  char_T c4_bn_data[4];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_fc_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_obj = c4_c_obj;
  c4_b_st.site = &c4_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_st.site = &c4_hc_emlrtRSI;
  c4_b_st.site = &c4_gc_emlrtRSI;
  c4_d_obj = &c4_b_obj->_pobj1;
  c4_default = c4_d_obj;
  c4_c_st.site = &c4_b_emlrtRSI;
  c4_e_obj = c4_default;
  c4_default = c4_e_obj;
  c4_b_this = c4_default;
  c4_default = c4_b_this;
  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_bn_data[c4_i] = c4_bname[c4_i];
  }

  c4_i1 = c4_default->NameInternal->size[0] * c4_default->NameInternal->size[1];
  c4_default->NameInternal->size[0] = 1;
  c4_default->NameInternal->size[1] = 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_default->NameInternal,
    c4_i1, &c4_c_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
    c4_default->NameInternal->data[c4_i2] = c4_bn_data[c4_i2];
  }

  c4_c_st.site = &c4_c_emlrtRSI;
  c4_f_obj = &c4_default->_pobj0;
  c4_g_obj = c4_f_obj;
  c4_g_obj->InTree = false;
  c4_c_this = c4_g_obj;
  c4_g_obj = c4_c_this;
  for (c4_i3 = 0; c4_i3 < 8; c4_i3++) {
    c4_jointname_data[c4_i3] = c4_jname[c4_i3];
  }

  c4_i4 = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size[1];
  c4_g_obj->NameInternal->size[0] = 1;
  c4_g_obj->NameInternal->size[1] = 8;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->NameInternal,
    c4_i4, &c4_e_emlrtRTEI);
  for (c4_i5 = 0; c4_i5 < 8; c4_i5++) {
    c4_g_obj->NameInternal->data[c4_i5] = c4_jointname_data[c4_i5];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i6 = 0; c4_i6 < 5; c4_i6++) {
    c4_jointtype_data[c4_i6] = c4_b_cv[c4_i6];
  }

  c4_i7 = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1];
  c4_g_obj->Type->size[0] = 1;
  c4_g_obj->Type->size[1] = c4_jointtype_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_g_obj->Type, c4_i7,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i8 = 0; c4_i8 <= c4_loop_ub; c4_i8++) {
    c4_g_obj->Type->data[c4_i8] = c4_jointtype_data[c4_i8];
  }

  c4_emxInit_char_T(chartInstance, &c4_c_st, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i9 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_g_obj->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_switch_expression,
    c4_i9, &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_g_obj->Type->size[0] * c4_g_obj->Type->size[1] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_b_loop_ub; c4_i10++) {
    c4_switch_expression->data[c4_i10] = c4_g_obj->Type->data[c4_i10];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
      c4_msubspace_data[c4_i12] = c4_dv[c4_i12];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_poslim_data[c4_i15] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i15;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i18 = 0; c4_i18 < 3; c4_i18++) {
      c4_g_obj->JointAxisInternal[c4_i18] = c4_dv2[c4_i18];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i13 = 0; c4_i13 < 6; c4_i13++) {
      c4_msubspace_data[c4_i13] = c4_dv1[c4_i13];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_poslim_data[c4_i16] = -0.5 + (real_T)c4_i16;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 1.0;
    c4_g_obj->PositionNumber = 1.0;
    for (c4_i19 = 0; c4_i19 < 3; c4_i19++) {
      c4_g_obj->JointAxisInternal[c4_i19] = c4_dv2[c4_i19];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
      c4_msubspace_data[c4_i11] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_poslim_data[c4_i14] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_g_obj->VelocityNumber = 0.0;
    c4_g_obj->PositionNumber = 0.0;
    for (c4_i17 = 0; c4_i17 < 3; c4_i17++) {
      c4_g_obj->JointAxisInternal[c4_i17] = 0.0;
    }
    break;
  }

  c4_i20 = c4_g_obj->MotionSubspace->size[0] * c4_g_obj->MotionSubspace->size[1];
  c4_g_obj->MotionSubspace->size[0] = 6;
  c4_g_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st, c4_g_obj->MotionSubspace,
    c4_i20, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_c_loop_ub; c4_i21++) {
    c4_g_obj->MotionSubspace->data[c4_i21] = c4_msubspace_data[c4_i21];
  }

  c4_i22 = c4_g_obj->PositionLimitsInternal->size[0] *
    c4_g_obj->PositionLimitsInternal->size[1];
  c4_g_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_g_obj->PositionLimitsInternal->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_c_st,
    c4_g_obj->PositionLimitsInternal, c4_i22, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_d_loop_ub; c4_i23++) {
    c4_g_obj->PositionLimitsInternal->data[c4_i23] = c4_poslim_data[c4_i23];
  }

  c4_i24 = c4_g_obj->HomePositionInternal->size[0];
  c4_g_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_c_st,
    c4_g_obj->HomePositionInternal, c4_i24, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i25 = 0; c4_i25 <= c4_e_loop_ub; c4_i25++) {
    c4_g_obj->HomePositionInternal->data[c4_i25] = c4_homepos_data[c4_i25];
  }

  c4_default->JointInternal = c4_g_obj;
  c4_default->Index = -1.0;
  c4_default->ParentIndex = -1.0;
  c4_default->MassInternal = 1.0;
  for (c4_i26 = 0; c4_i26 < 3; c4_i26++) {
    c4_default->CenterOfMassInternal[c4_i26] = 0.0;
  }

  for (c4_i27 = 0; c4_i27 < 9; c4_i27++) {
    c4_I[c4_i27] = 0.0;
  }

  for (c4_k = 0; c4_k < 3; c4_k++) {
    c4_b_k = c4_k;
    c4_I[c4_b_k + 3 * c4_b_k] = 1.0;
  }

  for (c4_i28 = 0; c4_i28 < 9; c4_i28++) {
    c4_default->InertiaInternal[c4_i28] = c4_I[c4_i28];
  }

  for (c4_i29 = 0; c4_i29 < 36; c4_i29++) {
    c4_b_I[c4_i29] = 0.0;
  }

  for (c4_c_k = 0; c4_c_k < 6; c4_c_k++) {
    c4_d_k = c4_c_k;
    c4_b_I[c4_d_k + 6 * c4_d_k] = 1.0;
  }

  for (c4_i30 = 0; c4_i30 < 36; c4_i30++) {
    c4_default->SpatialInertia[c4_i30] = c4_b_I[c4_i30];
  }

  c4_c_st.site = &c4_d_emlrtRSI;
  c4_CollisionSet_CollisionSet(chartInstance, &c4_c_st,
    &c4_default->CollisionsInternal, 0.0);
  c4_bodyInternal = c4_default;
  c4_st.site = &c4_jc_emlrtRSI;
  c4_b_st.site = &c4_ic_emlrtRSI;
  c4_b_default = c4_RigidBodyTree_RigidBodyTree(chartInstance, &c4_b_st,
    &c4_b_obj->_pobj0);
  c4_treeInternal = c4_b_default;
  c4_b_obj->BodyInternal = c4_bodyInternal;
  c4_b_obj->TreeInternal = c4_treeInternal;
  return c4_b_obj;
}

static c4_rigidBodyJoint *c4_c_rigidBodyJoint_rigidBodyJoint
  (SFc4_inverse_testInstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_rigidBodyJoint *c4_obj)
{
  static char_T c4_b_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c4_b_cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_jname[4] = { 'f', 'i', 'x', '1' };

  c4_emxArray_char_T *c4_switch_expression;
  c4_rigidBodyJoint *c4_b_obj;
  c4_rigidBodyJoint *c4_this;
  emlrtStack c4_st;
  real_T c4_msubspace_data[36];
  real_T c4_poslim_data[12];
  real_T c4_homepos_data[6];
  real_T c4_index;
  int32_T c4_jointtype_size[2];
  int32_T c4_msubspace_size[2];
  int32_T c4_poslim_size[2];
  int32_T c4_homepos_size[1];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_jointtype_data[20];
  char_T c4_jointname_data[4];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_obj = c4_obj;
  c4_b_obj->InTree = false;
  c4_st.site = &c4_gb_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_jointname_data[c4_i] = c4_jname[c4_i];
  }

  c4_i1 = c4_b_obj->NameInternal->size[0] * c4_b_obj->NameInternal->size[1];
  c4_b_obj->NameInternal->size[0] = 1;
  c4_b_obj->NameInternal->size[1] = 4;
  c4_st.site = &c4_ue_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->NameInternal,
    c4_i1, &c4_e_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
    c4_b_obj->NameInternal->data[c4_i2] = c4_jointname_data[c4_i2];
  }

  c4_jointtype_size[0] = 1;
  c4_jointtype_size[1] = 5;
  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    c4_jointtype_data[c4_i3] = c4_b_cv[c4_i3];
  }

  c4_i4 = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1];
  c4_b_obj->Type->size[0] = 1;
  c4_b_obj->Type->size[1] = c4_jointtype_size[1];
  c4_st.site = &c4_te_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_obj->Type, c4_i4,
    &c4_g_emlrtRTEI);
  c4_loop_ub = c4_jointtype_size[0] * c4_jointtype_size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
    c4_b_obj->Type->data[c4_i5] = c4_jointtype_data[c4_i5];
  }

  c4_emxInit_char_T(chartInstance, c4_sp, &c4_switch_expression, 2,
                    &c4_h_emlrtRTEI);
  c4_i6 = c4_switch_expression->size[0] * c4_switch_expression->size[1];
  c4_switch_expression->size[0] = 1;
  c4_switch_expression->size[1] = c4_b_obj->Type->size[1];
  c4_st.site = &c4_se_emlrtRSI;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_switch_expression, c4_i6,
    &c4_h_emlrtRTEI);
  c4_b_loop_ub = c4_b_obj->Type->size[0] * c4_b_obj->Type->size[1] - 1;
  for (c4_i7 = 0; c4_i7 <= c4_b_loop_ub; c4_i7++) {
    c4_switch_expression->data[c4_i7] = c4_b_obj->Type->data[c4_i7];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_switch_expression->size[1];
  if (c4_remainingDimsA == 8) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 8) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_switch_expression->data[c4_b_kstr] != c4_b_cv1[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_b_remainingDimsA = c4_switch_expression->size[1];
    if (c4_b_remainingDimsA == 9) {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 9) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_switch_expression->data[c4_d_kstr] != c4_cv[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_index = -1.0;
    }
  }

  c4_emxFree_char_T(chartInstance, &c4_switch_expression);
  switch ((int32_T)c4_index) {
   case 0:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i9 = 0; c4_i9 < 6; c4_i9++) {
      c4_msubspace_data[c4_i9] = c4_dv[c4_i9];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_poslim_data[c4_i12] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c4_i12;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i15 = 0; c4_i15 < 3; c4_i15++) {
      c4_b_obj->JointAxisInternal[c4_i15] = c4_dv2[c4_i15];
    }
    break;

   case 1:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i10 = 0; c4_i10 < 6; c4_i10++) {
      c4_msubspace_data[c4_i10] = c4_dv1[c4_i10];
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_poslim_data[c4_i13] = -0.5 + (real_T)c4_i13;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 1.0;
    c4_b_obj->PositionNumber = 1.0;
    for (c4_i16 = 0; c4_i16 < 3; c4_i16++) {
      c4_b_obj->JointAxisInternal[c4_i16] = c4_dv2[c4_i16];
    }
    break;

   default:
    c4_msubspace_size[0] = 6;
    c4_msubspace_size[1] = 1;
    for (c4_i8 = 0; c4_i8 < 6; c4_i8++) {
      c4_msubspace_data[c4_i8] = 0.0;
    }

    c4_poslim_size[0] = 1;
    c4_poslim_size[1] = 2;
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_poslim_data[c4_i11] = 0.0;
    }

    c4_homepos_size[0] = 1;
    c4_homepos_data[0] = 0.0;
    c4_b_obj->VelocityNumber = 0.0;
    c4_b_obj->PositionNumber = 0.0;
    for (c4_i14 = 0; c4_i14 < 3; c4_i14++) {
      c4_b_obj->JointAxisInternal[c4_i14] = 0.0;
    }
    break;
  }

  c4_i17 = c4_b_obj->MotionSubspace->size[0] * c4_b_obj->MotionSubspace->size[1];
  c4_b_obj->MotionSubspace->size[0] = 6;
  c4_b_obj->MotionSubspace->size[1] = c4_msubspace_size[1];
  c4_st.site = &c4_xe_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_obj->MotionSubspace,
    c4_i17, &c4_r_emlrtRTEI);
  c4_c_loop_ub = c4_msubspace_size[0] * c4_msubspace_size[1] - 1;
  for (c4_i18 = 0; c4_i18 <= c4_c_loop_ub; c4_i18++) {
    c4_b_obj->MotionSubspace->data[c4_i18] = c4_msubspace_data[c4_i18];
  }

  c4_i19 = c4_b_obj->PositionLimitsInternal->size[0] *
    c4_b_obj->PositionLimitsInternal->size[1];
  c4_b_obj->PositionLimitsInternal->size[0] = c4_poslim_size[0];
  c4_b_obj->PositionLimitsInternal->size[1] = 2;
  c4_st.site = &c4_we_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
    c4_b_obj->PositionLimitsInternal, c4_i19, &c4_s_emlrtRTEI);
  c4_d_loop_ub = c4_poslim_size[0] * c4_poslim_size[1] - 1;
  for (c4_i20 = 0; c4_i20 <= c4_d_loop_ub; c4_i20++) {
    c4_b_obj->PositionLimitsInternal->data[c4_i20] = c4_poslim_data[c4_i20];
  }

  c4_i21 = c4_b_obj->HomePositionInternal->size[0];
  c4_b_obj->HomePositionInternal->size[0] = c4_homepos_size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, c4_sp,
    c4_b_obj->HomePositionInternal, c4_i21, &c4_t_emlrtRTEI);
  c4_e_loop_ub = c4_homepos_size[0] - 1;
  for (c4_i22 = 0; c4_i22 <= c4_e_loop_ub; c4_i22++) {
    c4_b_obj->HomePositionInternal->data[c4_i22] = c4_homepos_data[c4_i22];
  }

  return c4_b_obj;
}

static void c4_c_rigidBodyTree_addBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_obj,
  c4_rigidBody *c4_bodyin, c4_robotics_manip_internal_CollisionSet *c4_iobj_0,
  c4_rigidBodyJoint *c4_iobj_1, c4_robotics_manip_internal_RigidBody *c4_iobj_2)
{
  static char_T c4_b_cv[5] = { 'l', 'i', 'n', 'k', '2' };

  static char_T c4_b_cv1[5] = { 'l', 'i', 'n', 'k', '2' };

  static char_T c4_b_cv2[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv3[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv4[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv5[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c4_b_cv6[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv7[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv8[5] = { 'J', 'o', 'i', 'n', 't' };

  static char_T c4_b_cv9[5] = { 'J', 'o', 'i', 'n', 't' };

  c4_emxArray_char_T *c4_bname;
  c4_rigidBodyJoint *c4_b_iobj_1;
  c4_rigidBodyJoint *c4_b_jnt;
  c4_rigidBodyJoint *c4_c_jnt;
  c4_rigidBodyJoint *c4_d_jnt;
  c4_rigidBodyJoint *c4_e_jnt;
  c4_rigidBodyJoint *c4_f_jnt;
  c4_rigidBodyJoint *c4_g_jnt;
  c4_rigidBodyJoint *c4_j_obj;
  c4_rigidBodyJoint *c4_jnt;
  c4_rigidBodyJoint *c4_l_obj;
  c4_robotics_manip_internal_CollisionSet *c4_b_iobj_0;
  c4_robotics_manip_internal_RigidBody *c4_b_iobj_2;
  c4_robotics_manip_internal_RigidBody *c4_body;
  c4_robotics_manip_internal_RigidBody *c4_g_obj;
  c4_robotics_manip_internal_RigidBody *c4_i_obj;
  c4_robotics_manip_internal_RigidBody *c4_m_obj;
  c4_robotics_manip_internal_RigidBody *c4_n_obj;
  c4_robotics_manip_internal_RigidBody *c4_o_obj;
  c4_robotics_manip_internal_RigidBody *c4_p_obj;
  c4_robotics_manip_internal_RigidBody *c4_parent;
  c4_robotics_manip_internal_RigidBody *c4_q_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_b_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_e_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_f_obj;
  c4_robotics_manip_internal_RigidBodyTree *c4_r_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_b_bodyin;
  c4_robotics_manip_internal_RigidBody_1 *c4_c_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_d_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_h_obj;
  c4_robotics_manip_internal_RigidBody_1 *c4_k_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_db_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_bid;
  real_T c4_bid2;
  real_T c4_c_i;
  real_T c4_d;
  real_T c4_index;
  real_T c4_pid;
  int32_T c4_b_body;
  int32_T c4_b_i;
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_body;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_body;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_e_body;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_b_bool;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_exitg2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_bname, 2, &c4_xb_emlrtRTEI);
  c4_st.site = &c4_od_emlrtRSI;
  c4_b_obj = &c4_obj->TreeInternal;
  c4_b_bodyin = c4_bodyin->BodyInternal;
  c4_b_iobj_0 = c4_iobj_0;
  c4_b_iobj_1 = c4_iobj_1;
  c4_b_iobj_2 = c4_iobj_2;
  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_c_obj = c4_b_bodyin;
  c4_i = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i,
    &c4_vb_emlrtRTEI);
  c4_loop_ub = c4_c_obj->NameInternal->size[0] * c4_c_obj->NameInternal->size[1]
    - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_bname->data[c4_i1] = c4_c_obj->NameInternal->data[c4_i1];
  }

  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_bid = c4_RigidBodyTree_findBodyIndexByName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid > -1.0) {
    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_d_obj = c4_b_bodyin;
    c4_i2 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_d_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i2,
      &c4_vb_emlrtRTEI);
    c4_b_loop_ub = c4_d_obj->NameInternal->size[0] * c4_d_obj->
      NameInternal->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
      c4_bname->data[c4_i3] = c4_d_obj->NameInternal->data[c4_i3];
    }

    c4_b_st.site = &c4_qd_emlrtRSI;
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_b_st.site = &c4_rd_emlrtRSI;
  c4_e_obj = c4_b_obj;
  c4_c_st.site = &c4_fe_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_pid = -1.0;
  c4_d_st.site = &c4_de_emlrtRSI;
  c4_g_obj = &c4_f_obj->Base;
  c4_i4 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_g_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i4,
    &c4_vb_emlrtRTEI);
  c4_c_loop_ub = c4_g_obj->NameInternal->size[0] * c4_g_obj->NameInternal->size
    [1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
    c4_bname->data[c4_i5] = c4_g_obj->NameInternal->data[c4_i5];
  }

  c4_bool = false;
  c4_remainingDimsA = c4_bname->size[1];
  if (c4_remainingDimsA == 5) {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 5) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_bname->data[c4_b_kstr] != c4_b_cv[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_pid = 0.0;
  } else {
    c4_d = c4_f_obj->NumBodies;
    c4_i6 = (int32_T)c4_d;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_i6,
      &c4_hc_emlrtRTEI, &c4_c_st);
    c4_b_i = 0;
    c4_exitg2 = false;
    while ((!c4_exitg2) && (c4_b_i <= c4_i6 - 1)) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      c4_d_st.site = &c4_ee_emlrtRSI;
      c4_i7 = (int32_T)c4_c_i - 1;
      c4_i_obj = c4_f_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i7, 0, 2,
        &c4_h_emlrtBCI, &c4_d_st)];
      c4_i8 = c4_bname->size[0] * c4_bname->size[1];
      c4_bname->size[0] = 1;
      c4_bname->size[1] = c4_i_obj->NameInternal->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_bname, c4_i8,
        &c4_vb_emlrtRTEI);
      c4_d_loop_ub = c4_i_obj->NameInternal->size[0] * c4_i_obj->
        NameInternal->size[1] - 1;
      for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
        c4_bname->data[c4_i10] = c4_i_obj->NameInternal->data[c4_i10];
      }

      c4_b_bool = false;
      c4_b_remainingDimsA = c4_bname->size[1];
      if (c4_b_remainingDimsA == 5) {
        c4_c_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_c_kstr - 1 < 5) {
            c4_d_kstr = c4_c_kstr - 1;
            if (c4_bname->data[c4_d_kstr] != c4_b_cv[c4_d_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_c_kstr++;
            }
          } else {
            c4_b_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_b_bool) {
        c4_pid = c4_c_i;
        c4_exitg2 = true;
      } else {
        c4_b_i++;
      }
    }
  }

  if (c4_pid == -1.0) {
    c4_c_st.site = &c4_ge_emlrtRSI;
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_h_y)));
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_h_obj = c4_b_bodyin;
  if (c4_h_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14, c4_j_y)));
  }

  c4_jnt = c4_h_obj->JointInternal;
  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_j_obj = c4_jnt;
  c4_i9 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_j_obj->NameInternal->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i9,
    &c4_ib_emlrtRTEI);
  c4_e_loop_ub = c4_j_obj->NameInternal->size[0] * c4_j_obj->NameInternal->size
    [1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_bname->data[c4_i11] = c4_j_obj->NameInternal->data[c4_i11];
  }

  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_bid2 = c4_RigidBodyTree_findBodyIndexByJointName(chartInstance, &c4_b_st,
    c4_b_obj, c4_bname);
  if (c4_bid2 > 0.0) {
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_k_obj = c4_b_bodyin;
    if (c4_k_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_m_y = NULL;
      sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_l_y, 14, c4_m_y)));
    }

    c4_b_jnt = c4_k_obj->JointInternal;
    c4_b_st.site = &c4_td_emlrtRSI;
    c4_l_obj = c4_b_jnt;
    c4_i14 = c4_bname->size[0] * c4_bname->size[1];
    c4_bname->size[0] = 1;
    c4_bname->size[1] = c4_l_obj->NameInternal->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_bname, c4_i14,
      &c4_ib_emlrtRTEI);
    c4_f_loop_ub = c4_l_obj->NameInternal->size[0] * c4_l_obj->
      NameInternal->size[1] - 1;
    for (c4_i16 = 0; c4_i16 <= c4_f_loop_ub; c4_i16++) {
      c4_bname->data[c4_i16] = c4_l_obj->NameInternal->data[c4_i16];
    }

    c4_b_st.site = &c4_td_emlrtRSI;
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_bname->data, 10, 0U, 1U, 0U, 2,
      c4_bname->size[0], c4_bname->size[1]), false);
    sf_mex_call(&c4_b_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_o_y, 14, c4_p_y)));
  }

  c4_index = c4_b_obj->NumBodies + 1.0;
  c4_b_st.site = &c4_be_emlrtRSI;
  c4_body = c4_RigidBody_copy(chartInstance, &c4_b_st, c4_b_bodyin, c4_b_iobj_0,
    c4_b_iobj_1, c4_b_iobj_2);
  for (c4_i12 = 0; c4_i12 < 3; c4_i12++) {
    c4_body->ChildrenIndices[c4_i12] = 0.0;
  }

  c4_i13 = (int32_T)emlrtIntegerCheckR2012b(c4_index, &c4_d_emlrtDCI, &c4_st) -
    1;
  c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i13, 0, 2, &c4_g_emlrtBCI,
    &c4_st)] = c4_body;
  c4_body->Index = c4_index;
  c4_body->ParentIndex = c4_pid;
  if (c4_pid > 0.0) {
    c4_i15 = (int32_T)c4_pid - 1;
    c4_parent = c4_b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(c4_i15, 0, 2,
      &c4_i_emlrtBCI, &c4_st)];
  } else {
    c4_parent = &c4_b_obj->Base;
  }

  c4_i17 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_i_emlrtDCI,
    &c4_st);
  c4_parent->ChildrenIndices[emlrtDynamicBoundsCheckR2012b(c4_i17, 1, 3,
    &c4_j_emlrtBCI, &c4_st) - 1] = 1.0;
  c4_body->JointInternal->InTree = true;
  c4_b_obj->NumBodies++;
  c4_b_st.site = &c4_ud_emlrtRSI;
  c4_m_obj = c4_body;
  if (c4_m_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_q_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_r_y, 14, c4_s_y)));
  }

  c4_c_jnt = c4_m_obj->JointInternal;
  c4_i18 = c4_bname->size[0] * c4_bname->size[1];
  c4_bname->size[0] = 1;
  c4_bname->size[1] = c4_c_jnt->Type->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_bname, c4_i18,
    &c4_wb_emlrtRTEI);
  c4_g_loop_ub = c4_c_jnt->Type->size[0] * c4_c_jnt->Type->size[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
    c4_bname->data[c4_i19] = c4_c_jnt->Type->data[c4_i19];
  }

  c4_c_bool = false;
  c4_c_remainingDimsA = c4_bname->size[1];
  if (c4_c_remainingDimsA == 5) {
    c4_e_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_e_kstr - 1 < 5) {
        c4_f_kstr = c4_e_kstr - 1;
        if (c4_bname->data[c4_f_kstr] != c4_b_cv5[c4_f_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_e_kstr++;
        }
      } else {
        c4_c_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  c4_emxFree_char_T(chartInstance, &c4_bname);
  if (!c4_c_bool) {
    c4_b_obj->NumNonFixedBodies++;
    c4_b_st.site = &c4_vd_emlrtRSI;
    c4_n_obj = c4_body;
    if (c4_n_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_t_y = NULL;
      sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_u_y = NULL;
      sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_v_y = NULL;
      sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_t_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_u_y, 14, c4_v_y)));
    }

    c4_d_jnt = c4_n_obj->JointInternal;
    c4_i24 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_e_emlrtDCI,
      &c4_st);
    c4_d_body = emlrtDynamicBoundsCheckR2012b(c4_i24, 1, 3, &c4_c_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->PositionDoFMap[c4_d_body] = c4_b_obj->PositionNumber + 1.0;
    c4_b_obj->PositionDoFMap[3 + c4_d_body] = c4_b_obj->PositionNumber +
      c4_d_jnt->PositionNumber;
    c4_b_st.site = &c4_wd_emlrtRSI;
    c4_p_obj = c4_body;
    if (c4_p_obj->Index == 0.0) {
      c4_c_st.site = &c4_he_emlrtRSI;
      c4_x_y = NULL;
      sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c4_ab_y = NULL;
      sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
        51), false);
      c4_cb_y = NULL;
      sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_x_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_ab_y, 14, c4_cb_y)));
    }

    c4_f_jnt = c4_p_obj->JointInternal;
    c4_i25 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_f_emlrtDCI,
      &c4_st);
    c4_e_body = emlrtDynamicBoundsCheckR2012b(c4_i25, 1, 3, &c4_d_emlrtBCI,
      &c4_st) - 1;
    c4_b_obj->VelocityDoFMap[c4_e_body] = c4_b_obj->VelocityNumber + 1.0;
    c4_b_obj->VelocityDoFMap[3 + c4_e_body] = c4_b_obj->VelocityNumber +
      c4_f_jnt->VelocityNumber;
  } else {
    c4_i20 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_g_emlrtDCI,
      &c4_st);
    c4_b_body = emlrtDynamicBoundsCheckR2012b(c4_i20, 1, 3, &c4_e_emlrtBCI,
      &c4_st) - 1;
    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_b_obj->PositionDoFMap[c4_b_body + 3 * c4_i21] = 0.0 - (real_T)c4_i21;
    }

    c4_i22 = (int32_T)emlrtIntegerCheckR2012b(c4_body->Index, &c4_h_emlrtDCI,
      &c4_st);
    c4_c_body = emlrtDynamicBoundsCheckR2012b(c4_i22, 1, 3, &c4_f_emlrtBCI,
      &c4_st) - 1;
    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_b_obj->VelocityDoFMap[c4_c_body + 3 * c4_i23] = 0.0 - (real_T)c4_i23;
    }
  }

  c4_b_st.site = &c4_xd_emlrtRSI;
  c4_o_obj = c4_body;
  if (c4_o_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_y_y = NULL;
    sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_bb_y = NULL;
    sf_mex_assign(&c4_bb_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_w_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_y_y, 14, c4_bb_y)));
  }

  c4_e_jnt = c4_o_obj->JointInternal;
  c4_b_obj->PositionNumber += c4_e_jnt->PositionNumber;
  c4_b_st.site = &c4_yd_emlrtRSI;
  c4_q_obj = c4_body;
  if (c4_q_obj->Index == 0.0) {
    c4_c_st.site = &c4_he_emlrtRSI;
    c4_db_y = NULL;
    sf_mex_assign(&c4_db_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_eb_y = NULL;
    sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_fb_y = NULL;
    sf_mex_assign(&c4_fb_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_c_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_db_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_eb_y, 14, c4_fb_y)));
  }

  c4_g_jnt = c4_q_obj->JointInternal;
  c4_b_obj->VelocityNumber += c4_g_jnt->VelocityNumber;
  c4_b_st.site = &c4_ae_emlrtRSI;
  c4_r_obj = c4_b_obj;
  c4_r_obj->VisualizationInfo.IsMaxReachUpToDate = false;
}

static real_T c4_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_b_y, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_c_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_c_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_y), &c4_thisId);
  sf_mex_destroy(&c4_b_y);
  return c4_c_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_b_y;
  real_T c4_d;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_b_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static uint32_T c4_c_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_b_method, const char_T *c4_identifier,
  boolean_T *c4_svPtr)
{
  emlrtMsgIdentifier c4_thisId;
  uint32_T c4_b_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_method),
    &c4_thisId, c4_svPtr);
  sf_mex_destroy(&c4_b_method);
  return c4_b_y;
}

static uint32_T c4_d_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr)
{
  uint32_T c4_b_u;
  uint32_T c4_b_y;
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 7, 0U, 0, 0U, 0);
    c4_b_y = c4_b_u;
  }

  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static void c4_e_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_d_state, const char_T *c4_identifier, boolean_T *c4_svPtr,
  uint32_T c4_b_y[625])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_d_state), &c4_thisId,
                        c4_svPtr, c4_b_y);
  sf_mex_destroy(&c4_d_state);
}

static void c4_f_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, boolean_T
  *c4_svPtr, uint32_T c4_b_y[625])
{
  int32_T c4_i;
  uint32_T c4_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_uv, 1, 7, 0U, 1, 0U, 1, 625);
    for (c4_i = 0; c4_i < 625; c4_i++) {
      c4_b_y[c4_i] = c4_uv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_g_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_d_state, const char_T *c4_identifier, boolean_T *c4_svPtr,
  uint32_T c4_b_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_d_state), &c4_thisId,
                        c4_svPtr, c4_b_y);
  sf_mex_destroy(&c4_d_state);
}

static void c4_h_emlrt_marshallIn(SFc4_inverse_testInstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, boolean_T
  *c4_svPtr, uint32_T c4_b_y[2])
{
  int32_T c4_i;
  uint32_T c4_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c4_i = 0; c4_i < 2; c4_i++) {
      c4_b_y[c4_i] = c4_uv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static uint8_T c4_i_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_inverse_test, const char_T
  *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_b_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_y = c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_inverse_test), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_inverse_test);
  return c4_b_y;
}

static uint8_T c4_j_emlrt_marshallIn(SFc4_inverse_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_b_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_b_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_b_y;
}

static const mxArray *c4_chart_data_browse_helper
  (SFc4_inverse_testInstanceStruct *chartInstance, int32_T c4_ssIdNumber)
{
  const mxArray *c4_mxData = NULL;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  c4_mxData = NULL;
  switch (c4_ssIdNumber) {
   case 4U:
    c4_d = *chartInstance->c4_L1;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c4_d1 = *chartInstance->c4_y;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c4_d2 = *chartInstance->c4_L2;
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", &c4_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", *chartInstance->c4_qs_T, 0,
      0U, 1U, 0U, 1, 2), false);
    break;

   case 8U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData",
      *chartInstance->c4_cart_points, 0, 0U, 1U, 0U, 2, 1, 2), false);
    break;
  }

  return c4_mxData;
}

static const mxArray *c4_feval(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_ = NULL;
  (void)chartInstance;
  c4_ = NULL;
  sf_mex_assign(&c4_, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_;
}

static void c4_b_feval(SFc4_inverse_testInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static real_T c4_b_eml_rand_mt19937ar(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, uint32_T c4_d_state[625])
{
  static char_T c4_b_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  real_T c4_b_j;
  real_T c4_b_r;
  real_T c4_c_kk;
  int32_T c4_a;
  int32_T c4_b_kk;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_kk;
  uint32_T c4_mt[625];
  uint32_T c4_u[2];
  uint32_T c4_b_y;
  uint32_T c4_c_y;
  uint32_T c4_d_y;
  uint32_T c4_e_y;
  uint32_T c4_f_y;
  uint32_T c4_g_y;
  uint32_T c4_h_y;
  uint32_T c4_mti;
  boolean_T c4_b_isvalid;
  boolean_T c4_exitg2;
  boolean_T c4_isvalid;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_bc_emlrtRSI;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    c4_exitg1 = 0;
    for (c4_j = 0; c4_j < 2; c4_j++) {
      c4_b_j = (real_T)c4_j + 1.0;
      c4_mti = c4_d_state[624] + 1U;
      if ((real_T)c4_mti >= 625.0) {
        for (c4_kk = 0; c4_kk < 227; c4_kk++) {
          c4_c_kk = (real_T)c4_kk + 1.0;
          c4_b_y = (c4_d_state[(int32_T)c4_c_kk - 1] & 2147483648U) |
            (c4_d_state[(int32_T)(c4_c_kk + 1.0) - 1] & 2147483647U);
          c4_c_y = c4_b_y;
          c4_e_y = c4_c_y;
          if ((c4_e_y & 1U) == 0U) {
            c4_e_y >>= 1U;
          } else {
            c4_e_y = c4_e_y >> 1U ^ 2567483615U;
          }

          c4_d_state[(int32_T)c4_c_kk - 1] = c4_d_state[(int32_T)(c4_c_kk +
            397.0) - 1] ^ c4_e_y;
        }

        for (c4_b_kk = 0; c4_b_kk < 396; c4_b_kk++) {
          c4_c_kk = (real_T)c4_b_kk + 228.0;
          c4_b_y = (c4_d_state[(int32_T)c4_c_kk - 1] & 2147483648U) |
            (c4_d_state[(int32_T)(c4_c_kk + 1.0) - 1] & 2147483647U);
          c4_g_y = c4_b_y;
          c4_h_y = c4_g_y;
          if ((c4_h_y & 1U) == 0U) {
            c4_h_y >>= 1U;
          } else {
            c4_h_y = c4_h_y >> 1U ^ 2567483615U;
          }

          c4_d_state[(int32_T)c4_c_kk - 1] = c4_d_state[(int32_T)((c4_c_kk + 1.0)
            - 228.0) - 1] ^ c4_h_y;
        }

        c4_b_y = (c4_d_state[623] & 2147483648U) | (c4_d_state[0] & 2147483647U);
        c4_d_y = c4_b_y;
        c4_f_y = c4_d_y;
        if ((c4_f_y & 1U) == 0U) {
          c4_f_y >>= 1U;
        } else {
          c4_f_y = c4_f_y >> 1U ^ 2567483615U;
        }

        c4_d_state[623] = c4_d_state[396] ^ c4_f_y;
        c4_mti = 1U;
      }

      c4_b_y = c4_d_state[(int32_T)c4_mti - 1];
      c4_d_state[624] = c4_mti;
      c4_b_y ^= c4_b_y >> 11U;
      c4_b_y ^= c4_b_y << 7U & 2636928640U;
      c4_b_y ^= c4_b_y << 15U & 4022730752U;
      c4_b_y ^= c4_b_y >> 18U;
      c4_u[(int32_T)c4_b_j - 1] = c4_b_y;
    }

    c4_u[0] >>= 5U;
    c4_u[1] >>= 6U;
    c4_b_r = 1.1102230246251565E-16 * ((real_T)c4_u[0] * 6.7108864E+7 + (real_T)
      c4_u[1]);
    if (c4_b_r == 0.0) {
      for (c4_i = 0; c4_i < 625; c4_i++) {
        c4_mt[c4_i] = c4_d_state[c4_i];
      }

      if (((real_T)c4_mt[624] >= 1.0) && ((real_T)c4_mt[624] < 625.0)) {
        c4_isvalid = true;
      } else {
        c4_isvalid = false;
      }

      c4_b_isvalid = c4_isvalid;
      if (c4_isvalid) {
        c4_b_isvalid = false;
        c4_k = 0;
        c4_exitg2 = false;
        while ((!c4_exitg2) && (c4_k + 1 < 625)) {
          if ((real_T)c4_mt[c4_k] == 0.0) {
            c4_a = c4_k + 1;
            c4_k = c4_a;
          } else {
            c4_b_isvalid = true;
            c4_exitg2 = true;
          }
        }
      }

      if (!c4_b_isvalid) {
        c4_i_y = NULL;
        sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        c4_j_y = NULL;
        sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        sf_mex_call(&c4_st, &c4_b_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                    sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_st, NULL, "message", 1U, 1U, 14, c4_j_y)));
      }
    } else {
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  return c4_b_r;
}

static void c4_emxInitStruct_rigidBodyTree(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyTree *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInitStruct_robotics_manip_in(chartInstance, c4_sp,
    &c4_pStruct->TreeInternal, c4_srcLocation);
  c4_c_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
}

static void c4_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_b_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->Base,
    c4_srcLocation);
  c4_emxInitMatrix_robotics_manip_in(chartInstance, c4_sp, c4_pStruct->_pobj0,
    c4_srcLocation);
}

static void c4_b_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBody *
  c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->NameInternal, 2,
                    c4_srcLocation);
  c4_c_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
  c4_emxInitStruct_rigidBodyJoint(chartInstance, c4_sp, &c4_pStruct->_pobj1,
    c4_srcLocation);
}

static void c4_emxInit_char_T(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_char_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_char_T *)emlrtMallocMex(sizeof(c4_emxArray_char_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (char_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_c_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_CollisionSet *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_unnamed_struct(chartInstance, c4_sp,
    &c4_pStruct->CollisionGeometries, 2, c4_srcLocation);
}

static void c4_emxInit_unnamed_struct(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_unnamed_struct
  **c4_pEmxArray, int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_unnamed_struct *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_unnamed_struct *)emlrtMallocMex(sizeof
    (c4_emxArray_unnamed_struct));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (c4_robotics_manip_internal_CollisionGeometry **)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInitStruct_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->Type, 2, c4_srcLocation);
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->MotionSubspace, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->NameInternal, 2,
                    c4_srcLocation);
  c4_emxInit_real_T(chartInstance, c4_sp, &c4_pStruct->PositionLimitsInternal, 2,
                    c4_srcLocation);
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_pStruct->HomePositionInternal, 1,
                     c4_srcLocation);
}

static void c4_emxInit_real_T(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real_T1(SFc4_inverse_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInitMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_robotics_manip_internal_RigidBody
  c4_pMatrix[3], const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_b_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitMatrix_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody c4_pMatrix[3], const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_emxInitStruct_rigidBody(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitStruct_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBody *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_d_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
  c4_e_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->_pobj1,
    c4_srcLocation);
}

static void c4_d_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBodyTree_1 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_e_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->Base,
    c4_srcLocation);
  c4_e_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
}

static void c4_e_emxInitStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_RigidBody_1 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->NameInternal, 2,
                    c4_srcLocation);
  c4_c_emxInitStruct_robotics_manip_in(chartInstance, c4_sp,
    &c4_pStruct->CollisionsInternal, c4_srcLocation);
  c4_emxInitStruct_rigidBodyJoint(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
}

static void c4_b_emxInitMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_robotics_manip_internal_CollisionSet c4_pMatrix[3], const emlrtRTEInfo
  *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_c_emxInitStruct_robotics_manip_in(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitMatrix_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_rigidBodyJoint c4_pMatrix[6],
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 6; c4_i++) {
    c4_emxInitStruct_rigidBodyJoint(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxFree_char_T(SFc4_inverse_testInstanceStruct *chartInstance,
  c4_emxArray_char_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_char_T *)NULL) {
    if (((*c4_pEmxArray)->data != (char_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_char_T *)NULL;
  }
}

static void c4_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->NameInternal);
  c4_b_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->_pobj0);
  c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_pStruct->_pobj1);
}

static void c4_emxFree_unnamed_struct(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_emxArray_unnamed_struct **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_unnamed_struct *)NULL) {
    if (((*c4_pEmxArray)->data != (c4_robotics_manip_internal_CollisionGeometry **)
         NULL) && (*c4_pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_unnamed_struct *)NULL;
  }
}

static void c4_b_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_CollisionSet *c4_pStruct)
{
  c4_emxFree_unnamed_struct(chartInstance, &c4_pStruct->CollisionGeometries);
}

static void c4_emxFreeStruct_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyJoint *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->Type);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->MotionSubspace);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->NameInternal);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->PositionLimitsInternal);
  c4_emxFree_real_T(chartInstance, &c4_pStruct->HomePositionInternal);
}

static void c4_emxFree_real_T(SFc4_inverse_testInstanceStruct *chartInstance,
  c4_emxArray_real_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real_T *)NULL;
  }
}

static void c4_c_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBodyTree *c4_pStruct)
{
  c4_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->Base);
  c4_emxFreeMatrix_robotics_manip_in(chartInstance, c4_pStruct->_pobj0);
}

static void c4_emxFreeMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody c4_pMatrix[3])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxFreeStruct_rigidBodyTree(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyTree *c4_pStruct)
{
  c4_c_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->TreeInternal);
  c4_b_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->_pobj0);
}

static void c4_emxFreeMatrix_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBody c4_pMatrix[3])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_emxFreeStruct_rigidBody(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_d_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBody_1 *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->NameInternal);
  c4_b_emxFreeStruct_robotics_manip_in(chartInstance,
    &c4_pStruct->CollisionsInternal);
  c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_pStruct->_pobj0);
}

static void c4_e_emxFreeStruct_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_RigidBodyTree_1 *c4_pStruct)
{
  c4_d_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->Base);
  c4_d_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->_pobj0);
}

static void c4_emxFreeStruct_rigidBody(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBody *c4_pStruct)
{
  c4_e_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->_pobj0);
  c4_d_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pStruct->_pobj1);
}

static void c4_b_emxFreeMatrix_robotics_manip_in(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_robotics_manip_internal_CollisionSet c4_pMatrix[3])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 3; c4_i++) {
    c4_b_emxFreeStruct_robotics_manip_in(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxFreeMatrix_rigidBodyJoint(SFc4_inverse_testInstanceStruct
  *chartInstance, c4_rigidBodyJoint c4_pMatrix[6])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 6; c4_i++) {
    c4_emxFreeStruct_rigidBodyJoint(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxEnsureCapacity_char_T(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_char_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(char_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(char_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (char_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real_T(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real_T1(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_unnamed_struc(SFc4_inverse_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_unnamed_struct
  *c4_emxArray, int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c4_newNumel, (uint32_T)
      c4_emxArray->size[c4_i], c4_srcLocation, c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof
      (c4_robotics_manip_internal_CollisionGeometry *));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, (void *)c4_emxArray->data, sizeof
             (c4_robotics_manip_internal_CollisionGeometry *) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex((void *)c4_emxArray->data);
      }
    }

    c4_emxArray->data = (c4_robotics_manip_internal_CollisionGeometry **)
      c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void init_dsm_address_info(SFc4_inverse_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_inverse_testInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_L1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c4_y = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c4_L2 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c4_qs_T = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c4_cart_points = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_inverse_test_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3444651573U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1062877994U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2090518028U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3165421000U);
}

mxArray *sf_c4_inverse_test_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.lapack.LAPACKApi"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "robotics.core.internal.coder.CollisionGeometryBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_inverse_test_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_functions");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "CollisionGeometryBuildable_makeBox");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_inverse_test_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_inverse_test(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtlM9rwjAUx1NR2XYYPeyym3/BqDqm7rK6wUCYUMYOOwS6NI1aaFpJo+jN4/6EHf1T9iftT1j"
    "SVlcyWWF2PwQfhPS98F76vvnwgNbrA2HHYi2PAKiK/UCsEkiskvoaSM60dby8jtfE4vMxkfGI4Z"
    "4r9gDR2EeTWS8YhHH9NvioX91QX8vUP0zjib1dbZd/Ysp8I5NfzsnXxdc81WWlz/fv183t8j/fX"
    "855Hz31KeGj0E3yLe3r99WU9y1l6vrAA+P0P8ycPkpKH/qqiceFGe/PC7MIHhY5eliKHtK/uYQW"
    "C4cM0dqt55MI9rsPd91reN8wGoYDeRj6TjiDhPrQ9xxIEfeRAxkK3MEkgGPmTREn8tiWsTO6C1x"
    "UFB2kH3HRR5o/+msulm7ChUkK4eIlRw9H0cMpnAub4mH9om207FjnwcQ/o7szR/49L68pL0+/ww"
    "tW9MA/wAuvdzrNFmIqMHte9vNlAy/RiDVxGAwLni+1QnixcvQ5VfSRvhfZCHNvSmx8bnvBlLCI2"
    "JxEPFNX2juSFNVk"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_inverse_test_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sr6vsibMXqngpkk4VxazLGB";
}

static void sf_opaque_initialize_c4_inverse_test(void *chartInstanceVar)
{
  initialize_params_c4_inverse_test((SFc4_inverse_testInstanceStruct*)
    chartInstanceVar);
  initialize_c4_inverse_test((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_inverse_test(void *chartInstanceVar)
{
  enable_c4_inverse_test((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_inverse_test(void *chartInstanceVar)
{
  disable_c4_inverse_test((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_inverse_test(void *chartInstanceVar)
{
  sf_gateway_c4_inverse_test((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_inverse_test(SimStruct* S)
{
  return get_sim_state_c4_inverse_test((SFc4_inverse_testInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_inverse_test(SimStruct* S, const mxArray *
  st)
{
  set_sim_state_c4_inverse_test((SFc4_inverse_testInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_inverse_test(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_inverse_testInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_inverse_test_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_inverse_test
      ((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_inverse_test(void *chartInstanceVar)
{
  mdl_start_c4_inverse_test((SFc4_inverse_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_inverse_test(void *chartInstanceVar)
{
  mdl_terminate_c4_inverse_test((SFc4_inverse_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_inverse_test((SFc4_inverse_testInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_inverse_test(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_inverse_test((SFc4_inverse_testInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc4_inverse_test((SFc4_inverse_testInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_inverse_test_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [23] = {
    "eNrtWFtv40QUdqq0Yrms8oCEViDRN/Zp1b1oLzxAmhtESmi0Scs+RISJfRKPMp7xzozdFgmpvPE",
    "T4G3f+AO8IiF+BT+AB3iCn8AZx2mzjh1v2u5uCx3JcWb8nTPn8s2Zsa1Cs21hu47Xw/ctawPvb+",
    "C1Zk3betwvzF3T8aL1Udz/GYV44HWIJJ6yljZOPHgMSrBAU8GbfCRSYZSPQAK3EesLqbO0KeoFj",
    "PJJI+C20ae+dKntdl0RMKeCssTZ4ewQtfmB7qCeGpVg6waAo10pgrHbYGR8bLHU+1UX7IkKvGUu",
    "KNDdwDdmqXbANPUZ1A/AbnKlCVqsTmzraqKhqg8y3TSequ4MKDyfUcJTvXWJ6oKPAdaw6zv4uxN",
    "odCoJs10idQVcEoJq0UmkU3BI6qQKHwwpJ1pISljdY1UjuGhbh6E9beEAWxIQtK0igUx8QbnOzn",
    "+3gZ7WORkyqMEwGGdr68LTwCR/j8I+yMy4jaoiBEnGsMMzJ40CUj+IsnXMkkWYph7sEbltY/4UO",
    "JnsReaoLsE8QQ8lsmAQOdlUPUlDDG+mtsBrGmbmLZnAmyZb5cEibfUQlmXhWFvD5lXCmMqE9YTf",
    "ghBYpLVGNFkOm2pNxylFnZ7AABt6Z6+GgFNMfAyrCu7Q1HSFCUBUd77AwvI80g6UFl4VyVtrtRY",
    "fL8KaXIMcERvSqoAkVAHGLApvtjaHKpN7BKJVOjIvDTxlSB7KUqOA1/aFnGBMlhSRExdMRjOBnh",
    "pjLnEl7CpcNMtgJpd5OJvYLjimwFAGbVw2iE2JiTKlbRvXXUj1YQ2ULamfktUAVx2Woboh1KEPu",
    "3zCxT5vSOF14xo/zQJWBqzhHuagF60xbqMqqjSWC3oyvQOApCSSUz6uYJmThw00MjVjZt/bsk72",
    "vbdfYN+bySXvN+f0FFL0WHP35LzX1p7HFxPzruFIAZuRK8/JvWMtlzO4El5//t2v/hj+9d1PX+3",
    "9cvPb3/7Im7+wMH8h+m/kOm+tdk64Hvc/mBXk4wUWLvDaYD+fs6uYov+9Of2luK/k/VDRYfvJUz",
    "72J5N7ewfkm9ZnlUjfszeX27uRsHc2vml2BmRjxGNpN534AGP6JJhu69G5ac7ejZx4XIvHp+2fT",
    "88m/245mcdijnwJ/x0meHv6+Uvls8kvzl/MyU8p7nugXeHEfCysxse1Ob3MopYf21HO8WMt4Udp",
    "5sSTo3J0//6ofB58OMqJRycRD9OvftzvSDHGnXAzqnX99navtV3pP76zdWdr2NdCsKE46IPH+ow",
    "O+x7RjAz7knAH95i+jycVrNPm8cCM3fIuAy/WE3FYn+03sbz7unnxzJnyogznwosfcuIxTMRjeO",
    "68GHj2+Pb9h1sPBlGcRwG75V2eOnLh+fJrzJevXw1f7EQ87JfAF3370aO7D4hMEuaKL1f1JYUvy",
    "pV38Ug/Puf6snkufOnkxOdGIj43ou8UA2LefmBg3xtQHoJUMNCgdMr7w6rn8Su5yy1X+B/69yLv",
    "18VTyp12PusVy53Vv1W/M1w0/LL3VSuBL11gP876/edl43+3VjuffBj3Pzn+ZFt1KXNSvt7Fj1t",
    "ARmlP/yM8XQX/L382e4g=",
    ""
  };

  static char newstr [1597] = "";
  newstr[0] = '\0';
  for (i = 0; i < 23; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_inverse_test(SimStruct *S)
{
  const char* newstr = sf_c4_inverse_test_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1130164200U));
  ssSetChecksum1(S,(2179561113U));
  ssSetChecksum2(S,(3176554151U));
  ssSetChecksum3(S,(3837951272U));
}

static void mdlRTW_c4_inverse_test(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_inverse_test(SimStruct *S)
{
  SFc4_inverse_testInstanceStruct *chartInstance;
  chartInstance = (SFc4_inverse_testInstanceStruct *)utMalloc(sizeof
    (SFc4_inverse_testInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_inverse_testInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_inverse_test;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_inverse_test;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_inverse_test;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_inverse_test;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_inverse_test;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_inverse_test;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_inverse_test;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_inverse_test;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_inverse_test;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_inverse_test;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_inverse_test;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_inverse_test;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_inverse_test(chartInstance);
}

void c4_inverse_test_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_inverse_test(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_inverse_test(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_inverse_test(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_inverse_test_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
