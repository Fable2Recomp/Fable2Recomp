
#pragma once

#include <vector>
#include <string>
#include "artery-font.h"

namespace artery_font {

template <typename T>
class StdList : private std::vector<T> {

public:
    inline StdList() { }
    inline explicit StdList(int length) : std::vector<T>((size_t) length) { }
    inline int length() const { return (int) std::vector<T>::size(); }
    inline explicit operator T *() { return std::vector<T>::data(); }
    inline explicit operator const T *() const { return std::vector<T>::data(); }
    inline T &operator[](int index) { return std::vector<T>::operator[](index); }
    inline const T &operator[](int index) const { return std::vector<T>::operator[](index); }

};

class StdString : private std::string {

public:
    inline StdString() { }
    inline StdString(const char *characters, int length) : std::string(characters, (size_t) length) { }
    inline int length() const { return (int) std::string::size(); }
    inline explicit operator const char *() const { return std::string::c_str(); }

};

typedef StdList<unsigned char> StdByteArray;

template <typename REAL>
using StdArteryFont = ArteryFont<REAL, StdList, StdByteArray, StdString>;

}
