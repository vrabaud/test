== Compilation ==

First you need to get the source:

#add rosbride to toc
toc add git@git.aldebaran.lan:ros/rosbridge.git

#this will bring ros
toc load


The next step is to generate .srv files and rosnaoqi headers, you will need python-code-generator.

#assuming your rosbridge folder is in ~/src/aldebaran/rosbridge.
PYTHONPATH=. python bin/algenerators/gen_ros.py --out-dir=~/src/aldebaran/rosbridge

#now you can build rosbridge:

toc c rosbridge
toc m rosbridge -j4



== Ros Client for rosbridge ==

You should get a proper ros env

#get rosinstall
sudo easy_install rosinstall

#get ros
rosinstall ~/ros http://ros.org/rosinstalls/cturtle_base.rosinstall

cd ~/ros

#copy setup.sh to setup.zsh
#add this line at the end (only if you use ctafconf otherwize it wont do anything)
export CTAFCONF_ENV='ros'
#change the last line from rosbash to roszsh like this:
source $ROS_ROOT/tools/rosbash/roszsh


now you can enter in the ros env: (assuming you run zsh, but who dont? seriously!)
. ./setup.zsh

Now you can generate c++ and python bindings for services:

#go to your ros repo
cd ~/ros/ros
#create a symlink to make rosbridge available to the ros build system, this will allow the python code
#generator to find rosbridge package. (cpp does not need that..) This will allow rosservice to works too.
ln -s ~/src/aldebaran/rosbridge .
cd ~/src/aldebaran/rosbridge

PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/roscpp/scripts/gensrv_cpp.py ~/src/aldebaran/rosbridge/srv/*.srv
ROS_PACKAGE_PATH=$(pwd)
PYTHONPATH=${ROS_ROOT}/core/roslib/src python ${ROS_ROOT}/core/rospy/scripts/gensrv_py.py ~/src/aldebaran/rosbridge/srv/*.srv

Now you are done.

You can launch a rosmaster + rosout (logger):
#launch ros master
roscore

#start the brige between the ros master at ROS_MASTER_URI and the naoqi at the specified IP (--pip)
#ROS_MASTER_URI can be ommited inside the ros env.
ROS_MASTER_URI=http://localhost:11311/ ./sdk/bin/rosbridge  --pip <naoqi ip>

Then you can call naoqi methods:
rosservice call /NaoQi/ALTextToSpeech/setVolume  1.0
rosservice call /NaoQi/ALTextToSpeech/say "I am running ros"
