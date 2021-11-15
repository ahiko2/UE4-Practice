# MySomeCppAppプロジェクトについて

---
## 利用前の準備

ここにはVisual Studio向けやXcode向けのプロジェクトファイルは用意されていません。
以下の手順でプロジェクトファイルを生成して下さい。

### Windowsの場合

 「MySomeCPPApp.uproject」を右クリックして表示されるコンテキストメニューから「Generate Visual Studio project files」を選択して下さい。
Visual Studioのソリューションファイル 「MySomeCPPApp.sln」が生成されます。

### macOSの場合

ターミナルから以下のコマンドを実行して下さい。
UE_4.18及びプロジェクトのディレクトリはご自身の環境に合わせて適時読み替えて下さい。
(手元の環境ではUE_4.18のディレクトリは「/Users/Shared/Epic Games/UE_4.18/」でした。)

    $ cd <UE_4.18のインストールディレクトリ>/Engine/Build/BatchFiles/Mac
    $ ./GenerateProjectFiles.sh -project="<MySomeCppAppのディレクトリ>/MySomeCPPApp.uproject" -game

Xcodeのワークスペースファイル「MySomeCPPApp.xcworkspace」が生成されます。
なお、MySomeCppAppのディレクトリパスに空白が含まれていると生成処理が途中で停止しますので注意して下さい。


---
## 内容紹介

本文のCh.3からCh.6までに対応するソースコードはこのプロジェクトに含まれています。
Ch.7からCh.10については、「MyPluginApp」プロジェクトを参照して下さい。
また、Ch.6についてはLibrarySampleWin, LibrarySampleMacプロジェクトのソースコードも参照して下さい。

|   節|ソースファイル名|動作確認レベル名|
|----:|---------------:|---------------:|
|3-3|MySomeCPPActor.{h,cpp}|CppExampleTest.umap|
| | | |
|4-1|CppExampleActor.{h,cpp}, CppExampleStruct.h, CppExampleEnum.h|CppExampleTest.umap|
|4-2|ClassWPropExample.h, StructWPropExample.h|-|
|4-2|PropertyAccess.h, MetaProperty.h|PropertyAccessTest.umap|
|4-2|PropDefaultStruct.{h,cpp}|PropertyDefaultValueTest.umap|
|4-3|CallbackExample.{h,cpp}|CallbackExampleTest.umap|
| | | |
|5-1|SampleClass.{h,cpp}, SomeActor.{h,cpp}|-|
|5-2|SampleActor.{h,cpp}, SampleFunction.{h,cpp}|ActorTest.umap|
|5-3|SampleComponent.{h,cpp}, SampleFunction.{h,cpp}|-|
|5-4|SampleFunction.{h,cpp}|CppExampleTest.umap|
|5-5|KeyStruct.{h,cpp}|-|
| | | |
|6-3|MySomeCPPApp.Build.cs, SampleFunction.{h,cpp}|InterOpCppTest.umap|
|6-4|MySomeCPPApp.Build.cs, SampleFunction.{h,cpp}|InterOpCppTest.umap|

---

以上です。

2018.02.12 鈴木晃