#pragma once

#include "archer.hpp"

namespace jenshin::character {

	/// <summary>
	/// ����
	/// </summary>
	class Amber :public ArcherFour
	{
		Amber() { }
	public:
		virtual std::string name() const override final
		{
			return "����";
		}

		static Amber const& getInst()
		{
			static Amber amber;
			return amber;
		}
	};

}