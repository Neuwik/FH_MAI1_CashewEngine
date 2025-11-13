#include "precompileheaders.h"
#include "Application.h"
#include "Cashew/Events/ApplicationEvent.h"
#include "Log.h"

namespace Cashew
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CASHEW_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CASHEW_TRACE(e);
		}

		while (true)
		{

		}
	}
}