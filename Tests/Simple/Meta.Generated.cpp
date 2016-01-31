
#include "Meta.Generated.h"

//#if !defined(URSINE_REFLECTION_INCLUDED)
//
//#include <Utilities/MacroUtils.h>
//
//URSINE_ERROR( "<UrsineReflection.h> must be included in the input header file." )
//
//#endif

namespace m = ursine::meta;

m::ReflectionDatabase::Initializer SimpleInitializer([] {
    auto &db = m::ReflectionDatabase::Instance( );

    ///////////////////////////////////////////////////////////////////////////
    // Class Allocations
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "Slider" );
            auto &type = db.types[ id ];

            m::TypeInfo<Slider>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "Slider*" );
            auto &type = db.types[ id ];

            m::TypeInfo<Slider*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const Slider*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const Slider*>::Register( id, type, false );
        }
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "Range" );
            auto &type = db.types[ id ];

            m::TypeInfo<Range>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "Range*" );
            auto &type = db.types[ id ];

            m::TypeInfo<Range*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const Range*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const Range*>::Register( id, type, false );
        }
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "SoundEffect" );
            auto &type = db.types[ id ];

            m::TypeInfo<SoundEffect>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "SoundEffect*" );
            auto &type = db.types[ id ];

            m::TypeInfo<SoundEffect*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const SoundEffect*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const SoundEffect*>::Register( id, type, false );
        }
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "Hello2" );
            auto &type = db.types[ id ];

            m::TypeInfo<Hello2>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "Hello2*" );
            auto &type = db.types[ id ];

            m::TypeInfo<Hello2*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const Hello2*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const Hello2*>::Register( id, type, false );
        }
        
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Enum Allocations
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "SliderType" );
            auto &type = db.types[ id ];

            m::TypeInfo<SliderType>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "SliderType*" );
            auto &type = db.types[ id ];

            m::TypeInfo<SliderType*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const SliderType*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const SliderType*>::Register( id, type, false );
        }
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "SliderType2" );
            auto &type = db.types[ id ];

            m::TypeInfo<SliderType2>::Register( id, type, true );
        }
        
        { // Pointer Type
            auto id = db.AllocateType( "SliderType2*" );
            auto &type = db.types[ id ];

            m::TypeInfo<SliderType2*>::Register( id, type, false );
        }
        
        
        { // Const Pointer Type
            auto id = db.AllocateType( "const SliderType2*" );
            auto &type = db.types[ id ];

            m::TypeInfo<const SliderType2*>::Register( id, type, false );
        }
        
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Global Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    // Global Functions
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    // Enum Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    {
        auto typeID = m::TypeInfo<SliderType>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<SliderType>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.SetEnum<SliderType>( "SliderType", {
                 { "Horizontal", SliderType::Horizontal }, 
                 { "Vertical", SliderType::Vertical } 
                
            } );

            m::TypeInfo<SliderType>::Defined = true;
        }
    }
    
    {
        auto typeID = m::TypeInfo<SliderType2>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<SliderType2>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.SetEnum<SliderType2>( "SliderType2", {
                 { "Horizontal", SliderType2::Horizontal }, 
                 { "Vertical", SliderType2::Vertical } 
                
            } );

            m::TypeInfo<SliderType2>::Defined = true;
        }
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Class Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    /**
     * Slider
     */
    {
        auto typeID = m::TypeInfo<Slider>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<Slider>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );

            // Constructors
            
            type.AddConstructor<Slider, SliderType>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        Slider( args[ 0 ].GetValue<SliderType>( ) )
                    };
                }, 
                {
                    
                },
                false
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<Slider, SliderType>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        new Slider( args[ 0 ].GetValue<SliderType>( ) )
                    };
                }, 
                {
                    
                },
                true
            );
            
            // Fields
            
            type.AddField<Slider, SliderType>( "type",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<Slider>( );

                    return m::Variant { instance.type };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<Slider>( );

                    instance.type = value.GetValue<SliderType>( );
                },
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<Slider>::Defined = true;
        }
    }
    /**
     * Range
     */
    {
        auto typeID = m::TypeInfo<Range>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<Range>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );

            // Constructors
            
            type.AddConstructor<Range, float, float>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        Range( args[ 0 ].GetValue<float>( ), args[ 1 ].GetValue<float>( ) )
                    };
                }, 
                {
                    
                },
                false
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<Range, float, float>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        new Range( args[ 0 ].GetValue<float>( ), args[ 1 ].GetValue<float>( ) )
                    };
                }, 
                {
                    
                },
                true
            );
            
            // Fields
            
            type.AddField<Range, float>( "min",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<Range>( );

                    return m::Variant { instance.min };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<Range>( );

                    instance.min = value.GetValue<float>( );
                },
                {
                    
                }
            );
            
            type.AddField<Range, float>( "max",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<Range>( );

                    return m::Variant { instance.max };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<Range>( );

                    instance.max = value.GetValue<float>( );
                },
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<Range>::Defined = true;
        }
    }
    /**
     * SoundEffect
     */
    {
        auto typeID = m::TypeInfo<SoundEffect>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<SoundEffect>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );

            // Constructors
            
            type.AddConstructor<SoundEffect>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        SoundEffect(  )
                    };
                }, 
                {
                    
                },
                false
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<SoundEffect>(
                [](m::ArgumentList &args)
                {
                    return m::Variant { 
                        new SoundEffect(  )
                    };
                }, 
                {
                    
                },
                true
            );
            
            // Fields
            
            type.AddField<SoundEffect, float>( "volume",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<SoundEffect>( );

                    return m::Variant { instance.volume };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<SoundEffect>( );

                    instance.volume = value.GetValue<float>( );
                },
                {
                    std::make_pair( typeof( Range ), m::MetaPropertyInitializer<Range>( 0.0f, 100.0f ) )

                }
            );
            
            type.AddField<SoundEffect, float>( "field2",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<SoundEffect>( );

                    return m::Variant { instance.field2 };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<SoundEffect>( );

                    instance.field2 = value.GetValue<float>( );
                },
                {
                    std::make_pair( typeof( Slider ), m::MetaPropertyInitializer<Slider>( SliderType::Horizontal ) ), 
std::make_pair( typeof( Range ), m::MetaPropertyInitializer<Range>( 0.0f, 1.0f ) )

                }
            );
            
            // Static Fields
            
            // Methods
            
            type.AddMethod( "Load",
                static_cast<void(SoundEffect::*)(const char *)>( &SoundEffect::Load ),
                [](m::Variant &obj, m::ArgumentList &args)
                { 
                    auto &instance = obj.GetValue<SoundEffect>( );
                    
                    instance.Load( args[ 0 ].GetValue<const char *>( ) );

                    return m::Variant { };
                },
                {
                    
                }
            );
            
            type.AddMethod( "Load2",
                static_cast<void(SoundEffect::*)(const std::string &)>( &SoundEffect::Load2 ),
                [](m::Variant &obj, m::ArgumentList &args)
                { 
                    auto &instance = obj.GetValue<SoundEffect>( );
                    
                    instance.Load2( args[ 0 ].GetValue<const std::string &>( ) );

                    return m::Variant { };
                },
                {
                    
                }
            );
            
            type.AddMethod( "SetVolume",
                static_cast<void(SoundEffect::*)(float)>( &SoundEffect::SetVolume ),
                [](m::Variant &obj, m::ArgumentList &args)
                { 
                    auto &instance = obj.GetValue<SoundEffect>( );
                    
                    instance.SetVolume( args[ 0 ].GetValue<float>( ) );

                    return m::Variant { };
                },
                {
                    
                }
            );
            
            // Static Methods
            

            m::TypeInfo<SoundEffect>::Defined = true;
        }
    }
    /**
     * Hello2
     */
    {
        auto typeID = m::TypeInfo<Hello2>::ID;

        if (typeID != m::Type::Invalid && !m::TypeInfo<Hello2>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );

            // Constructors
            
            // Dynamic Constructors
            
            // Fields
            
            type.AddField<Hello2, int>( "v",
                [](const m::Variant &obj)
                {
                    auto &instance = obj.GetValue<Hello2>( );

                    return m::Variant { instance.v };
                },
                [](m::Variant &obj, const m::Variant &value)
                {
                    auto &instance = obj.GetValue<Hello2>( );

                    instance.v = value.GetValue<int>( );
                },
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<Hello2>::Defined = true;
        }
    }
});