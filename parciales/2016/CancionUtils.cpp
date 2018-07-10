CancionUtils* CancionUtils::instance = NULL;

CancionUtils::CancionUtils(){}

CancionUtils::~CancionUtils(){}

CancionUtils* CancionUtils::getInstance(){
	if (CancionUtils::instance == NULL){
		CancionUtils::instance = new CancionUtils();
	}
	return CancionUtils::instance;
}