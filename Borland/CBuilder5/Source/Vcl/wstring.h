//    wstring.h - support for delphi widestrings in c++
//                (WideString)
// $Revision:   1.12  $
//    copyright (c) 1997, 1999 Borland International

#ifndef WSTRING_H
#define WSTRING_H

#pragma delphiheader begin

#include <wtypes.h>
#include <sysmac.h>
#include <dstring.h>

namespace System
{
  // NOTE: WideString uses BSTRs as its underlying implementation (i.e. SysAlloc/FreeString etc.)
  //
  class RTL_DELPHIRETURN WideString
  {
    friend WideString __fastcall PACKAGE operator +(const wchar_t*, const WideString& rhs); //!! not implemented?
  public:
    // Constructors
    //
    __fastcall WideString(): Data(0) {}
    __fastcall WideString(const char* src);
    __fastcall WideString(const WideString& src);
    __fastcall WideString(const AnsiString& src);
    __fastcall WideString(const wchar_t* src, int len);
    __fastcall WideString(const wchar_t* src);
    __fastcall WideString(const wchar_t  src);

    // Destructor
    //
    __fastcall ~WideString();

    // Assignments
    //
    WideString& __fastcall operator =(const WideString& rhs);
    WideString& __fastcall operator =(BSTR              rhs);
    WideString& __fastcall operator =(const char*       rhs);
    WideString& __fastcall operator =(const AnsiString& rhs);
    WideString& __fastcall operator +=(const WideString& rhs);

    // Comparisons
    //
    bool __fastcall operator ==(const WideString& rhs) const;
    bool __fastcall operator !=(const WideString& rhs) const;
    bool __fastcall operator < (const WideString& rhs) const;
    bool __fastcall operator > (const WideString& rhs) const;
    bool __fastcall operator <=(const WideString& rhs) const;
    bool __fastcall operator >=(const WideString& rhs) const;

    // Index
    //
    wchar_t& __fastcall operator [](const int idx) { return Data[idx-1]; }

    // Concatenation
    //
    WideString __fastcall operator +(const WideString& rhs) const;

    // Access Data
    //
    BSTR __fastcall c_bstr() const { return Data; }
    operator BSTR() const          { return Data; }

    // Access internal data (Be careful when using!!)
    //
    BSTR* __fastcall operator& ()
    {
      return &Data;
    }

    // Attach/Detach from BSTR, Empty Object
    //
    void __fastcall Attach(BSTR src);
    BSTR __fastcall Detach();
    void __fastcall Empty();

    // Retrieve copy of data
    //
    static wchar_t* __fastcall Copy(wchar_t* src);

    wchar_t* __fastcall Copy() const
    {
      return Copy(Data);
    }

    // Query attributes of object
    //
    int  __fastcall Length() const;
    bool __fastcall IsEmpty() const;

    // Modify string
    //
    void __fastcall Insert(const WideString& str, int index);
    void __fastcall Delete(int index, int count);
    void __fastcall SetLength(int newLength);

    int  __fastcall Pos(const WideString& subStr) const;
    WideString __fastcall SubString(int index, int count) const;

  private:
    wchar_t *Data;
  };
}
using namespace System;
#pragma delphiheader end.

#endif




