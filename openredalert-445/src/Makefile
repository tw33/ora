####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       =
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I. -Iaudio -Igame -Iinclude -Ivfs -Ivideo -Imisc -Iui -Ivfs/mix -Ivfs/filesystem -I. -I.
LINK          = g++
LFLAGS        = -Wl,--no-undefined
LIBS          = $(SUBLIBS)  -L/usr/lib -lSDL -lSDL_mixer -lpthread
AR            = ar cqs
RANLIB        = 
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = OpenRedAlert.cpp \
		audio/SoundEngine.cpp \
		audio/SoundError.cpp \
		audio/SoundFile.cpp \
		audio/SoundUtils.cpp \
		game/ActionEvent.cpp \
		game/ActionEventQueue.cpp \
		game/Ai.cpp \
		game/AiCommand.cpp \
		game/BarrelExplosionActionEvent.cpp \
		game/BAttackAnimEvent.cpp \
		game/BExplodeAnimEvent.cpp \
		game/BQTimer.cpp \
		game/BQueue.cpp \
		game/BRepairUnitAnimEvent.cpp \
		game/BTurnAnimEvent.cpp \
		game/BuildAnimEvent.cpp \
		game/BuildingAnimEvent.cpp \
		game/CncMap.cpp \
		game/Comp.cpp \
		game/DataLoader.cpp \
		game/Dispatcher.cpp \
		game/DoorAnimEvent.cpp \
		game/ExplosionAnim.cpp \
		game/FibHeapEntry.cpp \
		game/Game.cpp \
		game/GameError.cpp \
		game/GlobalClearTriggerAction.cpp \
		game/GlobalSetTriggerAction.cpp \
		game/InfantryGroup.cpp \
		game/KeyComp.cpp \
		game/L2Overlay.cpp \
		game/LoadMapError.cpp \
		game/LoopAnimEvent.cpp \
		game/MissionData.cpp \
		game/MissionMapsClass.cpp \
		game/MissionTheater.cpp \
		game/MoneyCounter.cpp \
		game/MoveAnimEvent.cpp \
		game/MultiPlayerMaps.cpp \
		game/NoActionTriggerAction.cpp \
		game/Path.cpp \
		game/Player.cpp \
		game/PlayerPool.cpp \
		game/ProcAnimEvent.cpp \
		game/Projectile.cpp \
		game/ProjectileAnim.cpp \
		game/ProjectileData.cpp \
		game/ProjectileDataList.cpp \
		game/RadarAnimEvent.cpp \
		game/RawTriggerAction.cpp \
		game/RedAlertDataLoader.cpp \
		game/RefineAnimEvent.cpp \
		game/RepairAnimEvent.cpp \
		game/SnowMissionTheater.cpp \
		game/structure.cpp \
		game/StructureType.cpp \
		game/talkback.cpp \
		game/TextTriggerAction.cpp \
		game/TriggerAction.cpp \
		game/triggers.cpp \
		game/TurnAnimEvent.cpp \
		game/UAttackAnimEvent.cpp \
		game/UHarvestEvent.cpp \
		game/UInfiltrateAnimEvent.cpp \
		game/unit.cpp \
		game/unitandstructurepool.cpp \
		game/UnitAnimEvent.cpp \
		game/UnitOrStructure.cpp \
		game/UnitOrStructureType.cpp \
		game/UnitType.cpp \
		game/URepairEvent.cpp \
		game/WalkAnimEvent.cpp \
		game/Warhead.cpp \
		game/WarheadData.cpp \
		game/WarheadDataList.cpp \
		game/Weapon.cpp \
		game/WeaponData.cpp \
		game/WeaponDataList.cpp \
		game/weaponspool.cpp \
		misc/args.cpp \
		misc/common.cpp \
		misc/Compression.cpp \
		misc/fibheap.cpp \
		misc/INIFile.cpp \
		misc/KeyNotFound.cpp \
		misc/StringTableFile.cpp \
		ui/Button.cpp \
		ui/Cursor.cpp \
		ui/CursorInfo.cpp \
		ui/CursorPool.cpp \
		ui/DropDownListBox.cpp \
		ui/Font.cpp \
		ui/FontCache.cpp \
		ui/Input.cpp \
		ui/ListboxClass.cpp \
		ui/logger.cpp \
		ui/Menu.cpp \
		ui/PauseMenu.cpp \
		ui/RA_Label.cpp \
		ui/RA_ProgressBar.cpp \
		ui/RaWindow.cpp \
		ui/selection.cpp \
		ui/sidebar.cpp \
		ui/SidebarButton.cpp \
		ui/SidebarError.cpp \
		ui/TCheckBox.cpp \
		ui/TTextBox.cpp \
		vfs/VFile.cpp \
		vfs/vfs.cpp \
		video/CPSImage.cpp \
		video/Dune2Image.cpp \
		video/GraphicsEngine.cpp \
		video/imagecache.cpp \
		video/ImageCacheEntry.cpp \
		video/ImageNotFound.cpp \
		video/imageproc.cpp \
		video/loadingscreen.cpp \
		video/message.cpp \
		video/MessagePool.cpp \
		video/PCXImage.cpp \
		video/Renderer.cpp \
		video/sdllayer.cpp \
		video/SHPBase.cpp \
		video/SHPImage.cpp \
		video/TemplateImage.cpp \
		video/VideoError.cpp \
		video/VQAMovie.cpp \
		video/WSAError.cpp \
		video/WSAMovie.cpp \
		vfs/filesystem/externalvfs.cpp \
		vfs/mix/blowfish.cpp \
		vfs/mix/mixvfs.cpp \
		vfs/mix/ws-key.cpp 
OBJECTS       = OpenRedAlert.o \
		SoundEngine.o \
		SoundError.o \
		SoundFile.o \
		SoundUtils.o \
		ActionEvent.o \
		ActionEventQueue.o \
		Ai.o \
		AiCommand.o \
		BarrelExplosionActionEvent.o \
		BAttackAnimEvent.o \
		BExplodeAnimEvent.o \
		BQTimer.o \
		BQueue.o \
		BRepairUnitAnimEvent.o \
		BTurnAnimEvent.o \
		BuildAnimEvent.o \
		BuildingAnimEvent.o \
		CncMap.o \
		Comp.o \
		DataLoader.o \
		Dispatcher.o \
		DoorAnimEvent.o \
		ExplosionAnim.o \
		FibHeapEntry.o \
		Game.o \
		GameError.o \
		GlobalClearTriggerAction.o \
		GlobalSetTriggerAction.o \
		InfantryGroup.o \
		KeyComp.o \
		L2Overlay.o \
		LoadMapError.o \
		LoopAnimEvent.o \
		MissionData.o \
		MissionMapsClass.o \
		MissionTheater.o \
		MoneyCounter.o \
		MoveAnimEvent.o \
		MultiPlayerMaps.o \
		NoActionTriggerAction.o \
		Path.o \
		Player.o \
		PlayerPool.o \
		ProcAnimEvent.o \
		Projectile.o \
		ProjectileAnim.o \
		ProjectileData.o \
		ProjectileDataList.o \
		RadarAnimEvent.o \
		RawTriggerAction.o \
		RedAlertDataLoader.o \
		RefineAnimEvent.o \
		RepairAnimEvent.o \
		SnowMissionTheater.o \
		structure.o \
		StructureType.o \
		talkback.o \
		TextTriggerAction.o \
		TriggerAction.o \
		triggers.o \
		TurnAnimEvent.o \
		UAttackAnimEvent.o \
		UHarvestEvent.o \
		UInfiltrateAnimEvent.o \
		unit.o \
		unitandstructurepool.o \
		UnitAnimEvent.o \
		UnitOrStructure.o \
		UnitOrStructureType.o \
		UnitType.o \
		URepairEvent.o \
		WalkAnimEvent.o \
		Warhead.o \
		WarheadData.o \
		WarheadDataList.o \
		Weapon.o \
		WeaponData.o \
		WeaponDataList.o \
		weaponspool.o \
		args.o \
		common.o \
		Compression.o \
		fibheap.o \
		INIFile.o \
		KeyNotFound.o \
		StringTableFile.o \
		Button.o \
		Cursor.o \
		CursorInfo.o \
		CursorPool.o \
		DropDownListBox.o \
		Font.o \
		FontCache.o \
		Input.o \
		ListboxClass.o \
		logger.o \
		Menu.o \
		PauseMenu.o \
		RA_Label.o \
		RA_ProgressBar.o \
		RaWindow.o \
		selection.o \
		sidebar.o \
		SidebarButton.o \
		SidebarError.o \
		TCheckBox.o \
		TTextBox.o \
		VFile.o \
		vfs.o \
		CPSImage.o \
		Dune2Image.o \
		GraphicsEngine.o \
		imagecache.o \
		ImageCacheEntry.o \
		ImageNotFound.o \
		imageproc.o \
		loadingscreen.o \
		message.o \
		MessagePool.o \
		PCXImage.o \
		Renderer.o \
		sdllayer.o \
		SHPBase.o \
		SHPImage.o \
		TemplateImage.o \
		VideoError.o \
		VQAMovie.o \
		WSAError.o \
		WSAMovie.o \
		externalvfs.o \
		blowfish.o \
		mixvfs.o \
		ws-key.o
DESTDIR       = ../
TARGET        = ../openredalert

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../Debug/ || $(MKDIR) ../Debug/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)


dist: 
	@$(CHK_DIR_EXISTS) .tmp/openredalert1.0.0 || $(MKDIR) .tmp/openredalert1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/openredalert1.0.0/ && $(COPY_FILE) --parents audio/SOUND_DECODE_STATE.h audio/SoundBuffer.h audio/SoundCache.h audio/SoundCommon.h audio/SoundEngine.h audio/SoundError.h audio/SoundFile.h audio/SoundUtils.h game/ActionEvent.h game/ActionEventQueue.h game/Ai.h game/AiCommand.h game/AiRules.h game/anim_nfo.h game/animinfo_t.h game/armour_t.h game/BarrelExplosionActionEvent.h game/BAttackAnimEvent.h game/BExplodeAnimEvent.h game/BQTimer.h game/BQueue.h game/BRepairUnitAnimEvent.h game/BTurnAnimEvent.h game/BuildAnimEvent.h game/BuildingAnimEvent.h game/CellTrigger.h game/CnCMap.h game/Comp.h game/ConStatus.h game/DataLoader.h game/Dispatcher.h game/DispatchLogState.h game/DoorAnimEvent.h game/ExplosionAnim.h game/FibHeapEntry.h game/Game.h game/GameError.h game/GameMode.h game/GlobalClearTriggerAction.h game/GlobalSetTriggerAction.h game/InfantryGroup.h game/KeyComp.h game/L2Overlay.h game/LoadMapError.h game/LOADSTATE.h game/LoopAnimEvent.h game/MiniMapClipping.h game/MissionData.h game/MissionMapsClass.h game/MissionTheater.h game/MoneyCounter.h game/MoveAnimEvent.h game/movement.h game/MultiPlayerMaps.h game/NoActionTriggerAction.h game/Path.h game/Player.h game/PlayerPool.h game/PowerInfo.h game/ProcAnimEvent.h game/Production.h game/Projectile.h game/ProjectileAnim.h game/ProjectileData.h game/ProjectileDataList.h game/pside.h game/Queue.h game/RA_Tigger.h game/RadarAnimEvent.h game/RawTriggerAction.h game/RedAlertDataLoader.h game/RefineAnimEvent.h game/RepairAnimEvent.h game/RQstate.h game/SnowMissionTheater.h game/Structure.h game/StructureType.h game/Talkback.h game/TalkbackType.h game/TextTriggerAction.h game/TileRef.h game/TriggerAction.h game/triggers.h game/TurnAnimEvent.h game/UAttackAnimEvent.h game/UHarvestEvent.h game/UInfiltrateAnimEvent.h game/Unit.h game/UnitAndStructureMat.h game/UnitAndStructurePool.h game/UnitAnimEvent.h game/UnitOrStructure.h game/UnitOrStructureType.h game/UnitType.h game/unittypes.h game/URepairEvent.h game/WalkAnimEvent.h game/Warhead.h game/WarheadData.h game/WarheadDataList.h game/Weapon.h game/WeaponData.h game/WeaponDataList.h game/weaponspool.h include/common.h include/config.h include/fcnc_endian.h include/fibheap.h include/imageproc.h include/Logger.h include/sdllayer.h misc/Compression.h misc/gametypes.h misc/IniEntry.h misc/INIFile.h misc/INIKey.h misc/INISection.h misc/KeyNotFound.h misc/StringTableFile.h ui/Button.h ui/createmode_t.h ui/Cursor.h ui/CursorInfo.h ui/CursorPool.h ui/DropDownListBox.h ui/Font.h ui/FontCache.h ui/FontOptions.h ui/Input.h ui/ListboxClass.h ui/ListBoxLine.h ui/Menu.h ui/PauseMenu.h ui/RA_Label.h ui/RA_ProgressBar.h ui/RaWindow.h ui/Selection.h ui/Sidebar.h ui/SidebarButton.h ui/SidebarError.h ui/SidebarGeometry.h ui/sidebarop.h ui/TCheckBox.h ui/TFontImage.h ui/TTextBox.h vfs/archive.h vfs/VFile.h vfs/vfs.h video/CPSHeader.h video/CPSImage.h video/drawmessage.h video/Dune2Header.h video/Dune2Image.h video/GraphicsEngine.h video/headerformats.h video/ImageCache.h video/ImageCacheEntry.h video/ImageNotFound.h video/LoadingScreen.h video/Message.h video/MessagePool.h video/Palettes.h video/PCXHeader.h video/PCXImage.h video/Renderer.h video/SHPBase.h video/SHPHeader.h video/SHPImage.h video/TemplateImage.h video/VideoError.h video/VQAHeader.h video/VQAMovie.h video/WSAError.h video/WSAHeader.h video/WSAMovie.h vfs/filesystem/externalvfs.h vfs/mix/blowfish.h vfs/mix/mixvfs.h vfs/mix/ws-key.h .tmp/openredalert1.0.0/ && $(COPY_FILE) --parents OpenRedAlert.cpp audio/SoundEngine.cpp audio/SoundError.cpp audio/SoundFile.cpp audio/SoundUtils.cpp game/ActionEvent.cpp game/ActionEventQueue.cpp game/Ai.cpp game/AiCommand.cpp game/BarrelExplosionActionEvent.cpp game/BAttackAnimEvent.cpp game/BExplodeAnimEvent.cpp game/BQTimer.cpp game/BQueue.cpp game/BRepairUnitAnimEvent.cpp game/BTurnAnimEvent.cpp game/BuildAnimEvent.cpp game/BuildingAnimEvent.cpp game/CncMap.cpp game/Comp.cpp game/DataLoader.cpp game/Dispatcher.cpp game/DoorAnimEvent.cpp game/ExplosionAnim.cpp game/FibHeapEntry.cpp game/Game.cpp game/GameError.cpp game/GlobalClearTriggerAction.cpp game/GlobalSetTriggerAction.cpp game/InfantryGroup.cpp game/KeyComp.cpp game/L2Overlay.cpp game/LoadMapError.cpp game/LoopAnimEvent.cpp game/MissionData.cpp game/MissionMapsClass.cpp game/MissionTheater.cpp game/MoneyCounter.cpp game/MoveAnimEvent.cpp game/MultiPlayerMaps.cpp game/NoActionTriggerAction.cpp game/Path.cpp game/Player.cpp game/PlayerPool.cpp game/ProcAnimEvent.cpp game/Projectile.cpp game/ProjectileAnim.cpp game/ProjectileData.cpp game/ProjectileDataList.cpp game/RadarAnimEvent.cpp game/RawTriggerAction.cpp game/RedAlertDataLoader.cpp game/RefineAnimEvent.cpp game/RepairAnimEvent.cpp game/SnowMissionTheater.cpp game/structure.cpp game/StructureType.cpp game/talkback.cpp game/TextTriggerAction.cpp game/TriggerAction.cpp game/triggers.cpp game/TurnAnimEvent.cpp game/UAttackAnimEvent.cpp game/UHarvestEvent.cpp game/UInfiltrateAnimEvent.cpp game/unit.cpp game/unitandstructurepool.cpp game/UnitAnimEvent.cpp game/UnitOrStructure.cpp game/UnitOrStructureType.cpp game/UnitType.cpp game/URepairEvent.cpp game/WalkAnimEvent.cpp game/Warhead.cpp game/WarheadData.cpp game/WarheadDataList.cpp game/Weapon.cpp game/WeaponData.cpp game/WeaponDataList.cpp game/weaponspool.cpp misc/args.cpp misc/common.cpp misc/Compression.cpp misc/fibheap.cpp misc/INIFile.cpp misc/KeyNotFound.cpp misc/StringTableFile.cpp ui/Button.cpp ui/Cursor.cpp ui/CursorInfo.cpp ui/CursorPool.cpp ui/DropDownListBox.cpp ui/Font.cpp ui/FontCache.cpp ui/Input.cpp ui/ListboxClass.cpp ui/logger.cpp ui/Menu.cpp ui/PauseMenu.cpp ui/RA_Label.cpp ui/RA_ProgressBar.cpp ui/RaWindow.cpp ui/selection.cpp ui/sidebar.cpp ui/SidebarButton.cpp ui/SidebarError.cpp ui/TCheckBox.cpp ui/TTextBox.cpp vfs/VFile.cpp vfs/vfs.cpp video/CPSImage.cpp video/Dune2Image.cpp video/GraphicsEngine.cpp video/imagecache.cpp video/ImageCacheEntry.cpp video/ImageNotFound.cpp video/imageproc.cpp video/loadingscreen.cpp video/message.cpp video/MessagePool.cpp video/PCXImage.cpp video/Renderer.cpp video/sdllayer.cpp video/SHPBase.cpp video/SHPImage.cpp video/TemplateImage.cpp video/VideoError.cpp video/VQAMovie.cpp video/WSAError.cpp video/WSAMovie.cpp vfs/filesystem/externalvfs.cpp vfs/mix/blowfish.cpp vfs/mix/mixvfs.cpp vfs/mix/ws-key.cpp .tmp/openredalert1.0.0/ && (cd `dirname .tmp/openredalert1.0.0` && $(TAR) openredalert1.0.0.tar openredalert1.0.0 && $(COMPRESS) openredalert1.0.0.tar) && $(MOVE) `dirname .tmp/openredalert1.0.0`/openredalert1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/openredalert1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core
	-$(DEL_FILE) ../openredalert


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

OpenRedAlert.o: OpenRedAlert.cpp audio/SoundEngine.h \
		audio/SoundCache.h \
		game/Game.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		game/GameError.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		video/GraphicsEngine.h \
		video/VideoError.h \
		video/VQAMovie.h \
		video/VQAHeader.h \
		video/WSAMovie.h \
		video/WSAHeader.h \
		video/WSAError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OpenRedAlert.o OpenRedAlert.cpp

SoundEngine.o: audio/SoundEngine.cpp audio/SoundEngine.h \
		audio/SoundCache.h \
		audio/SoundCommon.h \
		audio/SoundBuffer.h \
		audio/SoundFile.h \
		audio/SOUND_DECODE_STATE.h \
		include/Logger.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundEngine.o audio/SoundEngine.cpp

SoundError.o: audio/SoundError.cpp audio/SoundError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundError.o audio/SoundError.cpp

SoundFile.o: audio/SoundFile.cpp audio/SoundFile.h \
		audio/SoundBuffer.h \
		audio/SOUND_DECODE_STATE.h \
		audio/SoundCommon.h \
		audio/SoundCache.h \
		audio/SoundUtils.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundFile.o audio/SoundFile.cpp

SoundUtils.o: audio/SoundUtils.cpp audio/SoundUtils.h \
		audio/SoundCommon.h \
		audio/SoundCache.h \
		audio/SoundBuffer.h \
		audio/SoundFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SoundUtils.o audio/SoundUtils.cpp

ActionEvent.o: game/ActionEvent.cpp game/ActionEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ActionEvent.o game/ActionEvent.cpp

ActionEventQueue.o: game/ActionEventQueue.cpp game/ActionEventQueue.h \
		game/Comp.h \
		include/Logger.h \
		game/ActionEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ActionEventQueue.o game/ActionEventQueue.cpp

Ai.o: game/Ai.cpp game/Ai.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/PlayerPool.h \
		game/UnitAndStructurePool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h \
		video/Renderer.h \
		game/GameMode.h \
		game/pside.h \
		game/Player.h \
		game/AiRules.h \
		include/Logger.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Ai.o game/Ai.cpp

AiCommand.o: game/AiCommand.cpp game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o AiCommand.o game/AiCommand.cpp

BarrelExplosionActionEvent.o: game/BarrelExplosionActionEvent.cpp game/BarrelExplosionActionEvent.h \
		game/ActionEvent.h \
		game/ExplosionAnim.h \
		video/ImageCache.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BarrelExplosionActionEvent.o game/BarrelExplosionActionEvent.cpp

BAttackAnimEvent.o: game/BAttackAnimEvent.cpp game/BAttackAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/BTurnAnimEvent.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		include/common.h \
		include/config.h \
		game/PlayerPool.h \
		game/ProjectileAnim.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h \
		game/weaponspool.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BAttackAnimEvent.o game/BAttackAnimEvent.cpp

BExplodeAnimEvent.o: game/BExplodeAnimEvent.cpp game/BExplodeAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		include/config.h \
		include/common.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BExplodeAnimEvent.o game/BExplodeAnimEvent.cpp

BQTimer.o: game/BQTimer.cpp game/BQTimer.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/BQueue.h \
		game/ConStatus.h \
		game/Production.h \
		game/Queue.h \
		game/RQstate.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BQTimer.o game/BQTimer.cpp

BQueue.o: game/BQueue.cpp game/BQueue.h \
		game/ConStatus.h \
		game/Production.h \
		game/Queue.h \
		game/RQstate.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		include/Logger.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/UnitAndStructurePool.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/Player.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/BQTimer.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BQueue.o game/BQueue.cpp

BRepairUnitAnimEvent.o: game/BRepairUnitAnimEvent.cpp game/BRepairUnitAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h \
		game/weaponspool.h \
		include/Logger.h \
		game/ActionEventQueue.h \
		game/Comp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BRepairUnitAnimEvent.o game/BRepairUnitAnimEvent.cpp

BTurnAnimEvent.o: game/BTurnAnimEvent.cpp game/BTurnAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BTurnAnimEvent.o game/BTurnAnimEvent.cpp

BuildAnimEvent.o: game/BuildAnimEvent.cpp game/BuildAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BuildAnimEvent.o game/BuildAnimEvent.cpp

BuildingAnimEvent.o: game/BuildingAnimEvent.cpp game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/BAttackAnimEvent.h \
		include/Logger.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BuildingAnimEvent.o game/BuildingAnimEvent.cpp

CncMap.o: game/CncMap.cpp game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/Game.h \
		include/config.h \
		include/common.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitAndStructurePool.h \
		game/MissionData.h \
		game/CellTrigger.h \
		game/LoadMapError.h \
		game/GameMode.h \
		game/TriggerAction.h \
		game/NoActionTriggerAction.h \
		game/GlobalSetTriggerAction.h \
		game/GlobalClearTriggerAction.h \
		game/TextTriggerAction.h \
		game/RawTriggerAction.h \
		misc/Compression.h \
		misc/KeyNotFound.h \
		misc/StringTableFile.h \
		vfs/vfs.h \
		vfs/archive.h \
		vfs/VFile.h \
		video/ImageNotFound.h \
		video/ImageCache.h \
		video/LoadingScreen.h \
		video/TemplateImage.h \
		include/imageproc.h \
		video/Renderer.h \
		include/Logger.h \
		game/PlayerPool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CncMap.o game/CncMap.cpp

Comp.o: game/Comp.cpp game/Comp.h \
		game/ActionEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Comp.o game/Comp.cpp

DataLoader.o: game/DataLoader.cpp game/DataLoader.h \
		game/WeaponDataList.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/WarheadDataList.h \
		game/ProjectileDataList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DataLoader.o game/DataLoader.cpp

Dispatcher.o: game/Dispatcher.cpp game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		include/common.h \
		include/config.h \
		include/Logger.h \
		game/PlayerPool.h \
		game/UnitAndStructurePool.h \
		vfs/vfs.h \
		vfs/archive.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Dispatcher.o game/Dispatcher.cpp

DoorAnimEvent.o: game/DoorAnimEvent.cpp game/DoorAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		include/Logger.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DoorAnimEvent.o game/DoorAnimEvent.cpp

ExplosionAnim.o: game/ExplosionAnim.cpp game/ExplosionAnim.h \
		game/ActionEvent.h \
		include/Logger.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/L2Overlay.h \
		game/UnitAndStructurePool.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ExplosionAnim.o game/ExplosionAnim.cpp

FibHeapEntry.o: game/FibHeapEntry.cpp game/FibHeapEntry.h \
		game/TileRef.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FibHeapEntry.o game/FibHeapEntry.cpp

Game.o: game/Game.cpp game/Game.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		include/Logger.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h \
		video/GraphicsEngine.h \
		game/PlayerPool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		audio/SoundError.h \
		game/Ai.h \
		game/Player.h \
		vfs/vfs.h \
		vfs/archive.h \
		video/ImageCache.h \
		ui/Menu.h \
		ui/RA_ProgressBar.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		ui/Button.h \
		ui/TTextBox.h \
		ui/RaWindow.h \
		ui/DropDownListBox.h \
		ui/Cursor.h \
		ui/PauseMenu.h \
		ui/Input.h \
		ui/Sidebar.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		ui/SidebarError.h \
		game/GameMode.h \
		game/MissionData.h \
		vfs/mix/mixvfs.h \
		video/VQAMovie.h \
		video/VQAHeader.h \
		game/MissionMapsClass.h \
		game/RedAlertDataLoader.h \
		game/DataLoader.h \
		game/GameError.h \
		game/LoadMapError.h \
		video/VideoError.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Game.o game/Game.cpp

GameError.o: game/GameError.cpp game/GameError.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GameError.o game/GameError.cpp

GlobalClearTriggerAction.o: game/GlobalClearTriggerAction.cpp game/GlobalClearTriggerAction.h \
		game/TriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GlobalClearTriggerAction.o game/GlobalClearTriggerAction.cpp

GlobalSetTriggerAction.o: game/GlobalSetTriggerAction.cpp game/GlobalSetTriggerAction.h \
		game/TriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GlobalSetTriggerAction.o game/GlobalSetTriggerAction.cpp

InfantryGroup.o: game/InfantryGroup.cpp game/InfantryGroup.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/weaponspool.h \
		include/Logger.h \
		game/PlayerPool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InfantryGroup.o game/InfantryGroup.cpp

KeyComp.o: game/KeyComp.cpp game/KeyComp.h \
		game/FibHeapEntry.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o KeyComp.o game/KeyComp.cpp

L2Overlay.o: game/L2Overlay.cpp game/L2Overlay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o L2Overlay.o game/L2Overlay.cpp

LoadMapError.o: game/LoadMapError.cpp game/LoadMapError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LoadMapError.o game/LoadMapError.cpp

LoopAnimEvent.o: game/LoopAnimEvent.cpp game/LoopAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LoopAnimEvent.o game/LoopAnimEvent.cpp

MissionData.o: game/MissionData.cpp game/MissionData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MissionData.o game/MissionData.cpp

MissionMapsClass.o: game/MissionMapsClass.cpp game/MissionMapsClass.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MissionMapsClass.o game/MissionMapsClass.cpp

MissionTheater.o: game/MissionTheater.cpp game/MissionTheater.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MissionTheater.o game/MissionTheater.cpp

MoneyCounter.o: game/MoneyCounter.cpp game/MoneyCounter.h \
		game/ActionEvent.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		include/Logger.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ActionEventQueue.h \
		game/Comp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MoneyCounter.o game/MoneyCounter.cpp

MoveAnimEvent.o: game/MoveAnimEvent.cpp game/MoveAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		include/Logger.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/unittypes.h \
		game/TurnAnimEvent.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		game/UAttackAnimEvent.h \
		game/Path.h \
		game/WalkAnimEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/UnitAndStructurePool.h \
		game/InfantryGroup.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MoveAnimEvent.o game/MoveAnimEvent.cpp

MultiPlayerMaps.o: game/MultiPlayerMaps.cpp game/MultiPlayerMaps.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MultiPlayerMaps.o game/MultiPlayerMaps.cpp

NoActionTriggerAction.o: game/NoActionTriggerAction.cpp game/NoActionTriggerAction.h \
		game/TriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NoActionTriggerAction.o game/NoActionTriggerAction.cpp

Path.o: game/Path.cpp game/Path.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/KeyComp.h \
		game/FibHeapEntry.h \
		game/TileRef.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Path.o game/Path.cpp

Player.o: game/Player.cpp game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		include/config.h \
		include/common.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/PlayerPool.h \
		include/Logger.h \
		game/MoneyCounter.h \
		game/UnitAndStructurePool.h \
		game/pside.h \
		game/BQueue.h \
		game/Production.h \
		game/Queue.h \
		game/RQstate.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Player.o game/Player.cpp

PlayerPool.o: game/PlayerPool.cpp game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		include/Logger.h \
		game/GameMode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PlayerPool.o game/PlayerPool.cpp

ProcAnimEvent.o: game/ProcAnimEvent.cpp game/ProcAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ProcAnimEvent.o game/ProcAnimEvent.cpp

Projectile.o: game/Projectile.cpp game/Projectile.h \
		game/ProjectileData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ProjectileDataList.h \
		include/Logger.h \
		video/ImageNotFound.h \
		video/SHPImage.h \
		video/SHPBase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Projectile.o game/Projectile.cpp

ProjectileAnim.o: game/ProjectileAnim.cpp game/ProjectileAnim.h \
		game/ActionEvent.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/ExplosionAnim.h \
		game/L2Overlay.h \
		game/Weapon.h \
		game/Warhead.h \
		game/WeaponData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/WarheadData.h \
		game/Projectile.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/UnitAndStructurePool.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/gametypes.h \
		include/common.h \
		include/config.h \
		include/Logger.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		video/ImageNotFound.h \
		video/ImageCache.h \
		video/Renderer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ProjectileAnim.o game/ProjectileAnim.cpp

ProjectileData.o: game/ProjectileData.cpp game/ProjectileData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ProjectileData.o game/ProjectileData.cpp

ProjectileDataList.o: game/ProjectileDataList.cpp game/ProjectileDataList.h \
		game/ProjectileData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ProjectileDataList.o game/ProjectileDataList.cpp

RadarAnimEvent.o: game/RadarAnimEvent.cpp game/RadarAnimEvent.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h \
		video/SHPImage.h \
		video/SHPBase.h \
		ui/Sidebar.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		game/pside.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RadarAnimEvent.o game/RadarAnimEvent.cpp

RawTriggerAction.o: game/RawTriggerAction.cpp game/RawTriggerAction.h \
		game/TriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RawTriggerAction.o game/RawTriggerAction.cpp

RedAlertDataLoader.o: game/RedAlertDataLoader.cpp game/RedAlertDataLoader.h \
		game/DataLoader.h \
		game/WarheadDataList.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ProjectileDataList.h \
		game/WeaponDataList.h \
		game/WeaponData.h \
		game/WarheadData.h \
		game/UnitType.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/TalkbackType.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RedAlertDataLoader.o game/RedAlertDataLoader.cpp

RefineAnimEvent.o: game/RefineAnimEvent.cpp game/RefineAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		include/Logger.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ProjectileAnim.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/Player.h \
		game/ConStatus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RefineAnimEvent.o game/RefineAnimEvent.cpp

RepairAnimEvent.o: game/RepairAnimEvent.cpp game/RepairAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/ActionEvent.h \
		game/anim_nfo.h \
		game/animinfo_t.h \
		game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/Player.h \
		game/ConStatus.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RepairAnimEvent.o game/RepairAnimEvent.cpp

SnowMissionTheater.o: game/SnowMissionTheater.cpp game/SnowMissionTheater.h \
		game/MissionTheater.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SnowMissionTheater.o game/SnowMissionTheater.cpp

structure.o: game/structure.cpp game/Structure.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/PlayerPool.h \
		game/Player.h \
		game/ConStatus.h \
		game/BTurnAnimEvent.h \
		game/BuildingAnimEvent.h \
		game/anim_nfo.h \
		game/BExplodeAnimEvent.h \
		game/BuildAnimEvent.h \
		game/DoorAnimEvent.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/BAttackAnimEvent.h \
		game/UnitAndStructurePool.h \
		game/weaponspool.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/BRepairUnitAnimEvent.h \
		game/GameMode.h \
		game/RefineAnimEvent.h \
		game/LoopAnimEvent.h \
		game/RepairAnimEvent.h \
		game/ProcAnimEvent.h \
		game/Ai.h \
		include/Logger.h \
		game/unittypes.h \
		game/Projectile.h \
		game/InfantryGroup.h \
		include/config.h \
		include/common.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/BarrelExplosionActionEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o structure.o game/structure.cpp

StructureType.o: game/StructureType.cpp game/StructureType.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/PowerInfo.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		include/Logger.h \
		game/weaponspool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		video/ImageNotFound.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/Weapon.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StructureType.o game/StructureType.cpp

talkback.o: game/talkback.cpp game/Talkback.h \
		game/TalkbackType.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o talkback.o game/talkback.cpp

TextTriggerAction.o: game/TextTriggerAction.cpp game/TriggerAction.h \
		game/TextTriggerAction.h \
		video/MessagePool.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TextTriggerAction.o game/TextTriggerAction.cpp

TriggerAction.o: game/TriggerAction.cpp game/TriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TriggerAction.o game/TriggerAction.cpp

triggers.o: game/triggers.cpp game/triggers.h \
		game/RA_Tigger.h \
		include/Logger.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/CnCMap.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/UnitAndStructurePool.h \
		game/PlayerPool.h \
		game/Player.h \
		game/ConStatus.h \
		game/TriggerAction.h \
		game/TextTriggerAction.h \
		game/RawTriggerAction.h \
		game/GlobalSetTriggerAction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o triggers.o game/triggers.cpp

TurnAnimEvent.o: game/TurnAnimEvent.cpp game/TurnAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		include/common.h \
		include/config.h \
		include/Logger.h \
		game/ProjectileAnim.h \
		game/weaponspool.h \
		game/PlayerPool.h \
		game/unittypes.h \
		game/ActionEventQueue.h \
		game/Comp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TurnAnimEvent.o game/TurnAnimEvent.cpp

UAttackAnimEvent.o: game/UAttackAnimEvent.cpp game/UAttackAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/TurnAnimEvent.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		game/unittypes.h \
		game/MoveAnimEvent.h \
		game/Projectile.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/gametypes.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UAttackAnimEvent.o game/UAttackAnimEvent.cpp

UHarvestEvent.o: game/UHarvestEvent.cpp game/UHarvestEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/unittypes.h \
		game/UnitAndStructurePool.h \
		game/TurnAnimEvent.h \
		game/MoveAnimEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/Player.h \
		game/ConStatus.h \
		game/PlayerPool.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UHarvestEvent.o game/UHarvestEvent.cpp

UInfiltrateAnimEvent.o: game/UInfiltrateAnimEvent.cpp game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/TurnAnimEvent.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/AiCommand.h \
		game/unittypes.h \
		game/MoveAnimEvent.h \
		game/Projectile.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/gametypes.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UInfiltrateAnimEvent.o game/UInfiltrateAnimEvent.cpp

unit.o: game/unit.cpp game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/Ai.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/GameMode.h \
		game/unittypes.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/InfantryGroup.h \
		game/L2Overlay.h \
		game/MoveAnimEvent.h \
		game/Player.h \
		game/ConStatus.h \
		game/Projectile.h \
		game/TurnAnimEvent.h \
		game/UAttackAnimEvent.h \
		game/UHarvestEvent.h \
		game/URepairEvent.h \
		game/UnitAndStructurePool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/PlayerPool.h \
		include/Logger.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o unit.o game/unit.cpp

unitandstructurepool.o: game/unitandstructurepool.cpp game/UnitAndStructurePool.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/Game.h \
		include/Logger.h \
		game/PlayerPool.h \
		game/weaponspool.h \
		video/ImageCache.h \
		game/InfantryGroup.h \
		game/MissionData.h \
		game/L2Overlay.h \
		game/movement.h \
		game/pside.h \
		game/Player.h \
		game/ConStatus.h \
		game/GameMode.h \
		game/UnitAndStructureMat.h \
		game/Talkback.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o unitandstructurepool.o game/unitandstructurepool.cpp

UnitAnimEvent.o: game/UnitAnimEvent.cpp game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UnitAnimEvent.o game/UnitAnimEvent.cpp

UnitOrStructure.o: game/UnitOrStructure.cpp game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UnitOrStructure.o game/UnitOrStructure.cpp

UnitOrStructureType.o: game/UnitOrStructureType.cpp game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UnitOrStructureType.o game/UnitOrStructureType.cpp

UnitType.o: game/UnitType.cpp game/UnitType.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/TalkbackType.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		game/PlayerPool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/UnitAndStructurePool.h \
		ui/Sidebar.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		video/ImageNotFound.h \
		game/Talkback.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h \
		game/weaponspool.h \
		game/InfantryGroup.h \
		game/GameMode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o UnitType.o game/UnitType.cpp

URepairEvent.o: game/URepairEvent.cpp game/URepairEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/unittypes.h \
		game/MoveAnimEvent.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/Weapon.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Unit.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		game/UnitAndStructurePool.h \
		game/ActionEventQueue.h \
		game/Comp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o URepairEvent.o game/URepairEvent.cpp

WalkAnimEvent.o: game/WalkAnimEvent.cpp game/WalkAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/AiCommand.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/UnitAndStructurePool.h \
		game/weaponspool.h \
		game/PlayerPool.h \
		game/unittypes.h \
		game/TurnAnimEvent.h \
		game/UAttackAnimEvent.h \
		game/Path.h \
		game/ActionEventQueue.h \
		game/Comp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WalkAnimEvent.o game/WalkAnimEvent.cpp

Warhead.o: game/Warhead.cpp game/Warhead.h \
		game/armour_t.h \
		game/WeaponData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		video/ImageNotFound.h \
		video/SHPImage.h \
		video/SHPBase.h \
		include/Logger.h \
		game/WarheadData.h \
		game/WarheadDataList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Warhead.o game/Warhead.cpp

WarheadData.o: game/WarheadData.cpp game/WarheadData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WarheadData.o game/WarheadData.cpp

WarheadDataList.o: game/WarheadDataList.cpp game/WarheadDataList.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		game/DataLoader.h \
		game/WarheadData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WarheadDataList.o game/WarheadDataList.cpp

Weapon.o: game/Weapon.cpp game/Weapon.h \
		game/armour_t.h \
		game/Projectile.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/animinfo_t.h \
		game/Warhead.h \
		game/WeaponData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/ExplosionAnim.h \
		game/ActionEvent.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		include/Logger.h \
		game/weaponspool.h \
		video/ImageNotFound.h \
		video/SHPImage.h \
		video/SHPBase.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/InfantryGroup.h \
		game/ProjectileAnim.h \
		game/RedAlertDataLoader.h \
		game/DataLoader.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Weapon.o game/Weapon.cpp

WeaponData.o: game/WeaponData.cpp game/WeaponData.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WeaponData.o game/WeaponData.cpp

WeaponDataList.o: game/WeaponDataList.cpp game/WeaponDataList.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/WarheadDataList.h \
		game/WeaponData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WeaponDataList.o game/WeaponDataList.cpp

weaponspool.o: game/weaponspool.cpp game/weaponspool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		game/ProjectileAnim.h \
		game/ActionEvent.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		game/Projectile.h \
		game/Warhead.h \
		game/armour_t.h \
		game/WeaponData.h \
		game/ExplosionAnim.h \
		video/ImageNotFound.h \
		game/Weapon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o weaponspool.o game/weaponspool.cpp

args.o: misc/args.cpp include/sdllayer.h \
		video/Renderer.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o args.o misc/args.cpp

common.o: misc/common.cpp game/Ai.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		video/Renderer.h \
		game/ActionEventQueue.h \
		game/Comp.h \
		ui/PauseMenu.h \
		video/GraphicsEngine.h \
		game/RedAlertDataLoader.h \
		game/DataLoader.h \
		include/Logger.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o common.o misc/common.cpp

Compression.o: misc/Compression.cpp misc/Compression.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Compression.o misc/Compression.cpp

fibheap.o: misc/fibheap.cpp include/fibheap.h \
		video/Renderer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fibheap.o misc/fibheap.cpp

INIFile.o: misc/INIFile.cpp misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/KeyNotFound.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o INIFile.o misc/INIFile.cpp

KeyNotFound.o: misc/KeyNotFound.cpp misc/KeyNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o KeyNotFound.o misc/KeyNotFound.cpp

StringTableFile.o: misc/StringTableFile.cpp misc/StringTableFile.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StringTableFile.o misc/StringTableFile.cpp

Button.o: ui/Button.cpp ui/Button.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/RaWindow.h \
		video/GraphicsEngine.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Button.o ui/Button.cpp

Cursor.o: ui/Cursor.cpp ui/Cursor.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/GraphicsEngine.h \
		include/sdllayer.h \
		ui/CursorPool.h \
		ui/CursorInfo.h \
		include/Logger.h \
		video/Dune2Image.h \
		video/Dune2Header.h \
		video/TemplateImage.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Cursor.o ui/Cursor.cpp

CursorInfo.o: ui/CursorInfo.cpp ui/CursorInfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CursorInfo.o ui/CursorInfo.cpp

CursorPool.o: ui/CursorPool.cpp ui/CursorPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		ui/CursorInfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CursorPool.o ui/CursorPool.cpp

DropDownListBox.o: ui/DropDownListBox.cpp ui/DropDownListBox.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		video/SHPImage.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		video/GraphicsEngine.h \
		video/ImageCache.h \
		include/sdllayer.h \
		ui/RA_ProgressBar.h \
		ui/RaWindow.h \
		ui/TTextBox.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DropDownListBox.o ui/DropDownListBox.cpp

Font.o: ui/Font.cpp ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/FontCache.h \
		ui/TFontImage.h \
		video/Renderer.h \
		include/fcnc_endian.h \
		include/Logger.h \
		include/sdllayer.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Font.o ui/Font.cpp

FontCache.o: ui/FontCache.cpp ui/FontCache.h \
		ui/TFontImage.h \
		video/Renderer.h \
		include/fcnc_endian.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		include/sdllayer.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o FontCache.o ui/FontCache.cpp

Input.o: ui/Input.cpp ui/Input.h \
		ui/Cursor.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/Selection.h \
		ui/Sidebar.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		game/GameMode.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		misc/gametypes.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h \
		include/Logger.h \
		game/PlayerPool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		game/ExplosionAnim.h \
		game/InfantryGroup.h \
		video/ImageCache.h \
		video/MessagePool.h \
		include/config.h \
		include/common.h \
		game/Player.h \
		game/BQueue.h \
		game/Production.h \
		game/Queue.h \
		game/RQstate.h \
		game/UnitAndStructurePool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Input.o ui/Input.cpp

ListboxClass.o: ui/ListboxClass.cpp ui/ListboxClass.h \
		ui/ListBoxLine.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		video/GraphicsEngine.h \
		video/ImageCache.h \
		include/sdllayer.h \
		ui/RA_ProgressBar.h \
		ui/RaWindow.h \
		ui/TTextBox.h \
		video/ImageNotFound.h \
		video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		video/SHPImage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ListboxClass.o ui/ListboxClass.cpp

logger.o: ui/logger.cpp include/Logger.h \
		video/MessagePool.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o logger.o ui/logger.cpp

Menu.o: ui/Menu.cpp ui/Menu.h \
		ui/RA_ProgressBar.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/Button.h \
		ui/TTextBox.h \
		ui/RaWindow.h \
		ui/DropDownListBox.h \
		ui/ListboxClass.h \
		ui/ListBoxLine.h \
		ui/Cursor.h \
		ui/TCheckBox.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		include/Logger.h \
		game/MissionMapsClass.h \
		game/MultiPlayerMaps.h \
		game/GameMode.h \
		misc/StringTableFile.h \
		vfs/VFile.h \
		vfs/vfs.h \
		vfs/archive.h \
		video/Dune2Image.h \
		video/Dune2Header.h \
		video/ImageNotFound.h \
		video/PCXImage.h \
		video/PCXHeader.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSImage.h \
		video/CPSHeader.h \
		video/VQAMovie.h \
		video/VQAHeader.h \
		video/GraphicsEngine.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Menu.o ui/Menu.cpp

PauseMenu.o: ui/PauseMenu.cpp ui/PauseMenu.h \
		ui/Button.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/RaWindow.h \
		ui/TCheckBox.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		video/GraphicsEngine.h \
		include/Logger.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		include/sdllayer.h \
		video/Dune2Image.h \
		video/Dune2Header.h \
		misc/StringTableFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PauseMenu.o ui/PauseMenu.cpp

RA_Label.o: ui/RA_Label.cpp ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/GraphicsEngine.h \
		ui/RaWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RA_Label.o ui/RA_Label.cpp

RA_ProgressBar.o: ui/RA_ProgressBar.cpp ui/RA_ProgressBar.h \
		video/GraphicsEngine.h \
		ui/RaWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RA_ProgressBar.o ui/RA_ProgressBar.cpp

RaWindow.o: ui/RaWindow.cpp ui/RaWindow.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		video/SHPImage.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		video/GraphicsEngine.h \
		video/ImageCache.h \
		include/sdllayer.h \
		ui/RA_ProgressBar.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RaWindow.o ui/RaWindow.cpp

selection.o: ui/selection.cpp ui/Selection.h \
		include/Logger.h \
		game/Dispatcher.h \
		game/DispatchLogState.h \
		game/ConStatus.h \
		game/Player.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/weaponspool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o selection.o ui/selection.cpp

sidebar.o: ui/sidebar.cpp ui/Sidebar.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		ui/Input.h \
		ui/Cursor.h \
		ui/SidebarButton.h \
		game/RadarAnimEvent.h \
		game/ActionEvent.h \
		ui/SidebarError.h \
		include/Logger.h \
		video/SHPImage.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		video/GraphicsEngine.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		include/sdllayer.h \
		ui/sidebarop.h \
		video/ImageNotFound.h \
		game/pside.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/AiCommand.h \
		game/PlayerPool.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/UnitAndStructurePool.h \
		misc/StringTableFile.h \
		vfs/vfs.h \
		vfs/archive.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sidebar.o ui/sidebar.cpp

SidebarButton.o: ui/SidebarButton.cpp ui/SidebarButton.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		ui/Sidebar.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SidebarButton.o ui/SidebarButton.cpp

SidebarError.o: ui/SidebarError.cpp ui/SidebarError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SidebarError.o ui/SidebarError.cpp

TCheckBox.o: ui/TCheckBox.cpp ui/TCheckBox.h \
		video/GraphicsEngine.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TCheckBox.o ui/TCheckBox.cpp

TTextBox.o: ui/TTextBox.cpp ui/TTextBox.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		video/GraphicsEngine.h \
		video/ImageCache.h \
		include/sdllayer.h \
		ui/RaWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TTextBox.o ui/TTextBox.cpp

VFile.o: vfs/VFile.cpp vfs/VFile.h \
		vfs/archive.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VFile.o vfs/VFile.cpp

vfs.o: vfs/vfs.cpp vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		vfs/filesystem/externalvfs.h \
		vfs/mix/mixvfs.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		include/config.h \
		include/common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o vfs.o vfs/vfs.cpp

CPSImage.o: video/CPSImage.cpp video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		misc/Compression.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o CPSImage.o video/CPSImage.cpp

Dune2Image.o: video/Dune2Image.cpp video/Dune2Image.h \
		video/Dune2Header.h \
		video/SHPBase.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Dune2Image.o video/Dune2Image.cpp

GraphicsEngine.o: video/GraphicsEngine.cpp video/GraphicsEngine.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h \
		include/Logger.h \
		game/CnCMap.h \
		game/triggers.h \
		game/RA_Tigger.h \
		video/SHPImage.h \
		video/SHPBase.h \
		game/MiniMapClipping.h \
		game/Unit.h \
		game/UnitOrStructure.h \
		game/UnitOrStructureType.h \
		game/armour_t.h \
		game/animinfo_t.h \
		game/UnitType.h \
		game/TalkbackType.h \
		game/Weapon.h \
		game/Structure.h \
		game/StructureType.h \
		game/PowerInfo.h \
		game/UInfiltrateAnimEvent.h \
		game/UnitAnimEvent.h \
		game/ActionEvent.h \
		game/AiCommand.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		game/PlayerPool.h \
		game/Player.h \
		game/ConStatus.h \
		game/UnitAndStructurePool.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		include/sdllayer.h \
		misc/StringTableFile.h \
		ui/Cursor.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		ui/Input.h \
		ui/Sidebar.h \
		ui/SidebarGeometry.h \
		ui/createmode_t.h \
		video/VideoError.h \
		video/MessagePool.h \
		video/ImageCache.h \
		video/ImageCacheEntry.h \
		video/Dune2Image.h \
		video/Dune2Header.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GraphicsEngine.o video/GraphicsEngine.cpp

imagecache.o: video/imagecache.cpp video/ImageCache.h \
		video/ImageNotFound.h \
		video/SHPImage.h \
		video/SHPBase.h \
		video/ImageCacheEntry.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o imagecache.o video/imagecache.cpp

ImageCacheEntry.o: video/ImageCacheEntry.cpp video/ImageCacheEntry.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ImageCacheEntry.o video/ImageCacheEntry.cpp

ImageNotFound.o: video/ImageNotFound.cpp video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ImageNotFound.o video/ImageNotFound.cpp

imageproc.o: video/imageproc.cpp video/Renderer.h \
		include/imageproc.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o imageproc.o video/imageproc.cpp

loadingscreen.o: video/loadingscreen.cpp video/LoadingScreen.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		video/CPSImage.h \
		include/imageproc.h \
		video/Renderer.h \
		video/CPSHeader.h \
		video/GraphicsEngine.h \
		include/Logger.h \
		video/ImageNotFound.h \
		video/MessagePool.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o loadingscreen.o video/loadingscreen.cpp

message.o: video/message.cpp video/Message.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o message.o video/message.cpp

MessagePool.o: video/MessagePool.cpp video/MessagePool.h \
		ui/RA_Label.h \
		ui/Font.h \
		ui/FontOptions.h \
		video/SHPBase.h \
		video/Renderer.h \
		include/Logger.h \
		video/drawmessage.h \
		video/Message.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MessagePool.o video/MessagePool.cpp

PCXImage.o: video/PCXImage.cpp video/PCXImage.h \
		video/PCXHeader.h \
		include/imageproc.h \
		video/Renderer.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		include/Logger.h \
		video/ImageNotFound.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PCXImage.o video/PCXImage.cpp

Renderer.o: video/Renderer.cpp video/Renderer.h \
		include/sdllayer.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		include/Logger.h \
		video/VideoError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Renderer.o video/Renderer.cpp

sdllayer.o: video/sdllayer.cpp include/sdllayer.h \
		include/Logger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sdllayer.o video/sdllayer.cpp

SHPBase.o: video/SHPBase.cpp video/SHPBase.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		video/ImageNotFound.h \
		include/config.h \
		include/common.h \
		video/headerformats.h \
		video/Palettes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SHPBase.o video/SHPBase.cpp

SHPImage.o: video/SHPImage.cpp video/SHPImage.h \
		video/SHPBase.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		vfs/vfs.h \
		vfs/archive.h \
		misc/gametypes.h \
		vfs/VFile.h \
		include/config.h \
		include/common.h \
		video/headerformats.h \
		video/ImageNotFound.h \
		video/SHPHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SHPImage.o video/SHPImage.cpp

TemplateImage.o: video/TemplateImage.cpp video/TemplateImage.h \
		video/SHPBase.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		video/ImageNotFound.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		video/headerformats.h \
		video/SHPImage.h \
		vfs/VFile.h \
		vfs/vfs.h \
		vfs/archive.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o TemplateImage.o video/TemplateImage.cpp

VideoError.o: video/VideoError.cpp video/VideoError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VideoError.o video/VideoError.cpp

VQAMovie.o: video/VQAMovie.cpp video/VQAMovie.h \
		video/VQAHeader.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		video/GraphicsEngine.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		audio/SoundCommon.h \
		audio/SoundCache.h \
		audio/SoundBuffer.h \
		audio/SoundFile.h \
		audio/SoundEngine.h \
		audio/SoundUtils.h \
		vfs/vfs.h \
		vfs/archive.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VQAMovie.o video/VQAMovie.cpp

WSAError.o: video/WSAError.cpp video/WSAError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WSAError.o video/WSAError.cpp

WSAMovie.o: video/WSAMovie.cpp video/WSAMovie.h \
		video/WSAHeader.h \
		video/GraphicsEngine.h \
		video/Renderer.h \
		include/config.h \
		include/common.h \
		misc/gametypes.h \
		misc/Compression.h \
		include/fcnc_endian.h \
		include/imageproc.h \
		misc/INIFile.h \
		misc/IniEntry.h \
		misc/INIKey.h \
		misc/INISection.h \
		include/Logger.h \
		audio/SoundEngine.h \
		audio/SoundCache.h \
		vfs/vfs.h \
		vfs/archive.h \
		vfs/VFile.h \
		video/WSAError.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WSAMovie.o video/WSAMovie.cpp

externalvfs.o: vfs/filesystem/externalvfs.cpp video/Renderer.h \
		vfs/filesystem/externalvfs.h \
		vfs/archive.h \
		include/common.h \
		include/config.h \
		misc/gametypes.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o externalvfs.o vfs/filesystem/externalvfs.cpp

blowfish.o: vfs/mix/blowfish.cpp vfs/mix/blowfish.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o blowfish.o vfs/mix/blowfish.cpp

mixvfs.o: vfs/mix/mixvfs.cpp vfs/mix/mixvfs.h \
		vfs/archive.h \
		vfs/mix/blowfish.h \
		vfs/mix/ws-key.h \
		include/Logger.h \
		include/fcnc_endian.h \
		video/Renderer.h \
		vfs/vfs.h \
		misc/gametypes.h \
		vfs/VFile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mixvfs.o vfs/mix/mixvfs.cpp

ws-key.o: vfs/mix/ws-key.cpp vfs/mix/ws-key.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ws-key.o vfs/mix/ws-key.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

