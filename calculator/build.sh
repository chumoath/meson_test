#!/bin/sh

apt install -y readline-common libreadline-dev

set -x
rm -rf build
meson setup build
cd build && meson compile