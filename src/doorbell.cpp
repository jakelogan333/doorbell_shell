#include <pcap.h>
#include <iostream>
#include <Windows.h>

#pragma comment(lib, "ws2_32.lib")
using namespace std;

#define BUF_SIZE 512

INT main(INT argc, CHAR** argv)
{
    INT iRetVal = EXIT_SUCCESS;
    
    // TODO
    // Check to ensure npcap is running
    // Loadlibray or link against npcap
    // Register a filter
    // Start capture
    // Process packet
    // Execute command
    // Pipe back results

    pcap_if_t *devs = NULL;
    char error_buf[BUF_SIZE];
    char buf[BUF_SIZE];

    cout << "in" << endl;
    
    GetSystemDirectoryA(buf, BUF_SIZE);
    strcat(buf, "\\Npcap");
    cout << buf << endl;
    cout << SetDllDirectoryA(buf) << endl;
    //__debugbreak();
    iRetVal = pcap_findalldevs(&devs, error_buf);
    cout << "in" << endl;
    cout << "Ret: " << iRetVal << error_buf << endl;

    while (NULL != devs)
    {
        cout << devs->name << endl;
        devs = devs->next;
    }

    // pcap_open_live(NULL, 0xFFFF, TRUE, )

    return iRetVal;
}