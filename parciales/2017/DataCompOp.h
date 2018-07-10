#include <string>

using namespace std;

class DataCompOp{
	private:
		string comp, op;
		float precioOp;
	public:
		DataCompOp(string , string , float);
		virtual ~DataCompOp();

		string getComp();
		string getOp();
		float getPrecioOp();
}
