
executabledir="/usr/bin/"
configdir="/usr/lib/AudioControl/"

if [[ $(/usr/bin/id -u) -ne 0 ]]; then
    echo "Not running as root"
    exit
else    
	make
	if [ ! -d $configdir ]; then
		umask 000
		mkdir $configdir
		echo "Created configuration directory"
	fi	
	cp AudioControl $executabledir
fi
