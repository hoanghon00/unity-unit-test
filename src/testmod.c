/*
 * testmod.c
 *
 *  Created on: Nov 11, 2015
 *      Author: hoangnn4
 */
#include "testmod.h"

TEST_GROUP(mod);


TEST_SETUP(mod) {

}

TEST_TEAR_DOWN(mod) {

}

TEST(mod, DoNoThing) {
	TEST_ASSERT_EQUAL(1, foo());
}

TEST_GROUP_RUNNER(mod) {
	RUN_TEST_CASE(mod, DoNoThing);
}
