#include "HeaderFile.h"
#include "Person.h"
#include "Sales_data.h"
#include "Screen.h"
#include "Window_mgr.h"

int main()
{
#if 1
	Screen myscreen(2, 5, 'a');
	cout << myscreen.size() << endl;
	Window_mgr mgr;
	unsigned um = mgr.AddScreens(myscreen);
	mgr.clear(um);

#endif

	return 0;
}
