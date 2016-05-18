#include "UIManager.h"

windows_UIManager* windows_UIManager::s_instance = nullptr;
unix_UIManager* unix_UIManager::s_instance = nullptr;
bsd_UIManager* bsd_UIManager::s_instance = nullptr;

windows_UIManager* windows_UIManager::get_instance()
{
    if (nullptr == s_instance) {
        s_instance = new windows_UIManager();
    }
    return s_instance;
}

void windows_UIManager::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

unix_UIManager* unix_UIManager::get_instance()
{
    if (nullptr == s_instance) {
        s_instance = new unix_UIManager();
    }
    return s_instance;
}

void unix_UIManager::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

bsd_UIManager* bsd_UIManager::get_instance()
{
    if (nullptr == s_instance) {
        s_instance = new bsd_UIManager();
    }
    return s_instance;
}

void bsd_UIManager::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}
