#pragma once

#include "../object.hpp"
#include <type_traits>

namespace jenshin::weapon {

	enum class WeaponType :uint16_t
	{
		Bow, Catalyst, Claymore, Polearm, Sword
	};

	/// <summary>
	/// ÎäÆ÷
	/// </summary>
	class Weapon :
		public Object
	{
	protected:
		using data_type = uint32_t;
	public:
		virtual ~Weapon() { }

		virtual data_type base() const = 0;
		virtual WeaponType type() const = 0;

		void show_detail() const
		{
			printf_s("%s  *%d  base:%d\n",
				name().data(),
				star(),
				base()
			);
		}
	};

	/// <summary>
	/// ÎåĞÇÎäÆ÷
	/// </summary>
	class WeaponFive :
		virtual public Weapon
	{
	public:
		virtual GenshinStar star() const override final
		{
			return GenshinStar::five;
		}
	};

	/// <summary>
	/// ËÄĞÇÎäÆ÷
	/// </summary>
	class WeaponFour :
		virtual public Weapon
	{
	public:
		virtual GenshinStar star() const override final
		{
			return GenshinStar::four;
		}
	};
}