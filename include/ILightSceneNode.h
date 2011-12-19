/*

  LTE Game Engine SDK:

   Copyright (C) 2006, SiberianSTAR <haxormail@gmail.com>

  Based on Irrlicht 1.0:
 
   Copyright (C) 2002-2006 Nikolaus Gebhardt

  For conditions of distribution and use, see copyright notice in
  engine.h
 
  http://www.ltestudios.com

*/

#ifndef __I_LIGHT_SCENE_NODE_H_INCLUDED__
#define __I_LIGHT_SCENE_NODE_H_INCLUDED__

#include "ISceneNode.h"
#include "SLight.h"

namespace engine
{
namespace scene
{

//! Scene node which is a dynamic light. 
/** You can switch the light on and off by 
making it visible or not, and let it be animated by ordinary scene node animators.
If you set the light type to be directional, you will need to set the direction of the
light source manually in the SLight structure, the position of the scene node will have no
effect on this direction.
*/
class ILightSceneNode : public ISceneNode
{
public:

	//! constructor
	ILightSceneNode(ISceneNode* parent, ISceneManager* mgr, s32 id, 
		const core::vector3df& position = core::vector3df(0,0,0))
		: ISceneNode(parent, mgr, id, position) {}

	//! \return Returns the light data.
	virtual video::SLight& getLightData() = 0;
};

} // end namespace scene
} // end namespace engine


#endif

