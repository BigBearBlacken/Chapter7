#include "Screen.h"

const Screen& Screen::display(ostream& os)const
{
	do_display(os);
	return *this;
}
Screen& Screen::display(ostream& os)
{
	do_display(os);
	return *this;
}