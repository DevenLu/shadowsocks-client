// Copyright (c) 2015 LiuLang. All rights reserved.
// Use of this source is governed by General Public License that can be found
// in the LICENSE file.

// copy from deepin-system-monitor
#ifndef SERVICE_BACKEND_CHINESE2PINYIN_H_
#define SERVICE_BACKEND_CHINESE2PINYIN_H_

#include <QString>

namespace Pinyin {
    QString Chinese2Pinyin(const QString& words);
    QStringList splitChineseToPinyin(QString &pinyin);
    QStringList splitChinese(QString &pinyin);
}

#endif  // SERVICE_BACKEND_CHINESE2PINYIN_H_
