#pragma once
#include "Common.hpp"

namespace ER
{
	class GameVariables
	{
	public:
		explicit GameVariables();
		~GameVariables() noexcept = default;
		GameVariables(GameVariables const&) = delete;
		GameVariables(GameVariables&&) = delete;
		GameVariables& operator=(GameVariables const&) = delete;
		GameVariables& operator=(GameVariables&&) = delete;

		//	Dx & ImGui
		int m_GamePid{};
		HANDLE m_GameHandle{};
		HWND m_GameWindow{};
		int m_GameWidth;
		int m_GameHeight;
		LPCSTR m_GameTitle;
		LPCSTR m_ClassName;
		LPCSTR m_GamePath;
		uintptr_t m_ModuleBase;		// OBTAIN MODULE BASE
		IDXGISwapChain3* m_Swapchain{};

		//	MENU RELATED
		bool m_ShowMenu{};
		bool m_ShowConsole{};
		bool m_ShowDemo{};
	};

	class GameFunctions
	{
	public:
		explicit GameFunctions();
		~GameFunctions() noexcept = default;
		GameFunctions(GameFunctions const&) = delete;
		GameFunctions(GameFunctions&&) = delete;
		GameFunctions& operator=(GameFunctions const&) = delete;
		GameFunctions& operator=(GameFunctions&&) = delete;

		uintptr_t p2addy(uintptr_t PTR, std::vector<unsigned int> OFFSETS);
		float GetDistanceToObject(Vector3 POS, Vector3 POS2);
		void FPS();
		bool Replace(uintptr_t address, std::vector<uint16_t> originalBytes, std::vector<uint8_t> newBytes);
	};

	inline std::unique_ptr<GameVariables> g_GameVariables;
	inline std::unique_ptr<GameFunctions> g_GameFunctions;
}