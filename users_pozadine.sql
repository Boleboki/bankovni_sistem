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
-- Table structure for table `pozadine`
--

DROP TABLE IF EXISTS `pozadine`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pozadine` (
  `id` int NOT NULL,
  `Slika` varchar(100) DEFAULT '',
  `Boja` varchar(45) DEFAULT '',
  PRIMARY KEY (`id`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pozadine`
--

LOCK TABLES `pozadine` WRITE;
/*!40000 ALTER TABLE `pozadine` DISABLE KEYS */;
INSERT INTO `pozadine` VALUES (1,'','#808080'),(2,'','#F0F0F0'),(3,'','#808040'),(4,'','#F0F0F0'),(5,'','#F0F0F0'),(6,'','#F0F0F0'),(8,'','#F0F0F0'),(9,'','#F0F0F0'),(10,'','#000040'),(11,'','#F0F0F0'),(13,'','#F0F0F0'),(15,'','#F0F0F0'),(18,'','#F0F0F0'),(20,'','#F0F0F0'),(23,'','#F0F0F0'),(24,'','#F0F0F0'),(25,'','#F0F0F0'),(27,'','#F0F0F0'),(28,'','#F0F0F0'),(29,'','#F0F0F0'),(30,'','#F0F0F0'),(31,'','#F0F0F0'),(32,'','#F0F0F0'),(33,'','#F0F0F0'),(34,'','#00FFFF'),(35,'','#F0F0F0'),(36,'','#8080FF'),(37,'','#FFFFFF');
/*!40000 ALTER TABLE `pozadine` ENABLE KEYS */;
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
