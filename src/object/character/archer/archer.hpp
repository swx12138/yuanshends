#pragma once

#include "../character.hpp"

namespace jenshin::character {

	/// <summary>
	/// ¹­½ÇÉ«
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
	/// ËÄÐÇ¹­
	/// </summary>
	class ArcherFour :
		public Archer,
		public CharacterFour
	{ };

	/// <summary>
	/// ÎåÐÇ¹­
	/// </summary>
	class ArcherFive :
		public Archer,
		public CharacterFive
	{ };
}