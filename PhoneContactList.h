/*
 * CPhoneContact.h
 *
 *  Created on: 2016. 3. 28.
 *      Author: cskim
 */

#ifndef PHONECONTACTLIST_H_
#define PHONECONTACTLIST_H_

#include <list>
#include "Entry.h"
#include "PhoneContact.h"
/*
 *
 */
typedef list<Entry>::iterator LIter;
typedef list<Entry>::const_iterator LCIter;

class PhoneContactList: public PhoneContact {
public:
	PhoneContactList();
	bool insert(string name, int number, string email);
	bool update(string name, int number, string email);
	bool update(string name, int number);
	bool update(string name, string email);
	bool remove(string name);

	ValueInfo find(string name) const;
	string findName(int number) const;
	string findName(string email) const;

	void listAll()const;

private:
	list<Entry> contactTable;
	LIter findLoc(string name);
	LCIter findLocConst (string name) const;
	LCIter findLocFromNumber(int number) const;
	LCIter findLocFromEmail(string email) const;
};

#endif /* PHONECONTACTLIST_H_ */
