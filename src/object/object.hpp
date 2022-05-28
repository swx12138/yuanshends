#pragma once

#include <string>
#include <stdexcept>

namespace jenshin {

	enum class GenshinStar :uint16_t
	{
		five = 5, four = 4, three = 3
	};

	//std::string convert(GenshinStar gs)
	//{
	//	switch (gs) {
	//		case GenshinStar::five: return "five";
	//		case GenshinStar::four: return "four";
	//		case GenshinStar::three: return "three";
	//	}
	//	throw std::invalid_argument("wu xiao lei xing");
	//}

	class Object
	{
	public:
		virtual GenshinStar star() const = 0;
		virtual std::string name() const = 0;
	};
}