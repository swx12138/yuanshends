#pragma once

#include "bow.hpp"

namespace jenshin::weapon {

	/// <summary>
	/// ���֮��
	/// </summary>
	class SkywardHarp :
		public BowFive
	{
	public:
		virtual data_type base() const override final
		{
			return 674;
		}

		virtual std::string name() const override final
		{
			return "���֮��";
		}
	};
}