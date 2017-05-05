

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SoftUSBLoopback_i_h__
#define __SoftUSBLoopback_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILoopbackDevice_FWD_DEFINED__
#define __ILoopbackDevice_FWD_DEFINED__
typedef interface ILoopbackDevice ILoopbackDevice;

#endif 	/* __ILoopbackDevice_FWD_DEFINED__ */


#ifndef ___ILoopbackDeviceEvents_FWD_DEFINED__
#define ___ILoopbackDeviceEvents_FWD_DEFINED__
typedef interface _ILoopbackDeviceEvents _ILoopbackDeviceEvents;

#endif 	/* ___ILoopbackDeviceEvents_FWD_DEFINED__ */


#ifndef __LoopbackDevice_FWD_DEFINED__
#define __LoopbackDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class LoopbackDevice LoopbackDevice;
#else
typedef struct LoopbackDevice LoopbackDevice;
#endif /* __cplusplus */

#endif 	/* __LoopbackDevice_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ILoopbackDevice_INTERFACE_DEFINED__
#define __ILoopbackDevice_INTERFACE_DEFINED__

/* interface ILoopbackDevice */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILoopbackDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AED61646-4084-46C1-A062-2DA719A6FA9D")
    ILoopbackDevice : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ILoopbackDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoopbackDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoopbackDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoopbackDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILoopbackDevice * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILoopbackDevice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILoopbackDevice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILoopbackDevice * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ILoopbackDeviceVtbl;

    interface ILoopbackDevice
    {
        CONST_VTBL struct ILoopbackDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoopbackDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILoopbackDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILoopbackDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILoopbackDevice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILoopbackDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILoopbackDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILoopbackDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILoopbackDevice_INTERFACE_DEFINED__ */



#ifndef __SoftUSBLoopbackLib_LIBRARY_DEFINED__
#define __SoftUSBLoopbackLib_LIBRARY_DEFINED__

/* library SoftUSBLoopbackLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SoftUSBLoopbackLib;

#ifndef ___ILoopbackDeviceEvents_DISPINTERFACE_DEFINED__
#define ___ILoopbackDeviceEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ILoopbackDeviceEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ILoopbackDeviceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1D152D56-9FAE-4C5D-B4C5-103EEEC446D6")
    _ILoopbackDeviceEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ILoopbackDeviceEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ILoopbackDeviceEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ILoopbackDeviceEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ILoopbackDeviceEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ILoopbackDeviceEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ILoopbackDeviceEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ILoopbackDeviceEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ILoopbackDeviceEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ILoopbackDeviceEventsVtbl;

    interface _ILoopbackDeviceEvents
    {
        CONST_VTBL struct _ILoopbackDeviceEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ILoopbackDeviceEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ILoopbackDeviceEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ILoopbackDeviceEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ILoopbackDeviceEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ILoopbackDeviceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ILoopbackDeviceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ILoopbackDeviceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ILoopbackDeviceEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_LoopbackDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("DD8BA419-6F8F-4CCD-B8EC-6944619A1908")
LoopbackDevice;
#endif
#endif /* __SoftUSBLoopbackLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


