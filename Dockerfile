FROM tensorflow/tensorflow:2.6.0-gpu

ENV LANG C.UTF-8

# set the working directory in the container
WORKDIR tmp

# Install dependencies
RUN pip install sklearn
