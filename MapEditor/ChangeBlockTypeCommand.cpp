#pragma once

#include <ChangeBlockTypeCommand.h>
#include <DrawBlockPixmap.h>

ChangeBlockTypeCommand::ChangeBlockTypeCommand(QAbstractButton* button,
  BlockType& blockType, BlockType blockTypeNew,
  MapEditor* mapEditor, QUndoCommand* parent) :
  QUndoCommand(parent),
  _blockTypeRef(blockType),
  _blockType(blockType),
  _blockTypeNew(blockTypeNew),
  _button(button),
  _mapEditor(mapEditor)
{
  _button->setIconSize(QSize(64, 64));
}

ChangeBlockTypeCommand::~ChangeBlockTypeCommand()
{
}

void ChangeBlockTypeCommand::undo()
{
  _blockTypeRef = _blockType;
  QPixmap pixmap = DrawBlockPixmap(_blockType);
  _button->setIcon(pixmap);
}

void ChangeBlockTypeCommand::redo()
{
  _blockTypeRef = _blockTypeNew;
  QPixmap pixmap = DrawBlockPixmap(_blockTypeNew);
  _button->setIcon(pixmap);
}