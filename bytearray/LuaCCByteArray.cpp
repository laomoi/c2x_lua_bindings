/*
** Lua binding: CCByteArray
** Generated automatically by tolua++-1.0.92 on 05/10/13 12:45:39.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_CCByteArray_open (lua_State* tolua_S);

#include "bytearray\CCByteArray.h"
#include <string>
using namespace std;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"CCByteArray");
 Mtolua_typeid(tolua_S,typeid(CCByteArray), "CCByteArray");
}

/* method: create of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_create00
static int tolua_CCByteArray_CCByteArray_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* buf = ((char*)  tolua_tostring(tolua_S,2,0));
  int len = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   CCByteArray* tolua_ret = (CCByteArray*)  CCByteArray::create(buf,len);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCByteArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroy of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_destroy00
static int tolua_CCByteArray_CCByteArray_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* ba = ((CCByteArray*)  tolua_tousertype(tolua_S,2,0));
  {
   CCByteArray::destroy(ba);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readShort of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readShort00
static int tolua_CCByteArray_CCByteArray_readShort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readShort'", NULL);
#endif
  {
   int tolua_ret = (int)  self->readShort();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readShort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readInt of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readInt00
static int tolua_CCByteArray_CCByteArray_readInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readInt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->readInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readUnsignedInt of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readUnsignedInt00
static int tolua_CCByteArray_CCByteArray_readUnsignedInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readUnsignedInt'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->readUnsignedInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readUnsignedInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readUnsignedShort of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readUnsignedShort00
static int tolua_CCByteArray_CCByteArray_readUnsignedShort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readUnsignedShort'", NULL);
#endif
  {
   int tolua_ret = (int)  self->readUnsignedShort();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readUnsignedShort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readString of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readString00
static int tolua_CCByteArray_CCByteArray_readString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
  int len = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readString'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readString(len);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readByte of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readByte00
static int tolua_CCByteArray_CCByteArray_readByte00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readByte'", NULL);
#endif
  {
   int tolua_ret = (int)  self->readByte();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readByte'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readUnsignedByte of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_readUnsignedByte00
static int tolua_CCByteArray_CCByteArray_readUnsignedByte00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readUnsignedByte'", NULL);
#endif
  {
   int tolua_ret = (int)  self->readUnsignedByte();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readUnsignedByte'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBuffer of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_getBuffer00
static int tolua_CCByteArray_CCByteArray_getBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBuffer'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getBuffer();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLength of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_getLength00
static int tolua_CCByteArray_CCByteArray_getLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCPUEndian of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_getCPUEndian00
static int tolua_CCByteArray_CCByteArray_getCPUEndian00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCPUEndian'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCPUEndian();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCPUEndian'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_getPosition00
static int tolua_CCByteArray_CCByteArray_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPosition();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCByteArray */
#ifndef TOLUA_DISABLE_tolua_CCByteArray_CCByteArray_setPosition00
static int tolua_CCByteArray_CCByteArray_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCByteArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCByteArray* self = (CCByteArray*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCByteArray_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"CCByteArray","CCByteArray","",NULL);
  tolua_beginmodule(tolua_S,"CCByteArray");
   tolua_function(tolua_S,"create",tolua_CCByteArray_CCByteArray_create00);
   tolua_function(tolua_S,"destroy",tolua_CCByteArray_CCByteArray_destroy00);
   tolua_function(tolua_S,"readShort",tolua_CCByteArray_CCByteArray_readShort00);
   tolua_function(tolua_S,"readInt",tolua_CCByteArray_CCByteArray_readInt00);
   tolua_function(tolua_S,"readUnsignedInt",tolua_CCByteArray_CCByteArray_readUnsignedInt00);
   tolua_function(tolua_S,"readUnsignedShort",tolua_CCByteArray_CCByteArray_readUnsignedShort00);
   tolua_function(tolua_S,"readString",tolua_CCByteArray_CCByteArray_readString00);
   tolua_function(tolua_S,"readByte",tolua_CCByteArray_CCByteArray_readByte00);
   tolua_function(tolua_S,"readUnsignedByte",tolua_CCByteArray_CCByteArray_readUnsignedByte00);
   tolua_function(tolua_S,"getBuffer",tolua_CCByteArray_CCByteArray_getBuffer00);
   tolua_function(tolua_S,"getLength",tolua_CCByteArray_CCByteArray_getLength00);
   tolua_function(tolua_S,"getCPUEndian",tolua_CCByteArray_CCByteArray_getCPUEndian00);
   tolua_function(tolua_S,"getPosition",tolua_CCByteArray_CCByteArray_getPosition00);
   tolua_function(tolua_S,"setPosition",tolua_CCByteArray_CCByteArray_setPosition00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCByteArray (lua_State* tolua_S) {
 return tolua_CCByteArray_open(tolua_S);
};
#endif

