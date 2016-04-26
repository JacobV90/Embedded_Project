/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino/Genuino Uno, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define _VMDEBUG 1
#define ARDUINO 168
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define F_CPU 16000000L
#define ARDUINO 168
#define ARDUINO_AVR_UNO
#define ARDUINO_ARCH_AVR
extern "C" void __cxa_pure_virtual() {;}

//
//

#include "C:\Program Files (x86)\Arduino\hardware\arduino\avr\variants\standard\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino\arduino.h"
#include <..\IoT_Cam\IoT_Cam.ino>
#include <utils\assembler.h>
#include <config\board.h>
#include <utils\bit_handling\clz_ctz.h>
#include <utils\compiler.h>
#include <config\conf_at30tse75x.h>
#include <config\conf_board.h>
#include <config\conf_clock.h>
#include <config\conf_spi_master.h>
#include <config\conf_winc.h>
#include <delay\mega\cycle_counter.h>
#include <delay\delay.h>
#include <clock\dfll.h>
#include <clock\genclk.h>
#include <utils\interrupt.h>
#include <utils\interrupt\interrupt_avr8.h>
#include <ioport\ioport.h>
#include <ioport\mega\ioport.h>
#include <winc\driver\source\m2m_hif.c>
#include <winc\driver\source\m2m_hif.h>
#include <winc\driver\source\m2m_periph.c>
#include <winc\driver\include\m2m_periph.h>
#include <winc\socket\include\m2m_socket_host_if.h>
#include <winc\driver\include\m2m_types.h>
#include <winc\driver\source\m2m_wifi.c>
#include <winc\driver\include\m2m_wifi.h>
#include <config\main.h>
#include <utils\preprocessor\mrepeat.h>
#include <winc\bsp\include\nm_bsp.h>
#include <winc\bsp\include\nm_bsp_internal.h>
#include <winc\bsp\source\nm_bsp_mega.c>
#include <winc\bsp\include\nm_bsp_mega.h>
#include <winc\bus_wrapper\include\nm_bus_wrapper.h>
#include <winc\bus_wrapper\source\nm_bus_wrapper_mega.c>
#include <winc\common\source\nm_common.c>
#include <winc\common\include\nm_common.h>
#include <winc\common\include\nm_debug.h>
#include <winc\driver\source\nmasic.c>
#include <winc\driver\source\nmasic.h>
#include <winc\driver\source\nmbus.c>
#include <winc\driver\source\nmbus.h>
#include <winc\driver\source\nmdrv.c>
#include <winc\driver\source\nmdrv.h>
#include <winc\driver\source\nmi2c.c>
#include <winc\driver\source\nmi2c.h>
#include <winc\driver\source\nmspi.c>
#include <winc\driver\source\nmspi.h>
#include <winc\driver\source\nmuart.c>
#include <winc\driver\source\nmuart.h>
#include <clock\osc.h>
#include <utils\parts.h>
#include <clock\pll.h>
#include <utils\preprocessor\preprocessor.h>
#include <utils\progmem.h>
#include <winc\socket\source\socket.c>
#include <winc\socket\include\socket.h>
#include <winc\socket\source\socket_internal.h>
#include <spi\spi.c>
#include <spi\spi.h>
#include <utils\status_codes.h>
#include <utils\preprocessor\stringz.h>
#include <clock\mega\sysclk.c>
#include <clock\mega\sysclk.h>
#include <clock\sysclk.h>
#include <utils\preprocessor\tpaste.h>
