#!/usr/bin/python3
# *-*coding:utf-8*-*

def do_main():
    print("AudioPlaybackRate{");
    print("\tfloat mSpeed; #播放声音速度");
    print("\tfloat mPitch; #播放声音音调");
    print("\tenum AudioTimestretchStretchMode  mStretchMode; #播放声音的时间拉升模式");
    print("\tenum AudioTimestretchFallbackMode mFallbackMode; #播放声音的回放模式");
    print("};");
    

if __name__ == "__main__":
    do_main();
