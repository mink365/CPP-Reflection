#pragma once

#include "../../Source/Runtime/Macros.h"
#include "../../Source/Runtime/MetaProperty.h"

#include <iostream>

using namespace ursine::meta;

enum class Meta(Enable()) SliderType
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

//Meta(Range(0.0f, 1.0f), Slider(SliderType::Horizontal))
//float someIntensityField;

struct SoundEffect : public Object
{
    META_OBJECT
    
public:
    SoundEffect(){};
    
public:
    Meta(Range(0.0f, 100.0f))
    float volume;
    
    Meta(Range(0.0f, 1.0f), Slider(SliderType::Horizontal))
    float field2;

    void Load(const char *filename) {
        printf("Load %s \n", filename);
    };
    
    void Load2(const std::string& filename) {
        printf("Load %s \n", filename.c_str());
    };
    
    void SetVolume(float v) {
        volume = v;
        printf("Set Volume: %f \n", volume);
    }
};
