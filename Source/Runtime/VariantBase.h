/* ----------------------------------------------------------------------------
** © 201x Austin Brunkhorst, All Rights Reserved.
**
** VariantBase.h
** --------------------------------------------------------------------------*/

#pragma once

#include <string>

namespace ursine
{
    namespace meta
    {
        class Type;

        class VariantBase
        {
        public:
            virtual ~VariantBase(void) { }

            virtual Type GetType(void) const = 0;

            virtual void *GetPtr(void) const = 0;

            virtual int ToInt(void) const = 0;
            virtual bool ToBool(void) const = 0;
            virtual float ToFloat(void) const = 0;
            virtual double ToDouble(void) const = 0;
            virtual std::string ToString(void) const = 0;

            virtual VariantBase *Clone(void) const = 0;
        };
    }
}