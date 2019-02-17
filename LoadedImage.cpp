/*! \file LoadedImage.cpp
 *  \brief Enter description here.
 *  \author Georgi Gerganov
 */

#include "Types.h"
#include "Functions.h"

template <>
bool Free::operator()<LoadedImage>(LoadedImage & obj) {
    bool res = true;

    res &= ::Free()(obj.image);

    return res;
}
