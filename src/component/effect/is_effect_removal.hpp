#ifndef GW2COMBAT_COMPONENT_EFFECT_IS_EFFECT_REMOVAL_HPP
#define GW2COMBAT_COMPONENT_EFFECT_IS_EFFECT_REMOVAL_HPP

#include "configuration/effect_removal.hpp"

namespace gw2combat::component {

struct is_effect_removal_t {
    std::vector<configuration::effect_removal_t> effect_removals;
};

}  // namespace gw2combat::component

#endif  // GW2COMBAT_COMPONENT_EFFECT_IS_EFFECT_REMOVAL_HPP
