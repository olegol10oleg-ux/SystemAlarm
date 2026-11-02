add_library(alarm_domain STATIC
    src/Sensor.cpp
    src/MotionSensor.cpp
    src/DoorSensor.cpp
    src/SystemAlarm.cpp
)
target_include_directories(alarm_domain PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_compile_features(alarm_domain PUBLIC cxx_std_20)
