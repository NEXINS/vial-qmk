# MCU name
MCU = STM32F103

#下面三行用来解锁F103XB的全部空间
BOOTLOADER = stm32duino #custom
#MCU_LDSCRIPT = STM32F103xB_stm32duino_bootloader
#BOARD = STM32_F103_STM32DUINO

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no      # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
#FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

# Enter lower-power sleep mode when on the ChibiOS idle thread
#OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812

OLED_ENABLE = yes      #开启OLED
OLED_DRIVER = SSD1306

ENCODER_ENABLE = yes
