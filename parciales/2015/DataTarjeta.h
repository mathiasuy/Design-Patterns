#import "DataPago.h"
#import "TTarjeta.h"

class DataTarjeta : public DataPago{
	private:
		TTarjeta tarjeta;
	public:
		TTarjeta getTarjeta();
		DataTarjeta(TTarjeta);
		virtual ~DataTarjeta();
}