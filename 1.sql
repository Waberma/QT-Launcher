--
-- ���� ������������ � ������� SQLiteStudio v3.3.3 � �� ��� 26 23:43:47 2023
--
-- �������������� ��������� ������: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- �������: MenuItems
DROP TABLE IF EXISTS MenuItems;
CREATE TABLE MenuItems (ID integer PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, Title, Name, Parent integer, AppName, Role);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (1, '����������', 'Q_OBJECT', NULL, NULL, NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (2, '�����������������', 'Q_OBJECT', NULL, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (3, '������', 'Q_OBJECT', NULL, NULL, NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (4, '�������', 'Q_OBJECT', 1, 'DairyApp', NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (8, '���� ������', 'Q_OBJECT', 2, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (9, '������ 1', 'Q_OBJECT', 3, NULL, NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (10, '������ 2', 'Q_OBJECT', 3, 'Fill2App', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (12, '������������', 'Q_OBJECT', 8, 'UserDBApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (14, '������12', 'Q_OBJECT', 9, NULL, NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (15, '������123', 'Q_OBJECT', 14, NULL, NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (16, '������1234', 'Q_OBJECT', 15, 'FillApp', NULL);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (17, '����������', 'Q_OBJECT', 1, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (24, '����', 'Q_OBJECT', 8, 'RoleDBApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (25, '������� ����', 'Q_OBJECT', 8, 'MenuDBApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (26, '�������', 'Q_OBJECT', 17, 'TableApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (27, '�������', 'Pagination', NULL, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (28, '���������', 'Pagination', 27, 'SettingApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (29, 'P1', 'Pagination', 27, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (30, 'P2', 'Pagination', 29, 'qwe', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (31, '������', 'Q_OBJECT', 2, 'ImpApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (35, '�����������', 'Calculate', 17, 'CalculateApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (36, '����� ����', 'Calculate', 38, 'CalculateApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (37, '������ 7', 'Calculate', 38, 'CalculateApp', 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (38, '�����������', 'Calculate', NULL, NULL, 1);
INSERT INTO MenuItems (ID, Title, Name, Parent, AppName, Role) VALUES (40, '������', 'Q_OBJECT', 1, 'PlugApp', 1);

-- �������: Person
DROP TABLE IF EXISTS Person;
CREATE TABLE Person (ID integer PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, Login STRING, Pass STRING, FIO STRING, IsActive BOOLEAN);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (1, 'Lol', 'Qew', '������� �.�.', 1);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (2, 123, 'WWW', '������� �.�', 1);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (3, 'User', 345, '�������� �.�.', 1);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (4, 1234, 123, '������ �.�.', 1);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (5, 'Bob', 321, '��������� �.�.', 1);
INSERT INTO Person (ID, Login, Pass, FIO, IsActive) VALUES (6, 'Lim', 'Lim', NULL, 0);

-- �������: Role
DROP TABLE IF EXISTS Role;
CREATE TABLE Role (ID integer PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, name);
INSERT INTO Role (ID, name) VALUES (1, '��������');
INSERT INTO Role (ID, name) VALUES (2, '�������������');
INSERT INTO Role (ID, name) VALUES (3, '��������');
INSERT INTO Role (ID, name) VALUES (4, '������� ��������');

-- �������: RoleItems
DROP TABLE IF EXISTS RoleItems;
CREATE TABLE RoleItems (ID integer PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, ItemID INTEGER REFERENCES MenuItems (ID) ON DELETE CASCADE ON UPDATE CASCADE, RoleID INTEGER REFERENCES Role (ID) ON DELETE CASCADE ON UPDATE CASCADE);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (99, 17, 1);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (101, 26, 1);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (102, 40, 1);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (103, 2, 2);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (108, 8, 2);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (109, 40, 2);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (111, 2, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (112, 35, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (114, 37, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (115, 36, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (116, 8, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (117, 25, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (118, 24, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (119, 40, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (120, 31, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (121, 12, 3);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (124, 17, 4);
INSERT INTO RoleItems (ID, ItemID, RoleID) VALUES (126, 40, 4);

-- �������: RolePerson
DROP TABLE IF EXISTS RolePerson;
CREATE TABLE RolePerson (ID integer PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE, PersonID INTEGER REFERENCES Person (ID) ON DELETE CASCADE ON UPDATE CASCADE, RoleID INTEGER REFERENCES Role (ID) ON DELETE CASCADE ON UPDATE CASCADE);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (1, 2, 1);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (3, 3, 3);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (4, 2, 2);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (27, 5, 1);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (37, 3, 4);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (51, 1, 1);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (52, 1, 4);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (53, 1, 2);
INSERT INTO RolePerson (ID, PersonID, RoleID) VALUES (54, 1, 3);

-- �������: TrigerInfo
DROP TABLE IF EXISTS TrigerInfo;
CREATE TABLE TrigerInfo (ID INTEGER PRIMARY KEY UNIQUE NOT NULL, Login STRING, Operation STRING, Date STRING);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
