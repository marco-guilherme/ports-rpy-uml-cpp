/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Server
//!	Generated Date	: Sat, 19, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Server.h
*********************************************************************/

#ifndef Server_H
#define Server_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## class Server
#include "IPrint.h"
//## package Default

//## class Server
class Server : public IPrint {
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
        void connectServer(Server* part);
        
        //## auto_generated
        IPrint* getItsIPrint();
        
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
    Server();
    
    //## auto_generated
    virtual ~Server();
    
    ////    Operations    ////
    
    //## operation print()
    virtual void print();
    
    ////    Additional operations    ////
    
    //## auto_generated
    p1_C* getP1() const;
    
    //## auto_generated
    p1_C* get_p1() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_C p1;
//#]
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Server.h
*********************************************************************/
