import sys
import os
import subprocess

char="-qwertyuiopasdfghjklzxxcvbnmQWERTYUIOPASDFGHJKLZXCXVBNM0123456789{}"
flag=""

for count in range(37):
    for i in char:
        with subprocess.Popen(["./doors "+flag+i], shell=True, stdout=subprocess.PIPE) as sub:
                output=sub.stdout.readline().decode()
                #sub.wait()
        if output!="":
            flag+=i
            print(flag)

