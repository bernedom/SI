FROM python:3-alpine

RUN apk update && apk upgrade && apk add --no-cache git openssh

RUN git clone $INPUT_FORK_OF_INDEX --depth=1 /tmp/conan-center-index
COPY updater.py /tmp/conan-center-index/

RUN ls -lR /tmp/conan-center-index
