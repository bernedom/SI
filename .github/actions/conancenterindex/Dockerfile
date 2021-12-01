FROM python:3-alpine

ARG FORK_OF_INDEX

RUN apk update && apk upgrade && apk add --no-cache git openssh


COPY updater.py /tmp/conan-center-index/

ENTRYPOINT [ /tmp/conan-center-index/updater.py ]

