#include <string>
#include <cstdlib>
#include <iostream>
#include "ch14_14_1_employee.h"

namespace savitchEmployees {
	employee::emploee() : name("no name yet"), ssn("no num yet"), netPay(0) {

	}

	emploee::emploee( const string& tName, const string& tSsn) : name(tName), ssn(tSsn), netPay(0){

	}

	
}