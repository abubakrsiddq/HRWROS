#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/abu/hrwros_ws/src/hrwros_factory_states"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/abu/hrwros_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/abu/hrwros_ws/install/lib/python2.7/dist-packages:/home/abu/hrwros_ws/build/hrwros_factory_states/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/abu/hrwros_ws/build/hrwros_factory_states" \
    "/usr/bin/python2" \
    "/home/abu/hrwros_ws/src/hrwros_factory_states/setup.py" \
    build --build-base "/home/abu/hrwros_ws/build/hrwros_factory_states" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/abu/hrwros_ws/install" --install-scripts="/home/abu/hrwros_ws/install/bin"
