
![image](https://github.com/user-attachments/assets/c3e64d44-5fc3-436c-92fc-9188189bf805)

# Live::Editor  @@@  under construction @@@
The world's first(*) "Live" :: Editor     

The big new feature is:
“Live::Editor” works together with you on your running Axmol game!

The interaction with your game is permanent and you be at the same time:

- Artist
- Player
- Designer (Game-/Level-/UI)
- Developer

In a word:

You be the **Winner** using “Live::Editor” writing your next game!

Realising games in minutes will be possible.

For what standing the :: ?

Thats the place holder for something like: 

- :Scene:,
- :Sprite:,
- :PhysicsSprite:,
- :etc:
  
So it can also called: 

- LiveSceneEditor,
- LiveSpriteEditor,
- LivePhysicsSpriteEditor,
- etc.

(*) as far as I'm know ;)



<!-- ABOUT THE PROJECT -->
## About The Project

![image](https://github.com/user-attachments/assets/6d79a2fe-6ff7-4e53-bebc-dca1ee25ed10)




### Built With

#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
#    include "LiveEditor/LiveEditor.h"
#endif

using namespace ax;
USING_NS_AX_EXT;


void TestCase::onEnter()
{
    Scene::onEnter();

#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
    extension::LiveEditor::getInstance()->startPoint(this);
#endif
}



void TestCase::onExit()
{
#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
    extension::LiveEditor::getInstance()->close();
#endif
    Scene::onExit();
}


<!-- GETTING STARTED -->
## Getting Started


### Prerequisites



### Installation


<!-- ROADMAP -->
## Roadmap

- [x] Add Changelog
- [x] Add back to top links
- [ ] Add Additional Templates w/ Examples
- [ ] Add "components" document to easily copy & paste sections of the readme
- [ ] Multi-language Support
    - [ ] Chinese
    - [ ] Spanish



## License



<!-- CONTACT -->
## Contact



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments



[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 

