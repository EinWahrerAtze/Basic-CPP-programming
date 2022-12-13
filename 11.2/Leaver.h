#pragma once
#ifdef LEAVERDYNAMIC_EXPORT
#define LEAVERDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERDYNAMIC_API __declspec(dllimport)
#endif
#include <string>

namespace Leaver
{
	class Leaver
	{
	public:
		LEAVERDYNAMIC_API std::string leave(const std::string & s);
	};
}

