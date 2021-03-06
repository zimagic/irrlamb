/*************************************************************************************
*	irrlamb - http://irrlamb.googlecode.com
*	Copyright (C) 2013  Alan Witkowski
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************************/
#include <all.h>
#pragma once

// Forward Declarations
class _Object;

// Structures
struct TemplateStruct {
	TemplateStruct();

	// Generic properties
	int TemplateID;
	std::string Name;
	int Type;
	float Lifetime;
	
	// Collision
	std::string CollisionCallback;
	int CollisionGroup, CollisionMask;

	// Physical properties
	std::string CollisionFile;
	btVector3 Shape;
	float Radius;
	float Mass, Friction, Restitution;
	float LinearDamping, AngularDamping;

	// Constraints
	btVector3 ConstraintData[4];

	// Graphics
	std::string Mesh;
	float Scale;
	std::string Textures[4];
	bool Fog;
	bool EmitLight;
	int CustomMaterial;

	// Zones
	bool Active;
};

struct SpawnStruct {
	SpawnStruct();

	std::string Name;
	btVector3 Position, Rotation;
	TemplateStruct *Template;
};

struct ConstraintStruct {
	ConstraintStruct();

	std::string Name;
	_Object *BodyA, *BodyB;
	TemplateStruct *Template;
};
