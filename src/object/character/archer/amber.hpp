#pragma once

#include "archer.hpp"

namespace jenshin::character {

	/// <summary>
	/// °²°Ø
	/// </summary>
	class Amber :public ArcherFour
	{
		Amber() { }
	public:
		virtual std::string name() const override final
		{
			return "°²°Ø";
		}

		static Amber const& getInst()
		{
			static Amber amber;
			return amber;
		}
	};

}