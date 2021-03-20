#include "Window_mgr.h"
void Window_mgr::clear(ScreenIndex i)
{
	Screen* s = screens[i];
	(*s).contents = string((*s).height * (*s).width, ' ');
}
Window_mgr& Window_mgr::AddScreens(Screen& s)
{
	screens.push_back(&s);
	return *this;
}
