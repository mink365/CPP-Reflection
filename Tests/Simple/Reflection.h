#pragma once

#include "SoundEffect.h"

// attribute must be add as this
// Meta(Enable())
// enum class SliderType2 {
// will NOT work
enum class Meta(Enable()) SliderType2
{
    Horizontal,
    Vertical
};

class [[deprecated]] Hello
{
public:
    int v;
};

class Meta(Enable()) Hello2
{
public:
    int v;
};

