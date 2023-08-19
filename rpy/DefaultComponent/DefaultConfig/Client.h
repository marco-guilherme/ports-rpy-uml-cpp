/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Client
//!	Generated Date	: Sat, 19, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Client.h
*********************************************************************/

#ifndef Client_H
#define Client_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class p1_C
#include "IPrint.h"
//## package Default

//## class Client
class Client : public OMReactive {
public :

//#[ ignore
    //## package Default
    class p1_C : public IPrint {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p1_C();
        
        //## auto_generated
        virtual ~p1_C();
        
        ////    Operations    ////
        
        //## auto_generated
        IPrint* getItsIPrint();
        
        //## auto_generated
        IPrint* getOutBound();
        
        //## auto_generated
        void print();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIPrint(IPrint* p_IPrint);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IPrint* itsIPrint;		//## link itsIPrint
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Client(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Client();
    
    ////    Additional operations    ////
    
    //## auto_generated
    p1_C* getP1() const;
    
    //## auto_generated
    p1_C* get_p1() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_C p1;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Request:
    //## statechart_method
    inline bool Request_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Client_Enum {
        OMNonState = 0,
        Request = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Client::rootState_IN() const {
    return true;
}

inline bool Client::Request_IN() const {
    return rootState_subState == Request;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Client.h
*********************************************************************/
