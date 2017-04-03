#decrease Audio

currentVolume=`cat currentVolume.txt`

newVolume=`./decreaseVolume.out $currentVolume`

amixer -c 1 set DAC0 $newVolume > /dev/null
