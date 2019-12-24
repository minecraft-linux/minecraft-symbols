// This file was automatically generated using tools/process_headers.py
// Generated on Tue Dec 24 2019 21:01:59 UTC

#include <hybris/dlfcn.h>
#include <log.h>
#include "symbols_internal.h"

#include <minecraft/Api.h>

#include <minecraft/App.h>
static void (App::*_App_init)(AppContext &);
void App::init(AppContext & p1) {
    (this->*_App_init)(p1);
}
static int vti_App_quit = -1;
void App::quit(mcpe::string const & p1, mcpe::string const & p2) {
    union { void* voidp; void (App::*funcp)(mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_quit];
    (this->*u.funcp)(p1, p2);
}
static int vti_App_update = -1;
void App::update() {
    union { void* voidp; void (App::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_update];
    (this->*u.funcp)();
}
static int vti_App_setRenderingSize = -1;
void App::setRenderingSize(int p1, int p2) {
    union { void* voidp; void (App::*funcp)(int, int); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_setRenderingSize];
    (this->*u.funcp)(p1, p2);
}
static int vti_App_setUISizeAndScale = -1;
void App::setUISizeAndScale(int p1, int p2, float p3) {
    union { void* voidp; void (App::*funcp)(int, int, float); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_setUISizeAndScale];
    (this->*u.funcp)(p1, p2, p3);
}
static int vti_App_wantToQuit = -1;
bool App::wantToQuit() {
    union { void* voidp; bool (App::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_wantToQuit];
    return (this->*u.funcp)();
}

#include <minecraft/AppPlatform.h>
void * * AppPlatform::myVtable;
AppPlatform * * AppPlatform::instance;
static void (AppPlatform::*_AppPlatform_AppPlatform)();
AppPlatform::AppPlatform() {
    (this->*_AppPlatform_AppPlatform)();
}
static void (AppPlatform::*_AppPlatform__fireAppFocusGained)();
void AppPlatform::_fireAppFocusGained() {
    (this->*_AppPlatform__fireAppFocusGained)();
}
static void (AppPlatform::*_AppPlatform_initialize)();
void AppPlatform::initialize() {
    (this->*_AppPlatform_initialize)();
}
static void (AppPlatform::*_AppPlatform_teardown)();
void AppPlatform::teardown() {
    (this->*_AppPlatform_teardown)();
}
static void (AppPlatform::*_AppPlatform_showKeyboard)(mcpe::string const &, int, bool, bool, bool, int, Vec2 const &);
void AppPlatform::showKeyboard(mcpe::string const & p1, int p2, bool p3, bool p4, bool p5, int p6, Vec2 const & p7) {
    (this->*_AppPlatform_showKeyboard)(p1, p2, p3, p4, p5, p6, p7);
}
static void (AppPlatform::*_AppPlatform_hideKeyboard)();
void AppPlatform::hideKeyboard() {
    (this->*_AppPlatform_hideKeyboard)();
}
static bool (AppPlatform::*_AppPlatform_isKeyboardVisible)();
bool AppPlatform::isKeyboardVisible() {
    return (this->*_AppPlatform_isKeyboardVisible)();
}
static AppPlatform::HardwareInformation & (AppPlatform::*_AppPlatform_getHardwareInformation)() const;
AppPlatform::HardwareInformation & AppPlatform::getHardwareInformation() const {
    return (this->*_AppPlatform_getHardwareInformation)();
}

#include <minecraft/AppResourceLoader.h>
static void (AppResourceLoader::*_AppResourceLoader_AppResourceLoader)(mcpe::function<Core::PathBuffer ( )>);
AppResourceLoader::AppResourceLoader(mcpe::function<Core::PathBuffer ( )> p1) {
    (this->*_AppResourceLoader_AppResourceLoader)(p1);
}

#include <minecraft/AutomationClient.h>
static void (Automation::AutomationClient::*_Automation_AutomationClient_AutomationClient)(IMinecraftApp &);
Automation::AutomationClient::AutomationClient(IMinecraftApp & p1) {
    (this->*_Automation_AutomationClient_AutomationClient)(p1);
}

#include <minecraft/ClientInstance.h>
static std::shared_ptr<Social::User> (ClientInstance::*_ClientInstance_getUser)();
std::shared_ptr<Social::User> ClientInstance::getUser() {
    return (this->*_ClientInstance_getUser)();
}
static void (ClientInstance::*_ClientInstance__startLeaveGame)();
void ClientInstance::_startLeaveGame() {
    (this->*_ClientInstance__startLeaveGame)();
}
static void (ClientInstance::*_ClientInstance__syncDestroyGame)();
void ClientInstance::_syncDestroyGame() {
    (this->*_ClientInstance__syncDestroyGame)();
}

#include <minecraft/CommandOutput.h>
static std::vector<CommandOutputMessage> const & (CommandOutput::*_CommandOutput_getMessages)() const;
std::vector<CommandOutputMessage> const & CommandOutput::getMessages() const {
    return (this->*_CommandOutput_getMessages)();
}

#include <minecraft/CommandOutputSender.h>
static std::vector<mcpe::string> (*_CommandOutputSender_translate)(std::vector<mcpe::string> const &);
std::vector<mcpe::string> CommandOutputSender::translate(std::vector<mcpe::string> const & p1) {
    return _CommandOutputSender_translate(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_CommandOutputSender)(Automation::AutomationClient &);
CommandOutputSender::CommandOutputSender(Automation::AutomationClient & p1) {
    (this->*_CommandOutputSender_CommandOutputSender)(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_destructor)();
CommandOutputSender::~CommandOutputSender() {
    (this->*_CommandOutputSender_destructor)();
}
static void (CommandOutputSender::*_CommandOutputSender_send)(CommandOrigin const &, CommandOutput const &);
void CommandOutputSender::send(CommandOrigin const & p1, CommandOutput const & p2) {
    (this->*_CommandOutputSender_send)(p1, p2);
}
static void (CommandOutputSender::*_CommandOutputSender_registerOutputCallback)();
void CommandOutputSender::registerOutputCallback() {
    (this->*_CommandOutputSender_registerOutputCallback)();
}

#include <minecraft/Common.h>
static mcpe::string (*_Common_getGameVersionStringNet)();
mcpe::string Common::getGameVersionStringNet() {
    return _Common_getGameVersionStringNet();
}

#include <minecraft/ContentIdentity.h>
ContentIdentity * ContentIdentity::EMPTY;

#include <minecraft/Core.h>

#include <minecraft/Crypto.h>
static mce::UUID (*_Crypto_Random_generateUUID)();
mce::UUID Crypto::Random::generateUUID() {
    return _Crypto_Random_generateUUID();
}

#include <minecraft/ExternalFileLevelStorageSource.h>
static void (ExternalFileLevelStorageSource::*_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource)(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(Core::FilePathManager * p1, std::shared_ptr<SaveTransactionManager> p2) {
    (this->*_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource)(p1, p2);
}
static std::unique_ptr<LevelStorage> (ExternalFileLevelStorageSource::*_ExternalFileLevelStorageSource_createLevelStorage)(Scheduler &, mcpe::string const &, ContentIdentity const &, IContentKeyProvider const &);
std::unique_ptr<LevelStorage> ExternalFileLevelStorageSource::createLevelStorage(Scheduler & p1, mcpe::string const & p2, ContentIdentity const & p3, IContentKeyProvider const & p4) {
    return (this->*_ExternalFileLevelStorageSource_createLevelStorage)(p1, p2, p3, p4);
}

#include <minecraft/FilePathManager.h>
static void (Core::FilePathManager::*_Core_FilePathManager_FilePathManager)(Legacy::Pre_1_13::Core::Path const &, bool);
Core::FilePathManager::FilePathManager(Legacy::Pre_1_13::Core::Path const & p1, bool p2) {
    (this->*_Core_FilePathManager_FilePathManager)(p1, p2);
}
static const mcpe::string & (Core::FilePathManager::*_Core_FilePathManager_getRootPath)() const;
const mcpe::string & Core::FilePathManager::getRootPath() const {
    return (this->*_Core_FilePathManager_getRootPath)();
}
static const mcpe::string & (Core::FilePathManager::*_Core_FilePathManager_getUserDataPath)() const;
const mcpe::string & Core::FilePathManager::getUserDataPath() const {
    return (this->*_Core_FilePathManager_getUserDataPath)();
}
static const mcpe::string & (Core::FilePathManager::*_Core_FilePathManager_getWorldsPath)() const;
const mcpe::string & Core::FilePathManager::getWorldsPath() const {
    return (this->*_Core_FilePathManager_getWorldsPath)();
}
static void (Core::FilePathManager::*_Core_FilePathManager_setPackagePath)(Legacy::Pre_1_13::Core::Path const &);
void Core::FilePathManager::setPackagePath(Legacy::Pre_1_13::Core::Path const & p1) {
    (this->*_Core_FilePathManager_setPackagePath)(p1);
}
static const mcpe::string & (Core::FilePathManager::*_Core_FilePathManager_getPackagePath)() const;
const mcpe::string & Core::FilePathManager::getPackagePath() const {
    return (this->*_Core_FilePathManager_getPackagePath)();
}
static void (Core::FilePathManager::*_Core_FilePathManager_setSettingsPath)(Legacy::Pre_1_13::Core::Path const &);
void Core::FilePathManager::setSettingsPath(Legacy::Pre_1_13::Core::Path const & p1) {
    (this->*_Core_FilePathManager_setSettingsPath)(p1);
}
static const mcpe::string & (Core::FilePathManager::*_Core_FilePathManager_getSettingsPath)() const;
const mcpe::string & Core::FilePathManager::getSettingsPath() const {
    return (this->*_Core_FilePathManager_getSettingsPath)();
}

#include <minecraft/FilePickerSettings.h>

#include <minecraft/GameControllerManager.h>
GameControllerManager * GameControllerManager::sGamePadManager;
static void (GameControllerManager::*_GameControllerManager_setGameControllerConnected)(int, bool);
void GameControllerManager::setGameControllerConnected(int p1, bool p2) {
    (this->*_GameControllerManager_setGameControllerConnected)(p1, p2);
}
static void (GameControllerManager::*_GameControllerManager_feedButton)(int, int, GameControllerButtonState, bool);
void GameControllerManager::feedButton(int p1, int p2, GameControllerButtonState p3, bool p4) {
    (this->*_GameControllerManager_feedButton)(p1, p2, p3, p4);
}
static void (GameControllerManager::*_GameControllerManager_feedStick)(int, int, GameControllerStickState, float, float);
void GameControllerManager::feedStick(int p1, int p2, GameControllerStickState p3, float p4, float p5) {
    (this->*_GameControllerManager_feedStick)(p1, p2, p3, p4, p5);
}
static void (GameControllerManager::*_GameControllerManager_feedTrigger)(int, int, float);
void GameControllerManager::feedTrigger(int p1, int p2, float p3) {
    (this->*_GameControllerManager_feedTrigger)(p1, p2, p3);
}
static void (GameControllerManager::*_GameControllerManager_feedJoinGame)(int, bool);
void GameControllerManager::feedJoinGame(int p1, bool p2) {
    (this->*_GameControllerManager_feedJoinGame)(p1, p2);
}

#include <minecraft/I18n.h>
static void (ResourceLoadManager::*_ResourceLoadManager_ResourceLoadManager)();
ResourceLoadManager::ResourceLoadManager() {
    (this->*_ResourceLoadManager_ResourceLoadManager)();
}
static void (ResourceLoadManager::*_ResourceLoadManager_sync)(ResourceLoadType);
void ResourceLoadManager::sync(ResourceLoadType p1) {
    (this->*_ResourceLoadManager_sync)(p1);
}
static mcpe::string (*_I18n_get)(mcpe::string const &, std::vector<mcpe::string> const &);
mcpe::string I18n::get(mcpe::string const & p1, std::vector<mcpe::string> const & p2) {
    return _I18n_get(p1, p2);
}
static void (*_I18n_chooseLanguage)(mcpe::string const &);
void I18n::chooseLanguage(mcpe::string const & p1) {
    _I18n_chooseLanguage(p1);
}
static void (*_I18n_loadLanguages)(ResourcePackManager &, ResourceLoadManager &, mcpe::string const &);
void I18n::loadLanguages(ResourcePackManager & p1, ResourceLoadManager & p2, mcpe::string const & p3) {
    _I18n_loadLanguages(p1, p2, p3);
}

#include <minecraft/IMinecraftApp.h>

#include <minecraft/ImagePickingCallback.h>

#include <minecraft/Keyboard.h>
int * Keyboard::_states;
std::vector<Keyboard::InputEvent> * Keyboard::_inputs;
int * Keyboard::_gameControllerId;
std::vector<int> * Keyboard::_inputCaretLocation;
static void (*_Keyboard_feedText)(mcpe::string const &, bool, unsigned char);
void Keyboard::feedText(mcpe::string const & p1, bool p2, unsigned char p3) {
    _Keyboard_feedText(p1, p2, p3);
}

#include <minecraft/Level.h>
static unsigned int (*_Level_createRandomSeed)();
unsigned int Level::createRandomSeed() {
    return _Level_createRandomSeed();
}

#include <minecraft/LevelSettings.h>
static void (LevelSettings::*_LevelSettings_LevelSettings)();
LevelSettings::LevelSettings() {
    (this->*_LevelSettings_LevelSettings)();
}
static void (LevelSettings::*_LevelSettings_LevelSettings2)(LevelSettings const &);
LevelSettings::LevelSettings(LevelSettings const & p1) {
    (this->*_LevelSettings_LevelSettings2)(p1);
}
static int (*_LevelSettings_parseSeedString)(mcpe::string const &, unsigned int);
int LevelSettings::parseSeedString(mcpe::string const & p1, unsigned int p2) {
    return _LevelSettings_parseSeedString(p1, p2);
}

#include <minecraft/Minecraft.h>
static MinecraftCommands * (Minecraft::*_Minecraft_getCommands)();
MinecraftCommands * Minecraft::getCommands() {
    return (this->*_Minecraft_getCommands)();
}
static Level * (Minecraft::*_Minecraft_getLevel)() const;
Level * Minecraft::getLevel() const {
    return (this->*_Minecraft_getLevel)();
}

#include <minecraft/MinecraftCommands.h>
static void (MinecraftCommands::*_MinecraftCommands_setOutputSender)(std::unique_ptr<CommandOutputSender>);
void MinecraftCommands::setOutputSender(std::unique_ptr<CommandOutputSender> p1) {
    (this->*_MinecraftCommands_setOutputSender)(std::move(p1));
}
static MCRESULT (MinecraftCommands::*_MinecraftCommands_requestCommandExecution)(std::unique_ptr<CommandOrigin>, mcpe::string const &, int, bool) const;
MCRESULT MinecraftCommands::requestCommandExecution(std::unique_ptr<CommandOrigin> p1, mcpe::string const & p2, int p3, bool p4) const {
    return (this->*_MinecraftCommands_requestCommandExecution)(std::move(p1), p2, p3, p4);
}

#include <minecraft/MinecraftEventing.h>
static void (MinecraftEventing::*_MinecraftEventing_MinecraftEventing)(mcpe::string const &);
MinecraftEventing::MinecraftEventing(mcpe::string const & p1) {
    (this->*_MinecraftEventing_MinecraftEventing)(p1);
}
static void (MinecraftEventing::*_MinecraftEventing_init)();
void MinecraftEventing::init() {
    (this->*_MinecraftEventing_init)();
}

#include <minecraft/MinecraftGame.h>
static void (MinecraftGame::*_MinecraftGame_MinecraftGame)(int, char * *);
MinecraftGame::MinecraftGame(int p1, char * * p2) {
    (this->*_MinecraftGame_MinecraftGame)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_destructor)();
MinecraftGame::~MinecraftGame() {
    (this->*_MinecraftGame_destructor)();
}
static bool (MinecraftGame::*_MinecraftGame_isInGame)() const;
bool MinecraftGame::isInGame() const {
    return (this->*_MinecraftGame_isInGame)();
}
static void (MinecraftGame::*_MinecraftGame_requestLeaveGame)(bool, bool);
void MinecraftGame::requestLeaveGame(bool p1, bool p2) {
    (this->*_MinecraftGame_requestLeaveGame)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_doPrimaryClientReadyWork)(mcpe::function<void ( )>);
void MinecraftGame::doPrimaryClientReadyWork(mcpe::function<void ( )> p1) {
    (this->*_MinecraftGame_doPrimaryClientReadyWork)(p1);
}
static std::shared_ptr<Options> (MinecraftGame::*_MinecraftGame_getPrimaryUserOptions)();
std::shared_ptr<Options> MinecraftGame::getPrimaryUserOptions() {
    return (this->*_MinecraftGame_getPrimaryUserOptions)();
}
static ClientInstance * (MinecraftGame::*_MinecraftGame_getPrimaryClientInstance)();
ClientInstance * MinecraftGame::getPrimaryClientInstance() {
    return (this->*_MinecraftGame_getPrimaryClientInstance)();
}
static void (MinecraftGame::*_MinecraftGame_startLeaveGame)();
void MinecraftGame::startLeaveGame() {
    (this->*_MinecraftGame_startLeaveGame)();
}
static void (MinecraftGame::*_MinecraftGame_continueLeaveGame)();
void MinecraftGame::continueLeaveGame() {
    (this->*_MinecraftGame_continueLeaveGame)();
}
static void (MinecraftGame::*_MinecraftGame_setTextboxText)(mcpe::string const &, int);
void MinecraftGame::setTextboxText(mcpe::string const & p1, int p2) {
    (this->*_MinecraftGame_setTextboxText)(p1, p2);
}

#include <minecraft/MinecraftScreenModel.h>
static void (MinecraftScreenModel::*_MinecraftScreenModel_navigateToXblConsoleSignInScreen)(mcpe::string const &, mcpe::string const &);
void MinecraftScreenModel::navigateToXblConsoleSignInScreen(mcpe::string const & p1, mcpe::string const & p2) {
    (this->*_MinecraftScreenModel_navigateToXblConsoleSignInScreen)(p1, p2);
}
static void (MinecraftScreenModel::*_MinecraftScreenModel_navigateToXblConsoleSignInSucceededScreen)(Social::SignInResult const &, mcpe::function<void ( Social::SignInResult )>, bool);
void MinecraftScreenModel::navigateToXblConsoleSignInSucceededScreen(Social::SignInResult const & p1, mcpe::function<void ( Social::SignInResult )> p2, bool p3) {
    (this->*_MinecraftScreenModel_navigateToXblConsoleSignInSucceededScreen)(p1, p2, p3);
}
static void (MinecraftScreenModel::*_MinecraftScreenModel_leaveScreen)();
void MinecraftScreenModel::leaveScreen() {
    (this->*_MinecraftScreenModel_leaveScreen)();
}

#include <minecraft/Mouse.h>
static void (*_Mouse_feed)(char, char, short, short, short, short);
void Mouse::feed(char p1, char p2, short p3, short p4, short p5, short p6) {
    _Mouse_feed(p1, p2, p3, p4, p5, p6);
}

#include <minecraft/MultiplayerService.h>
static void (Social::MultiplayerXBL::*_Social_MultiplayerXBL_MultiplayerXBL)();
Social::MultiplayerXBL::MultiplayerXBL() {
    (this->*_Social_MultiplayerXBL_MultiplayerXBL)();
}

#include <minecraft/Multitouch.h>
static void (*_Multitouch_feed)(char, char, short, short, int);
void Multitouch::feed(char p1, char p2, short p3, short p4, int p5) {
    _Multitouch_feed(p1, p2, p3, p4, p5);
}

#include <minecraft/NullTextToSpeechClient.h>
void * * NullTextToSpeechClient::myVtable;

#include <minecraft/Options.h>
static bool (Options::*_Options_getFullscreen)() const;
bool Options::getFullscreen() const {
    return (this->*_Options_getFullscreen)();
}
static void (Options::*_Options_setFullscreen)(bool);
void Options::setFullscreen(bool p1) {
    (this->*_Options_setFullscreen)(p1);
}

#include <minecraft/PermissionsFile.h>
static void (PermissionsFile::*_PermissionsFile_PermissionsFile)(mcpe::string const &);
PermissionsFile::PermissionsFile(mcpe::string const & p1) {
    (this->*_PermissionsFile_PermissionsFile)(p1);
}

#include <minecraft/Resource.h>
static void (*_ResourceLoaders_registerLoader)(ResourceFileSystem, std::unique_ptr<ResourceLoader>);
void ResourceLoaders::registerLoader(ResourceFileSystem p1, std::unique_ptr<ResourceLoader> p2) {
    _ResourceLoaders_registerLoader(p1, std::move(p2));
}

#include <minecraft/ResourcePack.h>
static void (SkinPackKeyProvider::*_SkinPackKeyProvider_SkinPackKeyProvider)();
SkinPackKeyProvider::SkinPackKeyProvider() {
    (this->*_SkinPackKeyProvider_SkinPackKeyProvider)();
}
static void (PackManifestFactory::*_PackManifestFactory_PackManifestFactory)(IPackTelemetry &);
PackManifestFactory::PackManifestFactory(IPackTelemetry & p1) {
    (this->*_PackManifestFactory_PackManifestFactory)(p1);
}
static void (PackSourceFactory::*_PackSourceFactory_PackSourceFactory)();
PackSourceFactory::PackSourceFactory() {
    (this->*_PackSourceFactory_PackSourceFactory)();
}
static void (ResourcePackRepository::*_ResourcePackRepository_ResourcePackRepository)(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, Core::FilePathManager *, PackSourceFactory &, bool);
ResourcePackRepository::ResourcePackRepository(IMinecraftEventing & p1, PackManifestFactory & p2, IContentAccessibilityProvider & p3, Core::FilePathManager * p4, PackSourceFactory & p5, bool p6) {
    (this->*_ResourcePackRepository_ResourcePackRepository)(p1, p2, p3, p4, p5, p6);
}
static void (ResourcePackRepository::*_ResourcePackRepository_addWorldResourcePacks)(Legacy::Pre_1_13::Core::Path const &);
void ResourcePackRepository::addWorldResourcePacks(Legacy::Pre_1_13::Core::Path const & p1) {
    (this->*_ResourcePackRepository_addWorldResourcePacks)(p1);
}
static void (ResourcePackRepository::*_ResourcePackRepository_refreshPacks)();
void ResourcePackRepository::refreshPacks() {
    (this->*_ResourcePackRepository_refreshPacks)();
}
static void (ContentTierManager::*_ContentTierManager_ContentTierManager)();
ContentTierManager::ContentTierManager() {
    (this->*_ContentTierManager_ContentTierManager)();
}
static void (ResourcePackManager::*_ResourcePackManager_ResourcePackManager)(mcpe::function<Core::PathBuffer ( )> const &, ContentTierManager const &, bool);
ResourcePackManager::ResourcePackManager(mcpe::function<Core::PathBuffer ( )> const & p1, ContentTierManager const & p2, bool p3) {
    (this->*_ResourcePackManager_ResourcePackManager)(p1, p2, p3);
}
static void (ResourcePackManager::*_ResourcePackManager_setStack)(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool);
void ResourcePackManager::setStack(std::unique_ptr<ResourcePackStack> p1, ResourcePackStackType p2, bool p3) {
    (this->*_ResourcePackManager_setStack)(std::move(p1), p2, p3);
}
static void (ResourcePackManager::*_ResourcePackManager_onLanguageChanged)();
void ResourcePackManager::onLanguageChanged() {
    (this->*_ResourcePackManager_onLanguageChanged)();
}

#include <minecraft/ResourcePackStack.h>
static void (PackInstance::*_PackInstance_PackInstance)(ResourcePack *, int, bool, PackSettings *);
PackInstance::PackInstance(ResourcePack * p1, int p2, bool p3, PackSettings * p4) {
    (this->*_PackInstance_PackInstance)(p1, p2, p3, p4);
}
void * * ResourcePackStack::vtable_sym;
static void (ResourcePackStack::*_ResourcePackStack_add)(PackInstance const &, ResourcePackRepository const &, bool);
void ResourcePackStack::add(PackInstance const & p1, ResourcePackRepository const & p2, bool p3) {
    (this->*_ResourcePackStack_add)(p1, p2, p3);
}

#include <minecraft/SaveTransactionManager.h>
static void (SaveTransactionManager::*_SaveTransactionManager_SaveTransactionManager)(mcpe::function<void ( bool )>);
SaveTransactionManager::SaveTransactionManager(mcpe::function<void ( bool )> p1) {
    (this->*_SaveTransactionManager_SaveTransactionManager)(p1);
}

#include <minecraft/Scheduler.h>
static void (Scheduler::*_Scheduler_processCoroutines)(std::chrono::duration<long long>);
void Scheduler::processCoroutines(std::chrono::duration<long long> p1) {
    (this->*_Scheduler_processCoroutines)(p1);
}
static Scheduler * (*_MinecraftScheduler_client)();
Scheduler * MinecraftScheduler::client() {
    return _MinecraftScheduler_client();
}

#include <minecraft/ServerCommandOrigin.h>
static void (ServerCommandOrigin::*_ServerCommandOrigin_ServerCommandOrigin)(mcpe::string const &, ServerLevel &, CommandPermissionLevel);
ServerCommandOrigin::ServerCommandOrigin(mcpe::string const & p1, ServerLevel & p2, CommandPermissionLevel p3) {
    (this->*_ServerCommandOrigin_ServerCommandOrigin)(p1, p2, p3);
}

#include <minecraft/ServerInstance.h>
static void (EducationOptions::*_EducationOptions_EducationOptions)(ResourcePackManager *);
EducationOptions::EducationOptions(ResourcePackManager * p1) {
    (this->*_EducationOptions_EducationOptions)(p1);
}
static void (ServerInstance::*_ServerInstance_ServerInstance)(IMinecraftApp &, ServerInstanceEventCoordinator &);
ServerInstance::ServerInstance(IMinecraftApp & p1, ServerInstanceEventCoordinator & p2) {
    (this->*_ServerInstance_ServerInstance)(p1, p2);
}
static void (ServerInstance::*_ServerInstance_initializeServer)(IMinecraftApp &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::seconds, mcpe::string, mcpe::string, mcpe::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<mcpe::string> const &, mcpe::string, mce::UUID const &, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const &, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage> ( Scheduler & )>, mcpe::string const &, LevelData *, mcpe::string, mcpe::string, std::unique_ptr<EducationOptions>, ResourcePackManager *, std::function<void ( )>, std::function<void ( )>, ServerMetrics *, DebugEndPoint *, bool);
void ServerInstance::initializeServer(IMinecraftApp & p1, Whitelist & p2, PermissionsFile * p3, Core::FilePathManager * p4, std::chrono::seconds p5, mcpe::string p6, mcpe::string p7, mcpe::string p8, LevelSettings p9, int p10, bool p11, ConnectionDefinition p12, bool p13, std::vector<mcpe::string> const & p14, mcpe::string p15, mce::UUID const & p16, IMinecraftEventing & p17, ResourcePackRepository & p18, ContentTierManager const & p19, ResourcePackManager & p20, std::function<std::unique_ptr<LevelStorage> ( Scheduler & )> p21, mcpe::string const & p22, LevelData * p23, mcpe::string p24, mcpe::string p25, std::unique_ptr<EducationOptions> p26, ResourcePackManager * p27, std::function<void ( )> p28, std::function<void ( )> p29, ServerMetrics * p30, DebugEndPoint * p31, bool p32) {
    (this->*_ServerInstance_initializeServer)(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, std::move(p26), p27, p28, p29, p30, p31, p32);
}
static void (ServerInstance::*_ServerInstance_destructor)();
ServerInstance::~ServerInstance() {
    (this->*_ServerInstance_destructor)();
}
static void (ServerInstance::*_ServerInstance_startServerThread)();
void ServerInstance::startServerThread() {
    (this->*_ServerInstance_startServerThread)();
}
static void (ServerInstance::*_ServerInstance_leaveGameSync)();
void ServerInstance::leaveGameSync() {
    (this->*_ServerInstance_leaveGameSync)();
}
static void (ServerInstance::*_ServerInstance_queueForServerThread)(mcpe::function<void ( )>);
void ServerInstance::queueForServerThread(mcpe::function<void ( )> p1) {
    (this->*_ServerInstance_queueForServerThread)(p1);
}

#include <minecraft/SharedConstants.h>
int * SharedConstants::MajorVersion;
int * SharedConstants::MinorVersion;
int * SharedConstants::PatchVersion;
int * SharedConstants::RevisionVersion;

#include <minecraft/Social.h>
static Social::XboxLiveUser * (Social::User::*_Social_User_getLiveUser)() const;
Social::XboxLiveUser * Social::User::getLiveUser() const {
    return (this->*_Social_User_getLiveUser)();
}
static void (Social::XboxLiveUser::*_Social_XboxLiveUser__handleUISignInNoError)(xbox::services::system::sign_in_result &, mcpe::function<void ( Social::SignInResult, bool )>);
void Social::XboxLiveUser::_handleUISignInNoError(xbox::services::system::sign_in_result & p1, mcpe::function<void ( Social::SignInResult, bool )> p2) {
    (this->*_Social_XboxLiveUser__handleUISignInNoError)(p1, p2);
}

#include <minecraft/Store.h>
static int vti_StoreListener_onStoreInitialized = -1;
void StoreListener::onStoreInitialized(bool p1) {
    union { void* voidp; void (StoreListener::*funcp)(bool); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_StoreListener_onStoreInitialized];
    (this->*u.funcp)(p1);
}
static int vti_StoreListener_onQueryProductsSuccess = -1;
void StoreListener::onQueryProductsSuccess(std::vector<ProductInfo> const & p1) {
    union { void* voidp; void (StoreListener::*funcp)(std::vector<ProductInfo> const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_StoreListener_onQueryProductsSuccess];
    (this->*u.funcp)(p1);
}

#include <minecraft/UUID.h>
mce::UUID * mce::UUID::EMPTY;
static mce::UUID (*_mce_UUID_fromString)(mcpe::string const &);
mce::UUID mce::UUID::fromString(mcpe::string const & p1) {
    return _mce_UUID_fromString(p1);
}
static mcpe::string (mce::UUID::*_mce_UUID_asString)() const;
mcpe::string mce::UUID::asString() const {
    return (this->*_mce_UUID_asString)();
}

#include <minecraft/UserManager.h>
static std::unique_ptr<Social::UserManager> (*_Social_UserManager_CreateUserManager)();
std::unique_ptr<Social::UserManager> Social::UserManager::CreateUserManager() {
    return _Social_UserManager_CreateUserManager();
}

#include <minecraft/V8.h>
static bool (*_v8_V8_Initialize)();
bool v8::V8::Initialize() {
    return _v8_V8_Initialize();
}
static void (*_v8_V8_InitializePlatform)(v8::Platform *);
void v8::V8::InitializePlatform(v8::Platform * p1) {
    _v8_V8_InitializePlatform(p1);
}

#include <minecraft/Whitelist.h>

#include <minecraft/Xbox.h>
static void * (*_xbox_services_xbox_services_error_code_category)();
void * xbox::services::xbox_services_error_code_category() {
    return _xbox_services_xbox_services_error_code_category();
}
static void (web::json::value::*_web_json_value_value)();
web::json::value::value() {
    (this->*_web_json_value_value)();
}
static void (web::json::value::*_web_json_value_value2)(mcpe::string);
web::json::value::value(mcpe::string p1) {
    (this->*_web_json_value_value2)(p1);
}
static void (web::json::value::*_web_json_value_value3)(web::json::value const &);
web::json::value::value(web::json::value const & p1) {
    (this->*_web_json_value_value3)(p1);
}
static void (web::json::value::*_web_json_value_value4)(web::json::value &&);
web::json::value::value(web::json::value && p1) {
    (this->*_web_json_value_value4)(std::move(p1));
}
static web::json::value & (web::json::value::*_web_json_value_operator)(mcpe::string const &);
web::json::value & web::json::value::operator[](mcpe::string const & p1) {
    return (this->*_web_json_value_operator)(p1);
}
static web::json::value & (web::json::value::*_web_json_value_operator2)(web::json::value &&);
web::json::value & web::json::value::operator=(web::json::value && p1) {
    return (this->*_web_json_value_operator2)(std::move(p1));
}
static mcpe::string (web::json::value::*_web_json_value_to_string)() const;
mcpe::string web::json::value::to_string() const {
    return (this->*_web_json_value_to_string)();
}
static void (web::json::value::*_web_json_value_erase)(mcpe::string const &);
void web::json::value::erase(mcpe::string const & p1) {
    (this->*_web_json_value_erase)(p1);
}
static std::shared_ptr<xbox::services::java_interop> (*_xbox_services_java_interop_get_java_interop_singleton)();
std::shared_ptr<xbox::services::java_interop> xbox::services::java_interop::get_java_interop_singleton() {
    return _xbox_services_java_interop_get_java_interop_singleton();
}
static uint32_t (xbox::services::xbox_live_app_config::*_xbox_services_xbox_live_app_config_title_id)();
uint32_t xbox::services::xbox_live_app_config::title_id() {
    return (this->*_xbox_services_xbox_live_app_config_title_id)();
}
static std::shared_ptr<xbox::services::xbox_live_app_config> (*_xbox_services_xbox_live_app_config_get_app_config_singleton)();
std::shared_ptr<xbox::services::xbox_live_app_config> xbox::services::xbox_live_app_config::get_app_config_singleton() {
    return _xbox_services_xbox_live_app_config_get_app_config_singleton();
}
static int vti_xbox_services_local_config_get_value_from_local_storage = -1;
mcpe::string xbox::services::local_config::get_value_from_local_storage(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3) {
    union { void* voidp; ::mcpe::string (xbox::services::local_config::*funcp)(mcpe::string const &, mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_xbox_services_local_config_get_value_from_local_storage];
    return (this->*u.funcp)(p1, p2, p3);
}
static int vti_xbox_services_local_config_write_value_to_local_storage = -1;
xbox::services::xbox_live_result<void> xbox::services::local_config::write_value_to_local_storage(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string const & p4) {
    union { void* voidp; ::xbox::services::xbox_live_result<void> (xbox::services::local_config::*funcp)(mcpe::string const &, mcpe::string const &, mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_xbox_services_local_config_write_value_to_local_storage];
    return (this->*u.funcp)(p1, p2, p3, p4);
}
static std::shared_ptr<xbox::services::local_config> (*_xbox_services_local_config_get_local_config_singleton)();
std::shared_ptr<xbox::services::local_config> xbox::services::local_config::get_local_config_singleton() {
    return _xbox_services_local_config_get_local_config_singleton();
}
static void (xbox::services::xsapi_singleton::*_xbox_services_xsapi_singleton_destructor)();
xbox::services::xsapi_singleton::~xsapi_singleton() {
    (this->*_xbox_services_xsapi_singleton_destructor)();
}
static void (xbox::services::system::user_impl::*_xbox_services_system_user_impl_user_signed_out)();
void xbox::services::system::user_impl::user_signed_out() {
    (this->*_xbox_services_system_user_impl_user_signed_out)();
}
static std::shared_ptr<xbox::services::system::user_impl_android> (*_xbox_services_system_user_impl_android_get_instance)();
std::shared_ptr<xbox::services::system::user_impl_android> xbox::services::system::user_impl_android::get_instance() {
    return _xbox_services_system_user_impl_android_get_instance();
}
static void (pplx::task_completion_event_java_rps_ticket::*_pplx_task_completion_event_java_rps_ticket_set)(xbox::services::system::java_rps_ticket);
void pplx::task_completion_event_java_rps_ticket::set(xbox::services::system::java_rps_ticket p1) {
    (this->*_pplx_task_completion_event_java_rps_ticket_set)(p1);
}
static void (pplx::task_completion_event_auth_flow_result::*_pplx_task_completion_event_auth_flow_result_set)(xbox::services::system::auth_flow_result);
void pplx::task_completion_event_auth_flow_result::set(xbox::services::system::auth_flow_result p1) {
    (this->*_pplx_task_completion_event_auth_flow_result_set)(p1);
}
static void (pplx::task_completion_event_xbox_live_result_void::*_pplx_task_completion_event_xbox_live_result_void_set)(xbox::services::xbox_live_result<void>);
void pplx::task_completion_event_xbox_live_result_void::set(xbox::services::xbox_live_result<void> p1) {
    (this->*_pplx_task_completion_event_xbox_live_result_void_set)(p1);
}
static xbox::services::xbox_live_result<void> (pplx::task_xbox_live_result_void::*_pplx_task_xbox_live_result_void_get)();
xbox::services::xbox_live_result<void> pplx::task_xbox_live_result_void::get() {
    return (this->*_pplx_task_xbox_live_result_void_get)();
}
static xbox::services::xbox_live_result<xbox::services::system::token_and_signature_result> (pplx::task_xbox_live_result_token_and_signature_result::*_pplx_task_xbox_live_result_token_and_signature_result_get)();
xbox::services::xbox_live_result<xbox::services::system::token_and_signature_result> pplx::task_xbox_live_result_token_and_signature_result::get() {
    return (this->*_pplx_task_xbox_live_result_token_and_signature_result_get)();
}
static void (xbox::services::system::auth_config::*_xbox_services_system_auth_config_set_xtoken_composition)(std::vector<xbox::services::system::token_identity_type>);
void xbox::services::system::auth_config::set_xtoken_composition(std::vector<xbox::services::system::token_identity_type> p1) {
    (this->*_xbox_services_system_auth_config_set_xtoken_composition)(p1);
}
static mcpe::string const & (xbox::services::system::auth_config::*_xbox_services_system_auth_config_xbox_live_endpoint)() const;
mcpe::string const & xbox::services::system::auth_config::xbox_live_endpoint() const {
    return (this->*_xbox_services_system_auth_config_xbox_live_endpoint)();
}
static std::shared_ptr<xbox::services::system::auth_manager> (*_xbox_services_system_auth_manager_get_auth_manager_instance)();
std::shared_ptr<xbox::services::system::auth_manager> xbox::services::system::auth_manager::get_auth_manager_instance() {
    return _xbox_services_system_auth_manager_get_auth_manager_instance();
}
static void (xbox::services::system::auth_manager::*_xbox_services_system_auth_manager_set_rps_ticket)(mcpe::string const &);
void xbox::services::system::auth_manager::set_rps_ticket(mcpe::string const & p1) {
    (this->*_xbox_services_system_auth_manager_set_rps_ticket)(p1);
}
static pplx::task_xbox_live_result_void (xbox::services::system::auth_manager::*_xbox_services_system_auth_manager_initialize_default_nsal)(pplx::cancellation_token);
pplx::task_xbox_live_result_void xbox::services::system::auth_manager::initialize_default_nsal(pplx::cancellation_token p1) {
    return (this->*_xbox_services_system_auth_manager_initialize_default_nsal)(p1);
}
static pplx::task_xbox_live_result_void (xbox::services::system::auth_manager::*_xbox_services_system_auth_manager_initialize_title_nsal)(mcpe::string const &, pplx::cancellation_token);
pplx::task_xbox_live_result_void xbox::services::system::auth_manager::initialize_title_nsal(mcpe::string const & p1, pplx::cancellation_token p2) {
    return (this->*_xbox_services_system_auth_manager_initialize_title_nsal)(p1, p2);
}
static pplx::task_xbox_live_result_token_and_signature_result (xbox::services::system::auth_manager::*_xbox_services_system_auth_manager_internal_get_token_and_signature)(mcpe::string, mcpe::string const &, mcpe::string const &, mcpe::string, std::vector<unsigned char> const &, bool, bool, mcpe::string const &, pplx::cancellation_token);
pplx::task_xbox_live_result_token_and_signature_result xbox::services::system::auth_manager::internal_get_token_and_signature(mcpe::string p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string p4, std::vector<unsigned char> const & p5, bool p6, bool p7, mcpe::string const & p8, pplx::cancellation_token p9) {
    return (this->*_xbox_services_system_auth_manager_internal_get_token_and_signature)(p1, p2, p3, p4, p5, p6, p7, p8, p9);
}
static std::shared_ptr<xbox::services::system::auth_config> (xbox::services::system::auth_manager::*_xbox_services_system_auth_manager_get_auth_config)();
std::shared_ptr<xbox::services::system::auth_config> xbox::services::system::auth_manager::get_auth_config() {
    return (this->*_xbox_services_system_auth_manager_get_auth_config)();
}
pplx::task_completion_event_java_rps_ticket * xbox::services::system::user_auth_android::s_rpsTicketCompletionEvent;
pplx::task_completion_event_xbox_live_result_void * xbox::services::system::user_auth_android::s_signOutCompleteEvent;
static std::shared_ptr<xbox::services::system::user_auth_android> (*_xbox_services_system_user_auth_android_get_instance)();
std::shared_ptr<xbox::services::system::user_auth_android> xbox::services::system::user_auth_android::get_instance() {
    return _xbox_services_system_user_auth_android_get_instance();
}
static void (xbox::services::system::user_auth_android::*_xbox_services_system_user_auth_android_complete_sign_in_with_ui)(xbox::services::system::auth_flow_result const &);
void xbox::services::system::user_auth_android::complete_sign_in_with_ui(xbox::services::system::auth_flow_result const & p1) {
    (this->*_xbox_services_system_user_auth_android_complete_sign_in_with_ui)(p1);
}
static std::shared_ptr<xbox::services::system::xbox_live_services_settings> (*_xbox_services_system_xbox_live_services_settings_get_singleton_instance)(bool);
std::shared_ptr<xbox::services::system::xbox_live_services_settings> xbox::services::system::xbox_live_services_settings::get_singleton_instance(bool p1) {
    return _xbox_services_system_xbox_live_services_settings_get_singleton_instance(p1);
}
static void (xbox::services::system::xbox_live_services_settings::*_xbox_services_system_xbox_live_services_settings_set_diagnostics_trace_level)(int);
void xbox::services::system::xbox_live_services_settings::set_diagnostics_trace_level(int p1) {
    (this->*_xbox_services_system_xbox_live_services_settings_set_diagnostics_trace_level)(p1);
}

#include <minecraft/gl.h>
static mcpe::string (*_gl_getOpenGLVendor)();
mcpe::string gl::getOpenGLVendor() {
    return _gl_getOpenGLVendor();
}
static mcpe::string (*_gl_getOpenGLRenderer)();
mcpe::string gl::getOpenGLRenderer() {
    return _gl_getOpenGLRenderer();
}
static mcpe::string (*_gl_getOpenGLVersion)();
mcpe::string gl::getOpenGLVersion() {
    return _gl_getOpenGLVersion();
}
static mcpe::string (*_gl_getOpenGLExtensions)();
mcpe::string gl::getOpenGLExtensions() {
    return _gl_getOpenGLExtensions();
}
static void (*_mce_Platform_OGL_InitBindings)();
void mce::Platform::OGL::InitBindings() {
    _mce_Platform_OGL_InitBindings();
}

#include <minecraft/legacy/App.h>
static int vti_Legacy_Pre_1_8_App_quit = -1;
void Legacy::Pre_1_8::App::quit() {
    union { void* voidp; void (Legacy::Pre_1_8::App::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_8_App_quit];
    (this->*u.funcp)();
}
static int vti_Legacy_Pre_0_15_App_setSize = -1;
void Legacy::Pre_0_15::App::setSize(int p1, int p2, float p3) {
    union { void* voidp; void (Legacy::Pre_0_15::App::*funcp)(int, int, float); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_0_15_App_setSize];
    (this->*u.funcp)(p1, p2, p3);
}

#include <minecraft/legacy/AppPlatform.h>
static void (Legacy::Pre_1_2_13::AppPlatform::*_Legacy_Pre_1_2_13_AppPlatform_showKeyboard)(mcpe::string const &, int, bool, bool, bool, int, Vec2 const &);
void Legacy::Pre_1_2_13::AppPlatform::showKeyboard(mcpe::string const & p1, int p2, bool p3, bool p4, bool p5, int p6, Vec2 const & p7) {
    (this->*_Legacy_Pre_1_2_13_AppPlatform_showKeyboard)(p1, p2, p3, p4, p5, p6, p7);
}
static void (Legacy::Pre_1_2_10::AppPlatform::*_Legacy_Pre_1_2_10_AppPlatform_showKeyboard)(mcpe::string const &, int, bool, bool, bool, Vec2 const &);
void Legacy::Pre_1_2_10::AppPlatform::showKeyboard(mcpe::string const & p1, int p2, bool p3, bool p4, bool p5, Vec2 const & p6) {
    (this->*_Legacy_Pre_1_2_10_AppPlatform_showKeyboard)(p1, p2, p3, p4, p5, p6);
}

#include <minecraft/legacy/Core.h>

#include <minecraft/legacy/FilePickerSettings.h>

#include <minecraft/legacy/ImageData.h>

#include <minecraft/legacy/Keyboard.h>
std::vector<Legacy::Pre_1_2::Keyboard::InputEvent> * Legacy::Pre_1_2::Keyboard::_inputs;
static void (*_Legacy_Pre_0_17_Keyboard_feedText)(mcpe::string const &, bool);
void Legacy::Pre_0_17::Keyboard::feedText(mcpe::string const & p1, bool p2) {
    _Legacy_Pre_0_17_Keyboard_feedText(p1, p2);
}

#include <minecraft/legacy/MinecraftGame.h>
static void (Legacy::Pre_1_13::MinecraftGame::*_Legacy_Pre_1_13_MinecraftGame_destructor)();
Legacy::Pre_1_13::MinecraftGame::~MinecraftGame() {
    (this->*_Legacy_Pre_1_13_MinecraftGame_destructor)();
}
static void (Legacy::Pre_1_2_10::MinecraftGame::*_Legacy_Pre_1_2_10_MinecraftGame_setTextboxText)(mcpe::string const &);
void Legacy::Pre_1_2_10::MinecraftGame::setTextboxText(mcpe::string const & p1) {
    (this->*_Legacy_Pre_1_2_10_MinecraftGame_setTextboxText)(p1);
}
static Options * (Legacy::Pre_1_2::MinecraftGame::*_Legacy_Pre_1_2_MinecraftGame_getOptions)();
Options * Legacy::Pre_1_2::MinecraftGame::getOptions() {
    return (this->*_Legacy_Pre_1_2_MinecraftGame_getOptions)();
}
static void (Legacy::Pre_1_1::MinecraftClient::*_Legacy_Pre_1_1_MinecraftClient_MinecraftClient)(int, char * *);
Legacy::Pre_1_1::MinecraftClient::MinecraftClient(int p1, char * * p2) {
    (this->*_Legacy_Pre_1_1_MinecraftClient_MinecraftClient)(p1, p2);
}
static void (Legacy::Pre_1_1::MinecraftClient::*_Legacy_Pre_1_1_MinecraftClient_destructor)();
Legacy::Pre_1_1::MinecraftClient::~MinecraftClient() {
    (this->*_Legacy_Pre_1_1_MinecraftClient_destructor)();
}
static void (Legacy::Pre_1_1::MinecraftClient::*_Legacy_Pre_1_1_MinecraftClient_setTextboxText)(mcpe::string const &);
void Legacy::Pre_1_1::MinecraftClient::setTextboxText(mcpe::string const & p1) {
    (this->*_Legacy_Pre_1_1_MinecraftClient_setTextboxText)(p1);
}
static Options * (Legacy::Pre_1_1::MinecraftClient::*_Legacy_Pre_1_1_MinecraftClient_getOptions)();
Options * Legacy::Pre_1_1::MinecraftClient::getOptions() {
    return (this->*_Legacy_Pre_1_1_MinecraftClient_getOptions)();
}

#include <minecraft/legacy/SharedConstants.h>
int * Legacy::Pre_0_17::SharedConstants::BetaVersion;

#include <minecraft/legacy/Store.h>
static int vti_Legacy_Pre_1_2_StoreListener_onQueryProductsSuccess = -1;
void Legacy::Pre_1_2::StoreListener::onQueryProductsSuccess(std::vector<ProductInfo> const & p1) {
    union { void* voidp; void (Legacy::Pre_1_2::StoreListener::*funcp)(std::vector<ProductInfo> const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_2_StoreListener_onQueryProductsSuccess];
    (this->*u.funcp)(p1);
}
static int vti_Legacy_Pre_0_17_StoreListener_onQueryProductsSuccess = -1;
void Legacy::Pre_0_17::StoreListener::onQueryProductsSuccess(std::vector<Product> const & p1) {
    union { void* voidp; void (Legacy::Pre_0_17::StoreListener::*funcp)(std::vector<Product> const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_0_17_StoreListener_onQueryProductsSuccess];
    (this->*u.funcp)(p1);
}

#include <minecraft/legacy/UUID.h>
static mcpe::string (Legacy::Pre_1_0_4::mce::UUID::*_Legacy_Pre_1_0_4_mce_UUID_toString)() const;
mcpe::string Legacy::Pre_1_0_4::mce::UUID::toString() const {
    return (this->*_Legacy_Pre_1_0_4_mce_UUID_toString)();
}

#include <minecraft/legacy/Xbox.h>
static int vti_Legacy_Pre_1_8_xbox_services_local_config_get_value_from_local_storage = -1;
mcpe::string Legacy::Pre_1_8::xbox::services::local_config::get_value_from_local_storage(mcpe::string const & p1) {
    union { void* voidp; ::mcpe::string (Legacy::Pre_1_8::xbox::services::local_config::*funcp)(mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_8_xbox_services_local_config_get_value_from_local_storage];
    return (this->*u.funcp)(p1);
}
static std::shared_ptr<Legacy::Pre_1_4::xbox::services::system::auth_manager> (*_Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_manager_instance)();
std::shared_ptr<Legacy::Pre_1_4::xbox::services::system::auth_manager> Legacy::Pre_1_4::xbox::services::system::auth_manager::get_auth_manager_instance() {
    return _Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_manager_instance();
}
static void (Legacy::Pre_1_4::xbox::services::system::auth_manager::*_Legacy_Pre_1_4_xbox_services_system_auth_manager_set_rps_ticket)(mcpe::string const &);
void Legacy::Pre_1_4::xbox::services::system::auth_manager::set_rps_ticket(mcpe::string const & p1) {
    (this->*_Legacy_Pre_1_4_xbox_services_system_auth_manager_set_rps_ticket)(p1);
}
static pplx::task_xbox_live_result_void (Legacy::Pre_1_4::xbox::services::system::auth_manager::*_Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_default_nsal)();
pplx::task_xbox_live_result_void Legacy::Pre_1_4::xbox::services::system::auth_manager::initialize_default_nsal() {
    return (this->*_Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_default_nsal)();
}
static pplx::task_xbox_live_result_void (Legacy::Pre_1_4::xbox::services::system::auth_manager::*_Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_title_nsal)(mcpe::string const &);
pplx::task_xbox_live_result_void Legacy::Pre_1_4::xbox::services::system::auth_manager::initialize_title_nsal(mcpe::string const & p1) {
    return (this->*_Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_title_nsal)(p1);
}
static pplx::task_xbox_live_result_token_and_signature_result (Legacy::Pre_1_4::xbox::services::system::auth_manager::*_Legacy_Pre_1_4_xbox_services_system_auth_manager_internal_get_token_and_signature)(mcpe::string, mcpe::string const &, mcpe::string const &, mcpe::string, std::vector<unsigned char> const &, bool, bool, mcpe::string const &);
pplx::task_xbox_live_result_token_and_signature_result Legacy::Pre_1_4::xbox::services::system::auth_manager::internal_get_token_and_signature(mcpe::string p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string p4, std::vector<unsigned char> const & p5, bool p6, bool p7, mcpe::string const & p8) {
    return (this->*_Legacy_Pre_1_4_xbox_services_system_auth_manager_internal_get_token_and_signature)(p1, p2, p3, p4, p5, p6, p7, p8);
}
static std::shared_ptr<::xbox::services::system::auth_config> (Legacy::Pre_1_4::xbox::services::system::auth_manager::*_Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_config)();
std::shared_ptr<::xbox::services::system::auth_config> Legacy::Pre_1_4::xbox::services::system::auth_manager::get_auth_config() {
    return (this->*_Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_config)();
}
static void (Legacy::Pre_1_2_3::pplx::task_completion_event_auth_flow_result::*_Legacy_Pre_1_2_3_pplx_task_completion_event_auth_flow_result_set)(Legacy::Pre_1_2_3::xbox::services::system::auth_flow_result);
void Legacy::Pre_1_2_3::pplx::task_completion_event_auth_flow_result::set(Legacy::Pre_1_2_3::xbox::services::system::auth_flow_result p1) {
    (this->*_Legacy_Pre_1_2_3_pplx_task_completion_event_auth_flow_result_set)(p1);
}
static xbox::services::xbox_live_result<Legacy::Pre_1_2_3::xbox::services::system::token_and_signature_result> (Legacy::Pre_1_2_3::pplx::task_xbox_live_result_token_and_signature_result::*_Legacy_Pre_1_2_3_pplx_task_xbox_live_result_token_and_signature_result_get)();
xbox::services::xbox_live_result<Legacy::Pre_1_2_3::xbox::services::system::token_and_signature_result> Legacy::Pre_1_2_3::pplx::task_xbox_live_result_token_and_signature_result::get() {
    return (this->*_Legacy_Pre_1_2_3_pplx_task_xbox_live_result_token_and_signature_result_get)();
}
static std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::auth_manager> (*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_manager_instance)();
std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::auth_manager> Legacy::Pre_1_2_3::xbox::services::system::auth_manager::get_auth_manager_instance() {
    return _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_manager_instance();
}
static void (Legacy::Pre_1_2_3::xbox::services::system::auth_manager::*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_set_rps_ticket)(mcpe::string const &);
void Legacy::Pre_1_2_3::xbox::services::system::auth_manager::set_rps_ticket(mcpe::string const & p1) {
    (this->*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_set_rps_ticket)(p1);
}
static pplx::task_xbox_live_result_void (Legacy::Pre_1_2_3::xbox::services::system::auth_manager::*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_default_nsal)();
pplx::task_xbox_live_result_void Legacy::Pre_1_2_3::xbox::services::system::auth_manager::initialize_default_nsal() {
    return (this->*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_default_nsal)();
}
static pplx::task_xbox_live_result_void (Legacy::Pre_1_2_3::xbox::services::system::auth_manager::*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_title_nsal)(mcpe::string const &);
pplx::task_xbox_live_result_void Legacy::Pre_1_2_3::xbox::services::system::auth_manager::initialize_title_nsal(mcpe::string const & p1) {
    return (this->*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_title_nsal)(p1);
}
static Legacy::Pre_1_2_3::pplx::task_xbox_live_result_token_and_signature_result (Legacy::Pre_1_2_3::xbox::services::system::auth_manager::*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_internal_get_token_and_signature)(mcpe::string, mcpe::string const &, mcpe::string const &, mcpe::string, std::vector<unsigned char> const &, bool, bool, mcpe::string const &);
Legacy::Pre_1_2_3::pplx::task_xbox_live_result_token_and_signature_result Legacy::Pre_1_2_3::xbox::services::system::auth_manager::internal_get_token_and_signature(mcpe::string p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string p4, std::vector<unsigned char> const & p5, bool p6, bool p7, mcpe::string const & p8) {
    return (this->*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_internal_get_token_and_signature)(p1, p2, p3, p4, p5, p6, p7, p8);
}
static std::shared_ptr<::xbox::services::system::auth_config> (Legacy::Pre_1_2_3::xbox::services::system::auth_manager::*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_config)();
std::shared_ptr<::xbox::services::system::auth_config> Legacy::Pre_1_2_3::xbox::services::system::auth_manager::get_auth_config() {
    return (this->*_Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_config)();
}
static std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::user_auth_android> (*_Legacy_Pre_1_2_3_xbox_services_system_user_auth_android_get_instance)();
std::shared_ptr<Legacy::Pre_1_2_3::xbox::services::system::user_auth_android> Legacy::Pre_1_2_3::xbox::services::system::user_auth_android::get_instance() {
    return _Legacy_Pre_1_2_3_xbox_services_system_user_auth_android_get_instance();
}
static int vti_Legacy_Pre_1_2_xbox_services_local_config_impl_get_value_from_local_storage = -1;
mcpe::string Legacy::Pre_1_2::xbox::services::local_config_impl::get_value_from_local_storage(mcpe::string const & p1) {
    union { void* voidp; ::mcpe::string (Legacy::Pre_1_2::xbox::services::local_config_impl::*funcp)(mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_2_xbox_services_local_config_impl_get_value_from_local_storage];
    return (this->*u.funcp)(p1);
}
static int vti_Legacy_Pre_1_2_xbox_services_local_config_impl_write_value_to_local_storage = -1;
xbox::services::xbox_live_result<void> Legacy::Pre_1_2::xbox::services::local_config_impl::write_value_to_local_storage(mcpe::string const & p1, mcpe::string const & p2) {
    union { void* voidp; ::xbox::services::xbox_live_result<void> (Legacy::Pre_1_2::xbox::services::local_config_impl::*funcp)(mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_2_xbox_services_local_config_impl_write_value_to_local_storage];
    return (this->*u.funcp)(p1, p2);
}
static std::shared_ptr<Legacy::Pre_1_2::xbox::services::local_config_impl> (*_Legacy_Pre_1_2_xbox_services_local_config_impl_get_local_config_singleton)();
std::shared_ptr<Legacy::Pre_1_2::xbox::services::local_config_impl> Legacy::Pre_1_2::xbox::services::local_config_impl::get_local_config_singleton() {
    return _Legacy_Pre_1_2_xbox_services_local_config_impl_get_local_config_singleton();
}
pplx::task_completion_event_java_rps_ticket * Legacy::Pre_1_2::xbox::services::system::user_impl_android::s_rpsTicketCompletionEvent;
pplx::task_completion_event_xbox_live_result_void * Legacy::Pre_1_2::xbox::services::system::user_impl_android::s_signOutCompleteEvent;
static std::shared_ptr<Legacy::Pre_1_2::xbox::services::system::user_impl_android> (*_Legacy_Pre_1_2_xbox_services_system_user_impl_android_get_instance)();
std::shared_ptr<Legacy::Pre_1_2::xbox::services::system::user_impl_android> Legacy::Pre_1_2::xbox::services::system::user_impl_android::get_instance() {
    return _Legacy_Pre_1_2_xbox_services_system_user_impl_android_get_instance();
}
static std::shared_ptr<Legacy::Pre_0_15_2::xbox::services::system::user_impl_android> (*_Legacy_Pre_0_15_2_xbox_services_system_user_impl_android_get_instance)();
std::shared_ptr<Legacy::Pre_0_15_2::xbox::services::system::user_impl_android> Legacy::Pre_0_15_2::xbox::services::system::user_impl_android::get_instance() {
    return _Legacy_Pre_0_15_2_xbox_services_system_user_impl_android_get_instance();
}

static VersionData::Symbol _empty_symbol_bucket[] = {{nullptr,0}};
static VersionData version_data[] = {
    {
        1, 13, 0, 15,
        0x2537421, 11300015,
        11, (VersionData::SymbolBucket[]) {(VersionData::Symbol[]){{"_ZN18TextToSpeechSystem15createTTSClientEb", 0x17EE720},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGame21getPrimaryUserOptionsEv", 0xBC3A10},{"_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv", 0x167C8A0},{"_ZN3mce8Platform3OGL12InitBindingsEv", 0x3B331D0},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGame24doPrimaryClientReadyWorkESt8functionIFvvEE", 0xBEFBB0},{"_ZN7Options13setFullscreenEb", 0x109F8B0},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZN3App4initER10AppContext", 0x223F100},{"_ZTV22NullTextToSpeechClient", 0x711D5A0},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZNK7Options13getFullscreenEv", 0x109F900},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGameC2EiPPc", 0xBB91F0},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGame14setTextboxTextERKSsi", 0xBFAE10},{nullptr,0}},(VersionData::Symbol[]){{"_ZN6Common23getGameVersionStringNetEv", 0x2535530},{nullptr,0}},_empty_symbol_bucket},
        (VersionData::VtableEntry[]) {{&vti_App_quit,2},{&vti_App_update,14},{&vti_App_setRenderingSize,15},{&vti_App_setUISizeAndScale,4},{&vti_App_wantToQuit,3},{&vti_StoreListener_onStoreInitialized,2},{&vti_StoreListener_onQueryProductsSuccess,3},{nullptr,0}}
    },
    {
        1, 13, 0, 34,
        0x255D891, 11300034,
        9, (VersionData::SymbolBucket[]) {(VersionData::Symbol[]){{"_ZN7Options13setFullscreenEb", 0x10D3520},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGameC2EiPPc", 0xBBCB20},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZN13MinecraftGame14setTextboxTextERKSsi", 0xBFE7E0},{"_ZN13MinecraftGame21getPrimaryUserOptionsEv", 0xBC7350},{"_ZN3mce8Platform3OGL12InitBindingsEv", 0x3B6DEE0},{nullptr,0}},(VersionData::Symbol[]){{"_ZN3App4initER10AppContext", 0x225F560},{"_ZN13MinecraftGame24doPrimaryClientReadyWorkESt8functionIFvvEE", 0xBF3580},{nullptr,0}},(VersionData::Symbol[]){{"_ZTV22NullTextToSpeechClient", 0x71968A0},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZN6Common23getGameVersionStringNetEv", 0x255BD90},{nullptr,0}},(VersionData::Symbol[]){{"_ZNK7Options13getFullscreenEv", 0x10D3570},{"_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv", 0x16AA690},{nullptr,0}}},
        (VersionData::VtableEntry[]) {{&vti_App_quit,2},{&vti_App_update,14},{&vti_App_setRenderingSize,15},{&vti_App_setUISizeAndScale,4},{&vti_App_wantToQuit,3},{&vti_StoreListener_onStoreInitialized,2},{&vti_StoreListener_onQueryProductsSuccess,3},{nullptr,0}}
    },
    {
        1, 14, 1, 3,
        0x263D5D1, 11401003,
        9, (VersionData::SymbolBucket[]) {(VersionData::Symbol[]){{"_ZN7Options13setFullscreenEb", 0x1122880},{nullptr,0}},(VersionData::Symbol[]){{"_ZN13MinecraftGameC2EiPPc", 0xBD6700},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZN13MinecraftGame14setTextboxTextERKSsi", 0xC1DE00},{"_ZN13MinecraftGame21getPrimaryUserOptionsEv", 0xBE13C0},{"_ZN3mce8Platform3OGL12InitBindingsEv", 0x3C95D90},{nullptr,0}},(VersionData::Symbol[]){{"_ZN3App4initER10AppContext", 0x2326410},{"_ZN13MinecraftGame24doPrimaryClientReadyWorkESt8functionIFvvEE", 0xC12780},{nullptr,0}},(VersionData::Symbol[]){{"_ZTV22NullTextToSpeechClient", 0x7359C34},{nullptr,0}},_empty_symbol_bucket,(VersionData::Symbol[]){{"_ZN6Common23getGameVersionStringNetEv", 0x263B6C0},{nullptr,0}},(VersionData::Symbol[]){{"_ZNK7Options13getFullscreenEv", 0x11228D0},{"_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv", 0x1724D60},{nullptr,0}}},
        (VersionData::VtableEntry[]) {{&vti_App_quit,2},{&vti_App_update,14},{&vti_App_setRenderingSize,15},{&vti_App_setUISizeAndScale,4},{&vti_App_wantToQuit,3},{&vti_StoreListener_onStoreInitialized,2},{&vti_StoreListener_onQueryProductsSuccess,3},{nullptr,0}}
    },
};

static int resolve_vtable_func(void** vtable, void* what) {
    if (vtable - 2 == nullptr)
        return -1;
    for (int i = 0; ; i++) {
        if (vtable[i] == nullptr)
            return -1;
        if (vtable[i] == what)
            return i;
    }
}
void minecraft_symbols_init(void* handle) {
    set_current_version_data(find_version_data(version_data, sizeof(version_data) / sizeof(VersionData), handle));
    ((void*&) _App_init) = minecraft_dlsym(handle, "_ZN3App4initER10AppContext");
    if (_App_init == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3App4initER10AppContext");
    void** vt_App = (void**) minecraft_dlsym(handle, "_ZTV3App") + 2;
    if (vti_App_quit == -1) vti_App_quit = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App4quitERKSsS1_"));
    if (vti_App_quit == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App4quitERKSsS1_");
    if (vti_App_update == -1) vti_App_update = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App6updateEv"));
    if (vti_App_update == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App6updateEv");
    if (vti_App_setRenderingSize == -1) vti_App_setRenderingSize = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App16setRenderingSizeEii"));
    if (vti_App_setRenderingSize == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App16setRenderingSizeEii");
    if (vti_App_setUISizeAndScale == -1) vti_App_setUISizeAndScale = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App17setUISizeAndScaleEiif"));
    if (vti_App_setUISizeAndScale == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App17setUISizeAndScaleEiif");
    if (vti_App_wantToQuit == -1) vti_App_wantToQuit = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App10wantToQuitEv"));
    if (vti_App_wantToQuit == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App10wantToQuitEv");
    ((void*&) AppPlatform::myVtable) = minecraft_dlsym(handle, "_ZTV11AppPlatform");
    if (AppPlatform::myVtable == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV11AppPlatform");
    ((void*&) AppPlatform::instance) = minecraft_dlsym(handle, "_ZN14ServiceLocatorI11AppPlatformE15mDefaultServiceE");
    if (AppPlatform::instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServiceLocatorI11AppPlatformE15mDefaultServiceE");
    ((void*&) _AppPlatform_AppPlatform) = minecraft_dlsym(handle, "_ZN11AppPlatformC2Ev");
    if (_AppPlatform_AppPlatform == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatformC2Ev");
    ((void*&) _AppPlatform__fireAppFocusGained) = minecraft_dlsym(handle, "_ZN11AppPlatform19_fireAppFocusGainedEv");
    if (_AppPlatform__fireAppFocusGained == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform19_fireAppFocusGainedEv");
    ((void*&) _AppPlatform_initialize) = minecraft_dlsym(handle, "_ZN11AppPlatform10initializeEv");
    if (_AppPlatform_initialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform10initializeEv");
    ((void*&) _AppPlatform_teardown) = minecraft_dlsym(handle, "_ZN11AppPlatform8teardownEv");
    if (_AppPlatform_teardown == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform8teardownEv");
    ((void*&) _AppPlatform_showKeyboard) = minecraft_dlsym(handle, "_ZN11AppPlatform12showKeyboardERKSsibbbiRKN3glm5tvec2IfLNS2_9precisionE0EEE");
    if (_AppPlatform_showKeyboard == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform12showKeyboardERKSsibbbiRKN3glm5tvec2IfLNS2_9precisionE0EEE");
    ((void*&) _AppPlatform_hideKeyboard) = minecraft_dlsym(handle, "_ZN11AppPlatform12hideKeyboardEv");
    if (_AppPlatform_hideKeyboard == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform12hideKeyboardEv");
    ((void*&) _AppPlatform_isKeyboardVisible) = minecraft_dlsym(handle, "_ZN11AppPlatform17isKeyboardVisibleEv");
    if (_AppPlatform_isKeyboardVisible == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform17isKeyboardVisibleEv");
    ((void*&) _AppPlatform_getHardwareInformation) = minecraft_dlsym(handle, "_ZNK11AppPlatform22getHardwareInformationEv");
    if (_AppPlatform_getHardwareInformation == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK11AppPlatform22getHardwareInformationEv");
    ((void*&) _AppResourceLoader_AppResourceLoader) = minecraft_dlsym(handle, "_ZN17AppResourceLoaderC1ESt8functionIFN4Core10PathBufferISsEEvEE");
    if (_AppResourceLoader_AppResourceLoader == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17AppResourceLoaderC1ESt8functionIFN4Core10PathBufferISsEEvEE");
    ((void*&) _Automation_AutomationClient_AutomationClient) = minecraft_dlsym(handle, "_ZN10Automation16AutomationClientC2ER13IMinecraftApp");
    if (_Automation_AutomationClient_AutomationClient == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10Automation16AutomationClientC2ER13IMinecraftApp");
    ((void*&) _ClientInstance_getUser) = minecraft_dlsym(handle, "_ZN14ClientInstance7getUserEv");
    if (_ClientInstance_getUser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance7getUserEv");
    ((void*&) _ClientInstance__startLeaveGame) = minecraft_dlsym(handle, "_ZN14ClientInstance15_startLeaveGameEv");
    if (_ClientInstance__startLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance15_startLeaveGameEv");
    ((void*&) _ClientInstance__syncDestroyGame) = minecraft_dlsym(handle, "_ZN14ClientInstance16_syncDestroyGameEv");
    if (_ClientInstance__syncDestroyGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance16_syncDestroyGameEv");
    ((void*&) _CommandOutput_getMessages) = minecraft_dlsym(handle, "_ZNK13CommandOutput11getMessagesEv");
    if (_CommandOutput_getMessages == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK13CommandOutput11getMessagesEv");
    ((void*&) _CommandOutputSender_translate) = minecraft_dlsym(handle, "_ZN19CommandOutputSender9translateERKSt6vectorISsSaISsEE");
    if (_CommandOutputSender_translate == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender9translateERKSt6vectorISsSaISsEE");
    ((void*&) _CommandOutputSender_CommandOutputSender) = minecraft_dlsym(handle, "_ZN19CommandOutputSenderC2ERN10Automation16AutomationClientE");
    if (_CommandOutputSender_CommandOutputSender == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSenderC2ERN10Automation16AutomationClientE");
    ((void*&) _CommandOutputSender_destructor) = minecraft_dlsym(handle, "_ZN19CommandOutputSenderD2Ev");
    if (_CommandOutputSender_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSenderD2Ev");
    ((void*&) _CommandOutputSender_send) = minecraft_dlsym(handle, "_ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput");
    if (_CommandOutputSender_send == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput");
    ((void*&) _CommandOutputSender_registerOutputCallback) = minecraft_dlsym(handle, "_ZN19CommandOutputSender22registerOutputCallbackERKSt8functionIFvR19AutomationCmdOutputEE");
    if (_CommandOutputSender_registerOutputCallback == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender22registerOutputCallbackERKSt8functionIFvR19AutomationCmdOutputEE");
    ((void*&) _Common_getGameVersionStringNet) = minecraft_dlsym(handle, "_ZN6Common23getGameVersionStringNetEv");
    if (_Common_getGameVersionStringNet == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Common23getGameVersionStringNetEv");
    ((void*&) ContentIdentity::EMPTY) = minecraft_dlsym(handle, "_ZN15ContentIdentity5EMPTYE");
    if (ContentIdentity::EMPTY == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15ContentIdentity5EMPTYE");
    ((void*&) _Crypto_Random_generateUUID) = minecraft_dlsym(handle, "_ZN6Crypto6Random12generateUUIDEv");
    if (_Crypto_Random_generateUUID == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Crypto6Random12generateUUIDEv");
    ((void*&) _ExternalFileLevelStorageSource_ExternalFileLevelStorageSource) = minecraft_dlsym(handle, "_ZN30ExternalFileLevelStorageSourceC2EPN4Core15FilePathManagerESt10shared_ptrI22SaveTransactionManagerE");
    if (_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN30ExternalFileLevelStorageSourceC2EPN4Core15FilePathManagerESt10shared_ptrI22SaveTransactionManagerE");
    ((void*&) _ExternalFileLevelStorageSource_createLevelStorage) = minecraft_dlsym(handle, "_ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKSsRK15ContentIdentityRK19IContentKeyProvider");
    if (_ExternalFileLevelStorageSource_createLevelStorage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKSsRK15ContentIdentityRK19IContentKeyProvider");
    ((void*&) _Core_FilePathManager_FilePathManager) = minecraft_dlsym(handle, "_ZN4Core15FilePathManagerC2ERKNS_4PathEb");
    if (_Core_FilePathManager_FilePathManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Core15FilePathManagerC2ERKNS_4PathEb");
    ((void*&) _Core_FilePathManager_getRootPath) = minecraft_dlsym(handle, "_ZNK4Core15FilePathManager11getRootPathEv");
    if (_Core_FilePathManager_getRootPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4Core15FilePathManager11getRootPathEv");
    ((void*&) _Core_FilePathManager_getUserDataPath) = minecraft_dlsym(handle, "_ZNK4Core15FilePathManager15getUserDataPathEv");
    if (_Core_FilePathManager_getUserDataPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4Core15FilePathManager15getUserDataPathEv");
    ((void*&) _Core_FilePathManager_getWorldsPath) = minecraft_dlsym(handle, "_ZNK4Core15FilePathManager13getWorldsPathEv");
    if (_Core_FilePathManager_getWorldsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4Core15FilePathManager13getWorldsPathEv");
    ((void*&) _Core_FilePathManager_setPackagePath) = minecraft_dlsym(handle, "_ZN4Core15FilePathManager14setPackagePathERKNS_4PathE");
    if (_Core_FilePathManager_setPackagePath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Core15FilePathManager14setPackagePathERKNS_4PathE");
    ((void*&) _Core_FilePathManager_getPackagePath) = minecraft_dlsym(handle, "_ZNK4Core15FilePathManager14getPackagePathEv");
    if (_Core_FilePathManager_getPackagePath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4Core15FilePathManager14getPackagePathEv");
    ((void*&) _Core_FilePathManager_setSettingsPath) = minecraft_dlsym(handle, "_ZN4Core15FilePathManager15setSettingsPathERKNS_4PathE");
    if (_Core_FilePathManager_setSettingsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Core15FilePathManager15setSettingsPathERKNS_4PathE");
    ((void*&) _Core_FilePathManager_getSettingsPath) = minecraft_dlsym(handle, "_ZNK4Core15FilePathManager15getSettingsPathEv");
    if (_Core_FilePathManager_getSettingsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4Core15FilePathManager15getSettingsPathEv");
    ((void*&) GameControllerManager::sGamePadManager) = minecraft_dlsym(handle, "_ZN21GameControllerManager15sGamePadManagerE");
    if (GameControllerManager::sGamePadManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager15sGamePadManagerE");
    ((void*&) _GameControllerManager_setGameControllerConnected) = minecraft_dlsym(handle, "_ZN21GameControllerManager26setGameControllerConnectedEib");
    if (_GameControllerManager_setGameControllerConnected == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager26setGameControllerConnectedEib");
    ((void*&) _GameControllerManager_feedButton) = minecraft_dlsym(handle, "_ZN21GameControllerManager10feedButtonEii25GameControllerButtonStateb");
    if (_GameControllerManager_feedButton == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager10feedButtonEii25GameControllerButtonStateb");
    ((void*&) _GameControllerManager_feedStick) = minecraft_dlsym(handle, "_ZN21GameControllerManager9feedStickEii24GameControllerStickStateff");
    if (_GameControllerManager_feedStick == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager9feedStickEii24GameControllerStickStateff");
    ((void*&) _GameControllerManager_feedTrigger) = minecraft_dlsym(handle, "_ZN21GameControllerManager11feedTriggerEiif");
    if (_GameControllerManager_feedTrigger == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager11feedTriggerEiif");
    ((void*&) _GameControllerManager_feedJoinGame) = minecraft_dlsym(handle, "_ZN21GameControllerManager12feedJoinGameEib");
    if (_GameControllerManager_feedJoinGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager12feedJoinGameEib");
    ((void*&) _ResourceLoadManager_ResourceLoadManager) = minecraft_dlsym(handle, "_ZN19ResourceLoadManagerC2Ev");
    if (_ResourceLoadManager_ResourceLoadManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourceLoadManagerC2Ev");
    ((void*&) _ResourceLoadManager_sync) = minecraft_dlsym(handle, "_ZN19ResourceLoadManager4syncE16ResourceLoadType");
    if (_ResourceLoadManager_sync == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourceLoadManager4syncE16ResourceLoadType");
    ((void*&) _I18n_get) = minecraft_dlsym(handle, "_ZN4I18n3getERKSsRKSt6vectorISsSaISsEE");
    if (_I18n_get == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n3getERKSsRKSt6vectorISsSaISsEE");
    ((void*&) _I18n_chooseLanguage) = minecraft_dlsym(handle, "_ZN4I18n14chooseLanguageERKSs");
    if (_I18n_chooseLanguage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n14chooseLanguageERKSs");
    ((void*&) _I18n_loadLanguages) = minecraft_dlsym(handle, "_ZN4I18n13loadLanguagesER19ResourcePackManagerR19ResourceLoadManagerRKSs");
    if (_I18n_loadLanguages == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n13loadLanguagesER19ResourcePackManagerR19ResourceLoadManagerRKSs");
    ((void*&) Keyboard::_states) = minecraft_dlsym(handle, "_ZN8Keyboard7_statesE");
    if (Keyboard::_states == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard7_statesE");
    ((void*&) Keyboard::_inputs) = minecraft_dlsym(handle, "_ZN8Keyboard7_inputsE");
    if (Keyboard::_inputs == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard7_inputsE");
    ((void*&) Keyboard::_gameControllerId) = minecraft_dlsym(handle, "_ZN8Keyboard17_gameControllerIdE");
    if (Keyboard::_gameControllerId == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard17_gameControllerIdE");
    ((void*&) Keyboard::_inputCaretLocation) = minecraft_dlsym(handle, "_ZN8Keyboard19_inputCaretLocationE");
    if (Keyboard::_inputCaretLocation == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard19_inputCaretLocationE");
    ((void*&) _Keyboard_feedText) = minecraft_dlsym(handle, "_ZN8Keyboard8feedTextERKSsbh");
    if (_Keyboard_feedText == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard8feedTextERKSsbh");
    ((void*&) _Level_createRandomSeed) = minecraft_dlsym(handle, "_ZN5Level16createRandomSeedEv");
    if (_Level_createRandomSeed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Level16createRandomSeedEv");
    ((void*&) _LevelSettings_LevelSettings) = minecraft_dlsym(handle, "_ZN13LevelSettingsC2Ev");
    if (_LevelSettings_LevelSettings == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettingsC2Ev");
    ((void*&) _LevelSettings_LevelSettings2) = minecraft_dlsym(handle, "_ZN13LevelSettingsC2ERKS_");
    if (_LevelSettings_LevelSettings2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettingsC2ERKS_");
    ((void*&) _LevelSettings_parseSeedString) = minecraft_dlsym(handle, "_ZN13LevelSettings15parseSeedStringERKSsj");
    if (_LevelSettings_parseSeedString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettings15parseSeedStringERKSsj");
    ((void*&) _Minecraft_getCommands) = minecraft_dlsym(handle, "_ZN9Minecraft11getCommandsEv");
    if (_Minecraft_getCommands == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Minecraft11getCommandsEv");
    ((void*&) _Minecraft_getLevel) = minecraft_dlsym(handle, "_ZNK9Minecraft8getLevelEv");
    if (_Minecraft_getLevel == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK9Minecraft8getLevelEv");
    ((void*&) _MinecraftCommands_setOutputSender) = minecraft_dlsym(handle, "_ZN17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE");
    if (_MinecraftCommands_setOutputSender == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE");
    ((void*&) _MinecraftCommands_requestCommandExecution) = minecraft_dlsym(handle, "_ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKSsib");
    if (_MinecraftCommands_requestCommandExecution == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKSsib");
    ((void*&) _MinecraftEventing_MinecraftEventing) = minecraft_dlsym(handle, "_ZN17MinecraftEventingC2ERKSs");
    if (_MinecraftEventing_MinecraftEventing == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftEventingC2ERKSs");
    ((void*&) _MinecraftEventing_init) = minecraft_dlsym(handle, "_ZN17MinecraftEventing4initEv");
    if (_MinecraftEventing_init == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftEventing4initEv");
    ((void*&) _MinecraftGame_MinecraftGame) = minecraft_dlsym(handle, "_ZN13MinecraftGameC2EiPPc");
    if (_MinecraftGame_MinecraftGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGameC2EiPPc");
    ((void*&) _MinecraftGame_destructor) = minecraft_dlsym(handle, "_ZN13MinecraftGameD2Ev");
    if (_MinecraftGame_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGameD2Ev");
    ((void*&) _MinecraftGame_isInGame) = minecraft_dlsym(handle, "_ZNK13MinecraftGame8isInGameEv");
    if (_MinecraftGame_isInGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK13MinecraftGame8isInGameEv");
    ((void*&) _MinecraftGame_requestLeaveGame) = minecraft_dlsym(handle, "_ZN13MinecraftGame16requestLeaveGameEbb");
    if (_MinecraftGame_requestLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame16requestLeaveGameEbb");
    ((void*&) _MinecraftGame_doPrimaryClientReadyWork) = minecraft_dlsym(handle, "_ZN13MinecraftGame24doPrimaryClientReadyWorkESt8functionIFvvEE");
    if (_MinecraftGame_doPrimaryClientReadyWork == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame24doPrimaryClientReadyWorkESt8functionIFvvEE");
    ((void*&) _MinecraftGame_getPrimaryUserOptions) = minecraft_dlsym(handle, "_ZN13MinecraftGame21getPrimaryUserOptionsEv");
    if (_MinecraftGame_getPrimaryUserOptions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame21getPrimaryUserOptionsEv");
    ((void*&) _MinecraftGame_getPrimaryClientInstance) = minecraft_dlsym(handle, "_ZN13MinecraftGame24getPrimaryClientInstanceEv");
    if (_MinecraftGame_getPrimaryClientInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame24getPrimaryClientInstanceEv");
    ((void*&) _MinecraftGame_startLeaveGame) = minecraft_dlsym(handle, "_ZN13MinecraftGame14startLeaveGameEv");
    if (_MinecraftGame_startLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame14startLeaveGameEv");
    ((void*&) _MinecraftGame_continueLeaveGame) = minecraft_dlsym(handle, "_ZN13MinecraftGame17continueLeaveGameEv");
    if (_MinecraftGame_continueLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame17continueLeaveGameEv");
    ((void*&) _MinecraftGame_setTextboxText) = minecraft_dlsym(handle, "_ZN13MinecraftGame14setTextboxTextERKSsi");
    if (_MinecraftGame_setTextboxText == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame14setTextboxTextERKSsi");
    ((void*&) _MinecraftScreenModel_navigateToXblConsoleSignInScreen) = minecraft_dlsym(handle, "_ZN20MinecraftScreenModel32navigateToXblConsoleSignInScreenERKSsS1_");
    if (_MinecraftScreenModel_navigateToXblConsoleSignInScreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20MinecraftScreenModel32navigateToXblConsoleSignInScreenERKSsS1_");
    ((void*&) _MinecraftScreenModel_navigateToXblConsoleSignInSucceededScreen) = minecraft_dlsym(handle, "_ZN20MinecraftScreenModel41navigateToXblConsoleSignInSucceededScreenERKN6Social12SignInResultESt8functionIFvS1_EEb");
    if (_MinecraftScreenModel_navigateToXblConsoleSignInSucceededScreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20MinecraftScreenModel41navigateToXblConsoleSignInSucceededScreenERKN6Social12SignInResultESt8functionIFvS1_EEb");
    ((void*&) _MinecraftScreenModel_leaveScreen) = minecraft_dlsym(handle, "_ZN20MinecraftScreenModel11leaveScreenEv");
    if (_MinecraftScreenModel_leaveScreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20MinecraftScreenModel11leaveScreenEv");
    ((void*&) _Mouse_feed) = minecraft_dlsym(handle, "_ZN5Mouse4feedEccssss");
    if (_Mouse_feed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Mouse4feedEccssss");
    ((void*&) _Social_MultiplayerXBL_MultiplayerXBL) = minecraft_dlsym(handle, "_ZN6Social14MultiplayerXBLC2Ev");
    if (_Social_MultiplayerXBL_MultiplayerXBL == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Social14MultiplayerXBLC2Ev");
    ((void*&) _Multitouch_feed) = minecraft_dlsym(handle, "_ZN10Multitouch4feedEccssi");
    if (_Multitouch_feed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10Multitouch4feedEccssi");
    ((void*&) NullTextToSpeechClient::myVtable) = minecraft_dlsym(handle, "_ZTV22NullTextToSpeechClient");
    if (NullTextToSpeechClient::myVtable == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV22NullTextToSpeechClient");
    ((void*&) _Options_getFullscreen) = minecraft_dlsym(handle, "_ZNK7Options13getFullscreenEv");
    if (_Options_getFullscreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK7Options13getFullscreenEv");
    ((void*&) _Options_setFullscreen) = minecraft_dlsym(handle, "_ZN7Options13setFullscreenEb");
    if (_Options_setFullscreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN7Options13setFullscreenEb");
    ((void*&) _PermissionsFile_PermissionsFile) = minecraft_dlsym(handle, "_ZN15PermissionsFileC2ERKSs");
    if (_PermissionsFile_PermissionsFile == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15PermissionsFileC2ERKSs");
    ((void*&) _ResourceLoaders_registerLoader) = minecraft_dlsym(handle, "_ZN15ResourceLoaders14registerLoaderE18ResourceFileSystemSt10unique_ptrI14ResourceLoaderSt14default_deleteIS2_EE");
    if (_ResourceLoaders_registerLoader == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15ResourceLoaders14registerLoaderE18ResourceFileSystemSt10unique_ptrI14ResourceLoaderSt14default_deleteIS2_EE");
    ((void*&) _SkinPackKeyProvider_SkinPackKeyProvider) = minecraft_dlsym(handle, "_ZN19SkinPackKeyProviderC2Ev");
    if (_SkinPackKeyProvider_SkinPackKeyProvider == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19SkinPackKeyProviderC2Ev");
    ((void*&) _PackManifestFactory_PackManifestFactory) = minecraft_dlsym(handle, "_ZN19PackManifestFactoryC2ER14IPackTelemetry");
    if (_PackManifestFactory_PackManifestFactory == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19PackManifestFactoryC2ER14IPackTelemetry");
    ((void*&) _PackSourceFactory_PackSourceFactory) = minecraft_dlsym(handle, "_ZN17PackSourceFactoryC2Ev");
    if (_PackSourceFactory_PackSourceFactory == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17PackSourceFactoryC2Ev");
    ((void*&) _ResourcePackRepository_ResourcePackRepository) = minecraft_dlsym(handle, "_ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderPN4Core15FilePathManagerER17PackSourceFactoryb");
    if (_ResourcePackRepository_ResourcePackRepository == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderPN4Core15FilePathManagerER17PackSourceFactoryb");
    ((void*&) _ResourcePackRepository_addWorldResourcePacks) = minecraft_dlsym(handle, "_ZN22ResourcePackRepository21addWorldResourcePacksERKN4Core4PathE");
    if (_ResourcePackRepository_addWorldResourcePacks == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepository21addWorldResourcePacksERKN4Core4PathE");
    ((void*&) _ResourcePackRepository_refreshPacks) = minecraft_dlsym(handle, "_ZN22ResourcePackRepository12refreshPacksEv");
    if (_ResourcePackRepository_refreshPacks == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepository12refreshPacksEv");
    ((void*&) _ContentTierManager_ContentTierManager) = minecraft_dlsym(handle, "_ZN18ContentTierManagerC2Ev");
    if (_ContentTierManager_ContentTierManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN18ContentTierManagerC2Ev");
    ((void*&) _ResourcePackManager_ResourcePackManager) = minecraft_dlsym(handle, "_ZN19ResourcePackManagerC2ESt8functionIFN4Core10PathBufferISsEEvEERK18ContentTierManagerb");
    if (_ResourcePackManager_ResourcePackManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManagerC2ESt8functionIFN4Core10PathBufferISsEEvEERK18ContentTierManagerb");
    ((void*&) _ResourcePackManager_setStack) = minecraft_dlsym(handle, "_ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb");
    if (_ResourcePackManager_setStack == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb");
    ((void*&) _ResourcePackManager_onLanguageChanged) = minecraft_dlsym(handle, "_ZN19ResourcePackManager17onLanguageChangedEv");
    if (_ResourcePackManager_onLanguageChanged == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManager17onLanguageChangedEv");
    ((void*&) _PackInstance_PackInstance) = minecraft_dlsym(handle, "_ZN12PackInstanceC2EP12ResourcePackibP12PackSettings");
    if (_PackInstance_PackInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN12PackInstanceC2EP12ResourcePackibP12PackSettings");
    ((void*&) ResourcePackStack::vtable_sym) = minecraft_dlsym(handle, "_ZTV17ResourcePackStack");
    if (ResourcePackStack::vtable_sym == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV17ResourcePackStack");
    ((void*&) _ResourcePackStack_add) = minecraft_dlsym(handle, "_ZN17ResourcePackStack3addE12PackInstanceRK22ResourcePackRepositoryb");
    if (_ResourcePackStack_add == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17ResourcePackStack3addE12PackInstanceRK22ResourcePackRepositoryb");
    ((void*&) _SaveTransactionManager_SaveTransactionManager) = minecraft_dlsym(handle, "_ZN22SaveTransactionManagerC2ESt8functionIFvbEE");
    if (_SaveTransactionManager_SaveTransactionManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22SaveTransactionManagerC2ESt8functionIFvbEE");
    ((void*&) _Scheduler_processCoroutines) = minecraft_dlsym(handle, "_ZN9Scheduler17processCoroutinesENSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEE");
    if (_Scheduler_processCoroutines == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Scheduler17processCoroutinesENSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEE");
    ((void*&) _MinecraftScheduler_client) = minecraft_dlsym(handle, "_ZN18MinecraftScheduler6clientEv");
    if (_MinecraftScheduler_client == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN18MinecraftScheduler6clientEv");
    ((void*&) _ServerCommandOrigin_ServerCommandOrigin) = minecraft_dlsym(handle, "_ZN19ServerCommandOriginC2ERKSsR11ServerLevel22CommandPermissionLevel");
    if (_ServerCommandOrigin_ServerCommandOrigin == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ServerCommandOriginC2ERKSsR11ServerLevel22CommandPermissionLevel");
    ((void*&) _EducationOptions_EducationOptions) = minecraft_dlsym(handle, "_ZN16EducationOptionsC2EP19ResourcePackManager");
    if (_EducationOptions_EducationOptions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN16EducationOptionsC2EP19ResourcePackManager");
    ((void*&) _ServerInstance_ServerInstance) = minecraft_dlsym(handle, "_ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator");
    if (_ServerInstance_ServerInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator");
    ((void*&) _ServerInstance_initializeServer) = minecraft_dlsym(handle, "_ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFilePN4Core15FilePathManagerENSt6chrono8durationIxSt5ratioILx1ELx1EEEESsSsSs13LevelSettingsib20ConnectionDefinitionbRKSt6vectorISsSaISsEESsRKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteIS10_EER9SchedulerEERKSsP9LevelDataSsSsSZ_I16EducationOptionsS11_IS1C_EEPSW_SY_IFvvEES1H_P13ServerMetricsP13DebugEndPointb");
    if (_ServerInstance_initializeServer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFilePN4Core15FilePathManagerENSt6chrono8durationIxSt5ratioILx1ELx1EEEESsSsSs13LevelSettingsib20ConnectionDefinitionbRKSt6vectorISsSaISsEESsRKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteIS10_EER9SchedulerEERKSsP9LevelDataSsSsSZ_I16EducationOptionsS11_IS1C_EEPSW_SY_IFvvEES1H_P13ServerMetricsP13DebugEndPointb");
    ((void*&) _ServerInstance_destructor) = minecraft_dlsym(handle, "_ZN14ServerInstanceD2Ev");
    if (_ServerInstance_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstanceD2Ev");
    ((void*&) _ServerInstance_startServerThread) = minecraft_dlsym(handle, "_ZN14ServerInstance17startServerThreadEv");
    if (_ServerInstance_startServerThread == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance17startServerThreadEv");
    ((void*&) _ServerInstance_leaveGameSync) = minecraft_dlsym(handle, "_ZN14ServerInstance13leaveGameSyncEv");
    if (_ServerInstance_leaveGameSync == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance13leaveGameSyncEv");
    ((void*&) _ServerInstance_queueForServerThread) = minecraft_dlsym(handle, "_ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE");
    if (_ServerInstance_queueForServerThread == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE");
    ((void*&) SharedConstants::MajorVersion) = minecraft_dlsym(handle, "_ZN15SharedConstants12MajorVersionE");
    if (SharedConstants::MajorVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12MajorVersionE");
    ((void*&) SharedConstants::MinorVersion) = minecraft_dlsym(handle, "_ZN15SharedConstants12MinorVersionE");
    if (SharedConstants::MinorVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12MinorVersionE");
    ((void*&) SharedConstants::PatchVersion) = minecraft_dlsym(handle, "_ZN15SharedConstants12PatchVersionE");
    if (SharedConstants::PatchVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12PatchVersionE");
    ((void*&) SharedConstants::RevisionVersion) = minecraft_dlsym(handle, "_ZN15SharedConstants15RevisionVersionE");
    if (SharedConstants::RevisionVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants15RevisionVersionE");
    ((void*&) _Social_User_getLiveUser) = minecraft_dlsym(handle, "_ZNK6Social4User11getLiveUserEv");
    if (_Social_User_getLiveUser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK6Social4User11getLiveUserEv");
    ((void*&) _Social_XboxLiveUser__handleUISignInNoError) = minecraft_dlsym(handle, "_ZN6Social12XboxLiveUser22_handleUISignInNoErrorERN4xbox8services6system14sign_in_resultESt8functionIFvNS_12SignInResultEbEE");
    if (_Social_XboxLiveUser__handleUISignInNoError == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Social12XboxLiveUser22_handleUISignInNoErrorERN4xbox8services6system14sign_in_resultESt8functionIFvNS_12SignInResultEbEE");
    void** vt_GameStore = (void**) minecraft_dlsym(handle, "_ZTV9GameStore") + 2;
    if (vti_StoreListener_onStoreInitialized == -1) vti_StoreListener_onStoreInitialized = resolve_vtable_func(vt_GameStore, minecraft_dlsym(handle, "_ZN9GameStore18onStoreInitializedEb"));
    if (vti_StoreListener_onStoreInitialized == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN9GameStore18onStoreInitializedEb");
    if (vti_StoreListener_onQueryProductsSuccess == -1) vti_StoreListener_onQueryProductsSuccess = resolve_vtable_func(vt_GameStore, minecraft_dlsym(handle, "_ZN9GameStore22onQueryProductsSuccessERKSt6vectorI11ProductInfoSaIS1_EE"));
    if (vti_StoreListener_onQueryProductsSuccess == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN9GameStore22onQueryProductsSuccessERKSt6vectorI11ProductInfoSaIS1_EE");
    ((void*&) mce::UUID::EMPTY) = minecraft_dlsym(handle, "_ZN3mce4UUID5EMPTYE");
    if (mce::UUID::EMPTY == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce4UUID5EMPTYE");
    ((void*&) _mce_UUID_fromString) = minecraft_dlsym(handle, "_ZN3mce4UUID10fromStringERKSs");
    if (_mce_UUID_fromString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce4UUID10fromStringERKSs");
    ((void*&) _mce_UUID_asString) = minecraft_dlsym(handle, "_ZNK3mce4UUID8asStringEv");
    if (_mce_UUID_asString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK3mce4UUID8asStringEv");
    ((void*&) _Social_UserManager_CreateUserManager) = minecraft_dlsym(handle, "_ZN6Social11UserManager17CreateUserManagerEv");
    if (_Social_UserManager_CreateUserManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Social11UserManager17CreateUserManagerEv");
    ((void*&) _v8_V8_Initialize) = minecraft_dlsym(handle, "_ZN2v82V810InitializeEv");
    if (_v8_V8_Initialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v82V810InitializeEv");
    ((void*&) _v8_V8_InitializePlatform) = minecraft_dlsym(handle, "_ZN2v82V818InitializePlatformEPNS_8PlatformE");
    if (_v8_V8_InitializePlatform == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v82V818InitializePlatformEPNS_8PlatformE");
    ((void*&) _xbox_services_xbox_services_error_code_category) = minecraft_dlsym(handle, "_ZN4xbox8services33xbox_services_error_code_categoryEv");
    if (_xbox_services_xbox_services_error_code_category == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services33xbox_services_error_code_categoryEv");
    ((void*&) _web_json_value_value) = minecraft_dlsym(handle, "_ZN3web4json5valueC2Ev");
    if (_web_json_value_value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueC2Ev");
    ((void*&) _web_json_value_value2) = minecraft_dlsym(handle, "_ZN3web4json5valueC2ESs");
    if (_web_json_value_value2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueC2ESs");
    ((void*&) _web_json_value_value3) = minecraft_dlsym(handle, "_ZN3web4json5valueC2ERKS1_");
    if (_web_json_value_value3 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueC2ERKS1_");
    ((void*&) _web_json_value_value4) = minecraft_dlsym(handle, "_ZN3web4json5valueC2EOS1_");
    if (_web_json_value_value4 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueC2EOS1_");
    ((void*&) _web_json_value_operator) = minecraft_dlsym(handle, "_ZN3web4json5valueixERKSs");
    if (_web_json_value_operator == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueixERKSs");
    ((void*&) _web_json_value_operator2) = minecraft_dlsym(handle, "_ZN3web4json5valueaSEOS1_");
    if (_web_json_value_operator2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5valueaSEOS1_");
    ((void*&) _web_json_value_to_string) = minecraft_dlsym(handle, "_ZNK3web4json5value9to_stringEv");
    if (_web_json_value_to_string == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK3web4json5value9to_stringEv");
    ((void*&) _web_json_value_erase) = minecraft_dlsym(handle, "_ZN3web4json5value5eraseERKSs");
    if (_web_json_value_erase == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3web4json5value5eraseERKSs");
    ((void*&) _xbox_services_java_interop_get_java_interop_singleton) = minecraft_dlsym(handle, "_ZN4xbox8services12java_interop26get_java_interop_singletonEv");
    if (_xbox_services_java_interop_get_java_interop_singleton == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services12java_interop26get_java_interop_singletonEv");
    ((void*&) _xbox_services_xbox_live_app_config_title_id) = minecraft_dlsym(handle, "_ZN4xbox8services20xbox_live_app_config8title_idEv");
    if (_xbox_services_xbox_live_app_config_title_id == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services20xbox_live_app_config8title_idEv");
    ((void*&) _xbox_services_xbox_live_app_config_get_app_config_singleton) = minecraft_dlsym(handle, "_ZN4xbox8services20xbox_live_app_config24get_app_config_singletonEv");
    if (_xbox_services_xbox_live_app_config_get_app_config_singleton == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services20xbox_live_app_config24get_app_config_singletonEv");
    void** vt_xbox_services_local_config = (void**) minecraft_dlsym(handle, "_ZTVN4xbox8services12local_configE") + 2;
    if (vti_xbox_services_local_config_get_value_from_local_storage == -1) vti_xbox_services_local_config_get_value_from_local_storage = resolve_vtable_func(vt_xbox_services_local_config, minecraft_dlsym(handle, "_ZN4xbox8services12local_config28get_value_from_local_storageERKSsS3_S3_"));
    if (vti_xbox_services_local_config_get_value_from_local_storage == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN4xbox8services12local_config28get_value_from_local_storageERKSsS3_S3_");
    if (vti_xbox_services_local_config_write_value_to_local_storage == -1) vti_xbox_services_local_config_write_value_to_local_storage = resolve_vtable_func(vt_xbox_services_local_config, minecraft_dlsym(handle, "_ZN4xbox8services12local_config28write_value_to_local_storageERKSsS3_S3_S3_"));
    if (vti_xbox_services_local_config_write_value_to_local_storage == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN4xbox8services12local_config28write_value_to_local_storageERKSsS3_S3_S3_");
    ((void*&) _xbox_services_local_config_get_local_config_singleton) = minecraft_dlsym(handle, "_ZN4xbox8services12local_config26get_local_config_singletonEv");
    if (_xbox_services_local_config_get_local_config_singleton == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services12local_config26get_local_config_singletonEv");
    ((void*&) _xbox_services_xsapi_singleton_destructor) = minecraft_dlsym(handle, "_ZN4xbox8services15xsapi_singletonD2Ev");
    if (_xbox_services_xsapi_singleton_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services15xsapi_singletonD2Ev");
    ((void*&) _xbox_services_system_user_impl_user_signed_out) = minecraft_dlsym(handle, "_ZN4xbox8services6system9user_impl15user_signed_outEv");
    if (_xbox_services_system_user_impl_user_signed_out == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system9user_impl15user_signed_outEv");
    ((void*&) _xbox_services_system_user_impl_android_get_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_impl_android12get_instanceEv");
    if (_xbox_services_system_user_impl_android_get_instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system17user_impl_android12get_instanceEv");
    ((void*&) _pplx_task_completion_event_java_rps_ticket_set) = minecraft_dlsym(handle, "_ZNK4pplx21task_completion_eventIN4xbox8services6system15java_rps_ticketEE3setES4_");
    if (_pplx_task_completion_event_java_rps_ticket_set == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4pplx21task_completion_eventIN4xbox8services6system15java_rps_ticketEE3setES4_");
    ((void*&) _pplx_task_completion_event_auth_flow_result_set) = minecraft_dlsym(handle, "_ZNK4pplx21task_completion_eventIN4xbox8services6system16auth_flow_resultEE3setES4_");
    if (_pplx_task_completion_event_auth_flow_result_set == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4pplx21task_completion_eventIN4xbox8services6system16auth_flow_resultEE3setES4_");
    ((void*&) _pplx_task_completion_event_xbox_live_result_void_set) = minecraft_dlsym(handle, "_ZNK4pplx21task_completion_eventIN4xbox8services16xbox_live_resultIvEEE3setES4_");
    if (_pplx_task_completion_event_xbox_live_result_void_set == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4pplx21task_completion_eventIN4xbox8services16xbox_live_resultIvEEE3setES4_");
    ((void*&) _pplx_task_xbox_live_result_void_get) = minecraft_dlsym(handle, "_ZNK4pplx4taskIN4xbox8services16xbox_live_resultIvEEE3getEv");
    if (_pplx_task_xbox_live_result_void_get == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4pplx4taskIN4xbox8services16xbox_live_resultIvEEE3getEv");
    ((void*&) _pplx_task_xbox_live_result_token_and_signature_result_get) = minecraft_dlsym(handle, "_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv");
    if (_pplx_task_xbox_live_result_token_and_signature_result_get == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv");
    ((void*&) _xbox_services_system_auth_config_set_xtoken_composition) = minecraft_dlsym(handle, "_ZN4xbox8services6system11auth_config22set_xtoken_compositionESt6vectorINS1_19token_identity_typeESaIS4_EE");
    if (_xbox_services_system_auth_config_set_xtoken_composition == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system11auth_config22set_xtoken_compositionESt6vectorINS1_19token_identity_typeESaIS4_EE");
    ((void*&) _xbox_services_system_auth_config_xbox_live_endpoint) = minecraft_dlsym(handle, "_ZNK4xbox8services6system11auth_config18xbox_live_endpointEv");
    if (_xbox_services_system_auth_config_xbox_live_endpoint == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK4xbox8services6system11auth_config18xbox_live_endpointEv");
    ((void*&) _xbox_services_system_auth_manager_get_auth_manager_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv");
    if (_xbox_services_system_auth_manager_get_auth_manager_instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv");
    ((void*&) _xbox_services_system_auth_manager_set_rps_ticket) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs");
    if (_xbox_services_system_auth_manager_set_rps_ticket == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs");
    ((void*&) _xbox_services_system_auth_manager_initialize_default_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager23initialize_default_nsalEN4pplx18cancellation_tokenE");
    if (_xbox_services_system_auth_manager_initialize_default_nsal == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager23initialize_default_nsalEN4pplx18cancellation_tokenE");
    ((void*&) _xbox_services_system_auth_manager_initialize_title_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSsN4pplx18cancellation_tokenE");
    if (_xbox_services_system_auth_manager_initialize_title_nsal == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSsN4pplx18cancellation_tokenE");
    ((void*&) _xbox_services_system_auth_manager_internal_get_token_and_signature) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_N4pplx18cancellation_tokenE");
    if (_xbox_services_system_auth_manager_internal_get_token_and_signature == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_N4pplx18cancellation_tokenE");
    ((void*&) _xbox_services_system_auth_manager_get_auth_config) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager15get_auth_configEv");
    if (_xbox_services_system_auth_manager_get_auth_config == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system12auth_manager15get_auth_configEv");
    ((void*&) xbox::services::system::user_auth_android::s_rpsTicketCompletionEvent) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_auth_android26s_rpsTicketCompletionEventE");
    if (xbox::services::system::user_auth_android::s_rpsTicketCompletionEvent == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system17user_auth_android26s_rpsTicketCompletionEventE");
    ((void*&) xbox::services::system::user_auth_android::s_signOutCompleteEvent) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_auth_android22s_signOutCompleteEventE");
    if (xbox::services::system::user_auth_android::s_signOutCompleteEvent == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system17user_auth_android22s_signOutCompleteEventE");
    ((void*&) _xbox_services_system_user_auth_android_get_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_auth_android12get_instanceEv");
    if (_xbox_services_system_user_auth_android_get_instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system17user_auth_android12get_instanceEv");
    ((void*&) _xbox_services_system_user_auth_android_complete_sign_in_with_ui) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_auth_android24complete_sign_in_with_uiERKNS1_16auth_flow_resultE");
    if (_xbox_services_system_user_auth_android_complete_sign_in_with_ui == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system17user_auth_android24complete_sign_in_with_uiERKNS1_16auth_flow_resultE");
    ((void*&) _xbox_services_system_xbox_live_services_settings_get_singleton_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system27xbox_live_services_settings22get_singleton_instanceEb");
    if (_xbox_services_system_xbox_live_services_settings_get_singleton_instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system27xbox_live_services_settings22get_singleton_instanceEb");
    ((void*&) _xbox_services_system_xbox_live_services_settings_set_diagnostics_trace_level) = minecraft_dlsym(handle, "_ZN4xbox8services6system27xbox_live_services_settings27set_diagnostics_trace_levelENS0_37xbox_services_diagnostics_trace_levelE");
    if (_xbox_services_system_xbox_live_services_settings_set_diagnostics_trace_level == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4xbox8services6system27xbox_live_services_settings27set_diagnostics_trace_levelENS0_37xbox_services_diagnostics_trace_levelE");
    ((void*&) _gl_getOpenGLVendor) = minecraft_dlsym(handle, "_ZN2gl15getOpenGLVendorEv");
    if (_gl_getOpenGLVendor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl15getOpenGLVendorEv");
    ((void*&) _gl_getOpenGLRenderer) = minecraft_dlsym(handle, "_ZN2gl17getOpenGLRendererEv");
    if (_gl_getOpenGLRenderer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl17getOpenGLRendererEv");
    ((void*&) _gl_getOpenGLVersion) = minecraft_dlsym(handle, "_ZN2gl16getOpenGLVersionEv");
    if (_gl_getOpenGLVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl16getOpenGLVersionEv");
    ((void*&) _gl_getOpenGLExtensions) = minecraft_dlsym(handle, "_ZN2gl19getOpenGLExtensionsEv");
    if (_gl_getOpenGLExtensions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl19getOpenGLExtensionsEv");
    ((void*&) _mce_Platform_OGL_InitBindings) = minecraft_dlsym(handle, "_ZN3mce8Platform3OGL12InitBindingsEv");
    if (_mce_Platform_OGL_InitBindings == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce8Platform3OGL12InitBindingsEv");
    if (vti_Legacy_Pre_1_8_App_quit == -1) vti_Legacy_Pre_1_8_App_quit = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App4quitEv"));
    if (vti_Legacy_Pre_0_15_App_setSize == -1) vti_Legacy_Pre_0_15_App_setSize = resolve_vtable_func(vt_App, minecraft_dlsym(handle, "_ZN3App7setSizeEiif"));
    ((void*&) _Legacy_Pre_1_2_13_AppPlatform_showKeyboard) = minecraft_dlsym(handle, "_ZN11AppPlatform12showKeyboardERKSsibbbiRK4Vec2");
    ((void*&) _Legacy_Pre_1_2_10_AppPlatform_showKeyboard) = minecraft_dlsym(handle, "_ZN11AppPlatform12showKeyboardERKSsibbbRK4Vec2");
    ((void*&) Legacy::Pre_1_2::Keyboard::_inputs) = minecraft_dlsym(handle, "_ZN8Keyboard7_inputsE");
    ((void*&) _Legacy_Pre_0_17_Keyboard_feedText) = minecraft_dlsym(handle, "_ZN8Keyboard8feedTextERKSsb");
    ((void*&) _Legacy_Pre_1_13_MinecraftGame_destructor) = minecraft_dlsym(handle, "_ZN13MinecraftGameD2Ev");
    ((void*&) _Legacy_Pre_1_2_10_MinecraftGame_setTextboxText) = minecraft_dlsym(handle, "_ZN13MinecraftGame14setTextboxTextERKSs");
    ((void*&) _Legacy_Pre_1_2_MinecraftGame_getOptions) = minecraft_dlsym(handle, "_ZN13MinecraftGame10getOptionsEv");
    ((void*&) _Legacy_Pre_1_1_MinecraftClient_MinecraftClient) = minecraft_dlsym(handle, "_ZN15MinecraftClientC2EiPPc");
    ((void*&) _Legacy_Pre_1_1_MinecraftClient_destructor) = minecraft_dlsym(handle, "_ZN15MinecraftClientD2Ev");
    ((void*&) _Legacy_Pre_1_1_MinecraftClient_setTextboxText) = minecraft_dlsym(handle, "_ZN15MinecraftClient14setTextboxTextERKSs");
    ((void*&) _Legacy_Pre_1_1_MinecraftClient_getOptions) = minecraft_dlsym(handle, "_ZN15MinecraftClient10getOptionsEv");
    ((void*&) Legacy::Pre_0_17::SharedConstants::BetaVersion) = minecraft_dlsym(handle, "_ZN15SharedConstants11BetaVersionE");
    if (vti_Legacy_Pre_1_2_StoreListener_onQueryProductsSuccess == -1) vti_Legacy_Pre_1_2_StoreListener_onQueryProductsSuccess = resolve_vtable_func(vt_GameStore, minecraft_dlsym(handle, "_ZN9GameStore22onQueryProductsSuccessERKSt6vectorI7ProductSaIS1_EE"));
    if (vti_Legacy_Pre_0_17_StoreListener_onQueryProductsSuccess == -1) vti_Legacy_Pre_0_17_StoreListener_onQueryProductsSuccess = resolve_vtable_func(vt_GameStore, minecraft_dlsym(handle, "_ZN9GameStore22onQueryProductsSuccessERKSt6vectorI7ProductSaIS1_EE"));
    ((void*&) _Legacy_Pre_1_0_4_mce_UUID_toString) = minecraft_dlsym(handle, "_ZNK3mce4UUID8toStringEv");
    if (vti_Legacy_Pre_1_8_xbox_services_local_config_get_value_from_local_storage == -1) vti_Legacy_Pre_1_8_xbox_services_local_config_get_value_from_local_storage = resolve_vtable_func(vt_xbox_services_local_config, minecraft_dlsym(handle, "_ZN4xbox8services12local_config28get_value_from_local_storageERKSs"));
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_manager_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv");
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_set_rps_ticket) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs");
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_default_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager23initialize_default_nsalEv");
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_initialize_title_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSs");
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_internal_get_token_and_signature) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_");
    ((void*&) _Legacy_Pre_1_4_xbox_services_system_auth_manager_get_auth_config) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager15get_auth_configEv");
    ((void*&) _Legacy_Pre_1_2_3_pplx_task_completion_event_auth_flow_result_set) = minecraft_dlsym(handle, "_ZNK4pplx21task_completion_eventIN4xbox8services6system16auth_flow_resultEE3setES4_");
    ((void*&) _Legacy_Pre_1_2_3_pplx_task_xbox_live_result_token_and_signature_result_get) = minecraft_dlsym(handle, "_ZNK4pplx4taskIN4xbox8services16xbox_live_resultINS2_6system26token_and_signature_resultEEEE3getEv");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_manager_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager25get_auth_manager_instanceEv");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_set_rps_ticket) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager14set_rps_ticketERKSs");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_default_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager23initialize_default_nsalEv");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_initialize_title_nsal) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager21initialize_title_nsalERKSs");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_internal_get_token_and_signature) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager32internal_get_token_and_signatureESsRKSsS4_SsRKSt6vectorIhSaIhEEbbS4_");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_auth_manager_get_auth_config) = minecraft_dlsym(handle, "_ZN4xbox8services6system12auth_manager15get_auth_configEv");
    ((void*&) _Legacy_Pre_1_2_3_xbox_services_system_user_auth_android_get_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_auth_android12get_instanceEv");
    void** vt_xbox_services_local_config_impl = (void**) minecraft_dlsym(handle, "_ZTVN4xbox8services17local_config_implE") + 2;
    if (vti_Legacy_Pre_1_2_xbox_services_local_config_impl_get_value_from_local_storage == -1) vti_Legacy_Pre_1_2_xbox_services_local_config_impl_get_value_from_local_storage = resolve_vtable_func(vt_xbox_services_local_config_impl, minecraft_dlsym(handle, "_ZN4xbox8services17local_config_impl28get_value_from_local_storageERKSs"));
    if (vti_Legacy_Pre_1_2_xbox_services_local_config_impl_write_value_to_local_storage == -1) vti_Legacy_Pre_1_2_xbox_services_local_config_impl_write_value_to_local_storage = resolve_vtable_func(vt_xbox_services_local_config_impl, minecraft_dlsym(handle, "_ZN4xbox8services17local_config_impl28write_value_to_local_storageERKSsS3_"));
    ((void*&) _Legacy_Pre_1_2_xbox_services_local_config_impl_get_local_config_singleton) = minecraft_dlsym(handle, "_ZN4xbox8services17local_config_impl26get_local_config_singletonEv");
    ((void*&) Legacy::Pre_1_2::xbox::services::system::user_impl_android::s_rpsTicketCompletionEvent) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_impl_android26s_rpsTicketCompletionEventE");
    ((void*&) Legacy::Pre_1_2::xbox::services::system::user_impl_android::s_signOutCompleteEvent) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_impl_android22s_signOutCompleteEventE");
    ((void*&) _Legacy_Pre_1_2_xbox_services_system_user_impl_android_get_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_impl_android12get_instanceEv");
    ((void*&) _Legacy_Pre_0_15_2_xbox_services_system_user_impl_android_get_instance) = minecraft_dlsym(handle, "_ZN4xbox8services6system17user_impl_android12get_instanceEv");
}
