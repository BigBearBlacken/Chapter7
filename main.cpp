#include "HeaderFile.h"
#include "Person.h"
#include "Sales_data.h"
#include "Screen.h"
#include "Window_mgr.h"

int main()
{
#if 0
	Screen myscreen= Screen(2, 5, '#');
	cout << myscreen.size() << endl;
	Window_mgr mgr;
	size_t um = mgr.AddScreens(myscreen);
	mgr.clear(um);

#endif
#if 1
	Sales_data item("isok?");
#endif // 1


	return 0;
}
