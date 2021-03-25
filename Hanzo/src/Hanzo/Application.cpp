#include "hzpch.h"
#include "Application.h"

#include "Hanzo/Events/ApplicationEvent.h"
#include "Hanzo/Log.h"


namespace Hanzo {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() 
	{

		WindowResizeEvent e(1200, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			HZ_TRACE(e);
		}
		while (true);
	}
}
