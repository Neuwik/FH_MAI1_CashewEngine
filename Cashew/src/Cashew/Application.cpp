#include "precompileheaders.h"
#include "Application.h"
#include "Cashew/Events/ApplicationEvent.h"
#include "Log.h"

namespace Cashew
{
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}