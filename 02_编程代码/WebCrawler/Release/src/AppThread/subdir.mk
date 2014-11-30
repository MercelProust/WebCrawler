################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AppThread/IThread.cpp \
../src/AppThread/IUIInputProcessor.cpp \
../src/AppThread/UIInputWatcher.cpp \
../src/AppThread/WebCrawler.cpp \
../src/AppThread/WebCrawlerAppLication.cpp \
../src/AppThread/WebCrawlerThread.cpp 

OBJS += \
./src/AppThread/IThread.o \
./src/AppThread/IUIInputProcessor.o \
./src/AppThread/UIInputWatcher.o \
./src/AppThread/WebCrawler.o \
./src/AppThread/WebCrawlerAppLication.o \
./src/AppThread/WebCrawlerThread.o 

CPP_DEPS += \
./src/AppThread/IThread.d \
./src/AppThread/IUIInputProcessor.d \
./src/AppThread/UIInputWatcher.d \
./src/AppThread/WebCrawler.d \
./src/AppThread/WebCrawlerAppLication.d \
./src/AppThread/WebCrawlerThread.d 


# Each subdirectory must supply rules for building sources it contributes
src/AppThread/%.o: ../src/AppThread/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


