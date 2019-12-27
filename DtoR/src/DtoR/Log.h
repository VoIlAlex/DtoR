#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace dtor {
	class DTOR_API Log
	{
	public:

		static void init();

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
} // namespace dtor

// Core log macros
#define DTOR_CORE_ERROR(...)	::dtor::Log::getCoreLogger()->error(__VA_ARGS__)
#define DTOR_CORE_WARN(...)		::dtor::Log::getCoreLogger()->warn(__VA_ARGS__)
#define DTOR_CORE_INFO(...)		::dtor::Log::getCoreLogger()->info(__VA_ARGS__)
#define DTOR_CORE_TRACE(...)	::dtor::Log::getCoreLogger()->trace(__VA_ARGS__)
#define DTOR_CORE_FATAL(...)	::dtor::Log::getCoreLogger()->fatal(__VA_ARGS__)


// Client log macros
#define DTOR_ERROR(...)			::dtor::Log::getClientLogger()->error(__VA_ARGS__)
#define DTOR_WARN(...)			::dtor::Log::getClientLogger()->warn(__VA_ARGS__)
#define DTOR_INFO(...)			::dtor::Log::getClientLogger()->info(__VA_ARGS__)
#define DTOR_TRACE(...)			::dtor::Log::getClientLogger()->trace(__VA_ARGS__)
#define DTOR_FATAL(...)			::dtor::Log::getClientLogger()->fatal(__VA_ARGS__)

// If dist build
// #define DTOR_CORE_INFO