#include <iostream>
#include  "address.h"

using namespace std;

int main()
{
	address a1;
	a1.display();
	address a2("BRJ_KHaLIFA","RichStreet","Dubai",070707);
	a2.display();

	a1.accept();
	a1.display();

	a2.set_building("HariOM");
	a2.set_city("Pune");
	a2.set_street("HIjawadi");
	a2.set_pin(1234);
	a2.display();
	return 0;
}
