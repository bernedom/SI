FROM python:3-alpine

ARG FORK_OF_INDEX

RUN apk update && apk upgrade && apk add --no-cache git openssh

RUN git clone $FORK_OF_INDEX --depth=1 /tmp/conan-center-index
COPY updater.py /tmp/conan-center-index/

RUN ls -lR /tmp/conan-center-index
