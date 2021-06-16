#ifndef CH14_14_1_EMPLOYEE_H
#define CH14_14_1_EMPLOYEE_H


#include <string>

namespace savitchEmployees{
	class employee{
	public:
		employee();
		employee(const string& tName, const string& tSsn);
		string getName() const;
		string getSsn() const;
		double getNetPay() const;
		void setName(const string& newName);
		void setSsn(const string& newSsn);
		void setNetPay(double newNetPay);
		void printCheck() const;

	private:
		string name;
		string ssn;
		double netPay;
	};
}

#endif
