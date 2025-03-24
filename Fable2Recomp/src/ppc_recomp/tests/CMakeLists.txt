set(PPC_RECOMP_TEST_SOURCES
    decoder_test.cpp
    recompiler_test.cpp
)

add_executable(ppc_recomp_tests ${PPC_RECOMP_TEST_SOURCES})

target_link_libraries(ppc_recomp_tests
    PRIVATE
        ppc_recomp
        GTest::gtest
        GTest::gtest_main
)

add_test(NAME ppc_recomp_tests COMMAND ppc_recomp_tests) 