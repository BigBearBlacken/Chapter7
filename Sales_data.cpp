#include "Sales_data.h"
Sales_data::Sales_data(istream& is)
{
	read(is, *this);
}
Sales_data& Sales_data::combine(const Sales_data& tran)
{
	units_sold += tran.units_sold;
	revenue += tran.revenue;
	return *this;
}
const string& Sales_data::isbn()const
{
	return bookNo;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
istream& read(istream& is, Sales_data& item)
{
	double price = 0;
	cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream& print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}