#include <gtest/gtest.h>

#include "PiSubmarine/Control/Lamp/Api/IControllerMock.h"

namespace PiSubmarine::Control::Lamp::Api
{
    TEST(IControllerMockTest, SupportsSettingLampTarget)
    {
        IControllerMock controller;
        const auto target = Command::Create(NormalizedFraction(0.75));

        EXPECT_CALL(controller, SetTarget(target))
            .WillOnce(testing::Return(Error::Api::Result<void>{}));

        EXPECT_TRUE(controller.SetTarget(target).has_value());
    }
}
