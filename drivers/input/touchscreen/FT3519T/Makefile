# Makefile for the focaltech touchscreen drivers.

obj-$(CONFIG_TOUCHSCREEN_FTS)	:= focaltech_tp.o
focaltech_tp-y	:= 	focaltech_core.o focaltech_ex_fun.o focaltech_ex_mode.o focaltech_gesture.o focaltech_esdcheck.o \
				focaltech_point_report_check.o focaltech_i2c.o focaltech_flash.o \
				focaltech_test/focaltech_test.o \
				focaltech_test/focaltech_test_ini.o \
				focaltech_test/supported_ic/focaltech_test_ft3519t.o \
				focaltech_test/supported_ic/focaltech_test_ft3658u.o \
				focaltech_flash/focaltech_upgrade_ft3519t.o \
				focaltech_flash/focaltech_upgrade_ft3658u.o
