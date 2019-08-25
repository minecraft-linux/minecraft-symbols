#pragma once

#include "std/string.h"
#include "std/function.h"
#include <unordered_map>
#include "Resource.h"
#include "UUID.h"
#include "Core.h"
class IMinecraftEventing;
class IPackTelemetry;
namespace Core { class FilePathManager; }
class Options;
class ResourcePack;
class ResourcePackStack;
enum class ResourcePackStackType;

class IContentAccessibilityProvider {
    //
};
class IContentKeyProvider {
    //
};

class SkinPackKeyProvider : public IContentAccessibilityProvider, public IContentKeyProvider {

public:

    int filler;

    SkinPackKeyProvider();


};

class PackManifestFactory {

public:

    char filler[4];

    PackManifestFactory(IPackTelemetry&);

};

class PackSourceFactory {

public:

    char filler[0x100];

    PackSourceFactory();

};

class ResourcePackRepository {

public:

    char filler[0x2C];
    ResourcePack* vanillaPack;
    char filler2[0x100];

    /// @symbol _ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderPN4Core15FilePathManagerER17PackSourceFactoryb
    ResourcePackRepository(IMinecraftEventing&, PackManifestFactory&, IContentAccessibilityProvider&, Core::FilePathManager*, PackSourceFactory&, bool);

    /// @symbol _ZN22ResourcePackRepository21addWorldResourcePacksERKN4Core4PathE
    void addWorldResourcePacks(Legacy::Pre_1_13::Core::Path const&);

    void refreshPacks();

};

struct ContentTierManager {

public:

    int filler;

    ContentTierManager();

};

class ResourcePackManager : public ResourceLoader {

public:

    char filler[0x100];

    /// @symbol _ZN19ResourcePackManagerC2ESt8functionIFN4Core10PathBufferISsEEvEERK18ContentTierManagerb
    ResourcePackManager(mcpe::function<Core::PathBuffer ()> const&, ContentTierManager const&, bool);

    void setStack(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool);

    void onLanguageChanged();

};
