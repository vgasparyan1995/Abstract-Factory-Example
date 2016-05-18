#pragma once

#include <iostream>

struct widget {};

class UIManager_base
{
public:
    virtual widget* create_widget() = 0;
    virtual void draw_widget(const widget* w) = 0;
};

class unix_UIManager : public UIManager_base
{
public:
    virtual widget* create_widget() override
    {
        std::cout << "Create unix widget\n";
        return nullptr;
    }
    virtual void draw_widget(const widget* w) override
    {
        std::cout << "Draw a widget on unix system\n";
    }

public:
    static unix_UIManager* get_instance();
    static void remove_instance();

private:
    static unix_UIManager* s_instance;

private:
    unix_UIManager()
    {
    }
    ~unix_UIManager()
    {
    }
    unix_UIManager(const unix_UIManager&) = delete;
    unix_UIManager& operator=(const unix_UIManager&) = delete;
};

class windows_UIManager : public UIManager_base
{
public:
    virtual widget* create_widget() override
    {
        std::cout << "Create windows widget\n";
        return nullptr;
    }
    virtual void draw_widget(const widget* w) override
    {
        std::cout << "Draw a widget on windows system\n";
    }

public:
    static windows_UIManager* get_instance();
    static void remove_instance();

private:
    static windows_UIManager* s_instance;

private:
    windows_UIManager()
    {
    }
    ~windows_UIManager()
    {
    }
    windows_UIManager(const windows_UIManager&) = delete;
    windows_UIManager& operator=(const windows_UIManager&) = delete;
};

class bsd_UIManager : public UIManager_base
{
public:
    virtual widget* create_widget() override
    {
        std::cout << "Create bsd widget\n";
        return nullptr;
    }
    virtual void draw_widget(const widget* w) override
    {
        std::cout << "Draw a widget on bsd system\n";
    }

public:
    static bsd_UIManager* get_instance();
    static void remove_instance();

private:
    static bsd_UIManager* s_instance;

private:
    bsd_UIManager()
    {
    }
    ~bsd_UIManager()
    {
    }
    bsd_UIManager(const bsd_UIManager&) = delete;
    bsd_UIManager& operator=(const bsd_UIManager&) = delete;
};
