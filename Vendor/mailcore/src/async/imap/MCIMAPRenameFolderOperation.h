//
//  MCIMAPRenameFolderOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/12/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_MCIMAPRENAMEFOLDEROPERATION_H_

#define __MAILCORE_MCIMAPRENAMEFOLDEROPERATION_H_

#include <MailCore/MCIMAPOperation.h>

#ifdef __cplusplus

namespace mailcore {
    
    class IMAPRenameFolderOperation : public IMAPOperation {
    public:
        IMAPRenameFolderOperation();
        ~IMAPRenameFolderOperation();
        
        virtual void setOtherName(String * otherName);
        virtual String * otherName();
        
    public: // subclass behavior
        virtual void main();
        
    private:
        String * mOtherName;
        
    };
}

#endif

#endif