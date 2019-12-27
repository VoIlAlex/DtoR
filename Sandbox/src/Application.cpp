#include <DtoR.h>

class Sandbox : public dtor::Application
{
public:
	Sandbox()
		: dtor::Application()
	{

	}

	~Sandbox()
	{

	}
};


dtor::Application* dtor::createApplication()
{
	return new Sandbox();
}