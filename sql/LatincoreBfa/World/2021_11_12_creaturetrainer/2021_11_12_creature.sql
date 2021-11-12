DROP TABLE IF EXISTS `creature_trainer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `creature_trainer` (
  `CreatureId` int(11) unsigned NOT NULL,
  `TrainerId` int(11) unsigned NOT NULL DEFAULT '0',
  `MenuId` int(10) unsigned NOT NULL DEFAULT '0',
  `OptionIndex` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`CreatureId`,`MenuId`,`OptionIndex`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */
