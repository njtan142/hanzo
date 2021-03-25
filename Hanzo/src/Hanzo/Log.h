#pragma once


#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Hanzo 
{

	class HANZO_API Log
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
#define HZ_CORE_TRACE(...) ::Hanzo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)  ::Hanzo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)  ::Hanzo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::Hanzo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...) ::Hanzo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HZ_TRACE(...)      ::Hanzo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)       ::Hanzo::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)       ::Hanzo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)      ::Hanzo::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)      ::Hanzo::Log::GetClientLogger()->fatal(__VA_ARGS__)
