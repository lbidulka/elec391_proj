# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = inverse_test
TARGET      = sfun
MODULE_SRCS   = c4_inverse_test.c
MODEL_SRC  = inverse_test_sfun.c
MODEL_REG = inverse_test_sfun_registry.c
MAKEFILE    = inverse_test_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2020b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\Users\luke bidulka\documents\education\School\third_year\5th\ELEC391\Project\Controls\kinematics\slprj\_sfprj\inverse_test\_self\sfun\src" /I "C:\Users\luke bidulka\documents\education\School\third_year\5th\ELEC391\Project\Controls\kinematics" /I "C:\Users\luke bidulka\documents\education\School\third_year\5th\ELEC391\Project\Controls\kinematics\IK"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2020b\extern\include" \
    /I "C:\Program Files\MATLAB\R2020b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2020b\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2020b\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2020b\rtw\c\src" \
    /I "C:\Users\Luke Bidulka\Documents\Education\School\Third_Year\5th\ELEC391\Project\Controls\Kinematics\slprj\_sfprj\inverse_test\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Program Files\MATLAB\R2020b\extern\include\shared_robotics" /I "C:\Program Files\MATLAB\R2020b\toolbox\shared\robotics\externalDependency\libccd\src" /I "C:\Program Files\MATLAB\R2020b\toolbox\shared\robotics\externalDependency\libccd\src\ccd"
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS -Dccd_EXPORTS
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \
     "ccd_ccd.obj" \
     "ccd_mpr.obj" \
     "ccd_polytope.obj" \
     "ccd_vec3.obj" \
     "collisioncodegen_CollisionGeometry.obj" \
     "collisioncodegen_api.obj" \
     "collisioncodegen_ccdExtensions.obj" \
     "collisioncodegen_checkCollision.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = inverse_test_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "C:\Program Files\MATLAB\R2020b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2020b\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2020b\extern\version\c_mexapi_version.c"
ccd_ccd.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_ccd.c"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_ccd.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_ccd.c"
ccd_mpr.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_mpr.c"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_mpr.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_mpr.c"
ccd_polytope.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_polytope.c"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_polytope.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_polytope.c"
ccd_vec3.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_vec3.c"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_vec3.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\externaldependency\libccd\src\ccd_vec3.c"
collisioncodegen_CollisionGeometry.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
collisioncodegen_api.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
collisioncodegen_ccdExtensions.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
collisioncodegen_checkCollision.obj :  "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
	@echo ### Compiling "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files\matlab\r2020b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
