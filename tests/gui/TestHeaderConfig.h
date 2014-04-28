/*
 * 
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSX_TESTHEADERCONFIG_H
#define KEEPASSX_TESTHEADERCONFIG_H

#include <QObject>

class EntryView;

class TestHeaderConfig : public QObject
{
    Q_OBJECT
            
private Q_SLOTS:
    void initTestCase();
    void init();
    void testKeyNameCorrect();
    void testNoKeyGivesNull();
    void setState();
    void testRestoreState();
    void testChangeSaved();
    void testDifferentViewHasSameState();
    void cleanup();
    
protected:
    TestHeaderConfig(const QString& configHeaderKeyName);
    virtual ~TestHeaderConfig() { }
    virtual EntryView* allocTestClass() = 0;
    
private:
    TestHeaderConfig() { }
    EntryView* m_entryView;
    QString m_headerKeyName;
};


#endif	// KEEPASSX_TESTHEADERCONFIG_H

