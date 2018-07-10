class a{
	private:
		int dato;
		static A* instance;
		A();
	public:
		A* getInstance();
		virtual ~A();
}