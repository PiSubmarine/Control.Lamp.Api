#include <gtest/gtest.h>

#include "PiSubmarine/Control/Lamp/Api/Command.h"

namespace PiSubmarine::Control::Lamp::Api
{
    TEST(CommandTest, CreateStoresIntensity)
    {
        constexpr auto command = Command::Create(NormalizedFraction(0.65));

        static_assert(command.Intensity() == NormalizedFraction(0.65));
        EXPECT_EQ(command.Intensity(), NormalizedFraction(0.65));
    }
}
