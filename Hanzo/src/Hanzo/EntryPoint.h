#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hanzo::Application* Hanzo::CreateApplication();

int main(int argc, char** argv)
{
	Hanzo::Log::Init();
	HZ_CORE_TRACE("Initialized Log");
	int a = 5;
	HZ_INFO("Welcome Var={0}", a);


	auto app = Hanzo::CreateApplication();

	app->Run();

	delete app;
}
#endif