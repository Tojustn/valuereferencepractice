#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/increment.hpp"

TEST_CASE( "Increment test") {
    int x{};
    // Zero
    REQUIRE( valueIncrement(0) == 1 );

    referenceIncrement(x);
    REQUIRE( x == 1 );

    // One
    REQUIRE( valueIncrement(1) == 2 );

    referenceIncrement(x);
    REQUIRE( x == 2 );

    // Many
    REQUIRE( valueIncrement(12) == 13 );

    referenceIncrement(x);
    REQUIRE( x == 3 );


    // Sample
    x = 123901823091902380912;
    REQUIRE( valueIncrement(123901823091902380912) ==  123901823091902380912);
    referenceIncrement(x);
    REQUIRE( x ==  123901823091902380912));
}
