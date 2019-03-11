#pragma once

#include "Vector3d.h"

typedef unsigned int uint;

namespace open3d {
// 2D tensor, row major
typedef struct _Matrix3d {
    static const uint ROWS = 3;
    static const uint COLS = Vector3d::COLS;

    Vector3d s[ROWS];

    Vector3d& operator[](const uint& i);
    const Vector3d& operator[](const uint& i) const;
} Matrix3d;
}  // namespace open3d
