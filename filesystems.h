#pragma once

#include <iostream>

struct file {};

class file_system_base
{
public:
    virtual file* get_file(const char* filename) = 0;
    virtual bool is_dir(const file* f) = 0;
};

class windows_file_system : public file_system_base
{
public:
    virtual file* get_file(const char* filename) override
    {
        std::cout << "Get file from windows filesystem\n";
        return nullptr;
    }
    virtual bool is_dir(const file* f) override
    {
        std::cout << "Check whether this file from windows filesystem is a directory or not\n";
        return true;
    }

public:
    static windows_file_system* get_instance();
    static void remove_instance();

private:
    static windows_file_system* s_instance;

private:
    windows_file_system()
    {
    }
    ~windows_file_system()
    {
    }
    windows_file_system(const windows_file_system&) = delete;
    windows_file_system& operator=(const windows_file_system&) = delete;
};

class unix_file_system : public file_system_base
{
public:
    virtual file* get_file(const char* filename) override
    {
        std::cout << "Get file from unix filesystem\n";
        return nullptr;
    }
    virtual bool is_dir(const file* f) override
    {
        std::cout << "Check whether this file from unix filesystem is a directory or not\n";
        return true;
    }

public:
    static unix_file_system* get_instance();
    static void remove_instance();

private:
    static unix_file_system* s_instance;

private:
    unix_file_system()
    {
    }
    ~unix_file_system()
    {
    }
    unix_file_system(const unix_file_system&) = delete;
    unix_file_system& operator=(const unix_file_system&) = delete;
};

class bsd_file_system : public file_system_base
{
public:
    virtual file* get_file(const char* filename) override
    {
        std::cout << "Get file from bsd filesystem\n";
        return nullptr;
    }
    virtual bool is_dir(const file* f) override
    {
        std::cout << "Check whether this file from bsd filesystem is a directory or not\n";
        return true;
    }

public:
    static bsd_file_system* get_instance();
    static void remove_instance();

private:
    static bsd_file_system* s_instance;

private:
    bsd_file_system()
    {
    }
    ~bsd_file_system()
    {
    }
    bsd_file_system(const bsd_file_system&) = delete;
    bsd_file_system& operator=(const bsd_file_system&) = delete;
};
