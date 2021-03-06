#include "path_no_access.hpp"

PathNoAccessException::PathNoAccessException(std::string const &path) : message("Cannot access path: " + path)
{
}

char const *PathNoAccessException::PathNoAccessException::what() const noexcept
{
    return message.c_str();
}
