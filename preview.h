#include "rpc.h"
#include "rpcndr.h"
#include "windows.h"
#include "ole2.h"

#ifndef __IPreviewHandler_INTERFACE_DEFINED__
#define __IPreviewHandler_INTERFACE_DEFINED__

/* interface IPreviewHandler */
/* [uuid][object] */ 

#include "prtypes.h"

EXTERN_C const IID IID_IPreviewHandler;

    MIDL_INTERFACE("8895b1c6-b41f-4c1c-a562-0d564250836f")
    IPreviewHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWindow( 
            /* [in] */ HWND hwnd,
            /* [in] */ CRECTPTR prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRect( 
            /* [in] */ CRECTPTR prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoPreview( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFocus( 
            /* [out] */ HWNDPTR phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ MSGPTR pmsg) = 0;
        
    };
    
#endif
