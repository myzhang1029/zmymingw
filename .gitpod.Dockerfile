FROM gitpod/workspace-full

USER gitpod
RUN sudo apt-get -q update && sudo apt-get install -yq po4a build-essential docbook2x sphinx-doc file curl mingw-w64 nasm wine tcl rsync

# Install custom tools, runtime, etc. using apt-get
# For example, the command below would install "bastet" - a command line tetris clone:
#
# RUN sudo apt-get -q update && \
#     sudo apt-get install -yq bastet && \
#     sudo rm -rf /var/lib/apt/lists/*
#
# More information: https://www.gitpod.io/docs/config-docker/
