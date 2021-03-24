#pragma once
#include "Core.h"

namespace Hanzo {
	class HANZO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}


