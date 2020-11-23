#ifndef PHYSICALSGROUPS_H
#define PHYSICALSGROUPS_H

#include <QString>
#include <QHash>

namespace Geometry
{
	class GeometrySet;
}

namespace Py
{
	class PythonAagent;
}

enum Physicals
{
	PhysicalsNone = 0,
	PhysicalPoint,
	physicalCurve,
	PhysicalSuface,
	PhysicalSolid,
};

namespace Gmsh{
	class PhysicalsGroups
	{
	public:
		PhysicalsGroups();
		~PhysicalsGroups();

		virtual void appendPhysicals(Py::PythonAagent* py) = 0;

		QString _name{};
		Physicals _type{ PhysicalsNone };
	};

	class PhysicalsPoint : public PhysicalsGroups
	{
	public:
		void appendPhysicals(Py::PythonAagent* py) override;

		QMultiHash<Geometry::GeometrySet*, int> _pointsHash{};
	};

	class PhysicalsCurve : public PhysicalsGroups
	{
	public:
		void appendPhysicals(Py::PythonAagent* py) override;

		QMultiHash<Geometry::GeometrySet*, int> _curvesHash{};
	}; 
	
	class PhysicalsSurface : public PhysicalsGroups
	{
	public:
		void appendPhysicals(Py::PythonAagent* py) override;

		QMultiHash<Geometry::GeometrySet*, int> _surfacesHash{};
	}; 
	
	class PhysicalsSolid : public PhysicalsGroups
	{
	public:
		void appendPhysicals(Py::PythonAagent* py) override;

		QMultiHash<Geometry::GeometrySet*, int> _solidHash{};
 	};
}
#endif
