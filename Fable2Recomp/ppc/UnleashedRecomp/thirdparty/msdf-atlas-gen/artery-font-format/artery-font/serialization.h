
#pragma once

#include "types.h"
#include "enums.h"
#include "structures.h"

namespace artery_font {

typedef int ReadFunction(void *dst, int limit, void *userData);
typedef int WriteFunction(const void *src, int length, void *userData);

template <ReadFunction READ, typename REAL, template <typename> class LIST, class BYTE_ARRAY, class STRING>
bool decode(ArteryFont<REAL, LIST, BYTE_ARRAY, STRING> &font, void *userData);

template <WriteFunction WRITE, typename REAL, template <typename> class LIST, class BYTE_ARRAY, class STRING>
bool encode(const ArteryFont<REAL, LIST, BYTE_ARRAY, STRING> &font, void *userData);

}

#include "serialization.hpp"
