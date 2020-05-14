cd ~ &&

export DEBIAN_FRONTEND=noninteractive &&

sudo apt update &&
sudo apt full-upgrade -y --autoremove --purge &&
sudo apt install -y build-essential libpng-dev &&

curl -OL https://github.com/devkitPro/pacman/releases/latest/download/devkitpro-pacman.deb &&
sudo dpkg -i devkitpro-pacman.deb &&
sudo apt install -f &&

sudo dkp-pacman --noconfirm -S devkit-env devkitARM &&

. /etc/profile.d/devkit-env.sh &&

git clone https://github.com/pret/agbcc.git &&
git clone https://github.com/Fatih120/thpuppetplay2.git &&

cd agbcc &&
./build.sh &&
./install.sh ../thpuppetplay2 &&

cd ../thpuppetplay2 &&
make -j$(nproc)