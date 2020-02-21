#ubuntu base
FROM ubuntu

#install ssh
RUN apt-get update
RUN apt-get install -y openssh-server
RUN mkdir /var/run/sshd

#install tools
#RUN apt-get update
RUN apt-get install -y python2.7
RUN apt-get install -y python3
RUN apt-get install -y john
RUN apt-get install -y gdb
RUN apt-get install -y radare2
RUN apt-get install -y nano
#RUN apt-get install -y vi
RUN apt-get install -y vim

#unlock root for testing, comment it out when not in use
#RUN echo 'root:root' | chpasswd

#import sshd_config
COPY ./sshd_config /etc/ssh/sshd_config

#creat ssh folder for root
RUN mkdir /root/.ssh

#clean up useless things
RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

#open port 22 for ssh
EXPOSE 22

#create users
RUN useradd -ms /bin/bash level1                                
RUN echo level1:level1 | chpasswd                               
                                                                
RUN useradd -ms /bin/bash level2                                
RUN echo level2:icc-{c3ebda3f139cd2d1c63744eae963b704} | chpasswd                                                               
                                                                
RUN useradd -ms /bin/bash guard                                 
RUN echo guard:chichi | chpasswd

RUN useradd -ms /bin/bash level3
RUN echo level3:icc-{37fb86065a583125e1442e9e9053f5e0} | chpasswd

RUN useradd -ms /bin/bash level4
RUN echo level4:icc-{003fcb67cfcd4f77f37c3649430fe683} | chpasswd

RUN useradd -ms /bin/bash level5
RUN echo level5:icc-{7d78cfbd1dcd7f6aa0c7a7bf42fdbbc5} | chpasswd

RUN useradd -ms /bin/bash level6
RUN echo level6:icc-{63eb1987bcca765c91ed6fdd7f131f63} | chpasswd


#set header and motd
COPY ./others/00-header /etc/update-motd.d/00-header
COPY ./others/issue.net /etc/issue.net

#chal1
#USER level1
COPY ./others/chal1/.bashrc /home/level1/.bashrc
COPY ./others/chal1/chal1situation /home/level1/situation
COPY ./others/chal1/wallOfText /home/level1/wallOfText
RUN chmod 400 /home/level1/situation
RUN chmod 400 /home/level1/wallOfText
RUN chown level1:level1 /home/level1/situation
RUN chown level1:level1 /home/level1/wallOfText

#chal2
#USER level2
COPY ./others/chal2/.bashrc /home/level2/.bashrc
COPY ./others/chal2/situation /home/level2/situation
COPY ./others/chal2/passwd /home/level2/passwd
COPY ./others/chal2/shadow /home/level2/shadow
RUN chmod 400 /home/level2/situation
RUN chmod 400 /home/level2/passwd
RUN chmod 400 /home/level2/shadow
RUN chown level2:level2 /home/level2/situation
RUN chown level2:level2 /home/level2/passwd
RUN chown level2:level2 /home/level2/shadow

#USER guard
COPY ./others/chal2/flag.txt /home/level2/flag
RUN chmod 400 /home/level2/flag
RUN chown guard:guard /home/level2/flag

#chal3
#USER level3
COPY ./others/chal3/.bashrc /home/level3/.bashrc
COPY ./others/chal3/padlock /home/level3/padlock
COPY ./others/chal3/situation /home/level3/situation
RUN chmod 500 /home/level3/padlock
RUN chmod 400 /home/level3/situation
RUN chown level3:level3 /home/level3/padlock
RUN chown level3:level3 /home/level3/situation

#chal4
#USER level4
COPY ./others/chal4/.bashrc /home/level4/.bashrc
COPY ./others/chal4/shellescape.sh /var/shellescape.sh
COPY ./others/chal4/flag /home/level4/flag
COPY ./others/chal4/situation /home/level4/situation
RUN chmod 555 /var/shellescape.sh
RUN chmod 400 /home/level4/flag
RUN chmod 400 /home/level4/situation
RUN chown level4:level4 /home/level4/flag
RUN chown level4:level4 /home/level4/situation
USER root

#chal5
COPY ./others/chal5/.bashrc /home/level5/.bashrc
COPY ./others/chal5/doors /home/level5/doors
COPY ./others/chal5/situation /home/level5/situation
RUN chmod 400 /home/level5/doors
RUN chmod 400 /home/level5/situation
RUN chown level5:level5 /home/level5/doors
RUN chown level5:level5 /home/level5/situation

#chal6
COPY ./others/chal2/.bashrc /home/level6/.bashrc
COPY ./others/chal6/license /home/level6/license
COPY ./others/chal6/situation /home/level6/situation
RUN chmod 500 /home/level6/license
RUN chmod 400 /home/level6/situation
RUN chown level6:level6 /home/level6/license
RUN chown level6:level6 /home/level6/situation
