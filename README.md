Sample code to obtain LiDAR readings from Hokuyo UTM-30LX at /dev/ttyACM0
and store them in txt file

First install URG network (https://sourceforge.net/p/urgnetwork/wiki/Home/) or use 
zip file in repository

  unzip urg_library-1.1.9.zip
  cd urg_library-1.1.9
  make
  sudo make install

Change permissions to USB ports

  sudo usermod -a -G dialout $USER

