#!/bin/sh

podman build -t=mausimus.net/build:ubuntu2204 .
#podman run -it --mount=type=bind,src=../,dst=/src mausimus.net/build:ubuntu2204
#cd src && make
