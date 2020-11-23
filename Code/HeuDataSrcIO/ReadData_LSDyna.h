#ifndef READDATALSDYNA_H
#define READDATALSDYNA_H

#include "ReadData_Base.h"
#include "vtkDataSetReader.h"
#include "vtkUnstructuredGrid.h"
#include "vtkPointData.h"
#include "vtkStructuredGrid.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkRectilinearGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkXMLUnstructuredGridReader.h"
#include "vtkXMLStructuredGridReader.h"
#include "vtkXMLRectilinearGridReader.h"
#include "vtkXMLPolyDataReader.h"
#include "vtkXMLPolyDataReader.h"
#include "vtkLSDynaReader.h"

class vtkMultiBlockDataSet;
class vtkTecplotReader;
class vtkDataSet;
class QTextStream;

class ReadData_LSDyna : public ReadData_Base
{
public:
	ReadData_LSDyna() = default;
	~ReadData_LSDyna();
	bool Read(QString tep_filename) override;

private:
	void TecPreProcessing(QString fileName);
	void tecPostProcessing();
	void processingDataSet(vtkDataSet* d);
	bool isVectorComponent(QString name, QString& vecName, QString& comp);

	bool read1(QString fileName);
	QString readline();
	void readZone(QString zoneHead);

private:
	vtkMultiBlockDataSet* mudataset{};
	//vtkLSDynaReader* reader{};
	vtkLSDynaReader *reader;

	QTextStream* _textStream{};
	int _zoneNO{ 0 };
};


#endif
