# sh -c "$(curl -fsSL https://github.com/HARMONYREN-RD-DEPARTMENT/libharmonyren/raw/refs/heads/master/install.sh)"

mkdir -p libs

git clone https://github.com/HARMONYREN-RD-DEPARTMENT/libharmonyren.git

cp -r libharmonyren/include .
cp libharmonyren/release/*/** libs

rm -rf libharmonyren
