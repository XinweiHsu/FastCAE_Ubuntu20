#include "PhysicalsGroups.h"
#include "geometry/geometryData.h"
#include "geometry/geometrySet.h"
#include "python/PyAgent.h"

namespace Gmsh{
	PhysicalsGroups::PhysicalsGroups()
	{
	}


	PhysicalsGroups::~PhysicalsGroups()
	{
	}

	void PhysicalsCurve::appendPhysicals(Py::PythonAagent* py)
	{
// 		std::string name = this->_name.toStdString();
// 		const char* ch = name.c_str();

		QList<Geometry::GeometrySet*> setList = _curvesHash.uniqueKeys();
		for (auto set : setList)
		{
			const int id = set->getID();
			QList<int> indexList = _curvesHash.values(set);
			for (int index : indexList)
			{
				QString code = QString("gmsher.appendPhysicals(%1,\"%2\",%3,%4)").arg(this->_type).arg(this->_name).arg(id).arg(index);
				py->submit(code);
			}
		}
	}

	void PhysicalsSurface::appendPhysicals(Py::PythonAagent* py)
	{
// 		std::string name = this->_name.toStdString();
// 		const char* ch = name.c_str();

		QList<Geometry::GeometrySet*> setList = _surfacesHash.uniqueKeys();
		for (auto set : setList)
		{
			const int id = set->getID();
			QList<int> indexList = _surfacesHash.values(set);
			for (int index : indexList)
			{
				QString code = QString("gmsher.appendPhysicals(%1,\"%2\",%3,%4)").arg(this->_type).arg(this->_name).arg(id).arg(index);
				py->submit(code);
			}
		}
	}

	void PhysicalsSolid::appendPhysicals(Py::PythonAagent* py)
	{
// 		std::string name = this->_name.toStdString();
// 		const char* ch = name.c_str();

		for (QMultiHash<Geometry::GeometrySet*, int>::iterator iter = _solidHash.begin(); iter != _solidHash.end(); ++iter)		{			auto set = iter.key();			int id = set->getID();			int index = iter.value();			QString code = QString("gmsher.appendPhysicals(%1,\"%2\",%3,%4)").arg(this->_type).arg(this->_name).arg(id).arg(index);
			py->submit(code);		}
	}

	void PhysicalsPoint::appendPhysicals(Py::PythonAagent* py)
	{
// 		std::string name = this->_name.toStdString();
// 		const char* ch = name.c_str();

		QList<Geometry::GeometrySet*> setList = _pointsHash.uniqueKeys();
		for (auto set : setList)
		{
			const int id = set->getID();
			QList<int> indexList = _pointsHash.values(set);
			for (int index : indexList)
			{
				QString code = QString("gmsher.appendPhysicals(%1,\"%2\",%3,%4)").arg(this->_type).arg(this->_name).arg(id).arg(index);
				py->submit(code);
			}
		}
	}

}