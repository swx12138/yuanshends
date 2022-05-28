#pragma once

#include "../weapon.hpp"

namespace jenshin::weapon {

	/// <summary>
	/// ¹­¼ý
	/// </summary>
	class Bow :
		virtual public Weapon
	{
	public:
		virtual WeaponType type() const override final
		{
			return WeaponType::Bow;
		}
	};

	/// <summary>
	/// ÎåÐÇ¹­
	/// </summary>
	class BowFive :
		public Bow,
		public WeaponFive
	{ };

	/// <summary>
	/// ËÄÐÇ¹­
	/// </summary>
	class BowFour :
		public Bow,
		public WeaponFour
	{ };
}