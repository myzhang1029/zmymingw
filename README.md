# zmymingw
A collection of free software sources for windows, kind of like Cygwin, but without the reuirement for any compability layers.

## Checking out
This repository use git submodules intensively. Please make sure you have checked out everything!

## Building
Builing is powered by [ZCBE](https://github.com/myzhang1029/zcbe).

First, install ZCBE with `pip`.

Next, change the `prefix` to the desired install prefix (NEVER point to `/usr` or any system path!).
It is suggested that you use a directory that you can write to because the install script will not
be run as root. And change `hostname` to the target host triplet of your MinGW-w64 installation.

Finally, run `zcbe <names>` or `zcbe -a` to build everything. Feel free to explore more options with `zcbe -h`.
Those build-time dependencies will be prompted to be installed when they are required.

Now you should have a customized free-and-opensource Windows toolchain.
