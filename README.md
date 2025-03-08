
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



### How to add Live::Editor to your project


#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
#    include "LiveEditor/LiveEditor.h"
#endif


void <yourscene>::onEnter()
{
    Scene::onEnter();

#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
    extension::LiveEditor::getInstance()->startPoint(this);
#endif
}



void <yourscene>::onExit()
{
#if defined(AX_PLATFORM_PC) || (AX_TARGET_PLATFORM == AX_PLATFORM_ANDROID) || defined(__EMSCRIPTEN__)
    extension::LiveEditor::getInstance()->close();
#endif
    Scene::onExit();
}

