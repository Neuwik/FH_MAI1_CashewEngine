#pragma once

#include "Core.h"

namespace Cashew
{
	class CASHEW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}