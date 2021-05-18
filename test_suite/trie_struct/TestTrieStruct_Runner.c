#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(TrieStruct)
{

	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToDelim_KL1_EB0);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToDelim_KL0_EB1);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToDelim_KL0_EB0);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToDelim_KL1_EB1);

	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToEnd_KL1_EB0);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToEnd_KL0_EB1);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToEnd_KL0_EB0);
	RUN_TEST_CASE(TrieStruct, UnitTest_ParseToEnd_KL1_EB1);

	RUN_TEST_CASE(TrieStruct, UnitTest_Partial_KL1_EB0);
	RUN_TEST_CASE(TrieStruct, UnitTest_Partial_KL0_EB0);

	RUN_TEST_CASE(TrieStruct, UnitTest_BuffEnd_KL0_EB1);
	RUN_TEST_CASE(TrieStruct, UnitTest_BuffEnd_KL0_EB0);

	RUN_TEST_CASE(TrieStruct, UnitTest_BuffEarlyEnd_KL0_EB1);
	RUN_TEST_CASE(TrieStruct, UnitTest_BuffEarlyEnd_KL0_EB0);

	RUN_TEST_CASE(TrieStruct, UnitTest_Sentinel_On);
	RUN_TEST_CASE(TrieStruct, UnitTest_Sentinel_Off);

	RUN_TEST_CASE(TrieStruct, UnitTest_RunOn);
	RUN_TEST_CASE(TrieStruct, UnitTest_HardDelim_On);
	RUN_TEST_CASE(TrieStruct, UnitTest_HardDelim_Off);
}