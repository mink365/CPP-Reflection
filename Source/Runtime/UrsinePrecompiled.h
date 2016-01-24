#include <Type.h>
#include <TypeInfo.h>
//#include <TypeData.h>

//#include "MacroUtils.h"

#define UAssert 

#define __MESSAGE 

// Outputs a warning during compile time
#define URSINE_WARNING(text) __MESSAGE( " : Warning: " ##text )

// Outputs an error during compile time
#define URSINE_ERROR(text) __MESSAGE( " : Error: " ##text )

// Outputs a message during compile time
#define URSINE_MESSAGE(text) __MESSAGE( ": " ##text )

#ifdef URSINE_TODO_AS_WARNINGS

// Outputs a TODO message during compile time
#define URSINE_TODO(text) 

#else

// Outputs a TODO message during compile time
#define URSINE_TODO(text) 

#endif