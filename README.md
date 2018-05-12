## iniFileOp
This repo is used to read an inifile. eg.:

`[net]
 batch=64
 subdivisions=8
 width=416
 height=416
 channels=3
 momentum=0.9
 decay=0.0005
 angle=0
 saturation = 1.5
 exposure = 1.5
 hue=.1
 
 learning_rate=0.001
 max_batches = 120000
 policy=steps
 steps=-1,100,80000,100000
 scales=.1,10,.1,.1
 
 [convolutional_0]
 batch_normalize=1
 filters=16
 size=3
 stride=1
 pad=1
 activation=leaky
 
 [maxpool_0]
 size=2
 stride=2__`
## usage
1. mkir build
2. cd build
3. cmake ../
4. ./iniFileOp   

