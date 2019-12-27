#pragma once

#include "Core.h"

namespace dtor {
	class DTOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by the client
	Application* CreateApplication();

} // namespace dtor
