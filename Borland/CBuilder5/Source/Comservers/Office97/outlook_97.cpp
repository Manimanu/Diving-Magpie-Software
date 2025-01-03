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

// C++ TLBWRTR : $Revision:   1.0.2.1  $
// File generated on 1/24/2000 9:49:48 AM from Type Library described below.

// ************************************************************************ //
// Type Lib: g:\rampage\typelib\TypeLibraries\MSOUTL8.olb (1)
// IID\LCID: {00062FFF-0000-0000-C000-000000000046}\0
// Helpfile: D:\Program Files\Microsoft Office\Office\VBAOUTL.HLP
// DepndLst: 
//   (1) v1.0 stdole, (C:\WINNT\System32\stdole32.tlb)
//   (2) v2.0 Office, (D:\Program Files\Microsoft Office\Office\MSO97.DLL)
//   (3) v2.0 MSForms, (C:\WINNT\System32\FM20.DLL)
// Errors:
//   Hint: Symbol 'Application' renamed to 'OutlookApplication'
//   Hint: Symbol 'Application' renamed to 'OutlookApplication'
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include "Outlook_97.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Outlook_97
{


// *********************************************************************//
// GUIDS declared in the TypeLibrary                                      
// *********************************************************************//
const GUID LIBID_Outlook = {0x00062FFF, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IItemEvents = {0x0006313A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DItemEvents = {0x0006303A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IAction = {0x00063143, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Action = {0x00063043, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IActions = {0x0006313E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Actions = {0x0006303E, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IApplication = {0x00063101, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DApplication = {0x00063001, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_OutlookApplication = {0x0006F033, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IAppointmentItem = {0x00063133, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DAppointmentItem = {0x00063033, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_AppointmentItem = {0x00061030, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IAttachment = {0x00063107, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Attachment = {0x00063007, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IAttachments = {0x0006313C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Attachments = {0x0006303C, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IContactItem = {0x00063121, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DContactItem = {0x00063021, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_ContactItem = {0x00061031, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IExplorer = {0x00063103, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Explorer = {0x00063003, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IFolders = {0x00063140, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Folders = {0x00063040, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IFormDescription = {0x00063146, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_FormDescription = {0x00063046, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IInspector = {0x00063105, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Inspector = {0x00063005, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IItems = {0x00063141, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Items = {0x00063041, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IJournalItem = {0x00063122, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DJournalItem = {0x00063022, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_JournalItem = {0x00061037, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMailItem = {0x00063134, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMailItem = {0x00063034, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_MailItem = {0x00061033, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMAPIFolder = {0x00063106, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_MAPIFolder = {0x00063006, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMeetingCanceledItem = {0x00063128, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMeetingCanceledItem = {0x00063028, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__MeetingCanceledItem = {0x00061040, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMeetingRequestAcceptedItem = {0x00063130, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMeetingRequestAcceptedItem = {0x00063030, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__MeetingRequestAcceptedItem = {0x00061042, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMeetingRequestDeclinedItem = {0x00063131, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMeetingRequestDeclinedItem = {0x00063031, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__MeetingRequestDeclinedItem = {0x00061043, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMeetingRequestItem = {0x00063129, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMeetingRequestItem = {0x00063029, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_MeetingRequestItem = {0x00061041, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IMeetingRequestTentativeItem = {0x00063132, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DMeetingRequestTentativeItem = {0x00063032, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__MeetingRequestTentativeItem = {0x00061044, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__INameSpace = {0x00063102, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_NameSpace = {0x00063002, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__INoteItem = {0x00063125, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DNoteItem = {0x00063025, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_NoteItem = {0x00061034, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IOfficeDocumentItem = {0x00063120, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DOfficeDocumentItem = {0x00063020, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__OfficeDocumentItem = {0x00061061, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IPages = {0x0006313F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Pages = {0x0006303F, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IPostItem = {0x00063124, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DPostItem = {0x00063024, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_PostItem = {0x0006103A, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IRecipient = {0x00063145, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Recipient = {0x00063045, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IRecipients = {0x0006313B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_Recipients = {0x0006303B, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IRecurrencePattern = {0x00063144, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_RecurrencePattern = {0x00063044, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IRemoteItem = {0x00063123, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DRemoteItem = {0x00063023, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_RemoteItem = {0x00061060, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IReportItem = {0x00063126, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DReportItem = {0x00063026, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_ReportItem = {0x00061035, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ITaskItem = {0x00063135, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DTaskItem = {0x00063035, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_TaskItem = {0x00061032, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ITaskRequestAcceptItem = {0x00063138, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DTaskRequestAcceptItem = {0x00063038, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__TaskRequestAcceptItem = {0x00061052, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ITaskRequestDeclineItem = {0x00063139, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DTaskRequestDeclineItem = {0x00063039, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__TaskRequestDeclineItem = {0x00061053, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ITaskRequestItem = {0x00063136, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DTaskRequestItem = {0x00063036, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID_TaskRequestItem = {0x00061050, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__ITaskRequestUpdateItem = {0x00063137, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DTaskRequestUpdateItem = {0x00063037, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID CLSID__TaskRequestUpdateItem = {0x00061051, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IUserProperties = {0x0006313D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_UserProperties = {0x0006303D, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IUserProperty = {0x00063142, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID_UserProperty = {0x00063042, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IRecipientControl = {0xD87E7E16, 0x6897, 0x11CE,{ 0xA6, 0xC0, 0x00, 0xAA, 0x00, 0x60, 0x8F, 0xAA} };
const GUID DIID__DRecipientControl = {0x0006F025, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DRecipientControlEvents = {0xD87E7E17, 0x6897, 0x11CE,{ 0xA6, 0xC0, 0x00, 0xAA, 0x00, 0x60, 0x8F, 0xAA} };
const GUID CLSID__RecipientControl = {0x0006F023, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID IID__IDocSiteControl = {0x43507DD0, 0x811D, 0x11CE,{ 0xB5, 0x65, 0x00, 0xAA, 0x00, 0x60, 0x8F, 0xAA} };
const GUID DIID__DDocSiteControl = {0x0006F026, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };
const GUID DIID__DDocSiteControlEvents = {0x50BB9B50, 0x811D, 0x11CE,{ 0xB5, 0x65, 0x00, 0xAA, 0x00, 0x60, 0x8F, 0xAA} };
const GUID CLSID__DocSiteControl = {0x0006F024, 0x0000, 0x0000,{ 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46} };

};     // namespace Outlook_97
