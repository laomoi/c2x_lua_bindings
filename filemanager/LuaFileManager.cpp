/*
** Lua binding: FileManager
** Generated automatically by tolua++-1.0.92 on 05/11/13 21:01:55.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_FileManager_open (lua_State* tolua_S);

#include "fileManager/FileManager.h"
using namespace std;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"FileManager");
 Mtolua_typeid(tolua_S,typeid(FileManager), "FileManager");
}

/* method: splicePath of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_splicePath00
static int tolua_FileManager_FileManager_splicePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string parentPath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string childPath = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   const char* tolua_ret = (const char*)  FileManager::splicePath(parentPath,childPath);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)parentPath);
   tolua_pushcppstring(tolua_S,(const char*)childPath);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'splicePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fileExists of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_fileExists00
static int tolua_FileManager_FileManager_fileExists00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string filePath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  FileManager::fileExists(filePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filePath);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fileExists'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: renameFile of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_renameFile00
static int tolua_FileManager_FileManager_renameFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string oldFilePath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string newFilePath = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  FileManager::renameFile(oldFilePath,newFilePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)oldFilePath);
   tolua_pushcppstring(tolua_S,(const char*)newFilePath);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'renameFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeStringToFile of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_writeStringToFile00
static int tolua_FileManager_FileManager_writeStringToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string content = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string filePath = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  bool isAppend = ((bool)  tolua_toboolean(tolua_S,4,false));
  {
   bool tolua_ret = (bool)  FileManager::writeStringToFile(content,filePath,isAppend);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)content);
   tolua_pushcppstring(tolua_S,(const char*)filePath);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeStringToFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFile of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_removeFile00
static int tolua_FileManager_FileManager_removeFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string filePath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  FileManager::removeFile(filePath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filePath);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createDirectory of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_createDirectory00
static int tolua_FileManager_FileManager_createDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string directoryPath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  FileManager::createDirectory(directoryPath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)directoryPath);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: uncompressZipFile of class  FileManager */
#ifndef TOLUA_DISABLE_tolua_FileManager_FileManager_uncompressZipFile00
static int tolua_FileManager_FileManager_uncompressZipFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FileManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string zipFile = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string directory = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  FileManager::uncompressZipFile(zipFile,directory);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)zipFile);
   tolua_pushcppstring(tolua_S,(const char*)directory);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'uncompressZipFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_FileManager_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"FileManager","FileManager","",NULL);
  tolua_beginmodule(tolua_S,"FileManager");
   tolua_function(tolua_S,"splicePath",tolua_FileManager_FileManager_splicePath00);
   tolua_function(tolua_S,"fileExists",tolua_FileManager_FileManager_fileExists00);
   tolua_function(tolua_S,"renameFile",tolua_FileManager_FileManager_renameFile00);
   tolua_function(tolua_S,"writeStringToFile",tolua_FileManager_FileManager_writeStringToFile00);
   tolua_function(tolua_S,"removeFile",tolua_FileManager_FileManager_removeFile00);
   tolua_function(tolua_S,"createDirectory",tolua_FileManager_FileManager_createDirectory00);
   tolua_function(tolua_S,"uncompressZipFile",tolua_FileManager_FileManager_uncompressZipFile00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_FileManager (lua_State* tolua_S) {
 return tolua_FileManager_open(tolua_S);
};
#endif

