#pragma once
#include "HeaderFile.h"
#include "Screen.h"
class Screen;
class Window_mgr
{
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex i);
	ScreenIndex AddScreens(Screen& s);
private:
	vector<Screen*> screens;
};
