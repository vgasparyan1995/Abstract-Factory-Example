#pragma once

class file_system_base;
class UIManager_base;

class platform_base
{
public:
    virtual file_system_base* get_file_system() = 0;
    virtual UIManager_base* get_ui_manager() = 0;
};

class windows_platform : public platform_base
{
public:
    virtual file_system_base* get_file_system() override;
    virtual UIManager_base* get_ui_manager() override;
};

class unix_platform : public platform_base
{
public:
    virtual file_system_base* get_file_system() override;
    virtual UIManager_base* get_ui_manager() override;
};

class bsd_platform : public platform_base
{
public:
    virtual file_system_base* get_file_system() override;
    virtual UIManager_base* get_ui_manager() override;
};

platform_base* get_current_platform();