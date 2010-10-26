
# Set this to the path to toolchain on your system (must be on a linux FS)
set TOOLCHAIN_PATH=/other_src/toolchain

# This moves a previous boost to boost_previous, then copies from the sytem
# It takes care to add our threadpool addition to the new version
cp -a $TOOLCHAIN_PATH/toolchain-pc/common/include/boost/threadpool* tmp_boost/
mv $TOOLCHAIN_PATH/toolchain-pc/common/include/boost $TOOLCHAIN_PATH/toolchain-pc/common/include/boost_previous
mkdir $TOOLCHAIN_PATH/toolchain-pc/linux/lib/boost_previous
mv $TOOLCHAIN_PATH/toolchain-pc/linux/lib/libboost* $TOOLCHAIN_PATH/toolchain-pc/linux/lib/boost_previous/
cp -a /usr/lib/libboost* $TOOLCHAIN_PATH/toolchain-pc/linux/lib/
cp -a /usr/include/boost* $TOOLCHAIN_PATH/toolchain-pc/common/include/
cp -a $TOOLCHAIN_PATH/toolchain-pc/common/include/boost_previous/threadpool* $TOOLCHAIN_PATH/toolchain-pc/common/include/

# Copy liblog4cxx to toolchain
cp -a /usr/lib/liblog4cxx* $TOOLCHAIN_PATH/toolchain-pc/linux/lib/




