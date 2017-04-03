#raiseAudio

currentVolume=`cat currentVolume.txt`

newVolume=`./increaseVolume.out $currentVolume`

amixer -c 1 set DAC0 $newVolume > /dev/null
