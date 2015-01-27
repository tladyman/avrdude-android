#!/bin/sh

export DEV_PREFIX=/home/tom/Downloads/Linux
export CROSS_COMPILE=arm-linux-androideabi
export ANDROID_PREFIX=${DEV_PREFIX}/tc
export SYSROOT=${ANDROID_PREFIX}/sysroot
export CROSS_PATH=${ANDROID_PREFIX}/bin/${CROSS_COMPILE}

export CPP="${CROSS_PATH}-cpp --sysroot=$SYSROOT"
export AR="${CROSS_PATH}-ar "
export AS="${CROSS_PATH}-as --sysroot=$SYSROOT"
export NM="${CROSS_PATH}-nm --sysroot=$SYSROOT"
export CC="${CROSS_PATH}-gcc --sysroot=$SYSROOT"
export CXX="${CROSS_PATH}-g++ --sysroot=$SYSROOT"
export LD="${CROSS_PATH}-ld --sysroot=$SYSROOT"
export RANLIB="${CROSS_PATH}-ranlib "

export PREFIX=${DEV_PREFIX}/android-builds
export PKG_CONFIG_PATH=${PREFIX}/lib/pkgconfig
export CFLAGS="${CFLAGS} --sysroot=${SYSROOT} -I${SYSROOT}/usr/include -I${ANDROID_PREFIX}/include -I${PREFIX}/include"
export CPPFLAGS="${CFLAGS}"
export LDFLAGS="${LDFLAGS} -L${SYSROOT}/usr/lib -L${ANDROID_PREFIX}/lib -L${PREFIX}/lib "



./libusb.sh


./libftdi.sh

mkdir android-builds/include/linux
cp parport.h android-builds/include/linux/parport.h

cd trunk/avrdude/
make clean
./bootstrap
./configure --host=${CROSS_COMPILE} --prefix=${PREFIX} --disable-shared "$@"
make install

cd ../..

cp trunk/avrdude/avrdude.conf android-builds/bin/avrdude.conf

