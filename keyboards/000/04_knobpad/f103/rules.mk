# MCU name
MCU = STM32F103

# Bootloader selection
# BOOTLOADER = stm32duino

MCU_LDSCRIPT = STM32F103xB
#BOARD = STM32_F103_STM32DUINO
#BOOTLOADER = stm32duino
#FIRMWARE_FORMAT = uf2
MCU_STARTUP ?= stm32f1xx

# Enter lower-power sleep mode when on the ChibiOS idle thread
#OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
