CXX=g++
CPPFLAGS=-std=c++11
CLIENT_EXE=app
SERVER_EXE=serv

## FILES

FILES_ENGINE=		AppWindow.o Engine/Scene.o Engine/Cell.o Engine/Controller.o Engine/Map.o \
					Engine/TextureManager.o Engine/TileManager.o Engine/Entity.o \
					Engine/ProjectileManager.o Engine/Projectile.o Engine/VEntity.o Engine/EGTheSpinner.o

FILES_MULTIMEDIA=	Multimedia/graphics/object/BGO.o Multimedia/graphics/object/SGO.o Multimedia/graphics/object/TGO.o \
					Multimedia/graphics/Renderer.o Multimedia/manager/ResourceManager.o Multimedia/graphics/Animation.o \
					Multimedia/gui/Label.o Multimedia/gui/Button.o Multimedia/gui/Container.o Multimedia/gui/TextBox.o	\
					Multimedia/manager/ResourceManager.o Multimedia/manager/MusicManager.o Multimedia/manager/SoundManager.o

FILES_LOGIC=		Logic/Environment/Block.o Logic/Environment/GameMap.o Logic/GameScene.o Logic/Champion/Vessel.o \
					Logic/Environment/EnemyHierarchy.o Logic/Event.o Logic/ProperEntity.o Logic/ServerGameScene.o

FILES_NETWORK=		Network/Client.o Network/Server.o Network/Session.o Network/select_helper.o Network/net_helper.o \
					Network/NetworkEntityMultiplexer.o Network/NetworkEntity.o

FILE_CLIENT=			Client.cpp
FILE_SERVER=			Server.cpp

##

all: client server

client: $(FILES_ENGINE) $(FILES_MULTIMEDIA) $(FILES_LOGIC) $(FILES_NETWORK) $(FILE_CLIENT)
	$(CXX) $(CPPFLAGS) \
	$(FILES_ENGINE) $(FILES_MULTIMEDIA) $(FILES_LOGIC) $(FILES_NETWORK) $(FILE_CLIENT) \
	-o $(CLIENT_EXE) -lstdc++ -lsfml-graphics -lsfml-window -lsfml-system -lpthread -lsfml-audio


server: $(FILES_ENGINE) $(FILES_MULTIMEDIA) $(FILES_LOGIC) $(FILES_NETWORK) $(FILE_SERVER)
	$(CXX) $(CPPFLAGS) \
	-o $(SERVER_EXE) -lstdc++ -lsfml-graphics -lsfml-window -lsfml-system -lpthread -lsfml-audio \
	$(FILES_ENGINE) $(FILES_MULTIMEDIA) $(FILES_LOGIC) $(FILES_NETWORK) $(FILE_SERVER)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	find . -name "*.o" -type f -delete
	rm -f $(CLIENT_EXE) $(SERVER_EXE)
