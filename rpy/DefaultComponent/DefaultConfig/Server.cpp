/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Server
//!	Generated Date	: Sat, 19, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Server.cpp
*********************************************************************/

//## auto_generated
#include "Server.h"
//## package Default

//## class Server
//#[ ignore
Server::p1_C::p1_C() : _p_(0) {
    itsIPrint = NULL;
}

Server::p1_C::~p1_C() {
    cleanUpRelations();
}

void Server::p1_C::connectServer(Server* part) {
    setItsIPrint(part);
    
}

IPrint* Server::p1_C::getItsIPrint() {
    return this;
}

void Server::p1_C::print() {
    
    if (itsIPrint != NULL) {
        itsIPrint->print();
    }
    
}

void Server::p1_C::setItsIPrint(IPrint* p_IPrint) {
    itsIPrint = p_IPrint;
}

void Server::p1_C::cleanUpRelations() {
    if(itsIPrint != NULL)
        {
            itsIPrint = NULL;
        }
}
//#]

Server::Server() {
    initRelations();
}

Server::~Server() {
}

void Server::print() {
    //#[ operation print()
    std::cout << "Hello from Server print" << std::endl;
    //#]
}

Server::p1_C* Server::getP1() const {
    return (Server::p1_C*) &p1;
}

Server::p1_C* Server::get_p1() const {
    return (Server::p1_C*) &p1;
}

void Server::initRelations() {
    if (get_p1() != NULL) {
        get_p1()->connectServer(this);
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Server.cpp
*********************************************************************/
