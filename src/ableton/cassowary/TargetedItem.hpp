// Copyright: 2014, Ableton AG, Berlin, all rights reserved

#pragma once

#include <ableton/cassowary/Variable.hpp>
#include <ableton/cassowary/ConstraintItem.hpp>

namespace ableton {
namespace cassowary {

class TargetedItem : public ConstraintItem
{
  Q_OBJECT

public:
  TargetedItem(QQuickItem* pParent = 0,
               Strength::Types strength = Strength::Required,
               double weight = 1.0);

  Q_PROPERTY(ableton::cassowary::Variable* target
             MEMBER mTarget NOTIFY targetChanged)
  Q_SIGNAL void targetChanged(ableton::cassowary::Variable* target);

  Variable* actualTarget();
  Q_SIGNAL void actualTargetChanged(ableton::cassowary::Variable* target);

private:
  QPointer<ableton::cassowary::Variable> mTarget;
};

} // namespace cassowary
} // namespace ableton
