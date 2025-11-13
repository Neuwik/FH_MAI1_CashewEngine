#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Cashew
{
	class CASHEW_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define CASHEW_CORE_TRACE(...) ::Cashew::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CASHEW_CORE_INFO(...) ::Cashew::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CASHEW_CORE_WARN(...) ::Cashew::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CASHEW_CORE_ERROR(...) ::Cashew::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CASHEW_CORE_FATAL(...) ::Cashew::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CASHEW_TRACE(...) ::Cashew::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CASHEW_INFO(...) ::Cashew::Log::GetClientLogger()->info(__VA_ARGS__)
#define CASHEW_WARN(...) ::Cashew::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CASHEW_ERROR(...) ::Cashew::Log::GetClientLogger()->error(__VA_ARGS__)
#define CASHEW_FATAL(...) ::Cashew::Log::GetClientLogger()->fatal(__VA_ARGS__)

