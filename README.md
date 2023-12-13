# ./build_all.sh

CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- TOOLCHAIN_DIR: /home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10
-- BUILD_TYPE: Debug
CMake Deprecation Warning at CMakeLists.txt:5 (CMAKE_MINIMUM_REQUIRED):
  Compatibility with CMake < 2.8.12 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done
-- Generating done
-- Build files have been written to: /home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/armgcc
Scanning dependencies of target rpmsg_str_echo_rpmsglite_example
Consolidate compiler generated dependencies of target rpmsg_str_echo_rpmsglite_example
[  6%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/portable/MemMang/heap_2.c.obj
[  6%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F/port.c.obj
[ 10%] Building ASM object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/devices/MCIMX7D/startup/gcc/startup_MCIMX7D_M4.S.obj
[ 13%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c.obj
[ 17%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj
[ 24%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_ns.c.obj
[ 24%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_queue.c.obj
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_rx_callback':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:146:49: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  146 |             rsvd = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                                 ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_alloc_tx_buffer':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:685:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  685 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_send_nocopy':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:729:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  729 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_release_rx_buffer':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:770:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  770 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
[ 27%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj
[ 31%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/croutine.c.obj
[ 34%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/event_groups.c.obj
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c: In function 'StrEchoTask':
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:57:33: warning: unused variable 'rl_queue' [-Wunused-variable]
   57 |     volatile rpmsg_queue_handle rl_queue;
      |                                 ^~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:56:42: warning: unused variable 'rl_endpoint' [-Wunused-variable]
   56 |     struct rpmsg_lite_endpoint *volatile rl_endpoint;
      |                                          ^~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:55:28: warning: unused variable 'remote_addr' [-Wunused-variable]
   55 |     volatile unsigned long remote_addr;
      |                            ^~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:53:10: warning: unused variable 'rsp' [-Wunused-variable]
   53 |     char rsp[RPMSG_MAX_SIZE];
      |          ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:52:10: warning: unused variable 'buf' [-Wunused-variable]
   52 |     char buf[RPMSG_MAX_SIZE];
      |          ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:51:9: warning: unused variable 'recved' [-Wunused-variable]
   51 |     int recved = 0;
      |         ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:48:19: warning: unused variable 'size' [-Wunused-variable]
   48 |     unsigned long size;
      |                   ^~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:47:11: warning: unused variable 'tx_buf' [-Wunused-variable]
   47 |     void *tx_buf;
      |           ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:46:19: warning: unused variable 'src' [-Wunused-variable]
   46 |     unsigned long src;
      |                   ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:45:9: warning: unused variable 'len' [-Wunused-variable]
   45 |     int len;
      |         ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:44:11: warning: unused variable 'rx_buf' [-Wunused-variable]
   44 |     void *rx_buf;
      |           ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:42:27: warning: unused variable 'rdev' [-Wunused-variable]
   42 |     struct remote_device *rdev = NULL;
      |                           ^~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:41:9: warning: unused variable 'result' [-Wunused-variable]
   41 |     int result;
      |         ^~~~~~
At top level:
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:34:13: warning: 'app_buf' defined but not used [-Wunused-variable]
   34 | static char app_buf[512]; /* Each RPMSG buffer can carry less than 512 payload */
      |             ^~~~~~~
[ 37%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/list.c.obj
[ 41%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/queue.c.obj
[ 44%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/tasks.c.obj
[ 48%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/timers.c.obj
[ 51%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/ccm_analog_imx7d.c.obj
[ 55%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/ccm_imx7d.c.obj
[ 58%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/lmem.c.obj
[ 62%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/rdc.c.obj
[ 65%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/wdog_imx.c.obj
[ 68%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/utilities/src/debug_console_imx.c.obj
[ 72%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/utilities/src/print_scan.c.obj
[ 75%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/devices/MCIMX7D/startup/system_MCIMX7D_M4.c.obj
[ 79%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/pin_mux.c.obj
[ 82%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/board.c.obj
[ 86%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/clock_freq.c.obj
[ 89%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/hardware_init.c.obj
[ 93%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/uart_imx.c.obj
[ 96%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/mu_imx.c.obj
[100%] Linking C executable debug/rpmsg_str_echo_rpmsglite_example.elf
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_tx_remote':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:198: undefined reference to `virtqueue_add_consumed_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_tx_alloc_remote':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:218: undefined reference to `virtqueue_get_available_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_rx_remote':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:234: undefined reference to `virtqueue_get_available_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_rx_free_remote':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:252: undefined reference to `virtqueue_add_consumed_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `virtqueue_notify':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:360: undefined reference to `platform_notify'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `rpmsg_lite_remote_init':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:1048: undefined reference to `virtqueue_create'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: /home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:1078: undefined reference to `platform_init_interrupt'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: /home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:1079: undefined reference to `platform_init_interrupt'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_init':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c:107: undefined reference to `platform_init'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_enable_interrupt':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c:480: undefined reference to `platform_interrupt_enable'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_disable_interrupt':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c:493: undefined reference to `platform_interrupt_disable'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/build.make:528: debug/rpmsg_str_echo_rpmsglite_example.elf] Erro 1
make[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/all] Erro 2
make: *** [Makefile:91: all] Erro 2
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- TOOLCHAIN_DIR: /home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10
-- BUILD_TYPE: Release
CMake Deprecation Warning at CMakeLists.txt:5 (CMAKE_MINIMUM_REQUIRED):
  Compatibility with CMake < 2.8.12 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value or use a ...<max> suffix to tell
  CMake that the project does not need compatibility with older versions.


-- Configuring done
-- Generating done
-- Build files have been written to: /home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/armgcc
Scanning dependencies of target rpmsg_str_echo_rpmsglite_example
Consolidate compiler generated dependencies of target rpmsg_str_echo_rpmsglite_example
[  6%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F/port.c.obj
[  6%] Building ASM object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/devices/MCIMX7D/startup/gcc/startup_MCIMX7D_M4.S.obj
[ 10%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/portable/MemMang/heap_2.c.obj
[ 13%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c.obj
[ 17%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_rx_callback':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:146:49: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  146 |             rsvd = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                                 ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_alloc_tx_buffer':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:685:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  685 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_send_nocopy':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:729:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  729 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c: In function 'rpmsg_lite_release_rx_buffer':
/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c:770:45: warning: taking address of packed member of 'struct rpmsg_std_hdr' may result in an unaligned pointer value [-Waddress-of-packed-member]
  770 |     reserved = (struct rpmsg_hdr_reserved *)&rpmsg_msg->hdr.reserved;
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~
[ 20%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_ns.c.obj
[ 24%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_queue.c.obj
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c: In function 'StrEchoTask':
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:57:33: warning: unused variable 'rl_queue' [-Wunused-variable]
   57 |     volatile rpmsg_queue_handle rl_queue;
      |                                 ^~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:56:42: warning: unused variable 'rl_endpoint' [-Wunused-variable]
   56 |     struct rpmsg_lite_endpoint *volatile rl_endpoint;
      |                                          ^~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:55:28: warning: unused variable 'remote_addr' [-Wunused-variable]
   55 |     volatile unsigned long remote_addr;
      |                            ^~~~~~~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:53:10: warning: unused variable 'rsp' [-Wunused-variable]
   53 |     char rsp[RPMSG_MAX_SIZE];
      |          ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:52:10: warning: unused variable 'buf' [-Wunused-variable]
   52 |     char buf[RPMSG_MAX_SIZE];
      |          ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:51:9: warning: unused variable 'recved' [-Wunused-variable]
   51 |     int recved = 0;
      |         ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:48:19: warning: unused variable 'size' [-Wunused-variable]
   48 |     unsigned long size;
      |                   ^~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:47:11: warning: unused variable 'tx_buf' [-Wunused-variable]
   47 |     void *tx_buf;
      |           ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:46:19: warning: unused variable 'src' [-Wunused-variable]
   46 |     unsigned long src;
      |                   ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:45:9: warning: unused variable 'len' [-Wunused-variable]
   45 |     int len;
      |         ^~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:44:11: warning: unused variable 'rx_buf' [-Wunused-variable]
   44 |     void *rx_buf;
      |           ^~~~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:42:27: warning: unused variable 'rdev' [-Wunused-variable]
   42 |     struct remote_device *rdev = NULL;
      |                           ^~~~
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:41:9: warning: unused variable 'result' [-Wunused-variable]
   41 |     int result;
      |         ^~~~~~
At top level:
/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/str_echo_rpmsglite.c:34:13: warning: 'app_buf' defined but not used [-Wunused-variable]
   34 | static char app_buf[512]; /* Each RPMSG buffer can carry less than 512 payload */
      |             ^~~~~~~
[ 27%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj
[ 31%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/croutine.c.obj
[ 34%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/event_groups.c.obj
[ 37%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/list.c.obj
[ 41%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/queue.c.obj
[ 44%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/tasks.c.obj
[ 48%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/rtos/FreeRTOS/Source/timers.c.obj
[ 51%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/ccm_analog_imx7d.c.obj
[ 55%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/ccm_imx7d.c.obj
[ 58%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/lmem.c.obj
[ 62%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/rdc.c.obj
[ 65%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/wdog_imx.c.obj
[ 68%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/utilities/src/debug_console_imx.c.obj
[ 72%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/utilities/src/print_scan.c.obj
[ 75%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/devices/MCIMX7D/startup/system_MCIMX7D_M4.c.obj
[ 79%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/pin_mux.c.obj
[ 86%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/clock_freq.c.obj
[ 86%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/board.c.obj
[ 89%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/hardware_init.c.obj
[ 93%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/uart_imx.c.obj
[ 96%] Building C object CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/platform/drivers/src/mu_imx.c.obj
[100%] Linking C executable release/rpmsg_str_echo_rpmsglite_example.elf
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `virtqueue_notify':
rpmsg_lite.c:(.text.virtqueue_notify+0x4): undefined reference to `platform_notify'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_tx_remote':
rpmsg_lite.c:(.text.vq_tx_remote+0x4): undefined reference to `virtqueue_add_consumed_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_tx_alloc_remote':
rpmsg_lite.c:(.text.vq_tx_alloc_remote+0x6): undefined reference to `virtqueue_get_available_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `vq_rx_remote':
rpmsg_lite.c:(.text.vq_rx_remote+0x6): undefined reference to `virtqueue_get_available_buffer'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/rpmsg_lite.c.obj: in function `rpmsg_lite_remote_init':
rpmsg_lite.c:(.text.rpmsg_lite_remote_init+0x66): undefined reference to `virtqueue_create'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: rpmsg_lite.c:(.text.rpmsg_lite_remote_init+0x8e): undefined reference to `virtqueue_create'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: rpmsg_lite.c:(.text.rpmsg_lite_remote_init+0xb6): undefined reference to `platform_init_interrupt'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: rpmsg_lite.c:(.text.rpmsg_lite_remote_init+0xc0): undefined reference to `platform_init_interrupt'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_init':
rpmsg_env_freertos.c:(.text.env_init+0x32): undefined reference to `platform_init'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_enable_interrupt':
rpmsg_env_freertos.c:(.text.env_enable_interrupt+0x0): undefined reference to `platform_interrupt_enable'
/home/neuberfran/neuber/gcc-arm-none-eabi-10.3-2021.10/bin/../lib/gcc/arm-none-eabi/10.3.1/../../../../arm-none-eabi/bin/ld: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/home/neuberfran/projects/freertos-tn/middleware/multicore/open-amp/lib/rpmsg_lite/porting/environment/rpmsg_env_freertos.c.obj: in function `env_disable_interrupt':
rpmsg_env_freertos.c:(.text.env_disable_interrupt+0x0): undefined reference to `platform_interrupt_disable'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/build.make:528: release/rpmsg_str_echo_rpmsglite_example.elf] Erro 1
make[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/rpmsg_str_echo_rpmsglite_example.dir/all] Erro 2
make: *** [Makefile:91: all] Erro 2
neuberfran@neuberfran2004:~/projects/freertos-tn/examples/imx7d_pico_m4/demo_apps/rpmsg/str_echo_rpmsglite/armgcc$ 

![alt text](https://github.com/neuberfran/imx7d_pico_m4/blob/main/Captura%20de%20tela%20de%202023-12-13%2015-36-18.png?raw=true)


