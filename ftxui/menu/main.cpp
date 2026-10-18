#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>

using namespace ftxui;

int main()
{
	std::vector<std::string> entries = {
		"Entry 1",
		"Entry 2",
		"Entry 3"
	};
	int selected = 0;

	auto menu = Menu(&entries, &selected);
	auto app = ScreenInteractive::TerminalOutput();
	app.Loop(menu);
}
