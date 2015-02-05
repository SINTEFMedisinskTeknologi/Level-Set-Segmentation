#ifndef LEVELSET_HPP_
#define LEVELSET_HPP_

#include "SIPL/Core.hpp"

SIPL::Volume<char> * runLevelSet(
        const char * filename,
        SIPL::int3 seedPos,
        float seedRadius,
        int iterations,
        float threshold,
        float epsilon,
        float alpha,
        std::string kernel_dir,
        std::string oul_dir
);



#endif /* LEVELSET_HPP_ */
