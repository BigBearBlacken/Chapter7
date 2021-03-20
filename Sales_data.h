#pragma once
#include "HeaderFile.h"

class Sales_data
{
	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
public:
	Sales_data() = default;
	Sales_data(const string& s) :bookNo(s) {}
	Sales_data(const string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p) {}
	Sales_data(istream& is);

	Sales_data& combine(const Sales_data& tran);
	const string& isbn()const;
	double avg_price() const;
private:
	string bookNo;//ISBN编号
	unsigned units_sold = 0;//某本书的销量
	double revenue = 0.0;//总销售收入
};
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
istream& read(istream& is, Sales_data& item);
ostream& print(ostream& os, const Sales_data& item);

inline double Sales_data::avg_price() const
{
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}
