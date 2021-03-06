-- Delete data from npc_trainer (not using it anymore)
DELETE FROM `npc_trainer` WHERE (`ID` = 136063);

DELETE FROM `creature_trainer` WHERE `CreatureId` = '136063';
INSERT INTO `creature_trainer`(`CreatureId`, `TrainerId`, `MenuId`, `OptionIndex`) VALUES (136063, 996, 23262, 0);

-- Define trainer
DELETE FROM `trainer` WHERE `Id` = '996';
INSERT INTO `trainer`(`Id`, `Type`, `Greeting`, `VerifiedBuild`) VALUES (996, 2, 'Welcome!', 35662);

-- DELETE old spells (there should be none since this is a new trainer id).
DELETE FROM `trainer_spell` WHERE `TrainerId` = '996';
INSERT INTO `trainer_spell` (`TrainerId`, `SpellId`, `MoneyCost`, `ReqSkillLine`, `ReqSkillRank`, `ReqLevel`) VALUES
('996', '2108', '10', '0', '0', '0'),
('996', '256748', '10', '165', '15', '0'),
('996', '256749', '100', '2525', '50', '0'),
('996', '256751', '100', '2525', '50', '0'),
('996', '256752', '10', '2525', '25', '0'),
('996', '256754', '100', '2525', '50', '0'),
('996', '256755', '10', '2525', '15', '0'),
('996', '256758', '10', '2525', '15', '0'),
('996', '256759', '100', '2525', '50', '0'),
('996', '256760', '10', '2525', '25', '0'),
('996', '256761', '100', '2525', '50', '0'),
('996', '256763', '100', '2525', '50', '0'),
('996', '256764', '10', '2525', '15', '0'),
('996', '256765', '1750', '2525', '150', '0'),
('996', '256768', '1750', '2525', '150', '0'),
('996', '256771', '1750', '2525', '150', '0'),
('996', '256774', '1750', '2525', '150', '0'),
('996', '256777', '10', '2525', '25', '0'),
('996', '256778', '10', '2525', '25', '0'),
('996', '256779', '525', '2525', '100', '0'),
('996', '256780', '1000', '2525', '115', '0'),
('996', '256782', '525', '2525', '100', '0'),
('996', '256783', '1000', '2525', '115', '0'),
('996', '256787', '525', '2525', '100', '0'),
('996', '256788', '1000', '2525', '115', '0'),
('996', '256790', '200', '2525', '85', '0'),
('996', '256791', '350', '2525', '150', '0'),
('996', '256792', '200', '2525', '85', '0'),
('996', '256793', '200', '2525', '75', '0'),
('996', '264593', '10', '165', '1', '0'),
('996', '269516', '525', '2525', '100', '0'),
('996', '269519', '525', '2525', '100', '0'),
('996', '269522', '525', '2525', '100', '0'),
('996', '269525', '525', '2525', '100', '0'),
('996', '269528', '525', '2525', '100', '0'),
('996', '269531', '525', '2525', '100', '0'),
('996', '269534', '525', '2525', '100', '0'),
('996', '269537', '525', '2525', '100', '0'),
('996', '269540', '525', '2525', '100', '0'),
('996', '269543', '525', '2525', '100', '0'),
('996', '269552', '525', '2525', '100', '0'),
('996', '272278', '200', '2525', '60', '0'),
('996', '276256', '350', '2525', '95', '0'),
('996', '278423', '350', '2525', '95', '0'),
('996', '282277', '1750', '2525', '135', '0'),
('996', '282287', '1750', '2525', '135', '0'),
('996', '282290', '1750', '2525', '135', '0'),
('996', '282302', '1750', '2525', '135', '0'),
('996', '282306', '1750', '2525', '135', '0'),
('996', '282309', '1750', '2525', '135', '0'),
('996', '282312', '1750', '2525', '135', '0'),
('996', '282318', '1750', '2525', '135', '0'),
('996', '282321', '1750', '2525', '135', '0'),
('996', '282324', '1750', '2525', '135', '0'),
('996', '282327', '1750', '2525', '135', '0'),
('996', '285079', '2000', '2525', '150', '0'),
('996', '285080', '2000', '2525', '150', '0'),
('996', '285083', '2000', '2525', '150', '0'),
('996', '285084', '2000', '2525', '150', '0'),
('996', '285895', '525', '2525', '100', '0'),
('996', '286019', '525', '2525', '110', '0'),
('996', '286652', '10', '2525', '1', '0'),
('996', '287273', '10', '2525', '1', '0'),
('996', '304412', '13000', '2525', '165', '0'),
('996', '304415', '13000', '2525', '165', '0'),
('996', '304418', '13000', '2525', '165', '0'),
('996', '304421', '13000', '2525', '165', '0'),
('996', '304424', '13000', '2525', '165', '0'),
('996', '304427', '13000', '2525', '165', '0'),
('996', '304430', '13000', '2525', '165', '0'),
('996', '304433', '13000', '2525', '165', '0'),
('996', '304436', '13000', '2525', '165', '0'),
('996', '304439', '13000', '2525', '165', '0'),
('996', '304442', '13000', '2525', '165', '0'),
('996', '330216', '10', '2525', '1', '0'),
('996', '330218', '10', '2525', '1', '0'),
('996', '330219', '10', '2525', '1', '0'),
('996', '330220', '10', '2525', '1', '0'),
('996', '330221', '10', '2525', '1', '0');
