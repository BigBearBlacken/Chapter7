#include "Window_mgr.h"
void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}
Window_mgr::ScreenIndex Window_mgr::AddScreens(const Screen& s)
{
	screens.push_back(s);//如果把s声明成对常量的引用，然而screens的元素是指向非常量Screen的指针，矛盾了！
	return screens.size() - 1;
}
