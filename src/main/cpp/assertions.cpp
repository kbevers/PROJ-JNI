// DO NOT EDIT THIS FILE - it is machine generated.
// See org.kortforsyningen.proj.EnumerationValueTest.

#include "proj/coordinateoperation.hpp"

using osgeo::proj::util::IComparable;
using osgeo::proj::common::UnitOfMeasure;
using osgeo::proj::operation::CoordinateOperationContext;


// Verify that Java ordinal values are the same than C++ enumeration values.
static_assert(static_cast<int>(UnitOfMeasure::Type::UNKNOWN) == 0, "Unexpected value for UNKNOWN");
static_assert(static_cast<int>(UnitOfMeasure::Type::NONE) == 1, "Unexpected value for NONE");
static_assert(static_cast<int>(UnitOfMeasure::Type::ANGULAR) == 2, "Unexpected value for ANGULAR");
static_assert(static_cast<int>(UnitOfMeasure::Type::LINEAR) == 3, "Unexpected value for LINEAR");
static_assert(static_cast<int>(UnitOfMeasure::Type::SCALE) == 4, "Unexpected value for SCALE");
static_assert(static_cast<int>(UnitOfMeasure::Type::TIME) == 5, "Unexpected value for TIME");
static_assert(static_cast<int>(IComparable::Criterion::STRICT) == 0, "Unexpected value for STRICT");
static_assert(static_cast<int>(IComparable::Criterion::EQUIVALENT) == 1, "Unexpected value for EQUIVALENT");
static_assert(static_cast<int>(IComparable::Criterion::EQUIVALENT_EXCEPT_AXIS_ORDER_GEOGCRS) == 2, "Unexpected value for EQUIVALENT_EXCEPT_AXIS_ORDER_GEOGCRS");
static_assert(static_cast<int>(CoordinateOperationContext::SourceTargetCRSExtentUse::NONE) == 0, "Unexpected value for NONE");
static_assert(static_cast<int>(CoordinateOperationContext::SourceTargetCRSExtentUse::BOTH) == 1, "Unexpected value for BOTH");
static_assert(static_cast<int>(CoordinateOperationContext::SourceTargetCRSExtentUse::INTERSECTION) == 2, "Unexpected value for INTERSECTION");
static_assert(static_cast<int>(CoordinateOperationContext::SourceTargetCRSExtentUse::SMALLEST) == 3, "Unexpected value for SMALLEST");
static_assert(static_cast<int>(CoordinateOperationContext::SpatialCriterion::STRICT_CONTAINMENT) == 0, "Unexpected value for STRICT_CONTAINMENT");
static_assert(static_cast<int>(CoordinateOperationContext::SpatialCriterion::PARTIAL_INTERSECTION) == 1, "Unexpected value for PARTIAL_INTERSECTION");
static_assert(static_cast<int>(CoordinateOperationContext::GridAvailabilityUse::USE_FOR_SORTING) == 0, "Unexpected value for USE_FOR_SORTING");
static_assert(static_cast<int>(CoordinateOperationContext::GridAvailabilityUse::DISCARD_OPERATION_IF_MISSING_GRID) == 1, "Unexpected value for DISCARD_OPERATION_IF_MISSING_GRID");
static_assert(static_cast<int>(CoordinateOperationContext::GridAvailabilityUse::IGNORE_GRID_AVAILABILITY) == 2, "Unexpected value for IGNORE_GRID_AVAILABILITY");
static_assert(static_cast<int>(CoordinateOperationContext::IntermediateCRSUse::ALWAYS) == 0, "Unexpected value for ALWAYS");
static_assert(static_cast<int>(CoordinateOperationContext::IntermediateCRSUse::IF_NO_DIRECT_TRANSFORMATION) == 1, "Unexpected value for IF_NO_DIRECT_TRANSFORMATION");
static_assert(static_cast<int>(CoordinateOperationContext::IntermediateCRSUse::NEVER) == 2, "Unexpected value for NEVER");
