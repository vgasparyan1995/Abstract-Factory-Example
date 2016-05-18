#include "platform.h"

#include "filesystems.h"
#include "UIManager.h"

int main()
{
    auto platform = get_current_platform();
    if (nullptr == platform) {
        std::cout << "Totally fucked up\n";
        return 1;
    }
    platform->get_file_system()->is_dir(platform->get_file_system()->get_file("zrlam"));
    platform->get_ui_manager()->draw_widget(platform->get_ui_manager()->create_widget());
	std::getchar();
}
