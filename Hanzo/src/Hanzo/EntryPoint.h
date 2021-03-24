#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hanzo::Application* Hanzo::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Hanzo::CreateApplication();

	app->Run();

	delete app;
}
#endif