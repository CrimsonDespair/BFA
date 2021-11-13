-- --------------------------------------------------------
-- Хост:                         127.0.0.1
-- Версия сервера:               5.7.36-log - MySQL Community Server (GPL)
-- Операционная система:         Win64
-- HeidiSQL Версия:              11.3.0.6295
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Дамп структуры базы данных 0bfa_world
DROP DATABASE IF EXISTS `0bfa_world`;
CREATE DATABASE IF NOT EXISTS `0bfa_world` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `0bfa_world`;

-- Дамп структуры для таблица 0bfa_world.creature_trainer
DROP TABLE IF EXISTS `creature_trainer`;
CREATE TABLE IF NOT EXISTS `creature_trainer` (
  `CreatureId` int(11) DEFAULT NULL,
  `TrainerId` int(11) DEFAULT NULL,
  `MenuId` int(11) DEFAULT NULL,
  `OptionIndex` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы 0bfa_world.creature_trainer: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `creature_trainer` DISABLE KEYS */;
/*!40000 ALTER TABLE `creature_trainer` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
