#include <bangtal.h>

using namespace std;
using namespace bangtal;

int main()
{
	class Door: public Object
	{
	public:
		bool closed = true;
	};

	class LockedDoor: public Door
	{
	public:
		bool locked = true;
	};
}