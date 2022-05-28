#pragma once

#include "attack.hpp"
#include "bouns.hpp"
#include "critical.hpp"
#include "defense.hpp"
#include "rates.hpp"
#include "reaction.hpp"
#include "resistance.hpp"

#include "../utilities/promise.hpp"

/// <summary>
/// ÓÅÇ‰Ô¤ÖÆ
/// </summary>
class Eula
{
public:
	struct Mean
	{
		double max, min, mean;
	};
public:
	Eula(double const buffer = 0, double const bouns = 0) :
		m_attack{ 342.0 + 741, 1149.0, buffer },
		m_bouns{ { 1.04, bouns } },
		m_crit{ 0.552 + 0.15, 1.832 },
		m_reaction{ 1, 0, 0 },
		m_defense{ }
	{	}

	void show_detail() const
	{
		printf_s("attack  %.3lf + %.3lf = %.3lf\n", m_attack.get().first, m_attack.get().second, m_attack.num());
		printf_s("bouns  %.3lf\n", m_bouns.num());

		printf_s("crit max  %.3lf  ", m_crit.max());
		printf_s("crit min  %.3lf  ", m_crit.min());
		printf_s("crit  %.3lf\n", m_crit.num());

		printf_s("reaction  %.3lf\n", m_reaction.num());
		printf_s("defense  %.3lf\n", m_defense.num());
	}

	auto mean(jenshin::calcu::multiplier::Rates const& mul, jenshin::calcu::multiplier::Resistance const& res) const
	{
		Mean ret;
		double j = m_attack * m_bouns * mul * m_reaction * res * m_defense;
		ret.max = j * m_crit.max();
		ret.min = j * m_crit.min();
		ret.mean = j * m_crit;
		return Js(ret);
	}
private:
	jenshin::calcu::multiplier::Attack m_attack;
	jenshin::calcu::multiplier::Bouns m_bouns;
	jenshin::calcu::multiplier::Critical m_crit;
	jenshin::calcu::multiplier::Reaction m_reaction;
	jenshin::calcu::multiplier::Defense m_defense;
};