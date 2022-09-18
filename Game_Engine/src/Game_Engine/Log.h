#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Game_Engine {
	class GAME_ENGINE_API Log
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
#define GE_CORE_TRACE(...)    ::Game_Engine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GE_CORE_INFO(...)     ::Game_Engine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CORE_WARN(...)     ::Game_Engine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CORE_ERROR(...)    ::Game_Engine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CORE_FATAL(...)    ::Game_Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define GE_TRACE(...)         ::Game_Engine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GE_INFO(...)          ::Game_Engine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GE_WARN(...)          ::Game_Engine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GE_ERROR(...)         ::Game_Engine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GE_FATAL(...)         ::Game_Engine::Log::GetClientLogger()->fatal(__VA_ARGS__)
