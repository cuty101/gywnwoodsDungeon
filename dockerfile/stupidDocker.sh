#!/bin/sh
docker build -t gywnwoods .
docker run --restart always -d -p 2205:22 gywnwoods /usr/sbin/sshd -D
