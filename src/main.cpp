/*
 * Copyright (c) 2020-2024 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "bn_core.h"

int main()
{
    bn::core::init();

    while (true)
    {
        bn::core::update();
    }
}
