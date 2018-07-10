/*   PATRON ADAPTER  */

class VideoAdapter public : Recurso{
	private:
		Video* adaptee;
	public:
		void carga();
		void cargarEspecifico();
		~VideoAdapter();
		VideoAdapter(string);
}

void VideoAdapter::carga(){
	adaptee->load(this->nombre);
}