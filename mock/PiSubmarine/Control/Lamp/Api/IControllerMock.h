#pragma once

#include <gmock/gmock.h>

#include "PiSubmarine/Control/Lamp/Api/IController.h"

namespace PiSubmarine::Control::Lamp::Api
{
    class IControllerMock : public IController
    {
    public:
        MOCK_METHOD((Error::Api::Result<void>), SetTarget, (const Command& target), (override));
    };
}
