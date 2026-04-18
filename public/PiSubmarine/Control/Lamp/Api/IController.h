#pragma once

#include "PiSubmarine/Control/Lamp/Api/Command.h"
#include "PiSubmarine/Error/Api/Result.h"

namespace PiSubmarine::Control::Lamp::Api
{
    class IController
    {
    public:
        virtual ~IController() = default;

        [[nodiscard]] virtual Error::Api::Result<void> SetTarget(const Command& target) = 0;
    };
}
