#include "platform.h"

#define BSD___

#include "filesystems.h"
#include "UIManager.h"

#include <iostream>

file_system_base* windows_platform::get_file_system()
{
    std::cout << "Creating windows file system\n";
    return windows_file_system::get_instance();
}

UIManager_base* windows_platform::get_ui_manager()
{
    std::cout << "Creating windows UI\n";
    return windows_UIManager::get_instance();
}

file_system_base* unix_platform::get_file_system()
{
    std::cout << "Creating unix file system\n";
    return unix_file_system::get_instance();
}

UIManager_base* unix_platform::get_ui_manager()
{
    std::cout << "Creating unix UI\n";
    return unix_UIManager::get_instance();
}

file_system_base* bsd_platform::get_file_system()
{
	std::cout << "Creating bsd file system\n";
	return bsd_file_system::get_instance();
}

UIManager_base* bsd_platform::get_ui_manager()
{
	std::cout << "Creating bsd UI\n";
	return bsd_UIManager::get_instance();
}

platform_base* get_current_platform()
{
#ifdef WINDOWS___
	return new windows_platform();
#elif defined UNIX___
	return new unix_platform();
#elif defined BSD___
	return new bsd_platform();
#else
	return nullptr;
#endif
}
