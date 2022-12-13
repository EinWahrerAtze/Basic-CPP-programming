#include "Wrong_values.h"

Wrong_values::Wrong_values(const std::string & what) : std::runtime_error(what) { }