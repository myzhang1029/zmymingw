#!/bin/sh
type ninja > /dev/null 2>&1 && echo "Ninja" || echo "Unix Makefiles"
