#pragma once

#include "Core.h"

namespace dtor {
	class DTOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// To be defined by the client
	Application* createApplication();

} // namespace dtor
