#pragma once

#include "../character.hpp"

namespace jenshin::character {

	/// <summary>
	/// ����ɫ
	/// </summary>
	class Archer :
		virtual public Character
	{
	public:
		virtual void attack() const override final
		{
			printf_s("attacking with bow.\n");
		}
	};

	/// <summary>
	/// ���ǹ�
	/// </summary>
	class ArcherFour :
		public Archer,
		public CharacterFour
	{ };

	/// <summary>
	/// ���ǹ�
	/// </summary>
	class ArcherFive :
		public Archer,
		public CharacterFive
	{ };
}