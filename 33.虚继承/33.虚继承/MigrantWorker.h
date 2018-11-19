#include"Worker.h"
#include"Farmer.h"
class MigrantWorker: public Farmer,public Worker
{
public:
	MigrantWorker(string name,string code,string color);
	~MigrantWorker();
};
