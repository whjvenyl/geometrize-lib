#pragma once

#include <cstdint>
#include <memory>

#include "shape.h"

namespace geometrize
{

/**
 * @brief The Ellipse class represents an ellipse.
 * @author Sam Twidale (http://samcodes.co.uk/)
 */
class Ellipse : public Shape
{
public:
    /**
     * @brief Ellipse Creates a new ellipse.
     * @param xBound xBound	The x-bound of the whole canvas.
     * @param yBound yBound	The y-bound of the whole canvas.
     */
    Ellipse(std::uint32_t xBound, std::uint32_t yBound);

    virtual std::shared_ptr<geometrize::Shape> clone() const;
    virtual std::vector<geometrize::Scanline> rasterize() const override;
    virtual void mutate() override;
    virtual geometrize::shapes::ShapeTypes getType() const override;
    virtual std::vector<std::int32_t> getShapeData() const override;

private:
    const std::uint32_t m_xBound; ///< The x-bound of the whole canvas.
    const std::uint32_t m_yBound; ///< The y-bound of the whole canvas.
};

}
