#pragma once

//	Windows
#include <Windows.h>
#include <Psapi.h>
#include <memory>

//	Dx
#include <d3d11.h>
#pragma comment(lib,"d3d11.lib")

//	ImGui
#include "..\ImGui\DOCKING\imgui.h"
#include "..\ImGui\DOCKING\imgui_internal.h"
#include "..\ImGui\DOCKING\imgui_impl_win32.h"
#include "..\ImGui\DOCKING\imgui_impl_dx11.h"

//	OTHER
#include <tchar.h>
#include <string>
#include <thread>
#include <chrono>
namespace ERLauncher {
	using namespace std::chrono_literals;

	inline HMODULE g_Module{};
	inline LPCWSTR g_ModuleName{};
	inline std::atomic_bool g_Running = TRUE;

	//	Memory Templates
	static uintptr_t dwGameBase = (uintptr_t)GetModuleHandle(g_ModuleName);
}