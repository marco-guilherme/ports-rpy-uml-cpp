/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sat, 19, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## classInstance itsClient
#include "Client.h"
//## classInstance itsServer
#include "Server.h"
//## auto_generated
#include "IPrint.h"
//## package Default


//## classInstance itsClient
Client itsClient;

//## classInstance itsServer
Server itsServer;

void Default_initRelations() {
    {
        {
            itsClient.setShouldDelete(false);
        }
    }
    {
        
        itsClient.get_p1()->setItsIPrint(itsServer.get_p1()->getItsIPrint());
        
    }
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsClient.startBehavior();
    return done;
}

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
