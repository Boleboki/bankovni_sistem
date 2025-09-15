CREATE DATABASE  IF NOT EXISTS `users` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `users`;
-- MySQL dump 10.13  Distrib 8.0.33, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: users
-- ------------------------------------------------------
-- Server version	8.0.33

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `nalozi`
--

DROP TABLE IF EXISTS `nalozi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `nalozi` (
  `id` int NOT NULL AUTO_INCREMENT,
  `korisnicko_ime` varchar(100) NOT NULL,
  `ime` varchar(100) NOT NULL,
  `prezime` varchar(100) NOT NULL,
  `pol` varchar(20) NOT NULL,
  `email` varchar(100) NOT NULL,
  `lozinka` varchar(45) NOT NULL,
  `telefon` varchar(45) DEFAULT '0',
  `jmbg` varchar(45) NOT NULL,
  `datum_rodjenja` varchar(45) NOT NULL,
  `novac` double NOT NULL DEFAULT '0',
  `racun` varchar(20) NOT NULL,
  `datum_otvaranja` varchar(20) NOT NULL,
  `valuta` varchar(10) NOT NULL,
  `adresa` varchar(45) NOT NULL,
  `grad` varchar(45) NOT NULL,
  `postanski_broj` int NOT NULL DEFAULT '0',
  `drzava` varchar(45) NOT NULL,
  `napomena` varchar(100) DEFAULT '',
  `vrsta_naloga` varchar(45) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `email_UNIQUE` (`email`),
  UNIQUE KEY `jmbg_UNIQUE` (`jmbg`),
  UNIQUE KEY `racun_UNIQUE` (`racun`)
) ENGINE=InnoDB AUTO_INCREMENT=38 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `nalozi`
--

LOCK TABLES `nalozi` WRITE;
/*!40000 ALTER TABLE `nalozi` DISABLE KEYS */;
INSERT INTO `nalozi` VALUES (1,'Nikola','Stefan','Kosijer','Musko','kosijer@gmail.com','Kosijer@123','+381 61 5264463','3456798346789','5/1/2003',1226263.256253,'186-1398249353-74','20/5/2023 22:44:21','RSD','Pecka 40','Pozarevac',12000,'Norveska','','Depozitni'),(2,'fsdhshshd_hsdsdhsdh_43','fsdhshshd','hsdsdhsdh','Zensko','hfddfhs@gmsdig.hfds','qNpMm}W9%9au','+373 47 3473743','7343743743473','6/5/1999',0,'520-1061608102-94','21/5/2023 00:07:00','USD','643463463','fdhfddfh',43643,'Albanija','','Depozitni'),(3,'Nidza','Nikola','Bozic','Musko','nikola.bozic21@pozarevackagimnazija.edu.rs','Nidza@123.','+       ','2313141414231','7/4/2000',8598.943181,'934-1345496929-59','21/5/2023 10:51:10','EUR','hsdhsd','hdshd',46336,'Armenija','','Depozitni'),(5,'Andrej_Djuric_63','Andrej','Djuric','Zensko','andrej.djuric21@pozarevackagimnazija.edu.rs','Penis@123.','+452 25 4254245','3246463634346','3/4/2002',343,'316-1059243066-34','21/5/2023 14:29:40','USD','ashdasdh','hasdashd',53223,'Bjelorusija','','Poslovni'),(8,'gsdagasd_gsdaasdg_63','gsdagasd','gsdaasdg','Zensko','nemanja.jablanovic21@pozarevackagimnazija.edu.rs','Nemanja@123','+524 34 5236523','6423463346346','4/3/2002',0,'871-1143180462-80','21/5/2023 14:42:31','USD','643346346','364346',64334,'Andora','','Poslovni'),(9,'Stefan_Tilica_52','Stefan','Tilica','Zensko','stefan.tilica21@pozarevackagimnazija.edu.rs','o3+8%K$4%3*)','+252 35 2523522','5232352356323','5/3/2003',0,'932-1013900314-44','23/5/2023 0:28:26','RSD','64363436563453','35757756',75357,'Albanija','','Depozitni'),(10,'Mateja picka','gfdshdgf','fhdhfds','Zensko','mateja.henc21@pozarevackagimnazija.edu.rs','Mateja@123','+347 73 4347347','3743473474373','2/1/2005',7110.990621,'306-1155612763-35','23/05/2023 22:19:50','EUR','dfhsfdhdfh','hfdsdfh',43663,'Malezija','','Depozitni'),(11,'nikola_bozic_63','nikola','bozic','Musko','nikola@gmail.com','@VphLl.qb2^E','+       ','6433463463463','2/4/2003',8.216384,'279-1368695645-48','25/05/2023 11:26:27','USD','Jugoslavija 18','Pozarevac',12000,'Andora','','Devizni'),(13,'Nikola_Bozic_39','Nikola','Bozic','Musko','nikola123@gmail.com','<zn)65v&5{mN','+       ','4575239032579','3/3/2002',0,'467-1277224642-92','25/05/2023 12:40:44','EUR','Boze Dimitrijevica 148','Pozarevac',12000,'Angola','TEST','Tekuci'),(15,'Nikola_Bozic_52','Nikola','Bozic','Zensko','nikol@gmail.com','z62{3Y?1f#*|','+       ','1512352398523','4/4/2001',0,'754-1153453946-77','25/05/2023 12:53:26','USD','oiuhiogf','fjdsuio',25232,'Alzir','','Devizni'),(18,'fghfg_hddhf_74','fghfg','hddhf','Musko','nikola@gmaidsgfji.fads','%90tFvAqc>LT','+436 63 4346346','4745674574574','2/1/2005',0,'498-1301939274-27','25/05/2023 13:02:33','USD','jhidfgu','hdfssdhf',43623,'Andora','','Poslovni'),(20,'Nikola_Bozic_63','Nikola','Bozic','Zensko','nemanja@gmail.com','X11<zBb#]5aV','+346 36 3463634','6343463434734','2/1/2003',0,'395-1253483794-88','25/05/2023 13:22:06','USD','jiofhfd','hdfghio',74574,'Andora','','Depozitni'),(23,'Nikola_Bozic_74','Nikola','Bozic','Musko','nikola1235@gmail.com','p$<yK<=6gI$e','+152 55 2112512','3473474373747','2/1/2003',0,'107-1179451006-40','25/05/2023 20:48:50','RSD','Adresa','Grad',12000,'Argentina','nemam','Stedni'),(24,'Nikola_Bozic_42','Nikola','Bozic','Musko','nikolica@gmail.com','U|6g+7HS{8I+','+570 98 3511905','4722742742742','3/-1/2002',0,'160-1043477966-86','27/05/2023 17:06:59','USD','Boze Dimitrijevica 148','Pozarevac',12000,'Afganistan','Nemam nikakvih napomena','Devizni'),(25,'Nikola_Bozic_51','Nikola','Bozic','Musko','nidza@gmail.com','Nikola@123','+135 35 1315313','5311351531531','2/5/2004',9.379239,'695-1346618746-22','27/05/2023 21:06:00','EUR','gsdgd','gsdgsd',54112,'Argentina','','Depozitni'),(28,'shdfhduf_sjdfjsfd_43','shdfhduf','sjdfjsfd','Zensko','gjisdf@gsdz.fsd','7mAwTfh3g@5D','+347 34 7347734','4733743473473','5/5/1999',0,'827-1367842391-30','27/05/2023 21:09:10','EUR','sdhfshfdfdh','shfddhf',34634,'Alzir','','Devizni'),(29,'shgdfdhfdfh_hdfssdfh_63','shgdfdhfdfh','hdfssdfh','Musko','hsdfhd@gsd.gsd','bb=8an)T__3v','+643 64 3346346','6343463463463','4/5/2004',0,'816-1059864056-61','27/05/2023 21:17:39','USD','ryessd','sdfhsfhd',25342,'Andora','','Devizni'),(30,'hdgffh_dfhdfh_34','hdgffh','dfhdfh','Zensko','kosijer1@gmail.com','JV-s-!c4S?]&','+643 34 6346436','7345734347345','3/5/2003',0,'770-1168503974-54','27/05/2023 21:18:59','USD','642264264','djgjfg',34563,'Antigva i Barbuda','','Poslovni'),(31,'hfdsdhfs_hshdfhfd_64','hfdsdhfs','hshdfhfd','Zensko','hfdsh@gsdik.sgd','$dX7MUK-1}U1','+       ','4633464633464','1/1/2004',0,'966-1210639080-78','28/05/2023 11:36:58','EUR','346346346','sdhffhs',34563,'Argentina','','Stedni'),(32,'Lule','gddsj','fdjsjs','Zensko','lule@gmail.com','Lule@123','+       ','3535653663533','6/6/1997',0,'321-1264036081-64','29/05/2023 10:53:22','EUR','dhsihudf','fhdhdfsa',63632,'Andora','','Depozitni'),(33,'Nidza','Nikola','Nikolic','Zensko','nikolakvrgic@gmail.com','Nikola@123','+457 47 5475457','7354357347437','1/1/2005',0,'931-1324287474-72','30/05/2023 23:24:08','USD','Fhjdgfhgdfgdj','Fhjdgfjdg',63464,'Albanija','','Stedni'),(34,'Sminka','Luka','Djordjevic','Musko','djordjevicmagija82@gmail.com','Fudbaler@99','+653 45 7545773','3753475347433','3/5/1999',762,'435-1024388702-36','05/06/2023 10:45:49','EUR','Pecka 40','Pozarevac',12000,'Srbija','','Devizni'),(35,'Gnsdiog_Jfdgfgdjfgj_34','Gnsdiog','Jfdgfgdjfgj','Zensko','gsniuoghs@ganids.ghdagadg','e^JA}[!8{9lX','+454 56 3745745','3246734734734','1/8/2001',0,'441-1295431284-62','30/09/2023 12:02:13','USD','Rsdhgsdjj','Sdfgjsdgjgs',36456,'Alzir','','Poslovni'),(37,'Nikola_Bozic_12','Nikola','Bozic','Musko','nikolabozic385@gmail.com','Nikola@123','+518 01 5098091','1487412985712','3/4/1994',0,'134-1245737994-27','01/08/2024 14:45:56','PLN','Gsdgsd','Gasga',41241,'Banglades','','Depozitni');
/*!40000 ALTER TABLE `nalozi` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2025-09-15 15:56:48
