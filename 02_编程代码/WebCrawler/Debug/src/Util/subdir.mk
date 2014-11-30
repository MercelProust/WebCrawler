################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Util/FileManager.cpp \
../src/Util/HttpPageTxtParser.cpp \
../src/Util/ITextParser.cpp 

OBJS += \
./src/Util/FileManager.o \
./src/Util/HttpPageTxtParser.o \
./src/Util/ITextParser.o 

CPP_DEPS += \
./src/Util/FileManager.d \
./src/Util/HttpPageTxtParser.d \
./src/Util/ITextParser.d 


# Each subdirectory must supply rules for building sources it contributes
src/Util/%.o: ../src/Util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


