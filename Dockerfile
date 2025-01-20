FROM  archlinux:latest

# Install dependencies
RUN	 pacman -Syyu --noconfirm base base-devel sudo openssh bash-completion nano git cmake clang make neovim less

# Generate host keys
RUN  /usr/bin/ssh-keygen -A

# Add defualt user
RUN  useradd vscode
RUN  mkdir -p /home/vscode/.ssh
RUN  chmod -R 700 /home/vscode/.ssh/
RUN  echo "SHA256:ClHp6tnmAuRxsPYgTDIHK9PLNSWozOE+WLpHLyN6Eqs shyamendrahazracodespace@gmail.com" > home/vscode/.ssh/authorized_keys
RUN  chmod 600 /home/vscode/.ssh/authorized_keys
RUN  chown -R vscode:vscode /home/vscode/
RUN  usermod -aG wheel vscode
RUN	 echo 'vscode:shyamendra_user_code' | chpasswd

USER vscode

# Add password to root user
RUN	 echo 'root:shyamendra_user_root' | chpasswd

# Config sshd
RUN  sed -i -e 's/^#PasswordAuthentication yes/PasswordAuthentication no/g' /etc/ssh/sshd_config
RUN  sed -i -e 's/^#PubkeyAuthentication yes/PubkeyAuthentication yes/g' /etc/ssh/sshd_config
RUN  sed -i -e 's/^UsePAM yes/UsePAM no/g' /etc/ssh/sshd_config


