#pragma once
#include "HeaderFile.h"
#include "Window_mgr.h"
class Screen
{
	friend class Window_mgr;
	//friend Window_mgr& Window_mgr::AddScreens(Screen& s);
	//friend void Window_mgr::clear(ScreenIndex i);
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht* wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {}
	
	const char get() const { return contents[cursor]; }
	const char get(const pos r, const pos c)const;

	Screen& Move(const pos r, const pos c);

	Screen& Set(const char);
	Screen& Set(const pos, const pos, const char&);

	const Screen& display(ostream& os)const;
	Screen& display(ostream& os);

	pos size() const;

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	string contents;
	void do_display(ostream& os) const{ os << contents; }
};

inline const char Screen::get(const pos r, const pos c)const
{
	pos row = width * r;
	return contents[row + c];
}
inline Screen& Screen::Move(const pos r, const pos c)
{
	cursor = width * r + c;
	return *this;
}
inline Screen& Screen::Set(const char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::Set(const pos r, const pos col, const char& ch)
{
	contents[r * width + col] = ch;
	return *this;
}