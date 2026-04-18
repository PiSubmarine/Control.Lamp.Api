#include <gtest/gtest.h>

#include <type_traits>

#include "PiSubmarine/Control/Lamp/Api/IController.h"

namespace PiSubmarine::Control::Lamp::Api
{
    TEST(IControllerTest, HasVirtualDestructor)
    {
        static_assert(std::has_virtual_destructor_v<IController>);
        SUCCEED();
    }
}
