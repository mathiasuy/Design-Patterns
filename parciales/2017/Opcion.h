#include <string>

using namespace std;

class Opcion{
	private:
		string idOp;
		float precioOp;
	public:
		string getIdOp();
		void setIdOp(string);
		float getPrecioOp();
		void setPrecioOp(float);

		Opcion(string,float);
		virtual ~Opcion();
}