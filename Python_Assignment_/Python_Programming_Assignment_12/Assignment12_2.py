#   2. Design the automation script which accept process name and display
#      information of the that process if it is running.

import psutil
from sys import argv

def DisplayRunningProcess(process_name):
    flag = False
    try:
        for process in psutil.process_iter(['pid', 'name', 'username']):
            if process.info['name'].lower() == (process_name+'.exe').lower():
                flag = True
                break
            
        if flag == True:
            if process.status() == 'running':
                pid = process.info['pid']
                name = process.info['name']
                username = process.info['username']
                cpu_usage = process.cpu_percent(interval=1.0)
                memory_info = process.memory_info()
                status = process.status()

                print(f"PID : {pid}")
                print(f"Name : {name}")
                print(f"Username : {username}")
                print(f"CPU Usage : {cpu_usage}")
                print(f"Memory Info : {memory_info}")
                print(f"Status : {status}")
                flag = False

            else:
                print(f"{process_name} is not running")
                exit()
        else:
            if flag == False:
                print(f"{process_name} is Invalid Process Name")
                exit()

    except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess) as eobj:
        print(eobj)
    
def main():
    print('-'*71)
    print("Script to check if process running and Display information of running processes")
    print('-'*71)
    print()
    if len(argv) != 2:
        print("Usage: Application_Name.py   Process_Name")
        exit()
    
    process_name = argv[1]
    print(f"Information about {process_name}")
    DisplayRunningProcess(process_name)

    print()
    print('-'*71)
    print('-'*71)

if __name__ == "__main__":
    main()


"""-----------------------------------------------------------------------
Script to check if process running and Display information of running processes
-----------------------------------------------------------------------

Information about chrome
PID : 1468
Name : chrome.exe
Username : SATISH\Satish
CPU Usage : 0.0
Memory Info : pmem(rss=69758976, vms=41709568, num_page_faults=52098, peak_wset=78524416, wset=69758976, peak_paged_pool=668344, paged_pool=648104, peak_nonpaged_pool=113880, nonpaged_pool=27864, pagefile=41709568, peak_pagefile=47247360, private=41709568)
Status : running

-----------------------------------------------------------------------
-----------------------------------------------------------------------"""