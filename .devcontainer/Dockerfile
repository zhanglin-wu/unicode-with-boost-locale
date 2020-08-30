
FROM ubuntu:16.04

# Configure apt and install packages
RUN apt-get update -y && \
    # Install C++ tools
    apt-get -y install build-essential cmake cppcheck valgrind libboost-all-dev
    #
    # Clean up
    # apt-get autoremove -y && \
    # apt-get clean -y && \
    # rm -rf /var/lib/apt/lists/*
