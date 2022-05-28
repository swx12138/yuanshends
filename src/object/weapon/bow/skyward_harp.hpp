#pragma once

#include "bow.hpp"

namespace jenshin::weapon {

	/// <summary>
	/// 天空之翼
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
			return "天空之翼";
		}
	};
}