[33mcommit 422365dcea944af82be4fb1fb7cde62bd24b621d[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m)[m
Author: Dmitrii <dmitri_ch@list.ru>
Date:   Sun Jul 21 19:38:51 2024 +0300

    Добавить класс составного ключа ParticipantPK

[1mdiff --git a/src/main/java/ru/eventplanner/eventmanagementservice/participant/ParticipantPK.java b/src/main/java/ru/eventplanner/eventmanagementservice/participant/ParticipantPK.java[m
[1mnew file mode 100644[m
[1mindex 0000000..d35562b[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/ru/eventplanner/eventmanagementservice/participant/ParticipantPK.java[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mpackage ru.eventplanner.eventmanagementservice.participant;[m
[32m+[m
[32m+[m[32mimport lombok.Data;[m
[32m+[m[32mimport lombok.NoArgsConstructor;[m
[32m+[m
[32m+[m[32mimport java.io.Serializable;[m
[32m+[m
[32m+[m[32m@Data[m
[32m+[m[32m@NoArgsConstructor[m
[32m+[m[32mpublic class ParticipantPK implements Serializable {[m
[32m+[m[32m    private Long eventId;[m
[32m+[m[32m    private String userId;[m
[32m+[m[32m}[m

[33mcommit caee00f5d2fc2d866aca22b493941f891a5d37c3[m[33m ([m[1;31morigin/main[m[33m)[m
Author: Dmitrii <dmitri_ch@list.ru>
Date:   Sun Jul 21 19:02:52 2024 +0300

    init

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..549e00a[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,33 @@[m
[32m+[m[32mHELP.md[m
[32m+[m[32mtarget/[m
[32m+[m[32m!.mvn/wrapper/maven-wrapper.jar[m
[32m+[m[32m!**/src/main/**/target/[m
[32m+[m[32m!**/src/test/**/target/[m
[32m+[m
[32m+[m[32m### STS ###[m
[32m+[m[32m.apt_generated[m
[32m+[m[32m.classpath[m
[32m+[m[32m.factorypath[m
[32m+[m[32m.project[m
[32m+[m[32m.settings[m
[32m+[m[32m.springBeans[m
[32m+[m[32m.sts4-cache[m
[32m+[m
[32m+[m[32m### IntelliJ IDEA ###[m
[32m+[m[32m.idea[m
[32m+[m[32m*.iws[m
[32m+[m[32m*.iml[m
[32m+[m[32m*.ipr[m
[32m+[m
[32m+[m[32m### NetBeans ###[m
[32m+[m[32m/nbproject/private/[m
[32m+[m[32m/nbbuild/[m
[32m+[m[32m/dist/[m
[32m+[m[32m/nbdist/[m
[32m+[m[32m/.nb-gradle/[m
[32m+[m[32mbuild/[m
[32m+[m[32m!**/src/main/**/build/[m
[32m+[m[32m!**/src/test/**/build/[m
[32m+[m
[32m+[m[32m### VS Code ###[m
[32m+[m[32m.vscode/[m
[1mdiff --git a/.mvn/wrapper/maven-wrapper.properties b/.mvn/wrapper/maven-wrapper.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..8f96f52[m
[1m--- /dev/null[m
[1m+++ b/.mvn/wrapper/maven-wrapper.properties[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m# Licensed to the Apache Software Foundation (ASF) under one[m
[32m+[m[32m# or more contributor license agreements.  See the NOTICE file[m
[32m+[m[32m# distributed with this work for additional information[m
[32m+[m[32m# regarding copyright ownership.  The ASF licenses this file[m
[32m+[m[32m# to you under the Apache License, Version 2.0 (the[m
[32m+[m[32m# "License"); you may not use this file except in compliance[m
[32m+[m[32m# with the License.  You may obtain a copy of the License at[m
[32m+[m[32m#[m
[32m+[m[32m#   https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m#[m
[32m+[m[32m# Unless required by applicable law or agreed to in writing,[m
[32m+[m[32m# software distributed under the License is distributed on an[m
[32m+[m[32m# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY[m
[32m+[m[32m# KIND, either express or implied.  See the License for the[m
[32m+[m[32m# specific language governing permissions and limitations[m
[32m+[m[32m# under the License.[m
[32m+[m[32mwrapperVersion=3.3.2[m
[32m+[m[32mdistributionType=only-script[m
[32m+[m[32mdistributionUrl=https://repo.maven.apache.org/maven2/org/apache/maven/apache-maven/3.9.7/apache-maven-3.9.7-bin.zip[m
[1mdiff --git a/mvnw b/mvnw[m
[1mnew file mode 100644[m
[1mindex 0000000..d7c358e[m
[1m--- /dev/null[m
[1m+++ b/mvnw[m
[36m@@ -0,0 +1,259 @@[m
[32m+[m[32m#!/bin/sh[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m[32m# Licensed to the Apache Software Foundation (ASF) under one[m
[32m+[m[32m# or more contributor license agreements.  See the NOTICE file[m
[32m+[m[32m# distributed with this work for additional information[m
[32m+[m[32m# regarding copyright ownership.  The ASF licenses this file[m
[32m+[m[32m# to you under the Apache License, Version 2.0 (the[m
[32m+[m[32m# "License"); you may not use this file except in compliance[m
[32m+[m[32m# with the License.  You may obtain a copy of the License at[m
[32m+[m[32m#[m
[32m+[m[32m#    https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m#[m
[32m+[m[32m# Unless required by applicable law or agreed to in writing,[m
[32m+[m[32m# software distributed under the License is distributed on an[m
[32m+[m[32m# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY[m
[32m+[m[32m# KIND, either express or implied.  See the License for the[m
[32m+[m[32m# specific language governing permissions and limitations[m
[32m+[m[32m# under the License.[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m[32m# Apache Maven Wrapper startup batch script, version 3.3.2[m
[32m+[m[32m#[m
[32m+[m[32m# Optional ENV vars[m
[32m+[m[32m# -----------------[m
[32m+[m[32m#   JAVA_HOME - location of a JDK home dir, required when download maven via java source[m
[32m+[m[32m#   MVNW_REPOURL - repo url base for downloading maven distribution[m
[32m+[m[32m#   MVNW_USERNAME/MVNW_PASSWORD - user and password for downloading maven[m
[32m+[m[32m#   MVNW_VERBOSE - true: enable verbose log; debug: trace the mvnw script; others: silence the output[m
[32m+[m[32m# ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32mset -euf[m
[32m+[m[32m[ "${MVNW_VERBOSE-}" != debug ] || set -x[m
[32m+[m
[32m+[m[32m# OS specific support.[m
[32m+[m[32mnative_path() { printf %s\\n "$1"; }[m
[32m+[m[32mcase "$(uname)" in[m
[32m+[m[32mCYGWIN* | MINGW*)[m
[32m+[m[32m  [ -z "${JAVA_HOME-}" ] || JAVA_HOME="$(cygpath --unix "$JAVA_HOME")"[m
[32m+[m[32m  native_path() { cygpath --path --windows "$1"; }[m
[32m+[m[32m  ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32m# set JAVACMD and JAVACCMD[m
[32m+[m[32mset_java_home() {[m
[32m+[m[32m  # For Cygwin and MinGW, ensure paths are in Unix format before anything is touched[m
[32m+[m[32m  if [ -n "${JAVA_HOME-}" ]; then[m
[32m+[m[32m    if [ -x "$JAVA_HOME/jre/sh/java" ]; then[m
[32m+[m[32m      # IBM's JDK on AIX uses strange locations for the executables[m
[32m+[m[32m      JAVACMD="$JAVA_HOME/jre/sh/java"[m
[32m+[m[32m      JAVACCMD="$JAVA_HOME/jre/sh/javac"[m
[32m+[m[32m    else[m
[32m+[m[32m      JAVACMD="$JAVA_HOME/bin/java"[m
[32m+[m[32m      JAVACCMD="$JAVA_HOME/bin/javac"[m
[32m+[m
[32m+[m[32m      if [ ! -x "$JAVACMD" ] || [ ! -x "$JAVACCMD" ]; then[m
[32m+[m[32m        echo "The JAVA_HOME environment variable is not defined correctly, so mvnw cannot run." >&2[m
[32m+[m[32m        echo "JAVA_HOME is set to \"$JAVA_HOME\", but \"\$JAVA_HOME/bin/java\" or \"\$JAVA_HOME/bin/javac\" does not exist." >&2[m
[32m+[m[32m        return 1[m
[32m+[m[32m      fi[m
[32m+[m[32m    fi[m
[32m+[m[32m  else[m
[32m+[m[32m    JAVACMD="$([m
[32m+[m[32m      'set' +e[m
[32m+[m[32m      'unset' -f command 2>/dev/null[m
[32m+[m[32m      'command' -v java[m
[32m+[m[32m    )" || :[m
[32m+[m[32m    JAVACCMD="$([m
[32m+[m[32m      'set' +e[m
[32m+[m[32m      'unset' -f command 2>/dev/null[m
[32m+[m[32m      'command' -v javac[m
[32m+[m[32m    )" || :[m
[32m+[m
[32m+[m[32m    if [ ! -x "${JAVACMD-}" ] || [ ! -x "${JAVACCMD-}" ]; then[m
[32m+[m[32m      echo "The java/javac command does not exist in PATH nor is JAVA_HOME set, so mvnw cannot run." >&2[m
[32m+[m[32m      return 1[m
[32m+[m[32m    fi[m
[32m+[m[32m  fi[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# hash string like Java String::hashCode[m
[32m+[m[32mhash_string() {[m
[32m+[m[32m  str="${1:-}" h=0[m
[32m+[m[32m  while [ -n "$str" ]; do[m
[32m+[m[32m    char="${str%"${str#?}"}"[m
[32m+[m[32m    h=$(((h * 31 + $(LC_CTYPE=C printf %d "'$char")) % 4294967296))[m
[32m+[m[32m    str="${str#?}"[m
[32m+[m[32m  done[m
[32m+[m[32m  printf %x\\n $h[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mverbose() { :; }[m
[32m+[m[32m[ "${MVNW_VERBOSE-}" != true ] || verbose() { printf %s\\n "${1-}"; }[m
[32m+[m
[32m+[m[32mdie() {[m
[32m+[m[32m  printf %s\\n "$1" >&2[m
[32m+[m[32m  exit 1[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtrim() {[m
[32m+[m[32m  # MWRAPPER-139:[m
[32m+[m[32m  #   Trims trailing and leading whitespace, carriage returns, tabs, and linefeeds.[m
[32m+[m[32m  #   Needed for removing poorly interpreted newline sequences when running in more[m
[32m+[m[32m  #   exotic environments such as mingw bash on Windows.[m
[32m+[m[32m  printf "%s" "${1}" | tr -d '[:space:]'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# parse distributionUrl and optional distributionSha256Sum, requires .mvn/wrapper/maven-wrapper.properties[m
[32m+[m[32mwhile IFS="=" read -r key value; do[m
[32m+[m[32m  case "${key-}" in[m
[32m+[m[32m  distributionUrl) distributionUrl=$(trim "${value-}") ;;[m
[32m+[m[32m  distributionSha256Sum) distributionSha256Sum=$(trim "${value-}") ;;[m
[32m+[m[32m  esac[m
[32m+[m[32mdone <"${0%/*}/.mvn/wrapper/maven-wrapper.properties"[m
[32m+[m[32m[ -n "${distributionUrl-}" ] || die "cannot read distributionUrl property in ${0%/*}/.mvn/wrapper/maven-wrapper.properties"[m
[32m+[m
[32m+[m[32mcase "${distributionUrl##*/}" in[m
[32m+[m[32mmaven-mvnd-*bin.*)[m
[32m+[m[32m  MVN_CMD=mvnd.sh _MVNW_REPO_PATTERN=/maven/mvnd/[m
[32m+[m[32m  case "${PROCESSOR_ARCHITECTURE-}${PROCESSOR_ARCHITEW6432-}:$(uname -a)" in[m
[32m+[m[32m  *AMD64:CYGWIN* | *AMD64:MINGW*) distributionPlatform=windows-amd64 ;;[m
[32m+[m[32m  :Darwin*x86_64) distributionPlatform=darwin-amd64 ;;[m
[32m+[m[32m  :Darwin*arm64) distributionPlatform=darwin-aarch64 ;;[m
[32m+[m[32m  :Linux*x86_64*) distributionPlatform=linux-amd64 ;;[m
[32m+[m[32m  *)[m
[32m+[m[32m    echo "Cannot detect native platform for mvnd on $(uname)-$(uname -m), use pure java version" >&2[m
[32m+[m[32m    distributionPlatform=linux-amd64[m
[32m+[m[32m    ;;[m
[32m+[m[32m  esac[m
[32m+[m[32m  distributionUrl="${distributionUrl%-bin.*}-$distributionPlatform.zip"[m
[32m+[m[32m  ;;[m
[32m+[m[32mmaven-mvnd-*) MVN_CMD=mvnd.sh _MVNW_REPO_PATTERN=/maven/mvnd/ ;;[m
[32m+[m[32m*) MVN_CMD="mvn${0##*/mvnw}" _MVNW_REPO_PATTERN=/org/apache/maven/ ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32m# apply MVNW_REPOURL and calculate MAVEN_HOME[m
[32m+[m[32m# maven home pattern: ~/.m2/wrapper/dists/{apache-maven-<version>,maven-mvnd-<version>-<platform>}/<hash>[m
[32m+[m[32m[ -z "${MVNW_REPOURL-}" ] || distributionUrl="$MVNW_REPOURL$_MVNW_REPO_PATTERN${distributionUrl#*"$_MVNW_REPO_PATTERN"}"[m
[32m+[m[32mdistributionUrlName="${distributionUrl##*/}"[m
[32m+[m[32mdistributionUrlNameMain="${distributionUrlName%.*}"[m
[32m+[m[32mdistributionUrlNameMain="${distributionUrlNameMain%-bin}"[m
[32m+[m[32mMAVEN_USER_HOME="${MAVEN_USER_HOME:-${HOME}/.m2}"[m
[32m+[m[32mMAVEN_HOME="${MAVEN_USER_HOME}/wrapper/dists/${distributionUrlNameMain-}/$(hash_string "$distributionUrl")"[m
[32m+[m
[32m+[m[32mexec_maven() {[m
[32m+[m[32m  unset MVNW_VERBOSE MVNW_USERNAME MVNW_PASSWORD MVNW_REPOURL || :[m
[32m+[m[32m  exec "$MAVEN_HOME/bin/$MVN_CMD" "$@" || die "cannot exec $MAVEN_HOME/bin/$MVN_CMD"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif [ -d "$MAVEN_HOME" ]; then[m
[32m+[m[32m  verbose "found existing MAVEN_HOME at $MAVEN_HOME"[m
[32m+[m[32m  exec_maven "$@"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mcase "${distributionUrl-}" in[m
[32m+[m[32m*?-bin.zip | *?maven-mvnd-?*-?*.zip) ;;[m
[32m+[m[32m*) die "distributionUrl is not valid, must match *-bin.zip or maven-mvnd-*.zip, but found '${distributionUrl-}'" ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32m# prepare tmp dir[m
[32m+[m[32mif TMP_DOWNLOAD_DIR="$(mktemp -d)" && [ -d "$TMP_DOWNLOAD_DIR" ]; then[m
[32m+[m[32m  clean() { rm -rf -- "$TMP_DOWNLOAD_DIR"; }[m
[32m+[m[32m  trap clean HUP INT TERM EXIT[m
[32m+[m[32melse[m
[32m+[m[32m  die "cannot create temp dir"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mmkdir -p -- "${MAVEN_HOME%/*}"[m
[32m+[m
[32m+[m[32m# Download and Install Apache Maven[m
[32m+[m[32mverbose "Couldn't find MAVEN_HOME, downloading and installing it ..."[m
[32m+[m[32mverbose "Downloading from: $distributionUrl"[m
[32m+[m[32mverbose "Downloading to: $TMP_DOWNLOAD_DIR/$distributionUrlName"[m
[32m+[m
[32m+[m[32m# select .zip or .tar.gz[m
[32m+[m[32mif ! command -v unzip >/dev/null; then[m
[32m+[m[32m  distributionUrl="${distributionUrl%.zip}.tar.gz"[m
[32m+[m[32m  distributionUrlName="${distributionUrl##*/}"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# verbose opt[m
[32m+[m[32m__MVNW_QUIET_WGET=--quiet __MVNW_QUIET_CURL=--silent __MVNW_QUIET_UNZIP=-q __MVNW_QUIET_TAR=''[m
[32m+[m[32m[ "${MVNW_VERBOSE-}" != true ] || __MVNW_QUIET_WGET='' __MVNW_QUIET_CURL='' __MVNW_QUIET_UNZIP='' __MVNW_QUIET_TAR=v[m
[32m+[m
[32m+[m[32m# normalize http auth[m
[32m+[m[32mcase "${MVNW_PASSWORD:+has-password}" in[m
[32m+[m[32m'') MVNW_USERNAME='' MVNW_PASSWORD='' ;;[m
[32m+[m[32mhas-password) [ -n "${MVNW_USERNAME-}" ] || MVNW_USERNAME='' MVNW_PASSWORD='' ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32mif [ -z "${MVNW_USERNAME-}" ] && command -v wget >/dev/null; then[m
[32m+[m[32m  verbose "Found wget ... using wget"[m
[32m+[m[32m  wget ${__MVNW_QUIET_WGET:+"$__MVNW_QUIET_WGET"} "$distributionUrl" -O "$TMP_DOWNLOAD_DIR/$distributionUrlName" || die "wget: Failed to fetch $distributionUrl"[m
[32m+[m[32melif [ -z "${MVNW_USERNAME-}" ] && command -v curl >/dev/null; then[m
[32m+[m[32m  verbose "Found curl ... using curl"[m
[32m+[m[32m  curl ${__MVNW_QUIET_CURL:+"$__MVNW_QUIET_CURL"} -f -L -o "$TMP_DOWNLOAD_DIR/$distributionUrlName" "$distributionUrl" || die "curl: Failed to fetch $distributionUrl"[m
[32m+[m[32melif set_java_home; then[m
[32m+[m[32m  verbose "Falling back to use Java to download"[m
[32m+[m[32m  javaSource="$TMP_DOWNLOAD_DIR/Downloader.java"[m
[32m+[m[32m  targetZip="$TMP_DOWNLOAD_DIR/$distributionUrlName"[m
[32m+[m[32m  cat >"$javaSource" <<-END[m
[32m+[m	[32mpublic class Downloader extends java.net.Authenticator[m
[32m+[m	[32m{[m
[32m+[m	[32m  protected java.net.PasswordAuthentication getPasswordAuthentication()[m
[32m+[m	[32m  {[m
[32m+[m	[32m    return new java.net.PasswordAuthentication( System.getenv( "MVNW_USERNAME" ), System.getenv( "MVNW_PASSWORD" ).toCharArray() );[m
[32m+[m	[32m  }[m
[32m+[m	[32m  public static void main( String[] args ) throws Exception[m
[32m+[m	[32m  {[m
[32m+[m	[32m    setDefault( new Downloader() );[m
[32m+[m	[32m    java.nio.file.Files.copy( java.net.URI.create( args[0] ).toURL().openStream(), java.nio.file.Paths.get( args[1] ).toAbsolutePath().normalize() );[m
[32m+[m	[32m  }[m
[32m+[m	[32m}[m
[32m+[m	[32mEND[m
[32m+[m[32m  # For Cygwin/MinGW, switch paths to Windows format before running javac and java[m
[32m+[m[32m  verbose " - Compiling Downloader.java ..."[m
[32m+[m[32m  "$(native_path "$JAVACCMD")" "$(native_path "$javaSource")" || die "Failed to compile Downloader.java"[m
[32m+[m[32m  verbose " - Running Downloader.java ..."[m
[32m+[m[32m  "$(native_path "$JAVACMD")" -cp "$(native_path "$TMP_DOWNLOAD_DIR")" Downloader "$distributionUrl" "$(native_path "$targetZip")"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# If specified, validate the SHA-256 sum of the Maven distribution zip file[m
[32m+[m[32mif [ -n "${distributionSha256Sum-}" ]; then[m
[32m+[m[32m  distributionSha256Result=false[m
[32m+[m[32m  if [ "$MVN_CMD" = mvnd.sh ]; then[m
[32m+[m[32m    echo "Checksum validation is not supported for maven-mvnd." >&2[m
[32m+[m[32m    echo "Please disable validation by removing 'distributionSha256Sum' from your maven-wrapper.properties." >&2[m
[32m+[m[32m    exit 1[m
[32m+[m[32m  elif command -v sha256sum >/dev/null; then[m
[32m+[m[32m    if echo "$distributionSha256Sum  $TMP_DOWNLOAD_DIR/$distributionUrlName" | sha256sum -c >/dev/null 2>&1; then[m
[32m+[m[32m      distributionSha256Result=true[m
[32m+[m[32m    fi[m
[32m+[m[32m  elif command -v shasum >/dev/null; then[m
[32m+[m[32m    if echo "$distributionSha256Sum  $TMP_DOWNLOAD_DIR/$distributionUrlName" | shasum -a 256 -c >/dev/null 2>&1; then[m
[32m+[m[32m      distributionSha256Result=true[m
[32m+[m[32m    fi[m
[32m+[m[32m  else[m
[32m+[m[32m    echo "Checksum validation was requested but neither 'sha256sum' or 'shasum' are available." >&2[m
[32m+[m[32m    echo "Please install either command, or disable validation by removing 'distributionSha256Sum' from your maven-wrapper.properties." >&2[m
[32m+[m[32m    exit 1[m
[32m+[m[32m  fi[m
[32m+[m[32m  if [ $distributionSha256Result = false ]; then[m
[32m+[m[32m    echo "Error: Failed to validate Maven distribution SHA-256, your Maven distribution might be compromised." >&2[m
[32m+[m[32m    echo "If you updated your Maven version, you need to update the specified distributionSha256Sum property." >&2[m
[32m+[m[32m    exit 1[m
[32m+[m[32m  fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# unzip and move[m
[32m+[m[32mif command -v unzip >/dev/null; then[m
[32m+[m[32m  unzip ${__MVNW_QUIET_UNZIP:+"$__MVNW_QUIET_UNZIP"} "$TMP_DOWNLOAD_DIR/$distributionUrlName" -d "$TMP_DOWNLOAD_DIR" || die "failed to unzip"[m
[32m+[m[32melse[m
[32m+[m[32m  tar xzf${__MVNW_QUIET_TAR:+"$__MVNW_QUIET_TAR"} "$TMP_DOWNLOAD_DIR/$distributionUrlName" -C "$TMP_DOWNLOAD_DIR" || die "failed to untar"[m
[32m+[m[32mfi[m
[32m+[m[32mprintf %s\\n "$distributionUrl" >"$TMP_DOWNLOAD_DIR/$distributionUrlNameMain/mvnw.url"[m
[32m+[m[32mmv -- "$TMP_DOWNLOAD_DIR/$distributionUrlNameMain" "$MAVEN_HOME" || [ -d "$MAVEN_HOME" ] || die "fail to move MAVEN_HOME"[m
[32m+[m
[32m+[m[32mclean || :[m
[32m+[m[32mexec_maven "$@"[m
[1mdiff --git a/mvnw.cmd b/mvnw.cmd[m
[1mnew file mode 100644[m
[1mindex 0000000..6f779cf[m
[1m--- /dev/null[m
[1m+++ b/mvnw.cmd[m
[36m@@ -0,0 +1,149 @@[m
[32m+[m[32m<# : batch portion[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m[32m@REM Licensed to the Apache Software Foundation (ASF) under one[m
[32m+[m[32m@REM or more contributor license agreements.  See the NOTICE file[m
[32m+[m[32m@REM distributed with this work for additional information[m
[32m+[m[32m@REM regarding copyright ownership.  The ASF licenses this file[m
[32m+[m[32m@REM to you under the Apache License, Version 2.0 (the[m
[32m+[m[32m@REM "License"); you may not use this file except in compliance[m
[32m+[m[32m@REM with the License.  You may obtain a copy of the License at[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM    https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM Unless required by applicable law or agreed to in writing,[m
[32m+[m[32m@REM software distributed under the License is distributed on an[m
[32m+[m[32m@REM "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY[m
[32m+[m[32m@REM KIND, either express or implied.  See the License for the[m
[32m+[m[32m@REM specific language governing permissions and limitations[m
[32m+[m[32m@REM under the License.[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m[32m@REM Apache Maven Wrapper startup batch script, version 3.3.2[m
[32m+[m[32m@REM[m
[32m+[m[32m@REM Optional ENV vars[m
[32m+[m[32m@REM   MVNW_REPOURL - repo url base for downloading maven distribution[m
[32m+[m[32m@REM   MVNW_USERNAME/MVNW_PASSWORD - user and password for downloading maven[m
[32m+[m[32m@REM   MVNW_VERBOSE - true: enable verbose log; others: silence the output[m
[32m+[m[32m@REM ----------------------------------------------------------------------------[m
[32m+[m
[32m+[m[32m@IF "%__MVNW_ARG0_NAME__%"=="" (SET __MVNW_ARG0_NAME__=%~nx0)[m
[32m+[m[32m@SET __MVNW_CMD__=[m
[32m+[m[32m@SET __MVNW_ERROR__=[m
[32m+[m[32m@SET __MVNW_PSMODULEP_SAVE=%PSModulePath%[m
[32m+[m[32m@SET PSModulePath=[m
[32m+[m[32m@FOR /F "usebackq tokens=1* delims==" %%A IN (`powershell -noprofile "& {$scriptDir='%~dp0'; $script='%__MVNW_ARG0_NAME__%'; icm -ScriptBlock ([Scriptblock]::Create((Get-Content -Raw '%~f0'))) -NoNewScope}"`) DO @([m
[32m+[m[32m  IF "%%A"=="MVN_CMD" (set __MVNW_CMD__=%%B) ELSE IF "%%B"=="" (echo %%A) ELSE (echo %%A=%%B)[m
[32m+[m[32m)[m
[32m+[m[32m@SET PSModulePath=%__MVNW_PSMODULEP_SAVE%[m
[32m+[m[32m@SET __MVNW_PSMODULEP_SAVE=[m
[32m+[m[32m@SET __MVNW_ARG0_NAME__=[m
[32m+[m[32m@SET MVNW_USERNAME=[m
[32m+[m[32m@SET MVNW_PASSWORD=[m
[32m+[m[32m@IF NOT "%__MVNW_CMD__%"=="" (%__MVNW_CMD__% %*)[m
[32m+[m[32m@echo Cannot start maven from wrapper >&2 && exit /b 1[m
[32m+[m[32m@GOTO :EOF[m
[32m+[m[32m: end batch / begin powershell #>[m
[32m+[m
[32m+[m[32m$ErrorActionPreference = "Stop"[m
[32m+[m[32mif ($env:MVNW_VERBOSE -eq "true") {[m
[32m+[m[32m  $VerbosePreference = "Continue"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# calculate distributionUrl, requires .mvn/wrapper/maven-wrapper.properties[m
[32m+[m[32m$distributionUrl = (Get-Content -Raw "$scriptDir/.mvn/wrapper/maven-wrapper.properties" | ConvertFrom-StringData).distributionUrl[m
[32m+[m[32mif (!$distributionUrl) {[m
[32m+[m[32m  Write-Error "cannot read distributionUrl property in $scriptDir/.mvn/wrapper/maven-wrapper.properties"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mswitch -wildcard -casesensitive ( $($distributionUrl -replace '^.*/','') ) {[m
[32m+[m[32m  "maven-mvnd-*" {[m
[32m+[m[32m    $USE_MVND = $true[m
[32m+[m[32m    $distributionUrl = $distributionUrl -replace '-bin\.[^.]*$',"-windows-amd64.zip"[m
[32m+[m[32m    $MVN_CMD = "mvnd.cmd"[m
[32m+[m[32m    break[m
[32m+[m[32m  }[m
[32m+[m[32m  default {[m
[32m+[m[32m    $USE_MVND = $false[m
[32m+[m[32m    $MVN_CMD = $script -replace '^mvnw','mvn'[m
[32m+[m[32m    break[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# apply MVNW_REPOURL and calculate MAVEN_HOME[m
[32m+[m[32m# maven home pattern: ~/.m2/wrapper/dists/{apache-maven-<version>,maven-mvnd-<version>-<platform>}/<hash>[m
[32m+[m[32mif ($env:MVNW_REPOURL) {[m
[32m+[m[32m  $MVNW_REPO_PATTERN = if ($USE_MVND) { "/org/apache/maven/" } else { "/maven/mvnd/" }[m
[32m+[m[32m  $distributionUrl = "$env:MVNW_REPOURL$MVNW_REPO_PATTERN$($distributionUrl -replace '^.*'+$MVNW_REPO_PATTERN,'')"[m
[32m+[m[32m}[m
[32m+[m[32m$distributionUrlName = $distributionUrl -replace '^.*/',''[m
[32m+[m[32m$distributionUrlNameMain = $distributionUrlName -replace '\.[^.]*$','' -replace '-bin$',''[m
[32m+[m[32m$MAVEN_HOME_PARENT = "$HOME/.m2/wrapper/dists/$distributionUrlNameMain"[m
[32m+[m[32mif ($env:MAVEN_USER_HOME) {[m
[32m+[m[32m  $MAVEN_HOME_PARENT = "$env:MAVEN_USER_HOME/wrapper/dists/$distributionUrlNameMain"[m
[32m+[m[32m}[m
[32m+[m[32m$MAVEN_HOME_NAME = ([System.Security.Cryptography.MD5]::Create().ComputeHash([byte[]][char[]]$distributionUrl) | ForEach-Object {$_.ToString("x2")}) -join ''[m
[32m+[m[32m$MAVEN_HOME = "$MAVEN_HOME_PARENT/$MAVEN_HOME_NAME"[m
[32m+[m
[32m+[m[32mif (Test-Path -Path "$MAVEN_HOME" -PathType Container) {[m
[32m+[m[32m  Write-Verbose "found existing MAVEN_HOME at $MAVEN_HOME"[m
[32m+[m[32m  Write-Output "MVN_CMD=$MAVEN_HOME/bin/$MVN_CMD"[m
[32m+[m[32m  exit $?[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mif (! $distributionUrlNameMain -or ($distributionUrlName -eq $distributionUrlNameMain)) {[m
[32m+[m[32m  Write-Error "distributionUrl is not valid, must end with *-bin.zip, but found $distributionUrl"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# prepare tmp dir[m
[32m+[m[32m$TMP_DOWNLOAD_DIR_HOLDER = New-TemporaryFile[m
[32m+[m[32m$TMP_DOWNLOAD_DIR = New-Item -Itemtype Directory -Path "$TMP_DOWNLOAD_DIR_HOLDER.dir"[m
[32m+[m[32m$TMP_DOWNLOAD_DIR_HOLDER.Delete() | Out-Null[m
[32m+[m[32mtrap {[m
[32m+[m[32m  if ($TMP_DOWNLOAD_DIR.Exists) {[m
[32m+[m[32m    try { Remove-Item $TMP_DOWNLOAD_DIR -Recurse -Force | Out-Null }[m
[32m+[m[32m    catch { Write-Warning "Cannot remove $TMP_DOWNLOAD_DIR" }[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mNew-Item -Itemtype Directory -Path "$MAVEN_HOME_PARENT" -Force | Out-Null[m
[32m+[m
[32m+[m[32m# Download and Install Apache Maven[m
[32m+[m[32mWrite-Verbose "Couldn't find MAVEN_HOME, downloading and installing it ..."[m
[32m+[m[32mWrite-Verbose "Downloading from: $distributionUrl"[m
[32m+[m[32mWrite-Verbose "Downloading to: $TMP_DOWNLOAD_DIR/$distributionUrlName"[m
[32m+[m
[32m+[m[32m$webclient = New-Object System.Net.WebClient[m
[32m+[m[32mif ($env:MVNW_USERNAME -and $env:MVNW_PASSWORD) {[m
[32m+[m[32m  $webclient.Credentials = New-Object System.Net.NetworkCredential($env:MVNW_USERNAME, $env:MVNW_PASSWORD)[m
[32m+[m[32m}[m
[32m+[m[32m[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12[m
[32m+[m[32m$webclient.DownloadFile($distributionUrl, "$TMP_DOWNLOAD_DIR/$distributionUrlName") | Out-Null[m
[32m+[m
[32m+[m[32m# If specified, validate the SHA-256 sum of the Maven distribution zip file[m
[32m+[m[32m$distributionSha256Sum = (Get-Content -Raw "$scriptDir/.mvn/wrapper/maven-wrapper.properties" | ConvertFrom-StringData).distributionSha256Sum[m
[32m+[m[32mif ($distributionSha256Sum) {[m
[32m+[m[32m  if ($USE_MVND) {[m
[32m+[m[32m    Write-Error "Checksum validation is not supported for maven-mvnd. `nPlease disable validation by removing 'distributionSha256Sum' from your maven-wrapper.properties."[m
[32m+[m[32m  }[m
[32m+[m[32m  Import-Module $PSHOME\Modules\Microsoft.PowerShell.Utility -Function Get-FileHash[m
[32m+[m[32m  if ((Get-FileHash "$TMP_DOWNLOAD_DIR/$distributionUrlName" -Algorithm SHA256).Hash.ToLower() -ne $distributionSha256Sum) {[m
[32m+[m[32m    Write-Error "Error: Failed to validate Maven distribution SHA-256, your Maven distribution might be compromised. If you updated your Maven version, you need to update the specified distributionSha256Sum property."[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# unzip and move[m
[32m+[m[32mExpand-Archive "$TMP_DOWNLOAD_DIR/$distributionUrlName" -DestinationPath "$TMP_DOWNLOAD_DIR" | Out-Null[m
[32m+[m[32mRename-Item -Path "$TMP_DOWNLOAD_DIR/$distributionUrlNameMain" -NewName $MAVEN_HOME_NAME | Out-Null[m
[32m+[m[32mtry {[m
[32m+[m[32m  Move-Item -Path "$TMP_DOWNLOAD_DIR/$MAVEN_HOME_NAME" -Destination $MAVEN_HOME_PARENT | Out-Null[m
[32m+[m[32m} catch {[m
[32m+[m[32m  if (! (Test-Path -Path "$MAVEN_HOME" -PathType Container)) {[m
[32m+[m[32m    Write-Error "fail to move MAVEN_HOME"[m
[32m+[m[32m  }[m
[32m+[m[32m} finally {[m
[32m+[m[32m  try { Remove-Item $TMP_DOWNLOAD_DIR -Recurse -Force | Out-Null }[m
[32m+[m[32m  catch { Write-Warning "Cannot remove $TMP_DOWNLOAD_DIR" }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mWrite-Output "MVN_CMD=$MAVEN_HOME/bin/$MVN_CMD"[m
[1mdiff --git a/pom.xml b/pom.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..0c7c35a[m
[1m--- /dev/null[m
[1m+++ b/pom.xml[m
[36m@@ -0,0 +1,76 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"[m
[32m+[m[32m         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 https://maven.apache.org/xsd/maven-4.0.0.xsd">[m
[32m+[m[32m    <modelVersion>4.0.0</modelVersion>[m
[32m+[m[32m    <parent>[m
[32m+[m[32m        <groupId>org.springframework.boot</groupId>[m
[32m+[m[32m        <artifactId>spring-boot-starter-parent</artifactId>[m
[32m+[m[32m        <version>3.3.2</version>[m
[32m+[m[32m        <relativePath/> <!-- lookup parent from repository -->[m
[32m+[m[32m    </parent>[m
[32m+[m[32m    <groupId>ru.EventPlanner</groupId>[m
[32m+[m[32m    <artifactId>EventManagementService</artifactId>[m
[32m+[m[32m    <version>0.0.1-SNAPSHOT</version>[m
[32m+[m[32m    <name>EventManagementService</name>[m
[32m+[m[32m    <description>EventManagementService</description>[m
[32m+[m[32m    <url/>[m
[32m+[m[32m    <licenses>[m
[32m+[m[32m        <license/>[m
[32m+[m[32m    </licenses>[m
[32m+[m[32m    <developers>[m
[32m+[m[32m        <developer/>[m
[32m+[m[32m    </developers>[m
[32m+[m[32m    <scm>[m
[32m+[m[32m        <connection/>[m
[32m+[m[32m        <developerConnection/>[m
[32m+[m[32m        <tag/>[m
[32m+[m[32m        <url/>[m
[32m+[m[32m    </scm>[m
[32m+[m[32m    <properties>[m
[32m+[m[32m        <java.version>22</java.version>[m
[32m+[m[32m    </properties>[m
[32m+[m[32m    <dependencies>[m
[32m+[m[32m        <dependency>[m
[32m+[m[32m            <groupId>org.springframework.boot</groupId>[m
[32m+[m[32m            <artifactId>spring-boot-starter-data-jpa</artifactId>[m
[32m+[m[32m        </dependency>[m
[32m+[m[32m        <dependency>[m
[32m+[m[32m            <groupId>org.springframework.boot</groupId>[m
[32m+[m[32m            <artifactId>spring-boot-starter-web</artifactId>[m
[32m+[m[32m        </dependency>[m
[32m+[m
[32m+[m[32m        <dependency>[m
[32m+[m[32m            <groupId>org.postgresql</groupId>[m
[32m+[m[32m            <artifactId>postgresql</artifactId>[m
[32m+[m[32m            <scope>runtime</scope>[m
[32m+[m[32m        </dependency>[m
[32m+[m[32m        <dependency>[m
[32m+[m[32m            <groupId>org.projectlombok</groupId>[m
[32m+[m[32m            <artifactId>lombok</artifactId>[m
[32m+[m[32m            <optional>true</optional>[m
[32m+[m[32m        </dependency>[m
[32m+[m[32m        <dependency>[m
[32m+[m[32m            <groupId>org.springframework.boot</groupId>[m
[32m+[m[32m            <artifactId>spring-boot-starter-test</artifactId>[m
[32m+[m[32m            <scope>test</scope>[m
[32m+[m[32m        </dependency>[m
[32m+[m[32m    </dependencies>[m
[32m+[m
[32m+[m[32m    <build>[m
[32m+[m[32m        <plugins>[m
[32m+[m[32m            <plugin>[m
[32m+[m[32m                <groupId>org.springframework.boot</groupId>[m
[32m+[m[32m                <artifactId>spring-boot-maven-plugin</artifactId>[m
[32m+[m[32m                <configuration>[m
[32m+[m[32m                    <excludes>[m
[32m+[m[32m                        <exclude>[m
[32m+[m[32m                            <groupId>org.projectlombok</groupId>[m
[32m+[m[32m                            <artifactId>lombok</artifactId>[m
[32m+[m[32m                        </exclude>[m
[32m+[m[32m                    </excludes>[m
[32m+[m[32m                </configuration>[m
[32m+[m[32m            </plugin>[m
[32m+[m[32m        </plugins>[m
[32m+[m[32m    </build>[m
[32m+[m
[32m+[m[32m</project>[m
[1mdiff --git a/src/main/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplication.java b/src/main/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplication.java[m
[1mnew file mode 100644[m
[1mindex 0000000..521fee5[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplication.java[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mpackage ru.eventplanner.eventmanagementservice;[m
[32m+[m
[32m+[m[32mimport org.springframework.boot.SpringApplication;[m
[32m+[m[32mimport org.springframework.boot.autoconfigure.SpringBootApplication;[m
[32m+[m
[32m+[m[32m@SpringBootApplication[m
[32m+[m[32mpublic class EventManagementServiceApplication {[m
[32m+[m
[32m+[m[32m    public static void main(String[] args) {[m
[32m+[m[32m        SpringApplication.run(EventManagementServiceApplication.class, args);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/ru/eventplanner/eventmanagementservice/event/Event.java b/src/main/java/ru/eventplanner/eventmanagementservice/event/Event.java[m
[1mnew file mode 100644[m
[1mindex 0000000..0969b76[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/ru/eventplanner/eventmanagementservice/event/Event.java[m
[36m@@ -0,0 +1,22 @@[m
[32m+[m[32mpackage ru.eventplanner.eventmanagementservice.event;[m
[32m+[m
[32m+[m[32mimport jakarta.persistence.Entity;[m
[32m+[m[32mimport jakarta.persistence.GeneratedValue;[m
[32m+[m[32mimport jakarta.persistence.GenerationType;[m
[32m+[m[32mimport jakarta.persistence.Id;[m
[32m+[m[32mimport lombok.Data;[m
[32m+[m[32mimport lombok.NoArgsConstructor;[m
[32m+[m
[32m+[m[32mimport java.time.LocalDateTime;[m
[32m+[m
[32m+[m[32m@Data[m
[32m+[m[32m@NoArgsConstructor(force = true)[m
[32m+[m[32m@Entity[m
[32m+[m[32mpublic class Event {[m
[32m+[m[32m    @Id[m
[32m+[m[32m    @GeneratedValue(strategy = GenerationType.AUTO)[m
[32m+[m[32m    private final Long id;[m
[32m+[m
[32m+[m[32m    private final String name;[m
[32m+[m[32m    private final LocalDateTime dateTime;[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/resources/application.properties b/src/main/resources/application.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..b054677[m
[1m--- /dev/null[m
[1m+++ b/src/main/resources/application.properties[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mspring.application.name=EventManagementService[m
[32m+[m[32mspring.datasource.url=jdbc:postgresql://localhost:5432/EventManagement[m
[32m+[m[32mspring.datasource.driver-class-name=org.postgresql.Driver[m
[32m+[m[32mspring.datasource.username=me[m
[32m+[m[32mspring.datasource.password=me[m
[32m+[m
[32m+[m[32mserver.port=8081[m
[32m+[m[32mspring.sql.init.mode=always[m
\ No newline at end of file[m
[1mdiff --git a/src/main/resources/schema.sql b/src/main/resources/schema.sql[m
[1mnew file mode 100644[m
[1mindex 0000000..58b0c22[m
[1m--- /dev/null[m
[1m+++ b/src/main/resources/schema.sql[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32mCREATE TABLE IF NOT EXISTS events[m
[32m+[m[32m([m
[32m+[m[32m    id              BIGINT GENERATED BY DEFAULT AS IDENTITY PRIMARY KEY,[m
[32m+[m[32m    name            VARCHAR(64) NOT NULL,[m
[32m+[m[32m    description     VARCHAR(128),[m
[32m+[m[32m    location        VARCHAR(128),[m
[32m+[m[32m    created_by      BIGINT      NOT NULL,[m
[32m+[m[32m    start_date_time TIMESTAMP   NOT NULL,[m
[32m+[m[32m    end_date_time   TIMESTAMP   NOT NULL[m
[32m+[m[32m);[m
[32m+[m
[32m+[m[32mCREATE TABLE IF NOT EXISTS participants[m
[32m+[m[32m([m
[32m+[m[32m    id         BIGINT GENERATED BY DEFAULT AS IDENTITY PRIMARY KEY,[m
[32m+[m[32m    event_id   BIGINT NOT NULL REFERENCES events (id),[m
[32m+[m[32m    user_id    BIGINT NOT NULL,[m
[32m+[m[32m    status     VARCHAR(64) DEFAULT 'pending'[m
[32m+[m[32m);[m
[1mdiff --git a/src/test/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplicationTests.java b/src/test/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplicationTests.java[m
[1mnew file mode 100644[m
[1mindex 0000000..e92fc39[m
[1m--- /dev/null[m
[1m+++ b/src/test/java/ru/eventplanner/eventmanagementservice/EventManagementServiceApplicationTests.java[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mpackage ru.eventplanner.eventmanagementservice;[m
[32m+[m
[32m+[m[32mimport org.junit.jupiter.api.Test;[m
[32m+[m[32mimport org.springframework.boot.test.context.SpringBootTest;[m
[32m+[m
[32m+[m[32m@SpringBootTest[m
[32m+[m[32mclass EventManagementServiceApplicationTests {[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    void contextLoads() {[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
