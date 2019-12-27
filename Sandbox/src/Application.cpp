#include <DtoR.h>

class Sandbox : public dtor::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


dtor::Application* dtor::CreateApplication()
{
	return new Sandbox();
}