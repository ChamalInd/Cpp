#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
 
using namespace ftxui;

int main() {
	Element document = vbox({
		text("Getting Started") | bold | center,
		separator(),
		hbox({
			text("Left Panel") | border,
			vbox({
				text("Main Content Area") | dim,
				separator(),
				text("Footer Area") | dim
			}) | border | flex,
		}) | flex,
  	});
 
	auto screen = Screen::Create(
		Dimension::Full(),       
		Dimension::Fit(document)
	);
	Render(screen, document);
	screen.Print();
}
