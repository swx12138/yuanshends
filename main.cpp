
#include "src/multiplier/test.hpp"
#include "src/object/character/archer/amber.hpp"
#include "src/object/weapon/bow/skyward_harp.hpp"

int main()
{
	using namespace std;
	using Amber = jenshin::character::Amber;
	using Skyward = jenshin::weapon::SkywardHarp;

	auto amber = Amber::getInst(); //make_shared<Amber>();
	amber.show_detail();

	amber.set_weapon(make_shared<Skyward>());
	amber.show_detail();

	return 0;

	using namespace jenshin::calcu::multiplier;

	Resistance resist{ 0.1 }, resist_cd{ -0.2, 0.4 };
	{
		// 苍白+松籁
		Eula waifu(0.18 * 2 + 0.2, 0.25);
		waifu.show_detail();

		constexpr int dac = 13;
		Rates da{ { 442, 725.6, 148.2 * dac }, 0 };
		waifu.mean(da, resist_cd).then([] (auto& data)
			{
				printf_s("\n%d层元素爆发：\n", dac);
				printf_s("最大伤害 %.3lf\n", data.max);
				printf_s("最小伤害 %.3lf\n", data.min);
				printf_s("期望伤害 %.3lf\n\n\n", data.mean);
			});
	}

	{
		Eula waifu;
		waifu.show_detail();

		Rates A{ { 177.4 }, 0 };
		waifu.mean(A, resist).then([] (auto& data)
			{
				printf_s("\nA最大伤害 %.3lf\n", data.max);
				printf_s("A最小伤害 %.3lf\n", data.min);
				printf_s("A期望伤害 %.3lf\n", data.mean);
			});
	}

	return 0;
}