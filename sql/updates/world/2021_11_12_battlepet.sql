
CREATE TABLE `battlepet_info` (
  `NpcID` int(10) unsigned NOT NULL,
  `Specie` int(10) unsigned NOT NULL DEFAULT '0',
  `maxlevel` int(10) unsigned NOT NULL DEFAULT '0',
  `minlevel` int(10) unsigned NOT NULL DEFAULT '0',
  `minquality` int(10) unsigned NOT NULL DEFAULT '0',
  `breadsMask` int(10) unsigned NOT NULL DEFAULT '0',
  `Ability1` int(10) unsigned NOT NULL DEFAULT '0',
  `Ability2` int(10) unsigned NOT NULL DEFAULT '0',
  `Ability3` int(10) unsigned NOT NULL DEFAULT '0',
  `Comment` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`NpcID`,`Specie`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
