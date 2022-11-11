#!/bin/bash

find $1 -name "*.$2" | xargs cat | wc -l