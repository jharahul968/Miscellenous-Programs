# Just disables the warning, doesn't enable AVX/FMA
import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

# disable gpu
#os.environ['CUDA_VISIBLE_DEVICES'] = '-1'

# check if gpu is being used

import keras
import tensorflow as tf 

if tf.test.gpu_device_name(): 

    print('Default GPU Device: {}'.format(tf.test.gpu_device_name()))

else:

   print("Please install GPU version of TF")

# Details on current GPU
from tensorflow.python.client import device_lib
print(device_lib.list_local_devices())