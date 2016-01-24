#include "Type.h"
#include "TypeUnpacker.hpp"

//#include <boost/functional/hash.hpp>

template <class T>
inline void hash_combine(std::size_t& seed, const T& v)
{
    std::hash<T> hasher;
    seed ^= hasher(v) + 0x9e3779b9 + (seed<<6) + (seed>>2);
}

namespace std
{
    template<>
    struct hash<ursine::meta::InvokableSignature>
    {
        size_t operator()(
            const ursine::meta::InvokableSignature &signature
        ) const
        {
            size_t seed = 0;

            // combine the hash of all type IDs in the signature
            for (auto &type : signature)
                hash_combine( seed, type.GetID( ) );

            return seed;
        }
    };
}

namespace ursine
{
    namespace meta
    {
        template<typename ...Types>
        InvokableSignature Invokable::CreateSignature(void)
        {
            static InvokableSignature signature;

            static auto initial = true;

            if (initial)
            {
                TypeUnpacker<Types...>::Apply( signature );

                initial = false;
            }

            return signature;
        }
    }
}