#!/bin/sh
ifconfig | grep ether | sed 's/ether//' | cut -d " " -f 2
