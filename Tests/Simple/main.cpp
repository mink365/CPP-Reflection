#include <iostream>

#include "Meta.Generated.h"

#include <Meta.h>
#include <TypeData.h>
#include <TypeInfo.h>
#include <MetaProperty.h>

#include "Reflection.h"

using namespace ursine::meta;

void TestClass()
{
    Type soundEffectType = typeof( SoundEffect );
    Field volumeField = soundEffectType.GetField( "volume" );
    
    // the runtime supports overloading, but by default returns the first overload
    Method loadMethod = soundEffectType.GetMethod( "Load" );
    Method load2Method = soundEffectType.GetMethod( "Load2" );
    Method setVolume = soundEffectType.GetMethod( "SetVolume" );
    
    // creates an instance of a sound effect
    Variant effect = soundEffectType.Create( );
    
    // effect.volume is now 85
    volumeField.SetValue( effect, 85.0f );
    
    // 85
    volumeField.GetValue( effect );
    
    // effect.SetVolume is called
    setVolume.Invoke(effect, 20.5f);
    
    std::string name = "Explosion.wav";
    load2Method.Invoke(effect, name);
    
    // effect.Load is called
    const char* name2 = "Explosion.wav";
    loadMethod.Invoke(effect, name2);
    
    // type of arguments must be explicitly
    // loadMethod.Invoke(effect, "Explosion.wav");
    // not work
}

void TestEnum()
{
    Type enumType = typeof( SliderType2 );
    
    Enum _enum = enumType.GetEnum();
    
    auto list = _enum.GetKeys();
    
    for (auto key : list) {

        printf("Enum %s Key: %s \n", _enum.GetName().c_str(), key.c_str());
    }
    
    auto values = _enum.GetValues();
    
    // 需要用引用。。。否则会触发copy构造，在Variant上再包一层Variant，导致无法获取值
    for (auto& value : values) {
    
        SliderType2 v = value.GetValue<SliderType2>();
        
        printf("Enum %s Value: %d \n", _enum.GetName().c_str(), v);
    }
}

void TestAttribute()
{
    // you can also use type meta::Type::Get( "SoundEffect" ) based on a string name
    Type soundEffectType = typeof( SoundEffect );
    
    // the volume field in the SoundEffect struct
    Field volumeField = soundEffectType.GetField( "volume" );
    
    // meta data for the volume field
    MetaManager &volumeMeta = volumeField.GetMeta( );
    
    // getting the "Range" property, then casting the variant as a range
    Range volumeRange = volumeMeta.GetProperty( typeof( Range ) ).GetValue<Range>( );
    
    // 0.0f
    float min = volumeRange.min;
    
    // 100.0f
    float max = volumeRange.max;
    
    std::cout << "Range min: " << min << " max: " << max << std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    TestEnum();
    
    TestClass();
    
    TestAttribute();
    
    return 0;
}
