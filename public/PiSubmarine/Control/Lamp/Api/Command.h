#pragma once

#include "PiSubmarine/NormalizedFraction.h"

namespace PiSubmarine::Control::Lamp::Api
{
    class Command
    {
    public:
        [[nodiscard]] static constexpr Command Create(const NormalizedFraction intensity) noexcept
        {
            return Command(intensity);
        }

        [[nodiscard]] constexpr NormalizedFraction Intensity() const noexcept
        {
            return m_Intensity;
        }

        [[nodiscard]] constexpr bool operator==(const Command&) const = default;

    private:
        constexpr explicit Command(const NormalizedFraction intensity) noexcept
            : m_Intensity(intensity)
        {
        }

        NormalizedFraction m_Intensity;
    };
}
