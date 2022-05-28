#pragma once

#include "../weapon.hpp"

namespace jenshin::weapon {

	/// <summary>
	/// ����
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
	/// ���ǹ�
	/// </summary>
	class BowFive :
		public Bow,
		public WeaponFive
	{ };

	/// <summary>
	/// ���ǹ�
	/// </summary>
	class BowFour :
		public Bow,
		public WeaponFour
	{ };
}