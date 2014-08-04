VMI_DIR="/opt/vmi-2.1.0-1-gcc"
#
VMI_INCDIR="-I$VMI_DIR/include"
VMI_LIBDIR="-L$VMI_DIR/lib"
#
CMK_CPP_C="icc -E -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_CC="icc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_CC_RELIABLE="icc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_CC_FASTEST="icc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_CXX="icpc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_CXXPP="icpc -E -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_LD="icc -rdynamic -pthread -Wl,-rpath,$VMI_DIR/lib $VMI_LIBDIR "
CMK_LDXX="icpc -rdynamic -pthread -Wl,-rpath,$VMI_DIR/lib $VMI_LIBDIR "
CMK_LD_LIBRARY_PATH="-Wl,-rpath,$CHARMLIBSO/"
CMK_NATIVE_CC="icc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_NATIVE_LD="icc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_NATIVE_CXX="icpc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "
CMK_NATIVE_LDXX="icpc -DNO_LOCK $CMK_INCDIR $VMI_INCDIR "