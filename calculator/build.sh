#!/bin/sh

set -x
rm -rf build
meson setup build
cd build && meson compile