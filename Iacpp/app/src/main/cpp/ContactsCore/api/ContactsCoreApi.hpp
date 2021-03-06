//
// Created by SheshuKumar Inguva on 8/2/17.
//

#ifndef IACPP_CONTACTSCOREAPI_H
#define IACPP_CONTACTSCOREAPI_H

#include <string>
#include <vector>
#include <thread>
#include "../model/Contact.hpp"
#include "../webservice/ContactsWebService.hpp"

class ContactsCoreApi {
private:
    std::thread *mNotifierThread;
public:
    ContactsCoreApi();

    ~ContactsCoreApi();

    std::vector<Contact *> *getContacts();

    void addContact(Contact *contact, int (*callback)(Contact *));

    void setListener(int (*callback)(Contact *, Contact *));
};

#endif //IACPP_CONTACTSCOREAPI_H
