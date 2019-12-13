################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include myUART/subdir.mk
-include mySmartSensor/subdir.mk
-include mySPI/subdir.mk
-include myADC/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
SmartSensor_Slave.lss \

FLASH_IMAGE += \
SmartSensor_Slave.hex \

EEPROM_IMAGE += \
SmartSensor_Slave.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: SmartSensor_Slave.elf secondary-outputs

# Tool invocations
SmartSensor_Slave.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SmartSensor_Slave.map -mmcu=atmega2560 -o "SmartSensor_Slave.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SmartSensor_Slave.lss: SmartSensor_Slave.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SmartSensor_Slave.elf  >"SmartSensor_Slave.lss"
	@echo 'Finished building: $@'
	@echo ' '

SmartSensor_Slave.hex: SmartSensor_Slave.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SmartSensor_Slave.elf  "SmartSensor_Slave.hex"
	@echo 'Finished building: $@'
	@echo ' '

SmartSensor_Slave.eep: SmartSensor_Slave.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex SmartSensor_Slave.elf  "SmartSensor_Slave.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SmartSensor_Slave.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t SmartSensor_Slave.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SmartSensor_Slave.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
