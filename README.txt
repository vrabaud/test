== Getting Ros ==

This will show you how to get a ros cturtle base environment.
First you will need rosinstall that will checkout each necessary svn repositories.

  #use one of those solution:
  wget --no-check-certificate http://ros.org/rosinstall
  sudo easy_install rosinstall

Use rosinstall to checkout all ros repositories, this will checkout ros in ~/ros folder

  rosinstall ~/ros http://ros.org/rosinstalls/cturtle_base.rosinstall
  #if you used wget:
  ./rosinstall ~/ros http://ros.org/rosinstalls/cturtle_base.rosinstall

Now you need to create setup.zsh (or use the provided setup.sh) to enter in the ros environment.

  cd ~/ros
  #copy setup.sh to setup.zsh
  #add this line at the end (only if you use ctafconf otherwize it wont do anything)
  export CTAFCONF_ENV='ros'
  #change the last line from rosbash to roszsh like this:
  source $ROS_ROOT/tools/rosbash/roszsh

Enter in the ros environment:

  #now you can enter in the ros env: (assuming you run zsh, but who doesn't? seriously!)
  . ./setup.zsh
  #or for bash user:
  . ./setup.sh

Compile ros:

  roscd ros
  rosmake


== Transform your ros checkout into a compatible t001chain sdk ==

Inside your ros environment, call generate-t001chain-sdk.sh that will
create *Config.cmake files corresponding to each ros libraries and a root.cmake
needed by t001chain to assume your ros folder is a t001chain sdk.
WARNING: You need to run generate-t001chain-sdk in folder where you have setup.zsh.

  cd $ROS_ROOT/..
  #adjust the path according to your rosbridge checkout
  ~/src/aldebaran/rosbridge/tools/generate-t001chain-sdk.sh

Now you can add $ROS_ROOT/.. folder to your t001chain file like a binary sdk.

To add it to toc, on your .toc/base.cfg and append:
  [project "ros"]
  #this is your $ROS_ROOT/..
  src=/home/ctaf42/src/svn/ros
  #tell toc this is a binary sdk
  is_bin_sdk = True




== Compile RosBridge ==

First you need to get the source:

  #add rosbride to toc
  toc add git@git.aldebaran.lan:ros/rosbridge.git

The next step is to generate .srv files and rosnaoqi headers, you will need python-code-generator.

  #assuming your rosbridge folder is in ~/src/aldebaran/rosbridge.
  PYTHONPATH=. python bin/algenerators/gen_ros.py --out-dir=~/src/aldebaran/rosbridge




== Ros Srv/Msg for rosbridge ==

Now you can generate c++ and python bindings for services:

  #go to your ros repo
  cd ~/ros/ros

create a symlink to make rosbridge available to the ros build system, this will allow the python code
generator to find rosbridge package. (cpp does not need that..) This will allow rosservice to works too.

  ln -s ~/src/aldebaran/rosbridge .
  roscd rosbridge

Generate python and c++ bindings for rosbridge (you should be in your ros env)

  ./generate.sh

Now you are done. You can use rosservice call to test your generated bindings.


== Launch Test ==
You can launch a rosmaster + rosout (logger):

  #launch ros master
  roscore

Now start the bridge between the ros master at ROS_MASTER_URI and the naoqi at the specified IP (--pip)

  #ROS_MASTER_URI can be ommited inside the ros env.
  ROS_MASTER_URI=http://localhost:11311/ ./sdk/bin/rosbridge  --pip <naoqi ip>

Then you can call naoqi methods:

  rosservice call /NaoQi/ALTextToSpeech/setVolume  1.0
  rosservice call /NaoQi/ALTextToSpeech/say "I am running ros"


== deb to install on the robot ==
boost-iostreams-mt_1.38.0-r3_i386.deb
libgdbm3_1.8.3-r3_i386.deb
libapr-1-0_1.3.3-r5_i386.deb
libaprutil-1-0_1.3.4-r6_i386.deb
liblog4cxx10_0.10.0-r1_i386.deb


Isn't that cool?
