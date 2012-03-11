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
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AsciiRenderable.o \
	${OBJECTDIR}/Piece.o \
	${OBJECTDIR}/Rook.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/UniformBoxAsciiRenderable.o \
	${OBJECTDIR}/Knight.o \
	${OBJECTDIR}/Pawn.o \
	${OBJECTDIR}/Queen.o \
	${OBJECTDIR}/AsciiRenderer.o \
	${OBJECTDIR}/Board.o \
	${OBJECTDIR}/Bishop.o \
	${OBJECTDIR}/King.o \
	${OBJECTDIR}/Square.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chess2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chess2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chess2 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/AsciiRenderable.o: AsciiRenderable.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/AsciiRenderable.o AsciiRenderable.cpp

${OBJECTDIR}/Piece.o: Piece.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Piece.o Piece.cpp

${OBJECTDIR}/Rook.o: Rook.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Rook.o Rook.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/UniformBoxAsciiRenderable.o: UniformBoxAsciiRenderable.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/UniformBoxAsciiRenderable.o UniformBoxAsciiRenderable.cpp

${OBJECTDIR}/Knight.o: Knight.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Knight.o Knight.cpp

${OBJECTDIR}/Pawn.o: Pawn.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Pawn.o Pawn.cpp

${OBJECTDIR}/Queen.o: Queen.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Queen.o Queen.cpp

${OBJECTDIR}/AsciiRenderer.o: AsciiRenderer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/AsciiRenderer.o AsciiRenderer.cpp

${OBJECTDIR}/Board.o: Board.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Board.o Board.cpp

${OBJECTDIR}/Bishop.o: Bishop.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Bishop.o Bishop.cpp

${OBJECTDIR}/King.o: King.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/King.o King.cpp

${OBJECTDIR}/Square.o: Square.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/opt/local/include -MMD -MP -MF $@.d -o ${OBJECTDIR}/Square.o Square.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chess2

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
