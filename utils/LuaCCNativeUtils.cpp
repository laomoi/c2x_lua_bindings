/*
** Lua binding: CCNativeUtils
** Generated automatically by tolua++-1.0.92 on 05/26/13 16:27:55.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_CCNativeUtils_open (lua_State* tolua_S);

#include "utils/CCNativeUtils.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"CCNativeUtils");
 Mtolua_typeid(tolua_S,typeid(CCNativeUtils), "CCNativeUtils");
}

/* method: getCurrentTime of class  CCNativeUtils */
#ifndef TOLUA_DISABLE_tolua_CCNativeUtils_CCNativeUtils_getCurrentTime00
static int tolua_CCNativeUtils_CCNativeUtils_getCurrentTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNativeUtils",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned int tolua_ret = (unsigned int)  CCNativeUtils::getCurrentTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCNativeUtils_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"CCNativeUtils","CCNativeUtils","",NULL);
  tolua_beginmodule(tolua_S,"CCNativeUtils");
   tolua_function(tolua_S,"getCurrentTime",tolua_CCNativeUtils_CCNativeUtils_getCurrentTime00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCNativeUtils (lua_State* tolua_S) {
 return tolua_CCNativeUtils_open(tolua_S);
};
#endif

