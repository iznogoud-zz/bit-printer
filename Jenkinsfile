pipeline {
  agent {
    docker {
      image 'rikorose/gcc-cmake'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh '''cmake
gcc -o bit-printer main.c'''
        cmakeBuild 'bit-printer'
      }
    }
    stage('Run') {
      steps {
        sh './bit-printer 1024'
      }
    }
  }
}