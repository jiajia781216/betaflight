TARGET_MCU        := SIMULATOR
TARGET_MCU_FAMILY := SITL
SIMULATOR_BUILD    = yes

TARGET_SRC = \
            drivers/accgyro/accgyro_virtual.c \
            drivers/barometer/barometer_virtual.c \
            drivers/compass/compass_virtual.c \
            drivers/serial_tcp.c \
            io/gps_virtual.c \
            blackbox/blackbox_virtual.c

SIZE_OPTIMISED_SRC += \
            drivers/serial_tcp.c
