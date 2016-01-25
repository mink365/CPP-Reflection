#pragma once

#include "../../Source/Runtime/Macros.h"
#include "../../Source/Runtime/MetaProperty.h"

using namespace ursine::meta;

enum class SliderType
{
    Horizontal,
    Vertical
};

struct Slider : public MetaProperty
{
    META_OBJECT

public:
    SliderType type;

    Slider(SliderType type)
        : type( type ) { }
};

struct Range : public MetaProperty 
{
    META_OBJECT
    
public:
    float min, max;

    Range(float min, float max) 
        : min( min )
        , max( max ) { }
};

// Meta(Range(0.0f, 1.0f), Slider(SliderType::Horizontal))
// float someIntensityField;

struct SoundEffect : public Object
{
    Meta(Range(0.0f, 100.0f))
    float volume;

    void Load(const char *filename) {
        printf("Load something \n");
    };
};
