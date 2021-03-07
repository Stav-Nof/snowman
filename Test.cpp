#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



TEST_CASE("Good snowman code") {

    CHECK(snowman(11111111) == string("\n _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(21114411) == string("\n ___ \n.....\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(31114411) == string("\n  _  \n /_\\\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(41114411) == string("\n ___ \n(_*_)\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12431424) == string("\n _===_\n<(O.-) \n<(] [) \n (   )"));
    CHECK(snowman(11442214) == string("\n _===_\n\\(-,-)/\n ( : )\n (   )"));
    CHECK(snowman(13114211) == string("\n_===_\n(._.)\n( : )/\n( : )"));
    CHECK(snowman(41114411) == string("\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114421) == string("\n_===_\n(.,.)\n(] [)\n( : )"));
    CHECK(snowman(11114422) == string("\n_===_\n(.,.)\n(] [)\n("  ")"));
    CHECK(snowman(11114423) == string("\n_===_\n(.,.)\n(] [)\n(___)"));
    CHECK(snowman(31133131) == string("\n   _  \n  /_\\ \n/(O,.)>\n/(> <)>\n ( : )"));
    CHECK(snowman(33333433) == string("\n   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));

}

TEST_CASE("Bad snowman code") {
    
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-123));
    CHECK_THROWS(snowman(-1234));
    CHECK_THROWS(snowman(122345));
    CHECK_THROWS(snowman(888888888));
    CHECK_THROWS(snowman(124458));
    CHECK_THROWS(snowman(987));
    CHECK_THROWS(snowman(587));
    CHECK_THROWS(snowman(595));
    CHECK_THROWS(snowman(532));
    CHECK_THROWS(snowman(1225));
    CHECK_THROWS(snowman(52321));
    CHECK_THROWS(snowman(53245));
    CHECK_THROWS(snowman(531));
    CHECK_THROWS(snowman(11155));
    

}



