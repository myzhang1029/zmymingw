FROM gitpod/workspace-full

USER gitpod
RUN sudo apt-get -q update && sudo apt-get install -yq po4a build-essential docbook2x sphinx-doc file curl mingw-w64 nasm wine tcl rsync autopoint cmake autoconf automake libtool gettext texinfo pkg-config texi2html groff asciidoc xmlto python perl imagemagick meson ninja-build bison flex gfortran-mingw-w64 gperf docbook-utils help2man ed autoconf-archive fig2dev lua lua-mpack lua-bitop libtool-bin gtk-doc
# Install custom tools, runtime, etc. using apt-get
# For example, the command below would install "bastet" - a command line tetris clone:
#
# RUN sudo apt-get -q update && \
#     sudo apt-get install -yq bastet && \
#     sudo rm -rf /var/lib/apt/lists/*
#
# More information: https://www.gitpod.io/docs/config-docker/
