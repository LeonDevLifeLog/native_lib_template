SET(BOOST_COMPONENTS
        atomic
        chrono
        container
        context
        contract
        coroutine
        date_time
        fiber
        filesystem
        graph
        iostreams
        log
        log_setup
        math_c99
        math_c99f
        math_c99l
        math_tr1
        math_tr1f
        math_tr1l
        prg_exec_monitor
        program_options
        random
        regex
        serialization
        stacktrace_basic
        stacktrace_noop
        system
        thread
        timer
        type_erasure
        unit_test_framework
        wave
        wserialization)
set(BOOST_STATIC_COMPONENTS "")
foreach (component ${BOOST_COMPONENTS})
    add_library(${component} SHARED IMPORTED)
    set_target_properties(${component} PROPERTIES IMPORTED_LOCATION
            ${MY_BOOST_LIBS_DIR}/${ANDROID_ABI}/libboost_${component}.so)
    add_library("${component}-static" STATIC IMPORTED)
    set_target_properties("${component}-static" PROPERTIES IMPORTED_LOCATION
            ${MY_BOOST_LIBS_DIR}/${ANDROID_ABI}/libboost_${component}.a)
    list(APPEND BOOST_STATIC_COMPONENTS "${component}-static")
endforeach ()
include_directories(${MY_BOOST_INC_DIR})
