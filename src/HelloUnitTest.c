/*
 ============================================================================
 Name        : HelloUnitTest.c
 Author      : Ryan
 Version     :
 Copyright   : GNU
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "unity_fixture.h"

static void RunAllTests() {
	RUN_TEST_GROUP(mod);
}

int main(int argc, const char *argv[]) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return UnityMain(argc, argv, RunAllTests);
}
