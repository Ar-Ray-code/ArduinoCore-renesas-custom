#!/usr/bin/env python3
import os, subprocess, shutil, sys

def main():
    repo_root = os.path.dirname(__file__)
    api_dst = os.path.join(repo_root, 'cores', 'arduino', 'api')
    if os.path.isdir(api_dst) and os.listdir(api_dst):
        print('[post_install] ArduinoCore-API already present')
        return 0
    # Prefer a local clone if available
    local_src = os.path.expanduser('~/Documents/ArduinoCore-API/api')
    cache_root = os.path.expanduser('~/.platformio/.cache')
    cache_repo = os.path.join(cache_root, 'ArduinoCore-API')
    api_src = None
    if os.path.isdir(local_src):
        api_src = local_src
    else:
        os.makedirs(cache_root, exist_ok=True)
        if not os.path.isdir(cache_repo):
            try:
                subprocess.check_call([
                    'git','clone','--depth=1','https://github.com/arduino/ArduinoCore-API.git',cache_repo
                ])
            except Exception as e:
                print('[post_install] clone failed:', e)
        cand = os.path.join(cache_repo, 'api')
        if os.path.isdir(cand):
            api_src = cand
    if not api_src:
        print('[post_install] ArduinoCore-API not found, cannot populate')
        return 0
    os.makedirs(os.path.dirname(api_dst), exist_ok=True)
    if os.path.isdir(api_dst):
        shutil.rmtree(api_dst)
    shutil.copytree(api_src, api_dst)
    print('[post_install] Populated cores/arduino/api from', api_src)
    return 0

if __name__ == '__main__':
    sys.exit(main())
