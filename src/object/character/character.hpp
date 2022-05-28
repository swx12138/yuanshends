#pragma once

#include "../object.hpp"
#include "../weapon/weapon.hpp"

#include <memory>

namespace jenshin::character {

	/// <summary>
	/// 角色类
	/// </summary>
	class Character :
		public Object
	{
	protected:
		using _weapon_ty = std::shared_ptr<weapon::Weapon>;
	public:
		virtual ~Character() { }

		void show_detail() const
		{
			printf_s("%s  *%d\n",
				name().data(),
				star());
			attack();
			show_weapon();
		}

		virtual void attack() const = 0;

		void set_weapon(_weapon_ty ptr)
		{
			m_weapon = ptr;
		}

		void show_weapon() const
		{
			if (m_weapon.get()) {
				m_weapon->show_detail();
			}
			else {
				printf_s("no weapon\n");
			}
		}

	protected:
		_weapon_ty m_weapon;
	};

	/// <summary>
	/// 五星角色
	/// </summary>
	class CharacterFive :
		virtual public Character
	{
	public:
		virtual GenshinStar star() const override final
		{
			return GenshinStar::five;
		}
	};

	/// <summary>
	/// 四星角色
	/// </summary>
	class CharacterFour :
		virtual public Character
	{
	public:
		virtual GenshinStar star() const override final
		{
			return GenshinStar::four;
		}
	};
}