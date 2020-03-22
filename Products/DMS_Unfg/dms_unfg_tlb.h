// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.134.1.39  $
// File generated on 8/12/00 11:39:01 AM from Type Library described below.

// ************************************************************************ //
// Type Lib: C:\Wombat\Pro\DMS_Unfg\DMS_Unfg.tlb (1)
// IID\LCID: {0698F655-4EA6-11D4-8A0A-0020AFCC5695}\0
// Helpfile: 
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINNT\System32\STDOLE2.TLB)
//   (2) v4.0 StdVCL, (C:\WINNT\System32\STDVCL40.DLL)
// ************************************************************************ //
#ifndef   __DMS_Unfg_TLB_h__
#define   __DMS_Unfg_TLB_h__

#pragma option push -b -w-inl

#include <utilcls.h>
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0500)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if defined(USING_ATLVCL) || defined(USING_ATL)
#if !defined(__TLB_NO_EVENT_WRAPPERS)
#include <atl/atlmod.h>
#endif
#endif


// *********************************************************************//
// Forward reference of some VCL types (to avoid including STDVCL.HPP)    
// *********************************************************************//
namespace Stdvcl {class IStrings; class IStringsDisp;}
using namespace Stdvcl;
typedef TComInterface<IStrings> IStringsPtr;
typedef TComInterface<IStringsDisp> IStringsDispPtr;

namespace Dms_unfg_tlb
{

// *********************************************************************//
// HelpString: DMS_Unfg Library
// Version:    1.0
// *********************************************************************//


// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLSID_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
extern __declspec (package) const GUID LIBID_DMS_Unfg;
extern __declspec (package) const GUID IID_IDMS_Unfrag;
extern __declspec (package) const GUID CLSID_DMS_Unfrag;

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
interface DECLSPEC_UUID("{0698F656-4EA6-11D4-8A0A-0020AFCC5695}") IDMS_Unfrag;
typedef TComInterface<IDMS_Unfrag, &IID_IDMS_Unfrag> IDMS_UnfragPtr;

// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
//                                                                        
// The LIBID_OF_ macro(s) map a LIBID_OF_CoClassName to the GUID of this  
// TypeLibrary. It simplifies the updating of macros when CoClass name    
// change.                                                                
// *********************************************************************//
typedef IDMS_Unfrag DMS_Unfrag;
typedef IDMS_UnfragPtr DMS_UnfragPtr;

#define LIBID_OF_DMS_Unfrag (&LIBID_DMS_Unfg)
// *********************************************************************//
// Interface: IDMS_Unfrag
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {0698F656-4EA6-11D4-8A0A-0020AFCC5695}
// *********************************************************************//
interface IDMS_Unfrag  : public IDispatch
{
public:
  virtual HRESULT STDMETHODCALLTYPE set_AuthCode(BSTR Param1/*[in]*/) = 0; // [1]
  virtual HRESULT STDMETHODCALLTYPE UnfragFile(BSTR sFileName/*[in]*/, long* nBytesSaved/*[out]*/) = 0; // [2]
  virtual HRESULT STDMETHODCALLTYPE RemovePreview(BSTR sFileName/*[in]*/) = 0; // [3]
  virtual HRESULT STDMETHODCALLTYPE RemoveGeometry(BSTR sFileName/*[in]*/) = 0; // [4]
  virtual HRESULT STDMETHODCALLTYPE get_TimeOut(int* nTimeOut/*[out,retval]*/) = 0; // [5]
  virtual HRESULT STDMETHODCALLTYPE set_TimeOut(int nTimeOut/*[in]*/) = 0; // [5]
  virtual HRESULT STDMETHODCALLTYPE get_IsRegistered(int* bIsRegistered/*[out,retval]*/) = 0; // [6]
  virtual HRESULT STDMETHODCALLTYPE set_AuthCodeNetwork(BSTR Value/*[in]*/) = 0; // [7]
  virtual HRESULT STDMETHODCALLTYPE get_IsRegisteredNetwork(int* bIsRegistered/*[out,retval]*/) = 0; // [8]

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)

  int __fastcall get_TimeOut(void)
  {
    int nTimeOut;
    OLECHECK(this->get_TimeOut((int*)&nTimeOut));
    return nTimeOut;
  }

  int __fastcall get_IsRegistered(void)
  {
    int bIsRegistered;
    OLECHECK(this->get_IsRegistered((int*)&bIsRegistered));
    return bIsRegistered;
  }

  int __fastcall get_IsRegisteredNetwork(void)
  {
    int bIsRegistered;
    OLECHECK(this->get_IsRegisteredNetwork((int*)&bIsRegistered));
    return bIsRegistered;
  }


  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             TimeOut = {read = get_TimeOut, write = set_TimeOut};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   BSTR            AuthCodeNetwork = {write = set_AuthCodeNetwork};
  __property   int             IsRegisteredNetwork = {read = get_IsRegisteredNetwork};

#endif //   __TLB_NO_INTERFACE_WRAPPERS

};

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)
// *********************************************************************//
// SmartIntf: TCOMIDMS_Unfrag
// Interface: IDMS_Unfrag
// *********************************************************************//
template <class T /* IDMS_Unfrag */ >
class TCOMIDMS_UnfragT : public TComInterface<IDMS_Unfrag>, public TComInterfaceBase<IUnknown>
{
public:
  TCOMIDMS_UnfragT() {}
  TCOMIDMS_UnfragT(IDMS_Unfrag *intf, bool addRef = false) : TComInterface<IDMS_Unfrag>(intf, addRef) {}
  TCOMIDMS_UnfragT(const TCOMIDMS_UnfragT& src) : TComInterface<IDMS_Unfrag>(src) {}
  TCOMIDMS_UnfragT& operator=(const TCOMIDMS_UnfragT& src) { Bind(src, true); return *this;}

  HRESULT         __fastcall set_AuthCode(BSTR Param1/*[in]*/);
  HRESULT         __fastcall UnfragFile(BSTR sFileName/*[in]*/, long* nBytesSaved/*[out]*/);
  HRESULT         __fastcall RemovePreview(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall RemoveGeometry(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall get_TimeOut(int* nTimeOut/*[out,retval]*/);
  int             __fastcall get_TimeOut(void);
  HRESULT         __fastcall set_TimeOut(int nTimeOut/*[in]*/);
  HRESULT         __fastcall get_IsRegistered(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegistered(void);
  HRESULT         __fastcall set_AuthCodeNetwork(BSTR Value/*[in]*/);
  HRESULT         __fastcall get_IsRegisteredNetwork(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegisteredNetwork(void);

  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             TimeOut = {read = get_TimeOut, write = set_TimeOut};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   BSTR            AuthCodeNetwork = {write = set_AuthCodeNetwork};
  __property   int             IsRegisteredNetwork = {read = get_IsRegisteredNetwork};
};
typedef TCOMIDMS_UnfragT<IDMS_Unfrag> TCOMIDMS_Unfrag;

// *********************************************************************//
// DispIntf:  IDMS_Unfrag
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {0698F656-4EA6-11D4-8A0A-0020AFCC5695}
// *********************************************************************//
template<class T>
class IDMS_UnfragDispT : public TAutoDriver<IDMS_Unfrag>
{
public:
  IDMS_UnfragDispT(){}

  IDMS_UnfragDispT(IDMS_Unfrag *pintf)
  {
    TAutoDriver<IDMS_Unfrag>::Bind(pintf, false);
  }

  IDMS_UnfragDispT(IDMS_UnfragPtr pintf)
  {
    TAutoDriver<IDMS_Unfrag>::Bind(pintf, true);
  }

  IDMS_UnfragDispT& operator=(IDMS_Unfrag *pintf)
  {
    TAutoDriver<IDMS_Unfrag>::Bind(pintf, false);
    return *this;
  }

  IDMS_UnfragDispT& operator=(IDMS_UnfragPtr pintf)
  {
    TAutoDriver<IDMS_Unfrag>::Bind(pintf, true);
    return *this;
  }

  HRESULT BindDefault()
  {
    return OLECHECK(Bind(CLSID_DMS_Unfrag));
  }

  HRESULT BindRunning()
  {
    return BindToActive(CLSID_DMS_Unfrag);
  }

  HRESULT         __fastcall set_AuthCode(BSTR Param1/*[in]*/);
  HRESULT         __fastcall UnfragFile(BSTR sFileName/*[in]*/, long* nBytesSaved/*[out]*/);
  HRESULT         __fastcall RemovePreview(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall RemoveGeometry(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall get_TimeOut(int* nTimeOut/*[out,retval]*/);
  int             __fastcall get_TimeOut(void);
  HRESULT         __fastcall set_TimeOut(int nTimeOut/*[in]*/);
  HRESULT         __fastcall get_IsRegistered(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegistered(void);
  HRESULT         __fastcall set_AuthCodeNetwork(BSTR Value/*[in]*/);
  HRESULT         __fastcall get_IsRegisteredNetwork(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegisteredNetwork(void);

  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             TimeOut = {read = get_TimeOut, write = set_TimeOut};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   BSTR            AuthCodeNetwork = {write = set_AuthCodeNetwork};
  __property   int             IsRegisteredNetwork = {read = get_IsRegisteredNetwork};
};
typedef IDMS_UnfragDispT<IDMS_Unfrag> IDMS_UnfragDisp;

// *********************************************************************//
// SmartIntf: TCOMIDMS_Unfrag
// Interface: IDMS_Unfrag
// *********************************************************************//
template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::set_AuthCode(BSTR Param1/*[in]*/)
{
  return (*this)->set_AuthCode(Param1);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::UnfragFile(BSTR sFileName/*[in]*/, long* nBytesSaved/*[out]*/)
{
  return (*this)->UnfragFile(sFileName, nBytesSaved);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::RemovePreview(BSTR sFileName/*[in]*/)
{
  return (*this)->RemovePreview(sFileName);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::RemoveGeometry(BSTR sFileName/*[in]*/)
{
  return (*this)->RemoveGeometry(sFileName);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::get_TimeOut(int* nTimeOut/*[out,retval]*/)
{
  return (*this)->get_TimeOut(nTimeOut);
}

template <class T> int __fastcall
TCOMIDMS_UnfragT<T>::get_TimeOut(void)
{
  int nTimeOut;
  OLECHECK(this->get_TimeOut((int*)&nTimeOut));
  return nTimeOut;
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::set_TimeOut(int nTimeOut/*[in]*/)
{
  return (*this)->set_TimeOut(nTimeOut);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::get_IsRegistered(int* bIsRegistered/*[out,retval]*/)
{
  return (*this)->get_IsRegistered(bIsRegistered);
}

template <class T> int __fastcall
TCOMIDMS_UnfragT<T>::get_IsRegistered(void)
{
  int bIsRegistered;
  OLECHECK(this->get_IsRegistered((int*)&bIsRegistered));
  return bIsRegistered;
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::set_AuthCodeNetwork(BSTR Value/*[in]*/)
{
  return (*this)->set_AuthCodeNetwork(Value);
}

template <class T> HRESULT __fastcall
TCOMIDMS_UnfragT<T>::get_IsRegisteredNetwork(int* bIsRegistered/*[out,retval]*/)
{
  return (*this)->get_IsRegisteredNetwork(bIsRegistered);
}

template <class T> int __fastcall
TCOMIDMS_UnfragT<T>::get_IsRegisteredNetwork(void)
{
  int bIsRegistered;
  OLECHECK(this->get_IsRegisteredNetwork((int*)&bIsRegistered));
  return bIsRegistered;
}

// *********************************************************************//
// DispIntf:  IDMS_Unfrag
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {0698F656-4EA6-11D4-8A0A-0020AFCC5695}
// *********************************************************************//
template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::set_AuthCode(BSTR Param1/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("AuthCode"), DISPID(1));
  TAutoArgs<1> _args;
  _args[1] = Param1 /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::UnfragFile(BSTR sFileName/*[in]*/, long* nBytesSaved/*[out]*/)
{
  _TDispID _dispid(*this, OLETEXT("UnfragFile"), DISPID(2));
  TAutoArgs<2> _args;
  _args[1] = sFileName /*[VT_BSTR:0]*/;
  _args[2] = nBytesSaved /*[VT_I4:1]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::RemovePreview(BSTR sFileName/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("RemovePreview"), DISPID(3));
  TAutoArgs<1> _args;
  _args[1] = sFileName /*[VT_BSTR:0]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::RemoveGeometry(BSTR sFileName/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("RemoveGeometry"), DISPID(4));
  TAutoArgs<1> _args;
  _args[1] = sFileName /*[VT_BSTR:0]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::get_TimeOut(int* nTimeOut/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("TimeOut"), DISPID(5));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(nTimeOut /*[VT_INT:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> int __fastcall
IDMS_UnfragDispT<T>::get_TimeOut(void)
{
  int nTimeOut;
  this->get_TimeOut((int*)&nTimeOut);
  return nTimeOut;
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::set_TimeOut(int nTimeOut/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("TimeOut"), DISPID(5));
  TAutoArgs<1> _args;
  _args[1] = nTimeOut /*[VT_INT:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::get_IsRegistered(int* bIsRegistered/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IsRegistered"), DISPID(6));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(bIsRegistered /*[VT_INT:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> int __fastcall
IDMS_UnfragDispT<T>::get_IsRegistered(void)
{
  int bIsRegistered;
  this->get_IsRegistered((int*)&bIsRegistered);
  return bIsRegistered;
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::set_AuthCodeNetwork(BSTR Value/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("AuthCodeNetwork"), DISPID(7));
  TAutoArgs<1> _args;
  _args[1] = Value /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_UnfragDispT<T>::get_IsRegisteredNetwork(int* bIsRegistered/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IsRegisteredNetwork"), DISPID(8));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(bIsRegistered /*[VT_INT:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> int __fastcall
IDMS_UnfragDispT<T>::get_IsRegisteredNetwork(void)
{
  int bIsRegistered;
  this->get_IsRegisteredNetwork((int*)&bIsRegistered);
  return bIsRegistered;
}

// *********************************************************************//
// The following typedefs expose classes (named CoCoClassName) that       
// provide static Create() and CreateRemote(LPWSTR machineName) methods   
// for creating an instance of an exposed object. These functions can     
// be used by client wishing to automate CoClasses exposed by this        
// typelibrary.                                                           
// *********************************************************************//

// *********************************************************************//
// COCLASS DEFAULT INTERFACE CREATOR
// CoClass  : DMS_Unfrag
// Interface: TCOMIDMS_Unfrag
// *********************************************************************//
typedef TCoClassCreatorT<TCOMIDMS_Unfrag, IDMS_Unfrag, &CLSID_DMS_Unfrag, &IID_IDMS_Unfrag> CoDMS_Unfrag;
#endif  //   __TLB_NO_INTERFACE_WRAPPERS


};     // namespace Dms_unfg_tlb

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Dms_unfg_tlb;
#endif

#pragma option pop

#endif // __DMS_Unfg_TLB_h__
