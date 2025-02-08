FROM  archlinux:latest

# Install dependencies
RUN	 pacman -Syyu --noconfirm\
 base\
 base-devel\
 sudo openssh\ 
 bash-completion\ 
 nano\ 
 git\ 
 cmake\ 
 clang\
 make\ 
 neovim\
 less


