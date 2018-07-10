#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=c++
CXX=c++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Integer.o \
	${OBJECTDIR}/String.o \
	${OBJECTDIR}/collections/List.o \
	${OBJECTDIR}/collections/ListIterator.o \
	${OBJECTDIR}/collections/ListNode.o \
	${OBJECTDIR}/collections/OrderedDictionary.o \
	${OBJECTDIR}/collections/OrderedDictionaryEntry.o \
	${OBJECTDIR}/interfaces/ICollectible.o \
	${OBJECTDIR}/interfaces/ICollection.o \
	${OBJECTDIR}/interfaces/IDictionary.o \
	${OBJECTDIR}/interfaces/IIterator.o \
	${OBJECTDIR}/interfaces/IKey.o \
	${OBJECTDIR}/interfaces/OrderedKey.o \
	${OBJECTDIR}/test.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-Wextra -ansi -pedantic
CXXFLAGS=-Wextra -ansi -pedantic

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab6-colecciones.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab6-colecciones.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lab6-colecciones ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Integer.o: Integer.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Integer.o Integer.cpp

${OBJECTDIR}/String.o: String.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/String.o String.cpp

${OBJECTDIR}/collections/List.o: collections/List.cpp
	${MKDIR} -p ${OBJECTDIR}/collections
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/collections/List.o collections/List.cpp

${OBJECTDIR}/collections/ListIterator.o: collections/ListIterator.cpp
	${MKDIR} -p ${OBJECTDIR}/collections
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/collections/ListIterator.o collections/ListIterator.cpp

${OBJECTDIR}/collections/ListNode.o: collections/ListNode.cpp
	${MKDIR} -p ${OBJECTDIR}/collections
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/collections/ListNode.o collections/ListNode.cpp

${OBJECTDIR}/collections/OrderedDictionary.o: collections/OrderedDictionary.cpp
	${MKDIR} -p ${OBJECTDIR}/collections
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/collections/OrderedDictionary.o collections/OrderedDictionary.cpp

${OBJECTDIR}/collections/OrderedDictionaryEntry.o: collections/OrderedDictionaryEntry.cpp
	${MKDIR} -p ${OBJECTDIR}/collections
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/collections/OrderedDictionaryEntry.o collections/OrderedDictionaryEntry.cpp

${OBJECTDIR}/interfaces/ICollectible.o: interfaces/ICollectible.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/ICollectible.o interfaces/ICollectible.cpp

${OBJECTDIR}/interfaces/ICollection.o: interfaces/ICollection.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/ICollection.o interfaces/ICollection.cpp

${OBJECTDIR}/interfaces/IDictionary.o: interfaces/IDictionary.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/IDictionary.o interfaces/IDictionary.cpp

${OBJECTDIR}/interfaces/IIterator.o: interfaces/IIterator.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/IIterator.o interfaces/IIterator.cpp

${OBJECTDIR}/interfaces/IKey.o: interfaces/IKey.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/IKey.o interfaces/IKey.cpp

${OBJECTDIR}/interfaces/OrderedKey.o: interfaces/OrderedKey.cpp
	${MKDIR} -p ${OBJECTDIR}/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaces/OrderedKey.o interfaces/OrderedKey.cpp

${OBJECTDIR}/test.o: test.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/test.o test.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
