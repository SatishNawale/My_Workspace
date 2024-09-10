#   1. Design automation script which display information of running processes
#      as its name, PID, Username.

import psutil

def Process_Display():
    listprocess = []

    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs=['pid','name','username'])

            listprocess.append(pinfo)

        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass

    return listprocess

def main():
    print('-'*70)
    print("----------Script to Display information of running processes----------")
    print('-'*70)
    print()

    Processes = Process_Display()

    for elem in Processes:
        print(elem)

    print()
    print('-'*70)
    print('-'*70)

if __name__ == "__main__":
    main()


"""----------------------------------------------------------------------
----------Script to Display information of running processes----------
----------------------------------------------------------------------

{'name': 'System Idle Process', 'pid': 0, 'username': 'NT AUTHORITY\\SYSTEM'}
{'name': 'System', 'pid': 4, 'username': 'NT AUTHORITY\\SYSTEM'}
{'name': '', 'pid': 108, 'username': None}
{'name': 'Registry', 'pid': 148, 'username': None}
{'name': 'smss.exe', 'pid': 600, 'username': None}
{'name': 'SystemSettings.exe', 'pid': 716, 'username': 'SATISH\\Satish'}
{'name': 'services.exe', 'pid': 860, 'username': None}
{'name': 'csrss.exe', 'pid': 880, 'username': None}
{'name': 'wininit.exe', 'pid': 960, 'username': None}
{'name': 'steamservice.exe', 'pid': 988, 'username': None}
{'name': 'LsaIso.exe', 'pid': 1036, 'username': None}
{'name': 'lsass.exe', 'pid': 1052, 'username': None}
{'name': 'igfxCUIService.exe', 'pid': 1108, 'username': None}
{'name': 'winlogon.exe', 'pid': 1156, 'username': None}
{'name': 'svchost.exe', 'pid': 1168, 'username': None}
{'name': 'fontdrvhost.exe', 'pid': 1196, 'username': None}
{'name': 'Spotify.exe', 'pid': 1212, 'username': 'SATISH\\Satish'}
{'name': 'WUDFHost.exe', 'pid': 1292, 'username': None}
{'name': 'svchost.exe', 'pid': 1344, 'username': None}
{'name': 'svchost.exe', 'pid': 1396, 'username': None}
{'name': 'conhost.exe', 'pid': 1416, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 1468, 'username': 'SATISH\\Satish'}
{'name': 'zWebview2Agent.exe', 'pid': 1472, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 1484, 'username': None}
{'name': 'svchost.exe', 'pid': 1544, 'username': None}
{'name': 'svchost.exe', 'pid': 1552, 'username': None}
{'name': 'chrome.exe', 'pid': 1580, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 1584, 'username': None}
{'name': 'IntelCpHDCPSvc.exe', 'pid': 1648, 'username': None}
{'name': 'svchost.exe', 'pid': 1660, 'username': None}
{'name': 'svchost.exe', 'pid': 1668, 'username': None}
{'name': 'svchost.exe', 'pid': 1720, 'username': None}
{'name': 'svchost.exe', 'pid': 1736, 'username': None}
{'name': 'IntelCpHeciSvc.exe', 'pid': 1908, 'username': None}
{'name': 'BingSvc.exe', 'pid': 1956, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 1960, 'username': None}
{'name': 'chrome.exe', 'pid': 2032, 'username': 'SATISH\\Satish'}
{'name': 'ctfmon.exe', 'pid': 2076, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 2124, 'username': None}
{'name': 'svchost.exe', 'pid': 2140, 'username': None}
{'name': 'SystemSettingsBroker.exe', 'pid': 2216, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 2240, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 2284, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 2320, 'username': None}
{'name': 'svchost.exe', 'pid': 2364, 'username': None}
{'name': 'jucheck.exe', 'pid': 2380, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 2444, 'username': None}
{'name': 'svchost.exe', 'pid': 2452, 'username': None}
{'name': 'svchost.exe', 'pid': 2460, 'username': None}
{'name': 'svchost.exe', 'pid': 2504, 'username': None}
{'name': 'svchost.exe', 'pid': 2560, 'username': None}
{'name': 'svchost.exe', 'pid': 2572, 'username': None}
{'name': 'MemCompression', 'pid': 2628, 'username': None}
{'name': 'svchost.exe', 'pid': 2672, 'username': None}
{'name': 'TouchpointAnalyticsClientService.exe', 'pid': 2688, 'username': None}
{'name': 'AppHelperCap.exe', 'pid': 2700, 'username': None}
{'name': 'NetworkCap.exe', 'pid': 2708, 'username': None}
{'name': 'DiagsCap.exe', 'pid': 2740, 'username': None}
{'name': 'svchost.exe', 'pid': 2756, 'username': None}
{'name': 'svchost.exe', 'pid': 2944, 'username': None}
{'name': 'msedge.exe', 'pid': 2972, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 2976, 'username': None}
{'name': 'msedge.exe', 'pid': 2988, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 2996, 'username': None}
{'name': 'svchost.exe', 'pid': 3032, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 3152, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 3168, 'username': None}
{'name': 'svchost.exe', 'pid': 3192, 'username': None}
{'name': 'svchost.exe', 'pid': 3216, 'username': None}
{'name': 'svchost.exe', 'pid': 3244, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 3340, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 3376, 'username': None}
{'name': 'audiodg.exe', 'pid': 3384, 'username': None}
{'name': 'powershell.exe', 'pid': 3412, 'username': 'SATISH\\Satish'}
{'name': 'unsecapp.exe', 'pid': 3688, 'username': None}
{'name': 'ETDCtrl.exe', 'pid': 3712, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 3716, 'username': 'SATISH\\Satish'}
{'name': 'WUDFHost.exe', 'pid': 3816, 'username': None}
{'name': 'WmiPrvSE.exe', 'pid': 3860, 'username': None}
{'name': 'svchost.exe', 'pid': 4000, 'username': None}
{'name': 'svchost.exe', 'pid': 4196, 'username': None}
{'name': 'svchost.exe', 'pid': 4296, 'username': None}
{'name': 'RuntimeBroker.exe', 'pid': 4316, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 4320, 'username': None}
{'name': 'spoolsv.exe', 'pid': 4404, 'username': None}
{'name': 'svchost.exe', 'pid': 4480, 'username': None}
{'name': 'svchost.exe', 'pid': 4540, 'username': None}
{'name': 'WMIRegistrationService.exe', 'pid': 4592, 'username': None}
{'name': 'svchost.exe', 'pid': 4600, 'username': None}
{'name': 'svchost.exe', 'pid': 4608, 'username': None}
{'name': 'ETDService.exe', 'pid': 4628, 'username': None}
{'name': 'OneApp.IGCC.WinService.exe', 'pid': 4644, 'username': None}
{'name': 'svchost.exe', 'pid': 4656, 'username': None}
{'name': 'svchost.exe', 'pid': 4680, 'username': None}
{'name': 'armsvc.exe', 'pid': 4736, 'username': None}
{'name': 'svchost.exe', 'pid': 4832, 'username': None}
{'name': 'LMS.exe', 'pid': 4844, 'username': None}
{'name': 'RtkBtManServ.exe', 'pid': 4936, 'username': None}
{'name': 'snmp.exe', 'pid': 4944, 'username': None}
{'name': 'RstMwService.exe', 'pid': 4952, 'username': None}
{'name': 'svchost.exe', 'pid': 4960, 'username': None}
{'name': 'SECOMN64.exe', 'pid': 4996, 'username': None}
{'name': 'svchost.exe', 'pid': 5004, 'username': None}
{'name': 'RtkAudUService64.exe', 'pid': 5012, 'username': None}
{'name': 'svchost.exe', 'pid': 5028, 'username': None}
{'name': 'svchost.exe', 'pid': 5064, 'username': None}
{'name': 'sqlwriter.exe', 'pid': 5084, 'username': None}
{'name': 'XtuService.exe', 'pid': 5124, 'username': None}
{'name': 'Code.exe', 'pid': 5164, 'username': 'SATISH\\Satish'}
{'name': 'esif_uf.exe', 'pid': 5352, 'username': None}
{'name': 'msedge.exe', 'pid': 5444, 'username': 'SATISH\\Satish'}
{'name': 'sqlservr.exe', 'pid': 5464, 'username': None}
{'name': 'sihost.exe', 'pid': 5584, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 5616, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 5792, 'username': None}
{'name': 'jhi_service.exe', 'pid': 5824, 'username': None}
{'name': 'SysInfoCap.exe', 'pid': 5940, 'username': None}
{'name': 'svchost.exe', 'pid': 6000, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 6124, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 6320, 'username': 'SATISH\\Satish'}
{'name': 'conhost.exe', 'pid': 6376, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 6448, 'username': None}
{'name': 'Code.exe', 'pid': 6860, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 6976, 'username': 'SATISH\\Satish'}
{'name': 'Spotify.exe', 'pid': 7276, 'username': 'SATISH\\Satish'}
{'name': 'MsMpEng.exe', 'pid': 7720, 'username': None}
{'name': 'svchost.exe', 'pid': 7816, 'username': None}
{'name': 'Code.exe', 'pid': 7900, 'username': 'SATISH\\Satish'}
{'name': 'Spotify.exe', 'pid': 7984, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 7992, 'username': None}
{'name': 'AggregatorHost.exe', 'pid': 8096, 'username': None}
{'name': 'svchost.exe', 'pid': 8244, 'username': None}
{'name': 'LocationNotificationWindows.exe', 'pid': 8420, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 8568, 'username': None}
{'name': 'powershell.exe', 'pid': 8604, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 8684, 'username': 'SATISH\\Satish'}
{'name': 'AdobeCollabSync.exe', 'pid': 8728, 'username': 'SATISH\\Satish'}
{'name': 'Microsoft.SharePoint.exe', 'pid': 8736, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 8760, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 8992, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 9008, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 9016, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 9024, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 9092, 'username': None}
{'name': 'svchost.exe', 'pid': 9096, 'username': None}
{'name': 'svchost.exe', 'pid': 9408, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 9464, 'username': 'SATISH\\Satish'}
{'name': 'jusched.exe', 'pid': 9496, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 9568, 'username': 'SATISH\\Satish'}
{'name': 'HxTsr.exe', 'pid': 9620, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 9672, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 9896, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 9900, 'username': 'SATISH\\Satish'}
{'name': 'conhost.exe', 'pid': 9916, 'username': 'SATISH\\Satish'}
{'name': 'fontdrvhost.exe', 'pid': 9960, 'username': None}
{'name': 'OfficeClickToRun.exe', 'pid': 10076, 'username': None}
{'name': 'chrome.exe', 'pid': 10392, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 10416, 'username': None}
{'name': 'SDXHelper.exe', 'pid': 10464, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 10496, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 10564, 'username': None}
{'name': 'chrome.exe', 'pid': 10716, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 10724, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 10740, 'username': 'SATISH\\Satish'}
{'name': 'NisSrv.exe', 'pid': 10784, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 10808, 'username': 'SATISH\\Satish'}
{'name': 'Zoom.exe', 'pid': 10824, 'username': 'SATISH\\Satish'}
{'name': 'TextInputHost.exe', 'pid': 10872, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 10880, 'username': 'SATISH\\Satish'}
{'name': 'Notepad.exe', 'pid': 10956, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 11116, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 11164, 'username': None}
{'name': 'SecurityHealthService.exe', 'pid': 11244, 'username': None}
{'name': 'HxOutlook.exe', 'pid': 11432, 'username': 'SATISH\\Satish'}
{'name': 'RtkAudUService64.exe', 'pid': 11472, 'username': 'SATISH\\Satish'}
{'name': 'python.exe', 'pid': 11540, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 11728, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 11836, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 11880, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 11912, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 11992, 'username': 'SATISH\\Satish'}
{'name': 'Widgets.exe', 'pid': 12016, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 12080, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 12148, 'username': None}
{'name': 'chrome.exe', 'pid': 12292, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 12536, 'username': None}
{'name': 'dllhost.exe', 'pid': 12580, 'username': 'SATISH\\Satish'}
{'name': 'backgroundTaskHost.exe', 'pid': 12696, 'username': 'SATISH\\Satish'}
{'name': 'Spotify.exe', 'pid': 12724, 'username': 'SATISH\\Satish'}
{'name': 'igfxEM.exe', 'pid': 12756, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 12816, 'username': 'SATISH\\Satish'}
{'name': 'Zoom.exe', 'pid': 12864, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 12888, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 12992, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 13172, 'username': 'SATISH\\Satish'}
{'name': 'steamwebhelper.exe', 'pid': 13204, 'username': 'SATISH\\Satish'}
{'name': 'MoUsoCoreWorker.exe', 'pid': 13444, 'username': None}
{'name': 'AdobeCollabSync.exe', 'pid': 13796, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 13888, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 14020, 'username': 'SATISH\\Satish'}
{'name': 'steamwebhelper.exe', 'pid': 14108, 'username': 'SATISH\\Satish'}
{'name': 'WidgetService.exe', 'pid': 14136, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 14272, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 14312, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 14320, 'username': None}
{'name': 'chrome.exe', 'pid': 14324, 'username': 'SATISH\\Satish'}
{'name': 'pet.exe', 'pid': 14380, 'username': 'SATISH\\Satish'}
{'name': 'backgroundTaskHost.exe', 'pid': 14472, 'username': 'SATISH\\Satish'}
{'name': 'lmc.exe', 'pid': 14496, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 14584, 'username': 'SATISH\\Satish'}
{'name': 'SecurityHealthSystray.exe', 'pid': 14616, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 14852, 'username': None}
{'name': 'StartMenuExperienceHost.exe', 'pid': 14864, 'username': 'SATISH\\Satish'}
{'name': 'csrss.exe', 'pid': 14868, 'username': None}
{'name': 'chrome.exe', 'pid': 14884, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 14936, 'username': 'SATISH\\Satish'}
{'name': 'SECOCL64.exe', 'pid': 15208, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 15324, 'username': None}
{'name': 'steamwebhelper.exe', 'pid': 15600, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 15648, 'username': None}
{'name': 'msedge.exe', 'pid': 15788, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 15804, 'username': 'SATISH\\Satish'}
{'name': 'steamwebhelper.exe', 'pid': 15896, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 15908, 'username': 'SATISH\\Satish'}
{'name': 'explorer.exe', 'pid': 16080, 'username': 'SATISH\\Satish'}
{'name': 'dllhost.exe', 'pid': 16124, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 16132, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 16272, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 16308, 'username': None}
{'name': 'msedgewebview2.exe', 'pid': 16324, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 16424, 'username': 'SATISH\\Satish'}
{'name': 'steamwebhelper.exe', 'pid': 16564, 'username': 'SATISH\\Satish'}
{'name': 'SearchHost.exe', 'pid': 16696, 'username': 'SATISH\\Satish'}
{'name': 'UserOOBEBroker.exe', 'pid': 16736, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 16796, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 16848, 'username': 'SATISH\\Satish'}
{'name': 'dwm.exe', 'pid': 16884, 'username': None}
{'name': 'steamwebhelper.exe', 'pid': 16992, 'username': 'SATISH\\Satish'}
{'name': 'LockApp.exe', 'pid': 17052, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 17152, 'username': 'SATISH\\Satish'}
{'name': 'Zoom.exe', 'pid': 17204, 'username': 'SATISH\\Satish'}
{'name': 'AcrobatNotificationClient.exe', 'pid': 17220, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 17384, 'username': 'SATISH\\Satish'}
{'name': 'steam.exe', 'pid': 17428, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 17500, 'username': 'SATISH\\Satish'}
{'name': 'MpDefenderCoreService.exe', 'pid': 17776, 'username': None}
{'name': 'RuntimeBroker.exe', 'pid': 17792, 'username': 'SATISH\\Satish'}
{'name': 'PhoneExperienceHost.exe', 'pid': 17880, 'username': 'SATISH\\Satish'}
{'name': 'Code.exe', 'pid': 18072, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 18240, 'username': 'SATISH\\Satish'}
{'name': 'ShellExperienceHost.exe', 'pid': 18376, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 18396, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 18440, 'username': 'SATISH\\Satish'}
{'name': 'ApplicationFrameHost.exe', 'pid': 18596, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 18620, 'username': 'SATISH\\Satish'}
{'name': 'msedgewebview2.exe', 'pid': 18676, 'username': 'SATISH\\Satish'}
{'name': 'conhost.exe', 'pid': 18696, 'username': 'SATISH\\Satish'}
{'name': 'steamwebhelper.exe', 'pid': 18720, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 18804, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 18896, 'username': 'SATISH\\Satish'}
{'name': 'dllhost.exe', 'pid': 19104, 'username': 'SATISH\\Satish'}
{'name': 'Spotify.exe', 'pid': 19416, 'username': 'SATISH\\Satish'}
{'name': 'msedge.exe', 'pid': 20016, 'username': 'SATISH\\Satish'}
{'name': 'taskhostw.exe', 'pid': 20188, 'username': 'SATISH\\Satish'}
{'name': 'svchost.exe', 'pid': 20216, 'username': 'SATISH\\Satish'}
{'name': 'RuntimeBroker.exe', 'pid': 20248, 'username': 'SATISH\\Satish'}
{'name': 'chrome.exe', 'pid': 20384, 'username': 'SATISH\\Satish'}
{'name': 'Spotify.exe', 'pid': 20392, 'username': 'SATISH\\Satish'}

----------------------------------------------------------------------
----------------------------------------------------------------------"""