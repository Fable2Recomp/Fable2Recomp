# Android build of xmp-lite for SDL_mixer

LOCAL_PATH	:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := xmp
LOCAL_CFLAGS    := -O3 -Wall -DLIBXMP_NO_PROWIZARD -DLIBXMP_NO_DEPACKERS -DHAVE_DIRENT -DHAVE_POWF
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_SRC_FILES := \
    src/control.c \
    src/dataio.c \
    src/effects.c \
    src/filter.c \
    src/filetype.c \
    src/format.c \
    src/hio.c \
    src/lfo.c \
    src/load.c \
    src/load_helpers.c \
    src/memio.c \
    src/misc.c \
    src/mix_all.c \
    src/mixer.c \
    src/period.c \
    src/player.c \
    src/read_event.c \
    src/scan.c \
    src/smix.c \
    src/virtual.c \
    src/md5.c \
    src/mix_paula.c \
    src/extras.c \
    src/far_extras.c \
    src/med_extras.c \
    src/hmn_extras.c \
    src/loaders/common.c \
    src/loaders/itsex.c \
    src/loaders/sample.c \
    src/loaders/it_load.c \
    src/loaders/mod_load.c \
    src/loaders/s3m_load.c \
    src/loaders/xm_load.c \
    src/loaders/voltable.c \
    src/loaders/iff.c \
    src/loaders/stm_load.c \
    src/loaders/669_load.c \
    src/loaders/far_load.c \
    src/loaders/mtm_load.c \
    src/loaders/ptm_load.c \
    src/loaders/okt_load.c \
    src/loaders/ult_load.c \
    src/loaders/mdl_load.c \
    src/loaders/stx_load.c \
    src/loaders/pt3_load.c \
    src/loaders/sfx_load.c \
    src/loaders/flt_load.c \
    src/loaders/st_load.c \
    src/loaders/emod_load.c \
    src/loaders/imf_load.c \
    src/loaders/digi_load.c \
    src/loaders/lzw.c \
    src/loaders/fnk_load.c \
    src/loaders/ice_load.c \
    src/loaders/liq_load.c \
    src/loaders/ims_load.c \
    src/loaders/masi_load.c \
    src/loaders/masi16_load.c \
    src/loaders/amf_load.c \
    src/loaders/stim_load.c \
    src/loaders/mmd_common.c \
    src/loaders/mmd1_load.c \
    src/loaders/mmd3_load.c \
    src/loaders/rtm_load.c \
    src/loaders/dt_load.c \
    src/loaders/no_load.c \
    src/loaders/arch_load.c \
    src/loaders/sym_load.c \
    src/loaders/med2_load.c \
    src/loaders/med3_load.c \
    src/loaders/med4_load.c \
    src/loaders/dbm_load.c \
    src/loaders/umx_load.c \
    src/loaders/gdm_load.c \
    src/loaders/pw_load.c \
    src/loaders/gal5_load.c \
    src/loaders/gal4_load.c \
    src/loaders/mfp_load.c \
    src/loaders/asylum_load.c \
    src/loaders/muse_load.c \
    src/loaders/hmn_load.c \
    src/loaders/mgt_load.c \
    src/loaders/chip_load.c \
    src/loaders/abk_load.c \
    src/loaders/coco_load.c \
    src/loaders/xmf_load.c \
    src/loaders/vorbis.c \
    src/miniz_tinfl.c \

include $(BUILD_STATIC_LIBRARY)
