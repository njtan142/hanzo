#include <Hanzo.h>

class ExampleLayer : public Hanzo::Layer
{
public:
	ExampleLayer() : Layer("Example") {}

	void OnUpdate() override
	{
		HZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(Hanzo::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}

};


class Sandbox : public Hanzo::Application 
{
	
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new Hanzo::ImGuiLayer());
	}
	~Sandbox() {

	}
};

Hanzo::Application* Hanzo::CreateApplication() 
{

	return new Sandbox;
}