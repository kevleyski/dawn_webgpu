#include <webgpu/webgpu_cpp.h>
#include <webgpu/webgpu_cpp_print.h>

#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
    wgpu::InstanceDescriptor instanceDescriptor{};
    instanceDescriptor.capabilities.timedWaitAnyEnable = true;
    wgpu::Instance instance = wgpu::CreateInstance(&instanceDescriptor);
    if (instance == nullptr) {
        std::cerr << "Instance creation failed!\n";
        return EXIT_FAILURE;
    }
    // Synchronously request the adapter.
    wgpu::RequestAdapterOptions options = {};
    wgpu::Adapter adapter;
    // wgpu::RequestAdapterCallbackInfo callbackInfo = {};
    // callbackInfo.nextInChain = nullptr;
    // callbackInfo.mode = wgpu::CallbackMode::WaitAnyOnly;
    // callbackInfo.callback = [](WGPURequestAdapterStatus status,
    //                            WGPUAdapter adapter, const char *message,
    //                            void *userdata) {
    //     if (status != WGPURequestAdapterStatus_Success) {
    //         std::cerr << "Failed to get an adapter:" << message;
    //         return;
    //     }
    //     *static_cast<wgpu::Adapter *>(userdata) = wgpu::Adapter::Acquire(adapter);
    // };
    // callbackInfo.userdata = &adapter;
    // instance.WaitAny(instance.RequestAdapter(&options, callbackInfo), UINT64_MAX);
    // if (adapter == nullptr) {
    //     std::cerr << "RequestAdapter failed!\n";
    //     return EXIT_FAILURE;
    // }

    wgpu::DawnAdapterPropertiesPowerPreference power_props{};

    wgpu::AdapterInfo info{};
    info.nextInChain = &power_props;

    adapter.GetInfo(&info);
    std::cout << "VendorID: " << std::hex << info.vendorID << std::dec << "\n";
    std::cout << "Vendor: " << info.vendor << "\n";
    std::cout << "Architecture: " << info.architecture << "\n";
    std::cout << "DeviceID: " << std::hex << info.deviceID << std::dec << "\n";
    std::cout << "Name: " << info.device << "\n";
    std::cout << "Driver description: " << info.description << "\n";
    return EXIT_SUCCESS;
}