

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri May 05 14:13:50 2017
 */
/* Compiler settings for SoftUSBLoopback.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ILoopbackDevice,0xAED61646,0x4084,0x46C1,0xA0,0x62,0x2D,0xA7,0x19,0xA6,0xFA,0x9D);


MIDL_DEFINE_GUID(IID, LIBID_SoftUSBLoopbackLib,0x6E43376B,0x7905,0x4116,0xB0,0xDE,0xF8,0xD3,0xB9,0xC0,0xA3,0x04);


MIDL_DEFINE_GUID(IID, DIID__ILoopbackDeviceEvents,0x1D152D56,0x9FAE,0x4C5D,0xB4,0xC5,0x10,0x3E,0xEE,0xC4,0x46,0xD6);


MIDL_DEFINE_GUID(CLSID, CLSID_LoopbackDevice,0xDD8BA419,0x6F8F,0x4CCD,0xB8,0xEC,0x69,0x44,0x61,0x9A,0x19,0x08);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



