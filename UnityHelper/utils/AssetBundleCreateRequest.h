#include "AssetBundle.h"

struct AsyncOperation {
    //Allow Scenes to be activated as soon as it is ready.
    bool allowSceneActivation;
    // Has the operation finished? (Read Only)
    bool isDone;	
    // Priority lets you tweak in which order async operation calls will be performed.
    int priority	;
    // What's the operation's progress. (Read Only)
    float progress;	
};
 
struct AssetBundleCreateRequest : AsyncOperation
{
    AssetBundle assetBundle;
};