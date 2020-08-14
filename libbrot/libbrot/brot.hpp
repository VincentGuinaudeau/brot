#pragma once

#include <iosfwd>
#include <string>

#include <libbrot/export.hpp>

namespace brot
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBBROT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
