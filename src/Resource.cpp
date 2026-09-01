#include "Resource.h"

/**
 *
 * @brief Returns the name of the resource
 *
 * @return A non-owning view of the resource's name
 */
Resource::Resource(std::string_view name, Type type)
    : name(name), isAvailable(true), resourceType(type){}

/**
 *
 * @
 */
std::string_view Resource::getName() const {
    return name;
}
