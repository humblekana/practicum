MCU=atmega328p

all: $(TARGET)
 
%.flash: %.hex
	avrdude -p $(MCU) -c usbasp -U flash:w:$<
 
%.hex: %.elf
	avr-objcopy -j .text -j .data -O ihex $< $@
 
%.elf: %.o 
	avr-gcc -mmcu=$(MCU) -O2 -o $@ $^
 
%.o: %.c %.h
	avr-gcc -mmcu=$(MCU) -O2 -c -o $@ $<
 
clean:
	rm -f *.o *.elf *.hex

 
