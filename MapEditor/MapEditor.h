#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MapEditor.h"

#include <mutex>
#include <thread>

#include <qundostack.h>
#include <qundoview.h>

#include <Block.h>
#include <Map.h>

class MapEditor : public QMainWindow
{
  Q_OBJECT

public:
  MapEditor(QWidget *parent = Q_NULLPTR);
  ~MapEditor();

private:
  Ui::MapEditorClass ui;

  std::thread _renderThread;
  QMenu* _fileMenu;
  QMenu* _editMenu;
  QMenu* _settingsMenu;

  QAction* _newAct;
  QAction* _loadAct;
  QAction* _saveAsAct;
  QAction* _saveAct;

  QAction* _resizeMapAct;
  QAction* _blockEditAct;

  QAction* _undoAct;
  QAction* _redoAct;

  QUndoStack* _undoStack;
  QUndoView* _undoView;

  osg::ref_ptr<Map> _map = new Map(10, 10);

  //QString _errorText;
  std::mutex _mutex;

  QString _filename;

  int _minMapSize;
  int _maxMapSize;
  int _row = 0;
  int _col = 0;
  int _maxColumnElements = 5;

  //!!!
  QButtonGroup* _btnGroupBlocks;
  std::map<std::string, std::string> _defaultTexPaths;
  std::map<int, BlockType> _blockTypes;

  //������
  QPixmap drawBlockIcon(std::string texPath, std::string fillType);

  void readTextures();

  void renderScene();
  void createMap(int sizeX, int sizeZ);
  void createUndoView();
  void createUndoRedoActions();
  //bool isFoundCoordsErrors(int coord, QString coordType);		//������� �������� ������

  public slots:
  void NewMap();
  void changeMapSize();

  void blockEdit();

  //operations with files
  void LoadXMLFile();
  void SaveXMLFile();
  void SaveAsXMLFile();

  //undo/redo commands
  //map editor
  void AddBlock(osg::ref_ptr<Block> block, BlockType blockType);
  void RemoveBlock(osg::ref_ptr<Block> block);
  void ReplaceBlock(osg::ref_ptr<Block> block, BlockType blockType);
  //void AddBlock(osg::ref_ptr<Block> block, osg::ref_ptr<BlockType> blockType);
  //void ReplaceBlock(osg::ref_ptr<Block> block, osg::ref_ptr<BlockType> blockType);
  //block editor
  void ChangeBlockType(QAbstractButton* rButton,
    BlockType& blockType, BlockType blockTypeOld);

  void Undo();    //????

  std::mutex& GetMutex()	{ return _mutex; }

signals:
  void QuitViewer();
  void QuitAppToMain();
  void SendBlockType(BlockType blockType);
  //void SendBlockType(osg::ref_ptr<BlockType> blockType);
};
