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
// File generated on 9/11/00 6:51:22 PM from Type Library described below.

// ************************************************************************ //
// Type Lib: C:\Wombat\Pro\DMS_Common\DMS_Comm.tlb (1)
// IID\LCID: {FC99C7B2-4A88-11D4-8A03-0020AFCC5695}\0
// Helpfile: 
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINNT\System32\Stdole2.tlb)
//   (2) v4.0 StdVCL, (C:\WINNT\System32\STDVCL40.DLL)
// ************************************************************************ //
#ifndef   __DMS_Comm_TLB_h__
#define   __DMS_Comm_TLB_h__

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

namespace Dms_comm_tlb
{

// *********************************************************************//
// HelpString: DMS_Comm Library
// Version:    1.0
// *********************************************************************//


// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLSID_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
extern __declspec (package) const GUID LIBID_DMS_Comm;
extern __declspec (package) const GUID IID_IDMS_Common;
extern __declspec (package) const GUID CLSID_DMS_Common;

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
interface DECLSPEC_UUID("{FC99C7B3-4A88-11D4-8A03-0020AFCC5695}") IDMS_Common;
typedef TComInterface<IDMS_Common, &IID_IDMS_Common> IDMS_CommonPtr;

// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
//                                                                        
// The LIBID_OF_ macro(s) map a LIBID_OF_CoClassName to the GUID of this  
// TypeLibrary. It simplifies the updating of macros when CoClass name    
// change.                                                                
// *********************************************************************//
typedef IDMS_Common DMS_Common;
typedef IDMS_CommonPtr DMS_CommonPtr;

#define LIBID_OF_DMS_Common (&LIBID_DMS_Comm)
// *********************************************************************//
// Interface: IDMS_Common
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {FC99C7B3-4A88-11D4-8A03-0020AFCC5695}
// *********************************************************************//
interface IDMS_Common  : public IDispatch
{
public:
  virtual HRESULT STDMETHODCALLTYPE About(void) = 0; // [1]
  virtual HRESULT STDMETHODCALLTYPE set_Icon(long Param1/*[in]*/) = 0; // [2]
  virtual HRESULT STDMETHODCALLTYPE set_ProductName(BSTR sProductName/*[in]*/) = 0; // [3]
  virtual HRESULT STDMETHODCALLTYPE get_ProductName(BSTR* sProductName/*[out,retval]*/) = 0; // [3]
  virtual HRESULT STDMETHODCALLTYPE set_ProductCode(BSTR sProductCode/*[in]*/) = 0; // [4]
  virtual HRESULT STDMETHODCALLTYPE get_ProductCode(BSTR* sProductCode/*[out,retval]*/) = 0; // [4]
  virtual HRESULT STDMETHODCALLTYPE set_AuthCode(BSTR Param1/*[in]*/) = 0; // [5]
  virtual HRESULT STDMETHODCALLTYPE get_IsRegistered(int* bIsRegistered/*[out,retval]*/) = 0; // [6]
  virtual HRESULT STDMETHODCALLTYPE Register(void) = 0; // [7]
  virtual HRESULT STDMETHODCALLTYPE IsSolidWorksFile(BSTR sFileName/*[in]*/, 
                                                     int* bIsSolidWorksFile/*[out,retval]*/) = 0; // [8]
  virtual HRESULT STDMETHODCALLTYPE get_Commercial(int* Value/*[out,retval]*/) = 0; // [9]
  virtual HRESULT STDMETHODCALLTYPE set_Commercial(int Value/*[in]*/) = 0; // [9]
  virtual HRESULT STDMETHODCALLTYPE IsSolidWorksRunning(int* bIsSolidWorksRunning/*[out,retval]*/) = 0; // [10]
  virtual HRESULT STDMETHODCALLTYPE GetMachineID(BSTR* sMachineID/*[out,retval]*/) = 0; // [11]
  virtual HRESULT STDMETHODCALLTYPE get_IniFileName(BSTR* Value/*[out,retval]*/) = 0; // [12]
  virtual HRESULT STDMETHODCALLTYPE set_IniFileName(BSTR Value/*[in]*/) = 0; // [12]

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)

  BSTR __fastcall get_ProductName(void)
  {
    BSTR sProductName = 0;
    OLECHECK(this->get_ProductName((BSTR*)&sProductName));
    return sProductName;
  }

  BSTR __fastcall get_ProductCode(void)
  {
    BSTR sProductCode = 0;
    OLECHECK(this->get_ProductCode((BSTR*)&sProductCode));
    return sProductCode;
  }

  int __fastcall get_IsRegistered(void)
  {
    int bIsRegistered;
    OLECHECK(this->get_IsRegistered((int*)&bIsRegistered));
    return bIsRegistered;
  }

  int __fastcall IsSolidWorksFile(BSTR sFileName/*[in]*/)
  {
    int bIsSolidWorksFile;
    OLECHECK(this->IsSolidWorksFile(sFileName, (int*)&bIsSolidWorksFile));
    return bIsSolidWorksFile;
  }

  int __fastcall get_Commercial(void)
  {
    int Value;
    OLECHECK(this->get_Commercial((int*)&Value));
    return Value;
  }

  int __fastcall IsSolidWorksRunning(void)
  {
    int bIsSolidWorksRunning;
    OLECHECK(this->IsSolidWorksRunning((int*)&bIsSolidWorksRunning));
    return bIsSolidWorksRunning;
  }

  BSTR __fastcall GetMachineID(void)
  {
    BSTR sMachineID = 0;
    OLECHECK(this->GetMachineID((BSTR*)&sMachineID));
    return sMachineID;
  }

  BSTR __fastcall get_IniFileName(void)
  {
    BSTR Value = 0;
    OLECHECK(this->get_IniFileName((BSTR*)&Value));
    return Value;
  }


  __property   long            Icon = {write = set_Icon};
  __property   BSTR            ProductName = {read = get_ProductName, write = set_ProductName};
  __property   BSTR            ProductCode = {read = get_ProductCode, write = set_ProductCode};
  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   int             Commercial = {read = get_Commercial, write = set_Commercial};
  __property   BSTR            IniFileName = {read = get_IniFileName, write = set_IniFileName};

#endif //   __TLB_NO_INTERFACE_WRAPPERS

};

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)
// *********************************************************************//
// SmartIntf: TCOMIDMS_Common
// Interface: IDMS_Common
// *********************************************************************//
template <class T /* IDMS_Common */ >
class TCOMIDMS_CommonT : public TComInterface<IDMS_Common>, public TComInterfaceBase<IUnknown>
{
public:
  TCOMIDMS_CommonT() {}
  TCOMIDMS_CommonT(IDMS_Common *intf, bool addRef = false) : TComInterface<IDMS_Common>(intf, addRef) {}
  TCOMIDMS_CommonT(const TCOMIDMS_CommonT& src) : TComInterface<IDMS_Common>(src) {}
  TCOMIDMS_CommonT& operator=(const TCOMIDMS_CommonT& src) { Bind(src, true); return *this;}

  HRESULT         __fastcall About(void);
  HRESULT         __fastcall set_Icon(long Param1/*[in]*/);
  HRESULT         __fastcall set_ProductName(BSTR sProductName/*[in]*/);
  HRESULT         __fastcall get_ProductName(BSTR* sProductName/*[out,retval]*/);
  BSTR            __fastcall get_ProductName(void);
  HRESULT         __fastcall set_ProductCode(BSTR sProductCode/*[in]*/);
  HRESULT         __fastcall get_ProductCode(BSTR* sProductCode/*[out,retval]*/);
  BSTR            __fastcall get_ProductCode(void);
  HRESULT         __fastcall set_AuthCode(BSTR Param1/*[in]*/);
  HRESULT         __fastcall get_IsRegistered(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegistered(void);
  HRESULT         __fastcall Register(void);
  HRESULT         __fastcall IsSolidWorksFile(BSTR sFileName/*[in]*/, 
                                              int* bIsSolidWorksFile/*[out,retval]*/);
  int             __fastcall IsSolidWorksFile(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall get_Commercial(int* Value/*[out,retval]*/);
  int             __fastcall get_Commercial(void);
  HRESULT         __fastcall set_Commercial(int Value/*[in]*/);
  HRESULT         __fastcall IsSolidWorksRunning(int* bIsSolidWorksRunning/*[out,retval]*/);
  int             __fastcall IsSolidWorksRunning(void);
  HRESULT         __fastcall GetMachineID(BSTR* sMachineID/*[out,retval]*/);
  BSTR            __fastcall GetMachineID(void);
  HRESULT         __fastcall get_IniFileName(BSTR* Value/*[out,retval]*/);
  BSTR            __fastcall get_IniFileName(void);
  HRESULT         __fastcall set_IniFileName(BSTR Value/*[in]*/);

  __property   long            Icon = {write = set_Icon};
  __property   BSTR            ProductName = {read = get_ProductName, write = set_ProductName};
  __property   BSTR            ProductCode = {read = get_ProductCode, write = set_ProductCode};
  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   int             Commercial = {read = get_Commercial, write = set_Commercial};
  __property   BSTR            IniFileName = {read = get_IniFileName, write = set_IniFileName};
};
typedef TCOMIDMS_CommonT<IDMS_Common> TCOMIDMS_Common;

// *********************************************************************//
// DispIntf:  IDMS_Common
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {FC99C7B3-4A88-11D4-8A03-0020AFCC5695}
// *********************************************************************//
template<class T>
class IDMS_CommonDispT : public TAutoDriver<IDMS_Common>
{
public:
  IDMS_CommonDispT(){}

  IDMS_CommonDispT(IDMS_Common *pintf)
  {
    TAutoDriver<IDMS_Common>::Bind(pintf, false);
  }

  IDMS_CommonDispT(IDMS_CommonPtr pintf)
  {
    TAutoDriver<IDMS_Common>::Bind(pintf, true);
  }

  IDMS_CommonDispT& operator=(IDMS_Common *pintf)
  {
    TAutoDriver<IDMS_Common>::Bind(pintf, false);
    return *this;
  }

  IDMS_CommonDispT& operator=(IDMS_CommonPtr pintf)
  {
    TAutoDriver<IDMS_Common>::Bind(pintf, true);
    return *this;
  }

  HRESULT BindDefault()
  {
    return OLECHECK(Bind(CLSID_DMS_Common));
  }

  HRESULT BindRunning()
  {
    return BindToActive(CLSID_DMS_Common);
  }

  HRESULT         __fastcall About();
  HRESULT         __fastcall set_Icon(long Param1/*[in]*/);
  HRESULT         __fastcall set_ProductName(BSTR sProductName/*[in]*/);
  HRESULT         __fastcall get_ProductName(BSTR* sProductName/*[out,retval]*/);
  BSTR            __fastcall get_ProductName(void);
  HRESULT         __fastcall set_ProductCode(BSTR sProductCode/*[in]*/);
  HRESULT         __fastcall get_ProductCode(BSTR* sProductCode/*[out,retval]*/);
  BSTR            __fastcall get_ProductCode(void);
  HRESULT         __fastcall set_AuthCode(BSTR Param1/*[in]*/);
  HRESULT         __fastcall get_IsRegistered(int* bIsRegistered/*[out,retval]*/);
  int             __fastcall get_IsRegistered(void);
  HRESULT         __fastcall Register();
  HRESULT         __fastcall IsSolidWorksFile(BSTR sFileName/*[in]*/, 
                                              int* bIsSolidWorksFile/*[out,retval]*/);
  int             __fastcall IsSolidWorksFile(BSTR sFileName/*[in]*/);
  HRESULT         __fastcall get_Commercial(int* Value/*[out,retval]*/);
  int             __fastcall get_Commercial(void);
  HRESULT         __fastcall set_Commercial(int Value/*[in]*/);
  HRESULT         __fastcall IsSolidWorksRunning(int* bIsSolidWorksRunning/*[out,retval]*/);
  int             __fastcall IsSolidWorksRunning(void);
  HRESULT         __fastcall GetMachineID(BSTR* sMachineID/*[out,retval]*/);
  BSTR            __fastcall GetMachineID(void);
  HRESULT         __fastcall get_IniFileName(BSTR* Value/*[out,retval]*/);
  BSTR            __fastcall get_IniFileName(void);
  HRESULT         __fastcall set_IniFileName(BSTR Value/*[in]*/);

  __property   long            Icon = {write = set_Icon};
  __property   BSTR            ProductName = {read = get_ProductName, write = set_ProductName};
  __property   BSTR            ProductCode = {read = get_ProductCode, write = set_ProductCode};
  __property   BSTR            AuthCode = {write = set_AuthCode};
  __property   int             IsRegistered = {read = get_IsRegistered};
  __property   int             Commercial = {read = get_Commercial, write = set_Commercial};
  __property   BSTR            IniFileName = {read = get_IniFileName, write = set_IniFileName};
};
typedef IDMS_CommonDispT<IDMS_Common> IDMS_CommonDisp;

// *********************************************************************//
// SmartIntf: TCOMIDMS_Common
// Interface: IDMS_Common
// *********************************************************************//
template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::About(void)
{
  return (*this)->About();
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_Icon(long Param1/*[in]*/)
{
  return (*this)->set_Icon(Param1);
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_ProductName(BSTR sProductName/*[in]*/)
{
  return (*this)->set_ProductName(sProductName);
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::get_ProductName(BSTR* sProductName/*[out,retval]*/)
{
  return (*this)->get_ProductName(sProductName);
}

template <class T> BSTR __fastcall
TCOMIDMS_CommonT<T>::get_ProductName(void)
{
  BSTR sProductName = 0;
  OLECHECK(this->get_ProductName((BSTR*)&sProductName));
  return sProductName;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_ProductCode(BSTR sProductCode/*[in]*/)
{
  return (*this)->set_ProductCode(sProductCode);
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::get_ProductCode(BSTR* sProductCode/*[out,retval]*/)
{
  return (*this)->get_ProductCode(sProductCode);
}

template <class T> BSTR __fastcall
TCOMIDMS_CommonT<T>::get_ProductCode(void)
{
  BSTR sProductCode = 0;
  OLECHECK(this->get_ProductCode((BSTR*)&sProductCode));
  return sProductCode;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_AuthCode(BSTR Param1/*[in]*/)
{
  return (*this)->set_AuthCode(Param1);
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::get_IsRegistered(int* bIsRegistered/*[out,retval]*/)
{
  return (*this)->get_IsRegistered(bIsRegistered);
}

template <class T> int __fastcall
TCOMIDMS_CommonT<T>::get_IsRegistered(void)
{
  int bIsRegistered;
  OLECHECK(this->get_IsRegistered((int*)&bIsRegistered));
  return bIsRegistered;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::Register(void)
{
  return (*this)->Register();
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::IsSolidWorksFile(BSTR sFileName/*[in]*/, int* bIsSolidWorksFile/*[out,retval]*/)
{
  return (*this)->IsSolidWorksFile(sFileName, bIsSolidWorksFile);
}

template <class T> int __fastcall
TCOMIDMS_CommonT<T>::IsSolidWorksFile(BSTR sFileName/*[in]*/)
{
  int bIsSolidWorksFile;
  OLECHECK(this->IsSolidWorksFile(sFileName, (int*)&bIsSolidWorksFile));
  return bIsSolidWorksFile;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::get_Commercial(int* Value/*[out,retval]*/)
{
  return (*this)->get_Commercial(Value);
}

template <class T> int __fastcall
TCOMIDMS_CommonT<T>::get_Commercial(void)
{
  int Value;
  OLECHECK(this->get_Commercial((int*)&Value));
  return Value;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_Commercial(int Value/*[in]*/)
{
  return (*this)->set_Commercial(Value);
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::IsSolidWorksRunning(int* bIsSolidWorksRunning/*[out,retval]*/)
{
  return (*this)->IsSolidWorksRunning(bIsSolidWorksRunning);
}

template <class T> int __fastcall
TCOMIDMS_CommonT<T>::IsSolidWorksRunning(void)
{
  int bIsSolidWorksRunning;
  OLECHECK(this->IsSolidWorksRunning((int*)&bIsSolidWorksRunning));
  return bIsSolidWorksRunning;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::GetMachineID(BSTR* sMachineID/*[out,retval]*/)
{
  return (*this)->GetMachineID(sMachineID);
}

template <class T> BSTR __fastcall
TCOMIDMS_CommonT<T>::GetMachineID(void)
{
  BSTR sMachineID = 0;
  OLECHECK(this->GetMachineID((BSTR*)&sMachineID));
  return sMachineID;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::get_IniFileName(BSTR* Value/*[out,retval]*/)
{
  return (*this)->get_IniFileName(Value);
}

template <class T> BSTR __fastcall
TCOMIDMS_CommonT<T>::get_IniFileName(void)
{
  BSTR Value = 0;
  OLECHECK(this->get_IniFileName((BSTR*)&Value));
  return Value;
}

template <class T> HRESULT __fastcall
TCOMIDMS_CommonT<T>::set_IniFileName(BSTR Value/*[in]*/)
{
  return (*this)->set_IniFileName(Value);
}

// *********************************************************************//
// DispIntf:  IDMS_Common
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {FC99C7B3-4A88-11D4-8A03-0020AFCC5695}
// *********************************************************************//
template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::About()
{
  _TDispID _dispid(*this, OLETEXT("About"), DISPID(1));
  return OleFunction(_dispid);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_Icon(long Param1/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("Icon"), DISPID(2));
  TAutoArgs<1> _args;
  _args[1] = Param1 /*[VT_I4:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_ProductName(BSTR sProductName/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("ProductName"), DISPID(3));
  TAutoArgs<1> _args;
  _args[1] = sProductName /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::get_ProductName(BSTR* sProductName/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("ProductName"), DISPID(3));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(sProductName /*[VT_BSTR:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> BSTR __fastcall
IDMS_CommonDispT<T>::get_ProductName(void)
{
  BSTR sProductName;
  this->get_ProductName((BSTR*)&sProductName);
  return sProductName;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_ProductCode(BSTR sProductCode/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("ProductCode"), DISPID(4));
  TAutoArgs<1> _args;
  _args[1] = sProductCode /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::get_ProductCode(BSTR* sProductCode/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("ProductCode"), DISPID(4));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(sProductCode /*[VT_BSTR:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> BSTR __fastcall
IDMS_CommonDispT<T>::get_ProductCode(void)
{
  BSTR sProductCode;
  this->get_ProductCode((BSTR*)&sProductCode);
  return sProductCode;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_AuthCode(BSTR Param1/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("AuthCode"), DISPID(5));
  TAutoArgs<1> _args;
  _args[1] = Param1 /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::get_IsRegistered(int* bIsRegistered/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IsRegistered"), DISPID(6));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(bIsRegistered /*[VT_INT:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> int __fastcall
IDMS_CommonDispT<T>::get_IsRegistered(void)
{
  int bIsRegistered;
  this->get_IsRegistered((int*)&bIsRegistered);
  return bIsRegistered;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::Register()
{
  _TDispID _dispid(*this, OLETEXT("Register"), DISPID(7));
  return OleFunction(_dispid);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::IsSolidWorksFile(BSTR sFileName/*[in]*/, int* bIsSolidWorksFile/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IsSolidWorksFile"), DISPID(8));
  TAutoArgs<1> _args;
  _args[1] = sFileName /*[VT_BSTR:0]*/;
  return OutRetValSetterPtr(bIsSolidWorksFile /*[VT_INT:1]*/, _args, OleFunction(_dispid, _args));
}

template <class T> int __fastcall
IDMS_CommonDispT<T>::IsSolidWorksFile(BSTR sFileName/*[in]*/)
{
  int bIsSolidWorksFile;
  this->IsSolidWorksFile(sFileName, (int*)&bIsSolidWorksFile);
  return bIsSolidWorksFile;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::get_Commercial(int* Value/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("Commercial"), DISPID(9));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(Value /*[VT_INT:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> int __fastcall
IDMS_CommonDispT<T>::get_Commercial(void)
{
  int Value;
  this->get_Commercial((int*)&Value);
  return Value;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_Commercial(int Value/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("Commercial"), DISPID(9));
  TAutoArgs<1> _args;
  _args[1] = Value /*[VT_INT:0]*/;
  return OlePropertyPut(_dispid, _args);
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::IsSolidWorksRunning(int* bIsSolidWorksRunning/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IsSolidWorksRunning"), DISPID(10));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(bIsSolidWorksRunning /*[VT_INT:1]*/, _args, OleFunction(_dispid, _args));
}

template <class T> int __fastcall
IDMS_CommonDispT<T>::IsSolidWorksRunning(void)
{
  int bIsSolidWorksRunning;
  this->IsSolidWorksRunning((int*)&bIsSolidWorksRunning);
  return bIsSolidWorksRunning;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::GetMachineID(BSTR* sMachineID/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("GetMachineID"), DISPID(11));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(sMachineID /*[VT_BSTR:1]*/, _args, OleFunction(_dispid, _args));
}

template <class T> BSTR __fastcall
IDMS_CommonDispT<T>::GetMachineID(void)
{
  BSTR sMachineID;
  this->GetMachineID((BSTR*)&sMachineID);
  return sMachineID;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::get_IniFileName(BSTR* Value/*[out,retval]*/)
{
  _TDispID _dispid(*this, OLETEXT("IniFileName"), DISPID(12));
  TAutoArgs<0> _args;
  return OutRetValSetterPtr(Value /*[VT_BSTR:1]*/, _args, OlePropertyGet(_dispid, _args));
}

template <class T> BSTR __fastcall
IDMS_CommonDispT<T>::get_IniFileName(void)
{
  BSTR Value;
  this->get_IniFileName((BSTR*)&Value);
  return Value;
}

template <class T> HRESULT __fastcall
IDMS_CommonDispT<T>::set_IniFileName(BSTR Value/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("IniFileName"), DISPID(12));
  TAutoArgs<1> _args;
  _args[1] = Value /*[VT_BSTR:0]*/;
  return OlePropertyPut(_dispid, _args);
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
// CoClass  : DMS_Common
// Interface: TCOMIDMS_Common
// *********************************************************************//
typedef TCoClassCreatorT<TCOMIDMS_Common, IDMS_Common, &CLSID_DMS_Common, &IID_IDMS_Common> CoDMS_Common;
#endif  //   __TLB_NO_INTERFACE_WRAPPERS


};     // namespace Dms_comm_tlb

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Dms_comm_tlb;
#endif

#pragma option pop

#endif // __DMS_Comm_TLB_h__