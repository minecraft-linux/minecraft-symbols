#pragma once

namespace v8 {

class Isolate;
class Platform;

struct V8 {
    static bool Initialize();
    /// @symbol _ZN2v82V818InitializePlatformEPNS_8PlatformE
    static void InitializePlatform(v8::Platform* platform);
};

struct Task {
    virtual ~Task() = default;
    virtual void Run() = 0;
};
struct IdleTask {
    virtual ~IdleTask() = default;
    virtual void Run(double deadline_in_seconds) = 0;
};

enum ExpectedRuntime {
    kShortRunningTask, kLongRunningTask
};

}