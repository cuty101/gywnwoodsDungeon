# gywnwoodsDungeon
My first CTF project

To set up the CTF, you will need docker and SSH.

run ./stupidDocker.sh

Everything will be set up for you automagically and you can start playing.

All tools that are needed to solve the challenges are preinstalled within the dockerfile.
This includes python2.7, python3, john, gdb, radare2, nano, vi, vim

SSH into the docker to start the challenges
ssh level1@{host-ip} -p 2205
password: level1

The flag will be the password for the next level

The source files are in the Dockerfile folder.
There are source codes included for references
The source codes are not required to solve the challenges, so try not to refer to the source codes.

Solution for challenge4 can be found in others/chal4/cracker.py
If you give up, you can check out my intended solution.
