#!/usr/bin/env python

import fileinput

def getResult(line):
    numbers = line.split()
    return pow(int(numbers[0]), int(numbers[1]), int(numbers[2]))

results = [str(getResult(line)) for line in fileinput.input()]

print '\n'.join(results)
