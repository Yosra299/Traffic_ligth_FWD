################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/BOTTON.c \
../ECUAL/LED.c \
../ECUAL/TImer.c 

OBJS += \
./ECUAL/BOTTON.o \
./ECUAL/LED.o \
./ECUAL/TImer.o 

C_DEPS += \
./ECUAL/BOTTON.d \
./ECUAL/LED.d \
./ECUAL/TImer.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/%.o: ../ECUAL/%.c ECUAL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


