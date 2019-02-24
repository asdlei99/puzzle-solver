/*! \file Functions.h
 *  \brief Enter description here.
 *  \author Georgi Gerganov
 */

#pragma once

#include <cstdint>
#include <memory>

struct Resize {
    template <typename T> bool operator()(const int32_t n, T & obj);
    template <typename T> bool operator()(const int32_t nx, const int32_t ny, T & obj);
};

struct LoadFromFile {
    template <typename T> bool operator()(const char * fname, T & obj);
};

struct SaveToFile {
    template <typename T> bool operator()(const char * fname, const T & obj);
};

struct OnDragAndDrop {
    template <typename T> bool operator()(const char * fname, T & obj);
};

struct Render {
    template <typename T> bool operator()(T & obj);
};

struct Exist {
    template <typename T> bool operator()(const int32_t id, const T & obj);
    template <typename T> bool operator()(const char * fname, const T & obj);
};

struct Erase {
    template <typename T> bool operator()(const int32_t id, T & obj);
};

struct Count {
    template <typename T> int32_t operator()(const T & obj);
};

struct Free {
    template <typename T> bool operator()(T & obj);
};

struct GenerateTexture {
    template <typename T> bool operator()(const bool linearInterp, T & obj);
};
