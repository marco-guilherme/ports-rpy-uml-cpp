/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Client
//!	Generated Date	: Sat, 19, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Client.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Client.h"
//## package Default

//## class Client
//#[ ignore
Client::p1_C::p1_C() : _p_(0) {
    itsIPrint = NULL;
}

Client::p1_C::~p1_C() {
    cleanUpRelations();
}

IPrint* Client::p1_C::getItsIPrint() {
    return this;
}

IPrint* Client::p1_C::getOutBound() {
    return this;
}

void Client::p1_C::print() {
    
    if (itsIPrint != NULL) {
        itsIPrint->print();
    }
    
}

void Client::p1_C::setItsIPrint(IPrint* p_IPrint) {
    itsIPrint = p_IPrint;
}

void Client::p1_C::cleanUpRelations() {
    if(itsIPrint != NULL)
        {
            itsIPrint = NULL;
        }
}
//#]

Client::Client(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Client::~Client() {
    cancelTimeouts();
}

Client::p1_C* Client::getP1() const {
    return (Client::p1_C*) &p1;
}

Client::p1_C* Client::get_p1() const {
    return (Client::p1_C*) &p1;
}

bool Client::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Client::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Client::cancelTimeouts() {
    if(rootState_timeout != NULL)
        {
            rootState_timeout->cancel();
            rootState_timeout = NULL;
        }
}

bool Client::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Client::rootState_entDef() {
    {
        rootState_subState = Request;
        rootState_active = Request;
        rootState_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus Client::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == Request)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            if(rootState_timeout != NULL)
                                {
                                    rootState_timeout->cancel();
                                    rootState_timeout = NULL;
                                }
                            //#[ transition 0 
                            OUT_PORT(p1) -> print();
                            //#]
                            rootState_subState = Request;
                            rootState_active = Request;
                            rootState_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Client.cpp
*********************************************************************/
