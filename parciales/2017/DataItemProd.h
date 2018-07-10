class DataItemProd{
	private:
		int id;
		float precio;
	public:
		int getID();
		float getPrecio();
		void setPrecio(float precio); /// ¿¿¿¿ESTO NO ESTÁ TEORICAMENTE MAL????

		DataItemProd(int);
		virtual ~DataItemProd();
}