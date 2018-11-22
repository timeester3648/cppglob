#ifndef CPPGLOB_GLOB_HPP
#define CPPGLOB_GLOB_HPP

#include <vector>
#include "config.hpp"

namespace cppglob {
  /**
   * @brief Return a list of paths matching a pathname pattern.
   * @param pathname pattern string
   * @param recursive allow recursive pattern string
   *
   * The pattern may contain simple shell-style wildcards a la
   * fnmatch. However, unlike fnmatch, filenames starting with a
   * dot are special cases that are not matched by '*' and '?'
   * patterns.
   *
   * If recursive is true, the pattern '**' will match any files and
   * zero or more directories and subdirectories.
   */
  CPPGLOB_EXPORT std::vector<fs::path> glob(const fs::path& pathname,
                                            bool recursive = false);
}  // namespace cppglob

#endif
