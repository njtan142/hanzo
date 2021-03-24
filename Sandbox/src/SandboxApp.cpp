#include <Hanzo.h>

class Sandbox : public Hanzo::Application 
{
	
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Hanzo::Application* Hanzo::CreateApplication() 
{

	return new Sandbox;
}