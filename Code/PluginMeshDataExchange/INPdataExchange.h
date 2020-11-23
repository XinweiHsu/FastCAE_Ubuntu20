#ifndef _INPDATAEXCHANGE_H_
#define _INPDATAEXCHANGE_H_

#include "meshDataExchangePlugin.h"
#include <QHash>
#include "MeshThreadBase.h"

class QTextStream;
class vtkUnstructuredGrid;
class vtkDataSet;

namespace MeshData
{
	class MeshData;

	class MESHDATAEXCHANGEPLUGINAPI INPdataExchange :public MeshThreadBase
	{
	public:
		INPdataExchange(const QString &filename, MeshOperation operation, GUI::MainWindow *mw ,int modelId = -1, int writeFileKid = -1);
		~INPdataExchange();

		void run();
		bool read();
		bool write();

		void readLine(QString &line);
		bool readNodes(vtkUnstructuredGrid* g, QString &line);
		bool readElements(vtkUnstructuredGrid* g, QString &line);
		bool readNSet(QString &line);
		bool readElSet(QString &line);
		bool readMaterial(QString &line);
		bool readBoundary(QString &line);

	private:
		void addINPComponents();
		void addINPMaterials();
		void addINPBCs();
		void clearString();

	private:
		GUI::MainWindow* _mw;
		QString _fileName{};
		QTextStream* _stream{};

		MeshOperation _operation;
		MeshData* _meshData{};
		QHash<int, int> _nodeIDIndex{};
		QHash<int, int> _elemIDIndex{};
		int _writeFileKid;
		int _modelId;

		QList<int> _setIds;
		QStringList _materialName;
		QStringList _density;
		QStringList _elastic;

		QStringList _bcSetIds;
		QStringList _bcName;
		QStringList _bcType;
		QList<double> _displacement;
		QList<double> _rotation;
	};
}
#endif