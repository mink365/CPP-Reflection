#pragma once

using namespace ursine::meta;

enum class SliderType
{
    Horizontal,
    Vertical
};

struct Slider : public MetaProperty
{
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

struct SoundEffect 
{
    
//    SoundEffect(){};
    
    
    Meta(Range(0.0f, 100.0f))
    float volume;

    void Load(const char *filename) {
        printf("Load something \n");
    };
};
