#include "filesystems.h"

windows_file_system* windows_file_system::s_instance = nullptr;
unix_file_system* unix_file_system::s_instance = nullptr;
bsd_file_system* bsd_file_system::s_instance = nullptr;

windows_file_system* windows_file_system::get_instance()
{
    if (!s_instance) {
        s_instance = new windows_file_system();
    }
    return s_instance;
}

void windows_file_system::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

unix_file_system* unix_file_system::get_instance()
{
    if (!s_instance) {
        s_instance = new unix_file_system();
    }
    return s_instance;
}

void unix_file_system::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

bsd_file_system* bsd_file_system::get_instance()
{
    if (!s_instance) {
        s_instance = new bsd_file_system();
    }
    return s_instance;
}

void bsd_file_system::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

